#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80246F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246F88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80246F8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80246F90: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80246F94: jal         0x80247060
    // 0x80246F98: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    static_3_80247060(rdram, ctx);
        goto after_0;
    // 0x80246F98: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80246F9C: beq         $v0, $zero, L_80246FAC
    if (ctx->r2 == 0) {
        // 0x80246FA0: nop
    
            goto L_80246FAC;
    }
    // 0x80246FA0: nop

    // 0x80246FA4: b           L_80246FFC
    // 0x80246FA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80246FFC;
    // 0x80246FA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80246FAC:
    // 0x80246FAC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80246FB0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80246FB4: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80246FB8: jal         0x802375F0
    // 0x80246FBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x80246FBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80246FC0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80246FC4: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x80246FC8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80246FCC: bne         $t9, $zero, L_80246FE8
    if (ctx->r25 != 0) {
        // 0x80246FD0: nop
    
            goto L_80246FE8;
    }
    // 0x80246FD0: nop

    // 0x80246FD4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80246FD8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80246FDC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80246FE0: b           L_80246FF8
    // 0x80246FE4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
        goto L_80246FF8;
    // 0x80246FE4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_80246FE8:
    // 0x80246FE8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80246FEC: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80246FF0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80246FF4: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
L_80246FF8:
    // 0x80246FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80246FFC:
    // 0x80246FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80247004: jr          $ra
    // 0x80247008: nop

    return;
    // 0x80247008: nop

;}
RECOMP_FUNC void D_8027AD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027ADB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027ADB4: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027ADB8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027ADBC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027ADC0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8027ADC4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8027ADC8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8027ADCC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8027ADD0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027ADD4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8027ADD8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027ADDC: addiu       $a3, $t6, 0x6E25
    ctx->r7 = ADD32(ctx->r14, 0X6E25);
    // 0x8027ADE0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8027ADE4: addiu       $a1, $t6, 0x6E24
    ctx->r5 = ADD32(ctx->r14, 0X6E24);
    // 0x8027ADE8: jal         0x802A3A30
    // 0x8027ADEC: addiu       $a0, $a0, 0x6DAC
    ctx->r4 = ADD32(ctx->r4, 0X6DAC);
    static_3_802A3A30(rdram, ctx);
        goto after_0;
    // 0x8027ADEC: addiu       $a0, $a0, 0x6DAC
    ctx->r4 = ADD32(ctx->r4, 0X6DAC);
    after_0:
    // 0x8027ADF0: beq         $v0, $zero, L_8027AE44
    if (ctx->r2 == 0) {
        // 0x8027ADF4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8027AE44;
    }
    // 0x8027ADF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027ADF8: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027ADFC: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8027AE00: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8027AE04: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8027AE08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027AE0C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8027AE10: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8027AE14: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8027AE18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8027AE1C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8027AE20: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8027AE24: jal         0x8029F5E8
    // 0x8027AE28: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    static_3_8029F5E8(rdram, ctx);
        goto after_1;
    // 0x8027AE28: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_1:
    // 0x8027AE2C: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8027AE30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027AE34: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x8027AE38: lh          $t0, 0x28($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X28);
    // 0x8027AE3C: jalr        $t9
    // 0x8027AE40: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027AE40: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_2:
L_8027AE44:
    // 0x8027AE44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027AE48: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8027AE4C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8027AE50: jr          $ra
    // 0x8027AE54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027AE54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_8027EE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027EEE8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8027EEEC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027EEF0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8027EEF4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8027EEF8: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x8027EEFC: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x8027EF00: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x8027EF04: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8027EF08: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027EF0C: jal         0x803087A8
    // 0x8027EF10: lw          $a0, 0x65FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X65FC);
    static_3_803087A8(rdram, ctx);
        goto after_0;
    // 0x8027EF10: lw          $a0, 0x65FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X65FC);
    after_0:
    // 0x8027EF14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027EF18: beq         $v0, $at, L_8027EF8C
    if (ctx->r2 == ctx->r1) {
        // 0x8027EF1C: sw          $v0, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r2;
            goto L_8027EF8C;
    }
    // 0x8027EF1C: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x8027EF20: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x8027EF24: jal         0x803087A8
    // 0x8027EF28: lw          $a0, 0x65FC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X65FC);
    static_3_803087A8(rdram, ctx);
        goto after_1;
    // 0x8027EF28: lw          $a0, 0x65FC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X65FC);
    after_1:
    // 0x8027EF2C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x8027EF30: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x8027EF34: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    // 0x8027EF38: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8027EF3C: addiu       $t8, $sp, 0x8C
    ctx->r24 = ADD32(ctx->r29, 0X8C);
    // 0x8027EF40: addiu       $t9, $sp, 0x88
    ctx->r25 = ADD32(ctx->r29, 0X88);
    // 0x8027EF44: addiu       $t0, $sp, 0x84
    ctx->r8 = ADD32(ctx->r29, 0X84);
    // 0x8027EF48: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8027EF4C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8027EF50: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8027EF54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027EF58: jal         0x80213BA8
    // 0x8027EF5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_80213BA8(rdram, ctx);
        goto after_2;
    // 0x8027EF5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8027EF60: blez        $v0, L_8027EF8C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8027EF64: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8027EF8C;
    }
    // 0x8027EF64: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8027EF68: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x8027EF6C: lbu         $t2, 0xB3($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XB3);
    // 0x8027EF70: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8027EF74: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x8027EF78: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8027EF7C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8027EF80: jal         0x802A99A8
    // 0x8027EF84: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    static_3_802A99A8(rdram, ctx);
        goto after_3;
    // 0x8027EF84: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_3:
    // 0x8027EF88: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_8027EF8C:
    // 0x8027EF8C: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8027EF90: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8027EF94: lw          $a2, 0x38($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X38);
    // 0x8027EF98: addiu       $t3, $sp, 0x8C
    ctx->r11 = ADD32(ctx->r29, 0X8C);
    // 0x8027EF9C: addiu       $t4, $sp, 0x88
    ctx->r12 = ADD32(ctx->r29, 0X88);
    // 0x8027EFA0: addiu       $t5, $sp, 0x84
    ctx->r13 = ADD32(ctx->r29, 0X84);
    // 0x8027EFA4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8027EFA8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027EFAC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8027EFB0: jal         0x80214E7C
    // 0x8027EFB4: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    static_3_80214E7C(rdram, ctx);
        goto after_4;
    // 0x8027EFB4: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    after_4:
    // 0x8027EFB8: blez        $v0, L_8027EFEC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8027EFBC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8027EFEC;
    }
    // 0x8027EFBC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8027EFC0: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8027EFC4: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x8027EFC8: lbu         $t7, 0xB3($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XB3);
    // 0x8027EFCC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8027EFD0: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x8027EFD4: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x8027EFD8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8027EFDC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8027EFE0: jal         0x802A942C
    // 0x8027EFE4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    static_3_802A942C(rdram, ctx);
        goto after_5;
    // 0x8027EFE4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_5:
    // 0x8027EFE8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_8027EFEC:
    // 0x8027EFEC: bne         $s1, $zero, L_8027F038
    if (ctx->r17 != 0) {
        // 0x8027EFF0: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_8027F038;
    }
    // 0x8027EFF0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8027EFF4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8027EFF8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8027EFFC: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8027F000: bne         $v0, $at, L_8027F038
    if (ctx->r2 != ctx->r1) {
        // 0x8027F004: lwc1        $f8, 0xA0($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
            goto L_8027F038;
    }
    // 0x8027F004: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8027F008: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x8027F00C: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x8027F010: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    // 0x8027F014: addiu       $t8, $sp, 0x8C
    ctx->r24 = ADD32(ctx->r29, 0X8C);
    // 0x8027F018: addiu       $t9, $sp, 0x88
    ctx->r25 = ADD32(ctx->r29, 0X88);
    // 0x8027F01C: addiu       $t0, $sp, 0x84
    ctx->r8 = ADD32(ctx->r29, 0X84);
    // 0x8027F020: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8027F024: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8027F028: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8027F02C: jal         0x80213490
    // 0x8027F030: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_80213490(rdram, ctx);
        goto after_6;
    // 0x8027F030: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x8027F034: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_8027F038:
    // 0x8027F038: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x8027F03C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027F040: bnel        $t1, $at, L_8027F0C0
    if (ctx->r9 != ctx->r1) {
        // 0x8027F044: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8027F0C0;
    }
    goto skip_0;
    // 0x8027F044: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x8027F048: beq         $s1, $zero, L_8027F0BC
    if (ctx->r17 == 0) {
        // 0x8027F04C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8027F0BC;
    }
    // 0x8027F04C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027F050: beq         $s1, $at, L_8027F0BC
    if (ctx->r17 == ctx->r1) {
        // 0x8027F054: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8027F0BC;
    }
    // 0x8027F054: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027F058: beql        $s1, $at, L_8027F0C0
    if (ctx->r17 == ctx->r1) {
        // 0x8027F05C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8027F0C0;
    }
    goto skip_1;
    // 0x8027F05C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x8027F060: jal         0x8022970C
    // 0x8027F064: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_8022970C(rdram, ctx);
        goto after_7;
    // 0x8027F064: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_7:
    // 0x8027F068: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8027F06C: jal         0x803183D0
    // 0x8027F070: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_803183D0(rdram, ctx);
        goto after_8;
    // 0x8027F070: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_8:
    // 0x8027F074: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x8027F078: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8027F07C: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x8027F080: lh          $t2, 0x10($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X10);
    // 0x8027F084: jalr        $t9
    // 0x8027F088: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8027F088: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    after_9:
    // 0x8027F08C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027F090: jal         0x802CF954
    // 0x8027F094: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    static_3_802CF954(rdram, ctx);
        goto after_10;
    // 0x8027F094: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_10:
    // 0x8027F098: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8027F09C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8027F0A0: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8027F0A4: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8027F0A8: nop

    // 0x8027F0AC: bc1fl       L_8027F0C0
    if (!c1cs) {
        // 0x8027F0B0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8027F0C0;
    }
    goto skip_2;
    // 0x8027F0B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x8027F0B4: jal         0x80303578
    // 0x8027F0B8: addiu       $a0, $a0, 0x3230
    ctx->r4 = ADD32(ctx->r4, 0X3230);
    static_3_80303578(rdram, ctx);
        goto after_11;
    // 0x8027F0B8: addiu       $a0, $a0, 0x3230
    ctx->r4 = ADD32(ctx->r4, 0X3230);
    after_11:
L_8027F0BC:
    // 0x8027F0BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8027F0C0:
    // 0x8027F0C0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8027F0C4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8027F0C8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8027F0CC: jr          $ra
    // 0x8027F0D0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8027F0D0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void D_802D7DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D7E20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D7E24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D7E28: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802D7E2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802D7E30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D7E34: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802D7E38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D7E3C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802D7E40: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x802D7E44: bne         $a2, $at, L_802D7EA0
    if (ctx->r6 != ctx->r1) {
        // 0x802D7E48: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_802D7EA0;
    }
    // 0x802D7E48: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802D7E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D7E50: jal         0x802AEE54
    // 0x802D7E54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_0;
    // 0x802D7E54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802D7E58: jal         0x80318804
    // 0x802D7E5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80318804(rdram, ctx);
        goto after_1;
    // 0x802D7E5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x802D7E60: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802D7E64: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802D7E68: bne         $v0, $t7, L_802D7E78
    if (ctx->r2 != ctx->r15) {
        // 0x802D7E6C: nop
    
            goto L_802D7E78;
    }
    // 0x802D7E6C: nop

    // 0x802D7E70: b           L_802D7F44
    // 0x802D7E74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D7F44;
    // 0x802D7E74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D7E78:
    // 0x802D7E78: beq         $v0, $at, L_802D7E88
    if (ctx->r2 == ctx->r1) {
        // 0x802D7E7C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_802D7E88;
    }
    // 0x802D7E7C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802D7E80: bnel        $v0, $at, L_802D7EA4
    if (ctx->r2 != ctx->r1) {
        // 0x802D7E84: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_802D7EA4;
    }
    goto skip_0;
    // 0x802D7E84: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    skip_0:
L_802D7E88:
    // 0x802D7E88: lbu         $t8, 0x6EFC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X6EFC);
    // 0x802D7E8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802D7E90: bnel        $t8, $at, L_802D7EA4
    if (ctx->r24 != ctx->r1) {
        // 0x802D7E94: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_802D7EA4;
    }
    goto skip_1;
    // 0x802D7E94: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    skip_1:
    // 0x802D7E98: b           L_802D7F44
    // 0x802D7E9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D7F44;
    // 0x802D7E9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D7EA0:
    // 0x802D7EA0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_802D7EA4:
    // 0x802D7EA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802D7EA8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802D7EAC: bne         $t9, $at, L_802D7EC4
    if (ctx->r25 != ctx->r1) {
        // 0x802D7EB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802D7EC4;
    }
    // 0x802D7EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D7EB4: jal         0x802AA404
    // 0x802D7EB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802AA404(rdram, ctx);
        goto after_2;
    // 0x802D7EB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802D7EBC: b           L_802D7ED0
    // 0x802D7EC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_802D7ED0;
    // 0x802D7EC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802D7EC4:
    // 0x802D7EC4: jal         0x802AB570
    // 0x802D7EC8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    static_3_802AB570(rdram, ctx);
        goto after_3;
    // 0x802D7EC8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x802D7ECC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802D7ED0:
    // 0x802D7ED0: beql        $v0, $zero, L_802D7F44
    if (ctx->r2 == 0) {
        // 0x802D7ED4: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_802D7F44;
    }
    goto skip_2;
    // 0x802D7ED4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_2:
    // 0x802D7ED8: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802D7EDC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802D7EE0: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802D7EE4: lh          $t0, 0xB0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB0);
    // 0x802D7EE8: jalr        $t9
    // 0x802D7EEC: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802D7EEC: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_4:
    // 0x802D7EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D7EF4: jal         0x80318EF4
    // 0x802D7EF8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_80318EF4(rdram, ctx);
        goto after_5;
    // 0x802D7EF8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x802D7EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D7F00: jal         0x80318EFC
    // 0x802D7F04: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_80318EFC(rdram, ctx);
        goto after_6;
    // 0x802D7F04: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_6:
    // 0x802D7F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D7F0C: jal         0x80318F04
    // 0x802D7F10: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    static_3_80318F04(rdram, ctx);
        goto after_7;
    // 0x802D7F10: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x802D7F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D7F18: jal         0x80318F14
    // 0x802D7F1C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    static_3_80318F14(rdram, ctx);
        goto after_8;
    // 0x802D7F1C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_8:
    // 0x802D7F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D7F24: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802D7F28: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x802D7F2C: jal         0x80318E04
    // 0x802D7F30: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    static_3_80318E04(rdram, ctx);
        goto after_9;
    // 0x802D7F30: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    after_9:
    // 0x802D7F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D7F38: jal         0x80318C9C
    // 0x802D7F3C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    static_3_80318C9C(rdram, ctx);
        goto after_10;
    // 0x802D7F3C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_10:
    // 0x802D7F40: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_802D7F44:
    // 0x802D7F44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D7F48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D7F4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D7F50: jr          $ra
    // 0x802D7F54: nop

    return;
    // 0x802D7F54: nop

;}
RECOMP_FUNC void D_802A8F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8FE0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x802A8FE4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802A8FE8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A8FEC: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x802A8FF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A8FF4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802A8FF8: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x802A8FFC: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x802A9000: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x802A9004: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802A9008: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802A900C: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x802A9010: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x802A9014: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x802A9018: bc1f        L_802A90AC
    if (!c1cs) {
        // 0x802A901C: sdc1        $f24, 0x28($sp)
        CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
            goto L_802A90AC;
    }
    // 0x802A901C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x802A9020: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802A9024: addiu       $s3, $sp, 0x58
    ctx->r19 = ADD32(ctx->r29, 0X58);
    // 0x802A9028: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802A902C: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802A9030: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x802A9034: jalr        $t9
    // 0x802A9038: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802A9038: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x802A903C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x802A9040: addiu       $s0, $s2, 0x740
    ctx->r16 = ADD32(ctx->r18, 0X740);
    // 0x802A9044: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802A9048: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802A904C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A9050: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x802A9054: jal         0x802C53E4
    // 0x802A9058: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_1;
    // 0x802A9058: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_1:
    // 0x802A905C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802A9060: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802A9064: jal         0x802C5468
    // 0x802A9068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5468(rdram, ctx);
        goto after_2;
    // 0x802A9068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802A906C: addiu       $s0, $s2, 0x284
    ctx->r16 = ADD32(ctx->r18, 0X284);
    // 0x802A9070: addiu       $s2, $zero, 0x4BC
    ctx->r18 = ADD32(0, 0X4BC);
    // 0x802A9074: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802A9078:
    // 0x802A9078: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802A907C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802A9080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A9084: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x802A9088: jal         0x802C53E4
    // 0x802A908C: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_3;
    // 0x802A908C: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_3:
    // 0x802A9090: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802A9094: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802A9098: jal         0x802C5468
    // 0x802A909C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5468(rdram, ctx);
        goto after_4;
    // 0x802A909C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802A90A0: addiu       $s1, $s1, 0x194
    ctx->r17 = ADD32(ctx->r17, 0X194);
    // 0x802A90A4: bne         $s1, $s2, L_802A9078
    if (ctx->r17 != ctx->r18) {
        // 0x802A90A8: addiu       $s0, $s0, 0x194
        ctx->r16 = ADD32(ctx->r16, 0X194);
            goto L_802A9078;
    }
    // 0x802A90A8: addiu       $s0, $s0, 0x194
    ctx->r16 = ADD32(ctx->r16, 0X194);
L_802A90AC:
    // 0x802A90AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802A90B0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802A90B4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802A90B8: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x802A90BC: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x802A90C0: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x802A90C4: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x802A90C8: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x802A90CC: jr          $ra
    // 0x802A90D0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x802A90D0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void D_8022461C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022461C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80224620: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80224624: lhu         $v0, 0x10($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X10);
    // 0x80224628: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022462C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80224630: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224634: bne         $at, $zero, L_80224650
    if (ctx->r1 != 0) {
        // 0x80224638: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80224650;
    }
    // 0x80224638: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022463C: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80224640: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80224644: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80224648: b           L_80224660
    // 0x8022464C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80224660;
    // 0x8022464C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80224650:
    // 0x80224650: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80224654: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80224658: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022465C: sh          $a0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r4;
L_80224660:
    // 0x80224660: lhu         $v0, 0x1E($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1E);
    // 0x80224664: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224668: bnel        $at, $zero, L_8022467C
    if (ctx->r1 != 0) {
        // 0x8022466C: sh          $a0, 0x1E($s0)
        MEM_H(0X1E, ctx->r16) = ctx->r4;
            goto L_8022467C;
    }
    goto skip_0;
    // 0x8022466C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    skip_0:
    // 0x80224670: b           L_8022467C
    // 0x80224674: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
        goto L_8022467C;
    // 0x80224674: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80224678: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
L_8022467C:
    // 0x8022467C: lhu         $v0, 0x16($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X16);
    // 0x80224680: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224684: bnel        $at, $zero, L_80224698
    if (ctx->r1 != 0) {
        // 0x80224688: sh          $a0, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r4;
            goto L_80224698;
    }
    goto skip_1;
    // 0x80224688: sh          $a0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r4;
    skip_1:
    // 0x8022468C: b           L_80224698
    // 0x80224690: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
        goto L_80224698;
    // 0x80224690: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80224694: sh          $a0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r4;
L_80224698:
    // 0x80224698: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022469C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802246A0: bnel        $at, $zero, L_802246B4
    if (ctx->r1 != 0) {
        // 0x802246A4: sh          $a0, 0x12($s0)
        MEM_H(0X12, ctx->r16) = ctx->r4;
            goto L_802246B4;
    }
    goto skip_2;
    // 0x802246A4: sh          $a0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r4;
    skip_2:
    // 0x802246A8: b           L_802246B4
    // 0x802246AC: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
        goto L_802246B4;
    // 0x802246AC: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x802246B0: sh          $a0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r4;
L_802246B4:
    // 0x802246B4: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x802246B8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802246BC: bnel        $at, $zero, L_802246D0
    if (ctx->r1 != 0) {
        // 0x802246C0: sh          $a0, 0x10($s0)
        MEM_H(0X10, ctx->r16) = ctx->r4;
            goto L_802246D0;
    }
    goto skip_3;
    // 0x802246C0: sh          $a0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r4;
    skip_3:
    // 0x802246C4: b           L_802246D0
    // 0x802246C8: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
        goto L_802246D0;
    // 0x802246C8: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    // 0x802246CC: sh          $a0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r4;
L_802246D0:
    // 0x802246D0: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x802246D4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802246D8: bnel        $at, $zero, L_802246EC
    if (ctx->r1 != 0) {
        // 0x802246DC: sh          $a0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r4;
            goto L_802246EC;
    }
    goto skip_4;
    // 0x802246DC: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
    skip_4:
    // 0x802246E0: b           L_802246EC
    // 0x802246E4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
        goto L_802246EC;
    // 0x802246E4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802246E8: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
L_802246EC:
    // 0x802246EC: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    // 0x802246F0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802246F4: bnel        $at, $zero, L_80224708
    if (ctx->r1 != 0) {
        // 0x802246F8: sh          $a0, 0xC($s0)
        MEM_H(0XC, ctx->r16) = ctx->r4;
            goto L_80224708;
    }
    goto skip_5;
    // 0x802246F8: sh          $a0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r4;
    skip_5:
    // 0x802246FC: b           L_80224708
    // 0x80224700: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
        goto L_80224708;
    // 0x80224700: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80224704: sh          $a0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r4;
L_80224708:
    // 0x80224708: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    // 0x8022470C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224710: bnel        $at, $zero, L_80224724
    if (ctx->r1 != 0) {
        // 0x80224714: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_80224724;
    }
    goto skip_6;
    // 0x80224714: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    skip_6:
    // 0x80224718: b           L_80224724
    // 0x8022471C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_80224724;
    // 0x8022471C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80224720: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
L_80224724:
    // 0x80224724: lhu         $v0, 0x12($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X12);
    // 0x80224728: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022472C: bnel        $at, $zero, L_80224740
    if (ctx->r1 != 0) {
        // 0x80224730: sh          $a0, 0x1C($s0)
        MEM_H(0X1C, ctx->r16) = ctx->r4;
            goto L_80224740;
    }
    goto skip_7;
    // 0x80224730: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
    skip_7:
    // 0x80224734: b           L_80224740
    // 0x80224738: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
        goto L_80224740;
    // 0x80224738: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8022473C: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
L_80224740:
    // 0x80224740: lhu         $v0, 0xE($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XE);
    // 0x80224744: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224748: bnel        $at, $zero, L_8022475C
    if (ctx->r1 != 0) {
        // 0x8022474C: sh          $a0, 0x14($s0)
        MEM_H(0X14, ctx->r16) = ctx->r4;
            goto L_8022475C;
    }
    goto skip_8;
    // 0x8022474C: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    skip_8:
    // 0x80224750: b           L_8022475C
    // 0x80224754: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_8022475C;
    // 0x80224754: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80224758: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
L_8022475C:
    // 0x8022475C: lhu         $v0, 0x1A($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1A);
    // 0x80224760: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224764: bnel        $at, $zero, L_80224778
    if (ctx->r1 != 0) {
        // 0x80224768: sh          $a0, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r4;
            goto L_80224778;
    }
    goto skip_9;
    // 0x80224768: sh          $a0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r4;
    skip_9:
    // 0x8022476C: b           L_80224778
    // 0x80224770: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
        goto L_80224778;
    // 0x80224770: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80224774: sh          $a0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r4;
L_80224778:
    // 0x80224778: lhu         $v0, 0x1C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1C);
    // 0x8022477C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224780: bnel        $at, $zero, L_80224794
    if (ctx->r1 != 0) {
        // 0x80224784: sh          $a0, 0x8($s0)
        MEM_H(0X8, ctx->r16) = ctx->r4;
            goto L_80224794;
    }
    goto skip_10;
    // 0x80224784: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    skip_10:
    // 0x80224788: b           L_80224794
    // 0x8022478C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
        goto L_80224794;
    // 0x8022478C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80224790: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
L_80224794:
    // 0x80224794: lhu         $v0, 0xC($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XC);
    // 0x80224798: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022479C: bnel        $at, $zero, L_802247B0
    if (ctx->r1 != 0) {
        // 0x802247A0: sh          $a0, 0xA($s0)
        MEM_H(0XA, ctx->r16) = ctx->r4;
            goto L_802247B0;
    }
    goto skip_11;
    // 0x802247A0: sh          $a0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r4;
    skip_11:
    // 0x802247A4: b           L_802247B0
    // 0x802247A8: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
        goto L_802247B0;
    // 0x802247A8: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x802247AC: sh          $a0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r4;
L_802247B0:
    // 0x802247B0: lhu         $v0, 0x14($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X14);
    // 0x802247B4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802247B8: bnel        $at, $zero, L_802247CC
    if (ctx->r1 != 0) {
        // 0x802247BC: sh          $a0, 0x1A($s0)
        MEM_H(0X1A, ctx->r16) = ctx->r4;
            goto L_802247CC;
    }
    goto skip_12;
    // 0x802247BC: sh          $a0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r4;
    skip_12:
    // 0x802247C0: b           L_802247CC
    // 0x802247C4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
        goto L_802247CC;
    // 0x802247C4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x802247C8: sh          $a0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r4;
L_802247CC:
    // 0x802247CC: lhu         $v0, 0x18($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X18);
    // 0x802247D0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802247D4: bnel        $at, $zero, L_802247E8
    if (ctx->r1 != 0) {
        // 0x802247D8: sh          $a0, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r4;
            goto L_802247E8;
    }
    goto skip_13;
    // 0x802247D8: sh          $a0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r4;
    skip_13:
    // 0x802247DC: b           L_802247E8
    // 0x802247E0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_802247E8;
    // 0x802247E0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x802247E4: sh          $a0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r4;
L_802247E8:
    // 0x802247E8: lhu         $a0, 0xA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA);
    // 0x802247EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x802247F0: jal         0x8022BA58
    // 0x802247F4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x802247F4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x802247F8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802247FC: sw          $v0, 0xBE4($at)
    MEM_W(0XBE4, ctx->r1) = ctx->r2;
    // 0x80224800: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    // 0x80224804: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80224808: jal         0x8022BA58
    // 0x8022480C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_1;
    // 0x8022480C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x80224810: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224814: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224818: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022481C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80224820: jal         0x8022BA58
    // 0x80224824: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_2;
    // 0x80224824: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x80224828: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022482C: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224830: lhu         $a0, 0x10($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X10);
    // 0x80224834: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80224838: jal         0x8022BA58
    // 0x8022483C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_3;
    // 0x8022483C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x80224840: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224844: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224848: lhu         $a0, 0x12($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12);
    // 0x8022484C: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80224850: jal         0x8022BA58
    // 0x80224854: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_4;
    // 0x80224854: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_4:
    // 0x80224858: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022485C: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224860: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80224864: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80224868: jal         0x8022BA58
    // 0x8022486C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_5;
    // 0x8022486C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_5:
    // 0x80224870: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224874: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224878: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8022487C: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x80224880: jal         0x8022BA58
    // 0x80224884: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_6;
    // 0x80224884: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_6:
    // 0x80224888: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022488C: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224890: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x80224894: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x80224898: jal         0x8022BA58
    // 0x8022489C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_7;
    // 0x8022489C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_7:
    // 0x802248A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802248A4: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802248A8: lhu         $a0, 0x1A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1A);
    // 0x802248AC: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x802248B0: jal         0x8022BA58
    // 0x802248B4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_8;
    // 0x802248B4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_8:
    // 0x802248B8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802248BC: sw          $v0, 0xC24($at)
    MEM_W(0XC24, ctx->r1) = ctx->r2;
    // 0x802248C0: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    // 0x802248C4: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x802248C8: jal         0x8022BA58
    // 0x802248CC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_9;
    // 0x802248CC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_9:
    // 0x802248D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802248D4: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802248D8: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x802248DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x802248E0: jal         0x8022BA58
    // 0x802248E4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_10;
    // 0x802248E4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_10:
    // 0x802248E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802248EC: jal         0x8022BC40
    // 0x802248F0: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    static_3_8022BC40(rdram, ctx);
        goto after_11;
    // 0x802248F0: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    after_11:
    // 0x802248F4: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x802248F8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x802248FC: jal         0x8022BA58
    // 0x80224900: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_12;
    // 0x80224900: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_12:
    // 0x80224904: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224908: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8022490C: lhu         $a0, 0xA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA);
    // 0x80224910: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80224914: jal         0x8022BA58
    // 0x80224918: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_13;
    // 0x80224918: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_13:
    // 0x8022491C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224920: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224924: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    // 0x80224928: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8022492C: jal         0x8022BA58
    // 0x80224930: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_14;
    // 0x80224930: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_14:
    // 0x80224934: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224938: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8022493C: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x80224940: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80224944: jal         0x8022BA58
    // 0x80224948: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_15;
    // 0x80224948: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_15:
    // 0x8022494C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224950: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224954: lhu         $a0, 0x10($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X10);
    // 0x80224958: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8022495C: jal         0x8022BA58
    // 0x80224960: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_16;
    // 0x80224960: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_16:
    // 0x80224964: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224968: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8022496C: lhu         $a0, 0x12($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12);
    // 0x80224970: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x80224974: jal         0x8022BA58
    // 0x80224978: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_17;
    // 0x80224978: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_17:
    // 0x8022497C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224980: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224984: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80224988: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x8022498C: jal         0x8022BA58
    // 0x80224990: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_18;
    // 0x80224990: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_18:
    // 0x80224994: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224998: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8022499C: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x802249A0: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x802249A4: jal         0x8022BA58
    // 0x802249A8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_19;
    // 0x802249A8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_19:
    // 0x802249AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802249B0: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802249B4: lhu         $a0, 0x6($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6);
    // 0x802249B8: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x802249BC: jal         0x8022BA58
    // 0x802249C0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_20;
    // 0x802249C0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_20:
    // 0x802249C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802249C8: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802249CC: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x802249D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x802249D4: jal         0x8022BA58
    // 0x802249D8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_21;
    // 0x802249D8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_21:
    // 0x802249DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802249E0: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802249E4: lhu         $a0, 0x1A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1A);
    // 0x802249E8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x802249EC: jal         0x8022BA58
    // 0x802249F0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_22;
    // 0x802249F0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_22:
    // 0x802249F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802249F8: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802249FC: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    // 0x80224A00: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80224A04: jal         0x8022BA58
    // 0x80224A08: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_23;
    // 0x80224A08: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_23:
    // 0x80224A0C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224A10: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224A14: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80224A18: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80224A1C: jal         0x8022BA58
    // 0x80224A20: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_24;
    // 0x80224A20: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_24:
    // 0x80224A24: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224A28: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224A2C: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x80224A30: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80224A34: jal         0x8022BA58
    // 0x80224A38: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_25;
    // 0x80224A38: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_25:
    // 0x80224A3C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224A40: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224A44: lhu         $a0, 0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4);
    // 0x80224A48: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80224A4C: jal         0x8022BA58
    // 0x80224A50: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_26;
    // 0x80224A50: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_26:
    // 0x80224A54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80224A58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224A5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80224A60: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224A64: jr          $ra
    // 0x80224A68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80224A68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80290A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80290B0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80290B10: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80290B14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80290B18: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80290B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80290B20: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x80290B24: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80290B28: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80290B2C: lh          $t6, 0x20($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X20);
    // 0x80290B30: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80290B34: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x80290B38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80290B3C: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x80290B40: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80290B44: jalr        $t9
    // 0x80290B48: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80290B48: nop

    after_0:
    // 0x80290B4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80290B50: jal         0x8031C568
    // 0x80290B54: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    static_3_8031C568(rdram, ctx);
        goto after_1;
    // 0x80290B54: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80290B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80290B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80290B60: jr          $ra
    // 0x80290B64: nop

    return;
    // 0x80290B64: nop

;}
RECOMP_FUNC void D_802A21EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A226C: jr          $ra
    // 0x802A2270: lbu         $v0, 0xA8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA8);
    return;
    // 0x802A2270: lbu         $v0, 0xA8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA8);
;}
RECOMP_FUNC void D_8027F850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F8C8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8027F8CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027F8D0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8027F8D4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8027F8D8: jal         0x8022970C
    // 0x8027F8DC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x8027F8DC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8027F8E0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027F8E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027F8E8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8027F8EC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8027F8F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8027F8F4: jal         0x802B0024
    // 0x8027F8F8: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    static_3_802B0024(rdram, ctx);
        goto after_1;
    // 0x8027F8F8: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8027F8FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027F900: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8027F904: jr          $ra
    // 0x8027F908: nop

    return;
    // 0x8027F908: nop

;}
RECOMP_FUNC void func_8022393C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022393C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80223940: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80223944: jal         0x8022B5E0
    // 0x80223948: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    static_3_8022B5E0(rdram, ctx);
        goto after_0;
    // 0x80223948: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    after_0:
    // 0x8022394C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80223950: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x80223954: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80223958: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022395C: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80223960: jal         0x8022B5E0
    // 0x80223964: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    static_3_8022B5E0(rdram, ctx);
        goto after_1;
    // 0x80223964: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x80223968: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8022396C: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x80223970: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x80223974: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80223978: lui         $at, 0x475A
    ctx->r1 = S32(0X475A << 16);
    // 0x8022397C: ori         $at, $at, 0x4950
    ctx->r1 = ctx->r1 | 0X4950;
    // 0x80223980: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80223984: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80223988: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8022398C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80223990: bnel        $t8, $at, L_80223A60
    if (ctx->r24 != ctx->r1) {
        // 0x80223994: lw          $t6, 0x0($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X0);
            goto L_80223A60;
    }
    goto skip_0;
    // 0x80223994: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x80223998: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8022399C: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x802239A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802239A4: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x802239A8: jal         0x8022B5E0
    // 0x802239AC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    static_3_8022B5E0(rdram, ctx);
        goto after_2;
    // 0x802239AC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_2:
    // 0x802239B0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x802239B4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x802239B8: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x802239BC: bnel        $t2, $zero, L_80223ACC
    if (ctx->r10 != 0) {
        // 0x802239C0: lw          $v0, 0x40($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X40);
            goto L_80223ACC;
    }
    goto skip_1;
    // 0x802239C0: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    skip_1:
    // 0x802239C4: jal         0x8022BB00
    // 0x802239C8: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    static_3_8022BB00(rdram, ctx);
        goto after_3;
    // 0x802239C8: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_3:
    // 0x802239CC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802239D0: lhu         $t3, 0x0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X0);
    // 0x802239D4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x802239D8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802239DC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802239E0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802239E4: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x802239E8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x802239EC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x802239F0: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x802239F4: jal         0x8022B460
    // 0x802239F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8022B460(rdram, ctx);
        goto after_4;
    // 0x802239F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_4:
    // 0x802239FC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80223A00: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80223A04: jal         0x80234DF0
    // 0x80223A08: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    static_3_80234DF0(rdram, ctx);
        goto after_5;
    // 0x80223A08: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    after_5:
    // 0x80223A0C: jal         0x8022BA94
    // 0x80223A10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_8022BA94(rdram, ctx);
        goto after_6;
    // 0x80223A10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x80223A14: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80223A18: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80223A1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80223A20: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80223A24: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80223A28: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80223A2C: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80223A30: jal         0x8022B5E0
    // 0x80223A34: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    static_3_8022B5E0(rdram, ctx);
        goto after_7;
    // 0x80223A34: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_7:
    // 0x80223A38: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80223A3C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80223A40: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x80223A44: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80223A48: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80223A4C: sw          $t4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r12;
    // 0x80223A50: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80223A54: b           L_80223AC8
    // 0x80223A58: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
        goto L_80223AC8;
    // 0x80223A58: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x80223A5C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
L_80223A60:
    // 0x80223A60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80223A64: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80223A68: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80223A6C: sltu        $t8, $zero, $t7
    ctx->r24 = 0 < ctx->r15 ? 1 : 0;
    // 0x80223A70: bne         $t8, $zero, L_80223AB4
    if (ctx->r24 != 0) {
        // 0x80223A74: andi        $t0, $t9, 0x1
        ctx->r8 = ctx->r25 & 0X1;
            goto L_80223AB4;
    }
    // 0x80223A74: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80223A78: beql        $t0, $zero, L_80223AB8
    if (ctx->r8 == 0) {
        // 0x80223A7C: lw          $t4, 0xC($s0)
        ctx->r12 = MEM_W(ctx->r16, 0XC);
            goto L_80223AB8;
    }
    goto skip_2;
    // 0x80223A7C: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    skip_2:
    // 0x80223A80: jal         0x8022BB00
    // 0x80223A84: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    static_3_8022BB00(rdram, ctx);
        goto after_8;
    // 0x80223A84: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_8:
    // 0x80223A88: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80223A8C: jal         0x8022BA94
    // 0x80223A90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_8022BA94(rdram, ctx);
        goto after_9;
    // 0x80223A90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x80223A94: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80223A98: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80223A9C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x80223AA0: jal         0x8022B460
    // 0x80223AA4: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    func_8022B460(rdram, ctx);
        goto after_10;
    // 0x80223AA4: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    after_10:
    // 0x80223AA8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80223AAC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80223AB0: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
L_80223AB4:
    // 0x80223AB4: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
L_80223AB8:
    // 0x80223AB8: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x80223ABC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80223AC0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80223AC4: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
L_80223AC8:
    // 0x80223AC8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
L_80223ACC:
    // 0x80223ACC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80223AD0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80223AD4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80223AD8: jr          $ra
    // 0x80223ADC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80223ADC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_8023EE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023EE34: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023EE38: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x8023EE3C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023EE40: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023EE44: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8023EE48: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x8023EE4C: blez        $t7, L_8023EED4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8023EE50: sw          $zero, 0x0($sp)
        MEM_W(0X0, ctx->r29) = 0;
            goto L_8023EED4;
    }
    // 0x8023EE50: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8023EE54:
    // 0x8023EE54: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8023EE58: addiu       $t8, $sp, 0x4
    ctx->r24 = ADD32(ctx->r29, 0X4);
    // 0x8023EE5C: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8023EE60: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x8023EE64: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x8023EE68: lwl         $t1, 0x4($t9)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r25, 0X4);
    // 0x8023EE6C: lwr         $t1, 0x7($t9)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r25, 0X7);
    // 0x8023EE70: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x8023EE74: lbu         $t2, 0x6($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X6);
    // 0x8023EE78: andi        $t3, $t2, 0xC0
    ctx->r11 = ctx->r10 & 0XC0;
    // 0x8023EE7C: sra         $t4, $t3, 4
    ctx->r12 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8023EE80: sb          $t4, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r12;
    // 0x8023EE84: lbu         $t5, 0x4($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X4);
    // 0x8023EE88: bne         $t5, $zero, L_8023EEA8
    if (ctx->r13 != 0) {
        // 0x8023EE8C: nop
    
            goto L_8023EEA8;
    }
    // 0x8023EE8C: nop

    // 0x8023EE90: lhu         $t6, 0x8($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X8);
    // 0x8023EE94: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x8023EE98: lb          $t7, 0xA($sp)
    ctx->r15 = MEM_B(ctx->r29, 0XA);
    // 0x8023EE9C: sb          $t7, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r15;
    // 0x8023EEA0: lb          $t0, 0xB($sp)
    ctx->r8 = MEM_B(ctx->r29, 0XB);
    // 0x8023EEA4: sb          $t0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r8;
L_8023EEA8:
    // 0x8023EEA8: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8023EEAC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8023EEB0: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x8023EEB4: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8023EEB8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8023EEBC: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8023EEC0: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8023EEC4: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x8023EEC8: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x8023EECC: bne         $at, $zero, L_8023EE54
    if (ctx->r1 != 0) {
        // 0x8023EED0: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_8023EE54;
    }
    // 0x8023EED0: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
L_8023EED4:
    // 0x8023EED4: jr          $ra
    // 0x8023EED8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8023EED8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void D_80229758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80229758: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8022975C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229760: beq         $a1, $a0, L_80229770
    if (ctx->r5 == ctx->r4) {
        // 0x80229764: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80229770;
    }
    // 0x80229764: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80229768: bnel        $a2, $a0, L_80229778
    if (ctx->r6 != ctx->r4) {
        // 0x8022976C: lwc1        $f4, 0x0($a2)
        ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
            goto L_80229778;
    }
    goto skip_0;
    // 0x8022976C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    skip_0:
L_80229770:
    // 0x80229770: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x80229774: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
L_80229778:
    // 0x80229778: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8022977C: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80229780: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80229784: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80229788: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8022978C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80229790: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80229794: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80229798: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8022979C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x802297A0: lwc1        $f18, 0x30($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X30);
    // 0x802297A4: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802297A8: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x802297AC: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802297B0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x802297B4: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x802297B8: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802297BC: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x802297C0: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x802297C4: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802297C8: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x802297CC: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802297D0: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x802297D4: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x802297D8: lwc1        $f18, 0xC($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0XC);
    // 0x802297DC: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802297E0: lwc1        $f4, 0x34($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X34);
    // 0x802297E4: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x802297E8: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x802297EC: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802297F0: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x802297F4: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802297F8: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802297FC: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80229800: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80229804: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80229808: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8022980C: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80229810: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80229814: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80229818: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8022981C: add.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80229820: lwc1        $f16, 0x38($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80229824: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80229828: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8022982C: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80229830: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80229834: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229838: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8022983C: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80229840: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80229844: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80229848: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8022984C: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80229850: lwc1        $f10, 0x2C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x80229854: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80229858: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8022985C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80229860: lwc1        $f8, 0x3C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x80229864: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80229868: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8022986C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80229870: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x80229874: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80229878: lwc1        $f18, 0x10($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8022987C: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80229880: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80229884: mul.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80229888: lwc1        $f8, 0x18($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8022988C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80229890: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80229894: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80229898: lwc1        $f8, 0x1C($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x8022989C: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x802298A0: lwc1        $f6, 0x30($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X30);
    // 0x802298A4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802298A8: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802298AC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802298B0: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x802298B4: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x802298B8: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x802298BC: lwc1        $f16, 0x14($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X14);
    // 0x802298C0: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x802298C4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802298C8: lwc1        $f6, 0x18($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X18);
    // 0x802298CC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802298D0: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x802298D4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802298D8: lwc1        $f6, 0x1C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x802298DC: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x802298E0: lwc1        $f18, 0x34($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X34);
    // 0x802298E4: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802298E8: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x802298EC: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802298F0: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x802298F4: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802298F8: lwc1        $f16, 0x10($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X10);
    // 0x802298FC: lwc1        $f8, 0x18($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80229900: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80229904: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80229908: lwc1        $f18, 0x18($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8022990C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80229910: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80229914: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80229918: lwc1        $f18, 0x1C($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x8022991C: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80229920: lwc1        $f4, 0x38($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80229924: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80229928: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8022992C: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80229930: swc1        $f16, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f16.u32l;
    // 0x80229934: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229938: lwc1        $f8, 0x10($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8022993C: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80229940: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80229944: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80229948: lwc1        $f4, 0x18($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8022994C: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80229950: lwc1        $f10, 0x2C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x80229954: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80229958: lwc1        $f4, 0x1C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x8022995C: add.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80229960: lwc1        $f16, 0x3C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x80229964: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80229968: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8022996C: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80229970: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x80229974: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80229978: lwc1        $f6, 0x20($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8022997C: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80229980: lwc1        $f10, 0x24($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X24);
    // 0x80229984: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80229988: lwc1        $f16, 0x28($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X28);
    // 0x8022998C: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80229990: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80229994: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80229998: lwc1        $f16, 0x2C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x8022999C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802299A0: lwc1        $f8, 0x30($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X30);
    // 0x802299A4: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x802299A8: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802299AC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802299B0: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x802299B4: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x802299B8: lwc1        $f18, 0x20($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X20);
    // 0x802299BC: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x802299C0: lwc1        $f10, 0x24($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X24);
    // 0x802299C4: mul.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802299C8: lwc1        $f8, 0x28($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X28);
    // 0x802299CC: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802299D0: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x802299D4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802299D8: lwc1        $f8, 0x2C($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x802299DC: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x802299E0: lwc1        $f6, 0x34($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X34);
    // 0x802299E4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802299E8: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802299EC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802299F0: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x802299F4: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802299F8: lwc1        $f4, 0x20($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X20);
    // 0x802299FC: lwc1        $f16, 0x18($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80229A00: lwc1        $f10, 0x24($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X24);
    // 0x80229A04: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80229A08: lwc1        $f6, 0x28($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X28);
    // 0x80229A0C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80229A10: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80229A14: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80229A18: lwc1        $f6, 0x2C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x80229A1C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80229A20: lwc1        $f18, 0x38($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80229A24: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80229A28: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80229A2C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80229A30: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x80229A34: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229A38: lwc1        $f16, 0x20($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80229A3C: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80229A40: lwc1        $f10, 0x24($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X24);
    // 0x80229A44: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80229A48: lwc1        $f18, 0x28($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X28);
    // 0x80229A4C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80229A50: lwc1        $f10, 0x2C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x80229A54: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80229A58: lwc1        $f18, 0x2C($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x80229A5C: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80229A60: lwc1        $f4, 0x3C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x80229A64: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80229A68: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x80229A6C: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80229A70: swc1        $f16, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f16.u32l;
    // 0x80229A74: lwc1        $f8, 0x30($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80229A78: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80229A7C: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80229A80: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80229A84: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80229A88: lwc1        $f4, 0x38($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80229A8C: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80229A90: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80229A94: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80229A98: lwc1        $f4, 0x3C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x80229A9C: add.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80229AA0: lwc1        $f16, 0x30($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X30);
    // 0x80229AA4: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80229AA8: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80229AAC: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80229AB0: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
    // 0x80229AB4: lwc1        $f6, 0x30($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80229AB8: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80229ABC: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80229AC0: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80229AC4: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80229AC8: lwc1        $f16, 0x38($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80229ACC: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80229AD0: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80229AD4: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80229AD8: lwc1        $f16, 0x3C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x80229ADC: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80229AE0: lwc1        $f8, 0x34($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80229AE4: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80229AE8: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80229AEC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80229AF0: swc1        $f6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f6.u32l;
    // 0x80229AF4: lwc1        $f18, 0x30($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80229AF8: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80229AFC: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80229B00: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80229B04: mul.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80229B08: lwc1        $f8, 0x38($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80229B0C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80229B10: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80229B14: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80229B18: lwc1        $f8, 0x3C($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x80229B1C: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80229B20: lwc1        $f6, 0x38($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80229B24: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80229B28: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80229B2C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80229B30: swc1        $f18, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f18.u32l;
    // 0x80229B34: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229B38: lwc1        $f4, 0x30($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80229B3C: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80229B40: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80229B44: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80229B48: lwc1        $f6, 0x38($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80229B4C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80229B50: lwc1        $f10, 0x2C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x80229B54: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80229B58: lwc1        $f6, 0x3C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x80229B5C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80229B60: lwc1        $f18, 0x3C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x80229B64: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80229B68: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80229B6C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80229B70: beq         $a1, $a0, L_80229B80
    if (ctx->r5 == ctx->r4) {
        // 0x80229B74: swc1        $f4, 0x3C($v0)
        MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
            goto L_80229B80;
    }
    // 0x80229B74: swc1        $f4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
    // 0x80229B78: bnel        $a2, $a0, L_80229B8C
    if (ctx->r6 != ctx->r4) {
        // 0x80229B7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80229B8C;
    }
    goto skip_1;
    // 0x80229B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_80229B80:
    // 0x80229B80: jal         0x80228DE0
    // 0x80229B84: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80229B84: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80229B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80229B8C:
    // 0x80229B8C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80229B90: jr          $ra
    // 0x80229B94: nop

    return;
    // 0x80229B94: nop

;}
RECOMP_FUNC void D_8029605C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802960DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802960E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802960E4: bne         $a0, $zero, L_802960F0
    if (ctx->r4 != 0) {
        // 0x802960E8: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802960F0;
    }
    // 0x802960E8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802960EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802960F0:
    // 0x802960F0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802960F4: jal         0x802C6658
    // 0x802960F8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802C6658(rdram, ctx);
        goto after_0;
    // 0x802960F8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802960FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80296100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80296104: jr          $ra
    // 0x80296108: nop

    return;
    // 0x80296108: nop

;}
RECOMP_FUNC void D_802774F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277570: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80277574: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80277578: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8027757C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80277580: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80277584: lbu         $t6, 0x6CDC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X6CDC);
    // 0x80277588: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8027758C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80277590: blez        $t6, L_8027761C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80277594: sll         $t7, $s1, 2
        ctx->r15 = S32(ctx->r17 << 2);
            goto L_8027761C;
    }
L_80277594:
    // 0x80277594: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80277598: addu        $s0, $s2, $t7
    ctx->r16 = ADD32(ctx->r18, ctx->r15);
    // 0x8027759C: lw          $a3, 0x6C3C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6C3C);
    // 0x802775A0: beql        $a3, $zero, L_80277604
    if (ctx->r7 == 0) {
        // 0x802775A4: lbu         $t3, 0x6CDC($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X6CDC);
            goto L_80277604;
    }
    goto skip_0;
    // 0x802775A4: lbu         $t3, 0x6CDC($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6CDC);
    skip_0:
    // 0x802775A8: jal         0x80320D60
    // 0x802775AC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_0;
    // 0x802775AC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x802775B0: beql        $v0, $zero, L_80277604
    if (ctx->r2 == 0) {
        // 0x802775B4: lbu         $t3, 0x6CDC($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X6CDC);
            goto L_80277604;
    }
    goto skip_1;
    // 0x802775B4: lbu         $t3, 0x6CDC($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6CDC);
    skip_1:
    // 0x802775B8: lw          $a3, 0x6C3C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6C3C);
    // 0x802775BC: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x802775C0: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x802775C4: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x802775C8: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x802775CC: lh          $t8, 0x20($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X20);
    // 0x802775D0: jalr        $t9
    // 0x802775D4: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802775D4: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    after_1:
    // 0x802775D8: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x802775DC: bnel        $t0, $zero, L_80277604
    if (ctx->r8 != 0) {
        // 0x802775E0: lbu         $t3, 0x6CDC($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X6CDC);
            goto L_80277604;
    }
    goto skip_2;
    // 0x802775E0: lbu         $t3, 0x6CDC($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6CDC);
    skip_2:
    // 0x802775E4: lw          $a3, 0x6C3C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6C3C);
    // 0x802775E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802775EC: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x802775F0: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x802775F4: lh          $t1, 0x28($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X28);
    // 0x802775F8: jalr        $t9
    // 0x802775FC: addu        $a0, $t1, $a3
    ctx->r4 = ADD32(ctx->r9, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802775FC: addu        $a0, $t1, $a3
    ctx->r4 = ADD32(ctx->r9, ctx->r7);
    after_2:
    // 0x80277600: lbu         $t3, 0x6CDC($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6CDC);
L_80277604:
    // 0x80277604: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80277608: andi        $t2, $s1, 0xFF
    ctx->r10 = ctx->r17 & 0XFF;
    // 0x8027760C: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80277610: bne         $at, $zero, L_80277594
    if (ctx->r1 != 0) {
        // 0x80277614: or          $s1, $t2, $zero
        ctx->r17 = ctx->r10 | 0;
            goto L_80277594;
    }
    // 0x80277614: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x80277618: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027761C:
    // 0x8027761C: lbu         $t4, 0x6D44($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6D44);
    // 0x80277620: blez        $t4, L_802776AC
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80277624: sll         $t5, $s1, 2
        ctx->r13 = S32(ctx->r17 << 2);
            goto L_802776AC;
    }
L_80277624:
    // 0x80277624: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x80277628: addu        $s0, $s2, $t5
    ctx->r16 = ADD32(ctx->r18, ctx->r13);
    // 0x8027762C: lw          $a3, 0x6CE0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6CE0);
    // 0x80277630: beql        $a3, $zero, L_80277694
    if (ctx->r7 == 0) {
        // 0x80277634: lbu         $t1, 0x6D44($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
            goto L_80277694;
    }
    goto skip_3;
    // 0x80277634: lbu         $t1, 0x6D44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
    skip_3:
    // 0x80277638: jal         0x80320D60
    // 0x8027763C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_3;
    // 0x8027763C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x80277640: beql        $v0, $zero, L_80277694
    if (ctx->r2 == 0) {
        // 0x80277644: lbu         $t1, 0x6D44($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
            goto L_80277694;
    }
    goto skip_4;
    // 0x80277644: lbu         $t1, 0x6D44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
    skip_4:
    // 0x80277648: lw          $a3, 0x6CE0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6CE0);
    // 0x8027764C: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80277650: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x80277654: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277658: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x8027765C: lh          $t6, 0x20($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X20);
    // 0x80277660: jalr        $t9
    // 0x80277664: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80277664: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    after_4:
    // 0x80277668: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x8027766C: bnel        $t7, $zero, L_80277694
    if (ctx->r15 != 0) {
        // 0x80277670: lbu         $t1, 0x6D44($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
            goto L_80277694;
    }
    goto skip_5;
    // 0x80277670: lbu         $t1, 0x6D44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
    skip_5:
    // 0x80277674: lw          $a3, 0x6CE0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6CE0);
    // 0x80277678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027767C: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277680: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x80277684: lh          $t8, 0x28($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X28);
    // 0x80277688: jalr        $t9
    // 0x8027768C: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x8027768C: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    after_5:
    // 0x80277690: lbu         $t1, 0x6D44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
L_80277694:
    // 0x80277694: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80277698: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x8027769C: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802776A0: bne         $at, $zero, L_80277624
    if (ctx->r1 != 0) {
        // 0x802776A4: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_80277624;
    }
    // 0x802776A4: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x802776A8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802776AC:
    // 0x802776AC: lbu         $t2, 0x6DA8($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6DA8);
    // 0x802776B0: blez        $t2, L_8027773C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x802776B4: sll         $t3, $s1, 2
        ctx->r11 = S32(ctx->r17 << 2);
            goto L_8027773C;
    }
L_802776B4:
    // 0x802776B4: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x802776B8: addu        $s0, $s2, $t3
    ctx->r16 = ADD32(ctx->r18, ctx->r11);
    // 0x802776BC: lw          $a3, 0x6D48($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6D48);
    // 0x802776C0: beql        $a3, $zero, L_80277724
    if (ctx->r7 == 0) {
        // 0x802776C4: lbu         $t8, 0x6DA8($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X6DA8);
            goto L_80277724;
    }
    goto skip_6;
    // 0x802776C4: lbu         $t8, 0x6DA8($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6DA8);
    skip_6:
    // 0x802776C8: jal         0x80320D60
    // 0x802776CC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_6;
    // 0x802776CC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_6:
    // 0x802776D0: beql        $v0, $zero, L_80277724
    if (ctx->r2 == 0) {
        // 0x802776D4: lbu         $t8, 0x6DA8($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X6DA8);
            goto L_80277724;
    }
    goto skip_7;
    // 0x802776D4: lbu         $t8, 0x6DA8($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6DA8);
    skip_7:
    // 0x802776D8: lw          $a3, 0x6D48($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6D48);
    // 0x802776DC: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x802776E0: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x802776E4: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x802776E8: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x802776EC: lh          $t4, 0x20($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X20);
    // 0x802776F0: jalr        $t9
    // 0x802776F4: addu        $a0, $t4, $a3
    ctx->r4 = ADD32(ctx->r12, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802776F4: addu        $a0, $t4, $a3
    ctx->r4 = ADD32(ctx->r12, ctx->r7);
    after_7:
    // 0x802776F8: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x802776FC: bnel        $t5, $zero, L_80277724
    if (ctx->r13 != 0) {
        // 0x80277700: lbu         $t8, 0x6DA8($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X6DA8);
            goto L_80277724;
    }
    goto skip_8;
    // 0x80277700: lbu         $t8, 0x6DA8($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6DA8);
    skip_8:
    // 0x80277704: lw          $a3, 0x6D48($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6D48);
    // 0x80277708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027770C: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277710: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x80277714: lh          $t6, 0x28($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X28);
    // 0x80277718: jalr        $t9
    // 0x8027771C: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x8027771C: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    after_8:
    // 0x80277720: lbu         $t8, 0x6DA8($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6DA8);
L_80277724:
    // 0x80277724: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80277728: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x8027772C: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80277730: bne         $at, $zero, L_802776B4
    if (ctx->r1 != 0) {
        // 0x80277734: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_802776B4;
    }
    // 0x80277734: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80277738: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027773C:
    // 0x8027773C: lbu         $t0, 0x6E24($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X6E24);
    // 0x80277740: blez        $t0, L_802777CC
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80277744: sll         $t1, $s1, 2
        ctx->r9 = S32(ctx->r17 << 2);
            goto L_802777CC;
    }
L_80277744:
    // 0x80277744: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x80277748: addu        $s0, $s2, $t1
    ctx->r16 = ADD32(ctx->r18, ctx->r9);
    // 0x8027774C: lw          $a3, 0x6DAC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6DAC);
    // 0x80277750: beql        $a3, $zero, L_802777B4
    if (ctx->r7 == 0) {
        // 0x80277754: lbu         $t6, 0x6E24($s2)
        ctx->r14 = MEM_BU(ctx->r18, 0X6E24);
            goto L_802777B4;
    }
    goto skip_9;
    // 0x80277754: lbu         $t6, 0x6E24($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X6E24);
    skip_9:
    // 0x80277758: jal         0x80320D60
    // 0x8027775C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_9;
    // 0x8027775C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_9:
    // 0x80277760: beql        $v0, $zero, L_802777B4
    if (ctx->r2 == 0) {
        // 0x80277764: lbu         $t6, 0x6E24($s2)
        ctx->r14 = MEM_BU(ctx->r18, 0X6E24);
            goto L_802777B4;
    }
    goto skip_10;
    // 0x80277764: lbu         $t6, 0x6E24($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X6E24);
    skip_10:
    // 0x80277768: lw          $a3, 0x6DAC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6DAC);
    // 0x8027776C: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80277770: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x80277774: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277778: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x8027777C: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    // 0x80277780: jalr        $t9
    // 0x80277784: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x80277784: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
    after_10:
    // 0x80277788: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8027778C: bnel        $t3, $zero, L_802777B4
    if (ctx->r11 != 0) {
        // 0x80277790: lbu         $t6, 0x6E24($s2)
        ctx->r14 = MEM_BU(ctx->r18, 0X6E24);
            goto L_802777B4;
    }
    goto skip_11;
    // 0x80277790: lbu         $t6, 0x6E24($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X6E24);
    skip_11:
    // 0x80277794: lw          $a3, 0x6DAC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6DAC);
    // 0x80277798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027779C: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x802777A0: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x802777A4: lh          $t4, 0x28($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X28);
    // 0x802777A8: jalr        $t9
    // 0x802777AC: addu        $a0, $t4, $a3
    ctx->r4 = ADD32(ctx->r12, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x802777AC: addu        $a0, $t4, $a3
    ctx->r4 = ADD32(ctx->r12, ctx->r7);
    after_11:
    // 0x802777B0: lbu         $t6, 0x6E24($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X6E24);
L_802777B4:
    // 0x802777B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802777B8: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x802777BC: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802777C0: bne         $at, $zero, L_80277744
    if (ctx->r1 != 0) {
        // 0x802777C4: or          $s1, $t5, $zero
        ctx->r17 = ctx->r13 | 0;
            goto L_80277744;
    }
    // 0x802777C4: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x802777C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802777CC:
    // 0x802777CC: lbu         $t7, 0x6E3C($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
    // 0x802777D0: blez        $t7, L_8027785C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802777D4: sll         $t8, $s1, 2
        ctx->r24 = S32(ctx->r17 << 2);
            goto L_8027785C;
    }
L_802777D4:
    // 0x802777D4: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x802777D8: addu        $s0, $s2, $t8
    ctx->r16 = ADD32(ctx->r18, ctx->r24);
    // 0x802777DC: lw          $a3, 0x6E28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E28);
    // 0x802777E0: beql        $a3, $zero, L_80277844
    if (ctx->r7 == 0) {
        // 0x802777E4: lbu         $t4, 0x6E3C($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6E3C);
            goto L_80277844;
    }
    goto skip_12;
    // 0x802777E4: lbu         $t4, 0x6E3C($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6E3C);
    skip_12:
    // 0x802777E8: jal         0x80320D60
    // 0x802777EC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_12;
    // 0x802777EC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_12:
    // 0x802777F0: beql        $v0, $zero, L_80277844
    if (ctx->r2 == 0) {
        // 0x802777F4: lbu         $t4, 0x6E3C($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6E3C);
            goto L_80277844;
    }
    goto skip_13;
    // 0x802777F4: lbu         $t4, 0x6E3C($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6E3C);
    skip_13:
    // 0x802777F8: lw          $a3, 0x6E28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E28);
    // 0x802777FC: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80277800: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x80277804: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277808: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x8027780C: lh          $t0, 0x20($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X20);
    // 0x80277810: jalr        $t9
    // 0x80277814: addu        $a0, $t0, $a3
    ctx->r4 = ADD32(ctx->r8, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x80277814: addu        $a0, $t0, $a3
    ctx->r4 = ADD32(ctx->r8, ctx->r7);
    after_13:
    // 0x80277818: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x8027781C: bnel        $t1, $zero, L_80277844
    if (ctx->r9 != 0) {
        // 0x80277820: lbu         $t4, 0x6E3C($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6E3C);
            goto L_80277844;
    }
    goto skip_14;
    // 0x80277820: lbu         $t4, 0x6E3C($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6E3C);
    skip_14:
    // 0x80277824: lw          $a3, 0x6E28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E28);
    // 0x80277828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027782C: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277830: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x80277834: lh          $t2, 0x28($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X28);
    // 0x80277838: jalr        $t9
    // 0x8027783C: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x8027783C: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
    after_14:
    // 0x80277840: lbu         $t4, 0x6E3C($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6E3C);
L_80277844:
    // 0x80277844: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80277848: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x8027784C: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80277850: bne         $at, $zero, L_802777D4
    if (ctx->r1 != 0) {
        // 0x80277854: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_802777D4;
    }
    // 0x80277854: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80277858: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027785C:
    // 0x8027785C: lbu         $t5, 0x6E54($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6E54);
    // 0x80277860: blez        $t5, L_802778EC
    if (SIGNED(ctx->r13) <= 0) {
        // 0x80277864: sll         $t6, $s1, 2
        ctx->r14 = S32(ctx->r17 << 2);
            goto L_802778EC;
    }
L_80277864:
    // 0x80277864: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80277868: addu        $s0, $s2, $t6
    ctx->r16 = ADD32(ctx->r18, ctx->r14);
    // 0x8027786C: lw          $a3, 0x6E40($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E40);
    // 0x80277870: beql        $a3, $zero, L_802778D4
    if (ctx->r7 == 0) {
        // 0x80277874: lbu         $t2, 0x6E54($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X6E54);
            goto L_802778D4;
    }
    goto skip_15;
    // 0x80277874: lbu         $t2, 0x6E54($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6E54);
    skip_15:
    // 0x80277878: jal         0x80320D60
    // 0x8027787C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_15;
    // 0x8027787C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_15:
    // 0x80277880: beql        $v0, $zero, L_802778D4
    if (ctx->r2 == 0) {
        // 0x80277884: lbu         $t2, 0x6E54($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X6E54);
            goto L_802778D4;
    }
    goto skip_16;
    // 0x80277884: lbu         $t2, 0x6E54($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6E54);
    skip_16:
    // 0x80277888: lw          $a3, 0x6E40($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E40);
    // 0x8027788C: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80277890: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x80277894: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277898: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x8027789C: lh          $t7, 0x20($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X20);
    // 0x802778A0: jalr        $t9
    // 0x802778A4: addu        $a0, $t7, $a3
    ctx->r4 = ADD32(ctx->r15, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x802778A4: addu        $a0, $t7, $a3
    ctx->r4 = ADD32(ctx->r15, ctx->r7);
    after_16:
    // 0x802778A8: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x802778AC: bnel        $t8, $zero, L_802778D4
    if (ctx->r24 != 0) {
        // 0x802778B0: lbu         $t2, 0x6E54($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X6E54);
            goto L_802778D4;
    }
    goto skip_17;
    // 0x802778B0: lbu         $t2, 0x6E54($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6E54);
    skip_17:
    // 0x802778B4: lw          $a3, 0x6E40($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E40);
    // 0x802778B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802778BC: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x802778C0: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x802778C4: lh          $t0, 0x28($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X28);
    // 0x802778C8: jalr        $t9
    // 0x802778CC: addu        $a0, $t0, $a3
    ctx->r4 = ADD32(ctx->r8, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x802778CC: addu        $a0, $t0, $a3
    ctx->r4 = ADD32(ctx->r8, ctx->r7);
    after_17:
    // 0x802778D0: lbu         $t2, 0x6E54($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6E54);
L_802778D4:
    // 0x802778D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802778D8: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x802778DC: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802778E0: bne         $at, $zero, L_80277864
    if (ctx->r1 != 0) {
        // 0x802778E4: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_80277864;
    }
    // 0x802778E4: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x802778E8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802778EC:
    // 0x802778EC: lbu         $t3, 0x6E60($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6E60);
    // 0x802778F0: blez        $t3, L_8027797C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x802778F4: sll         $t4, $s1, 2
        ctx->r12 = S32(ctx->r17 << 2);
            goto L_8027797C;
    }
L_802778F4:
    // 0x802778F4: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x802778F8: addu        $s0, $s2, $t4
    ctx->r16 = ADD32(ctx->r18, ctx->r12);
    // 0x802778FC: lw          $a3, 0x6E58($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E58);
    // 0x80277900: beql        $a3, $zero, L_80277964
    if (ctx->r7 == 0) {
        // 0x80277904: lbu         $t0, 0x6E60($s2)
        ctx->r8 = MEM_BU(ctx->r18, 0X6E60);
            goto L_80277964;
    }
    goto skip_18;
    // 0x80277904: lbu         $t0, 0x6E60($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X6E60);
    skip_18:
    // 0x80277908: jal         0x80320D60
    // 0x8027790C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_18;
    // 0x8027790C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_18:
    // 0x80277910: beql        $v0, $zero, L_80277964
    if (ctx->r2 == 0) {
        // 0x80277914: lbu         $t0, 0x6E60($s2)
        ctx->r8 = MEM_BU(ctx->r18, 0X6E60);
            goto L_80277964;
    }
    goto skip_19;
    // 0x80277914: lbu         $t0, 0x6E60($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X6E60);
    skip_19:
    // 0x80277918: lw          $a3, 0x6E58($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E58);
    // 0x8027791C: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80277920: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x80277924: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277928: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x8027792C: lh          $t5, 0x20($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X20);
    // 0x80277930: jalr        $t9
    // 0x80277934: addu        $a0, $t5, $a3
    ctx->r4 = ADD32(ctx->r13, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x80277934: addu        $a0, $t5, $a3
    ctx->r4 = ADD32(ctx->r13, ctx->r7);
    after_19:
    // 0x80277938: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8027793C: bnel        $t6, $zero, L_80277964
    if (ctx->r14 != 0) {
        // 0x80277940: lbu         $t0, 0x6E60($s2)
        ctx->r8 = MEM_BU(ctx->r18, 0X6E60);
            goto L_80277964;
    }
    goto skip_20;
    // 0x80277940: lbu         $t0, 0x6E60($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X6E60);
    skip_20:
    // 0x80277944: lw          $a3, 0x6E58($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E58);
    // 0x80277948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027794C: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277950: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x80277954: lh          $t7, 0x28($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X28);
    // 0x80277958: jalr        $t9
    // 0x8027795C: addu        $a0, $t7, $a3
    ctx->r4 = ADD32(ctx->r15, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x8027795C: addu        $a0, $t7, $a3
    ctx->r4 = ADD32(ctx->r15, ctx->r7);
    after_20:
    // 0x80277960: lbu         $t0, 0x6E60($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X6E60);
L_80277964:
    // 0x80277964: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80277968: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x8027796C: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80277970: bne         $at, $zero, L_802778F4
    if (ctx->r1 != 0) {
        // 0x80277974: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_802778F4;
    }
    // 0x80277974: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80277978: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027797C:
    // 0x8027797C: lbu         $t1, 0x6EDC($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6EDC);
    // 0x80277980: blez        $t1, L_80277A0C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80277984: sll         $t2, $s1, 2
        ctx->r10 = S32(ctx->r17 << 2);
            goto L_80277A0C;
    }
L_80277984:
    // 0x80277984: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x80277988: addu        $s0, $s2, $t2
    ctx->r16 = ADD32(ctx->r18, ctx->r10);
    // 0x8027798C: lw          $a3, 0x6E64($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E64);
    // 0x80277990: beql        $a3, $zero, L_802779F4
    if (ctx->r7 == 0) {
        // 0x80277994: lbu         $t7, 0x6EDC($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X6EDC);
            goto L_802779F4;
    }
    goto skip_21;
    // 0x80277994: lbu         $t7, 0x6EDC($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6EDC);
    skip_21:
    // 0x80277998: jal         0x80320D60
    // 0x8027799C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_21;
    // 0x8027799C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_21:
    // 0x802779A0: beql        $v0, $zero, L_802779F4
    if (ctx->r2 == 0) {
        // 0x802779A4: lbu         $t7, 0x6EDC($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X6EDC);
            goto L_802779F4;
    }
    goto skip_22;
    // 0x802779A4: lbu         $t7, 0x6EDC($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6EDC);
    skip_22:
    // 0x802779A8: lw          $a3, 0x6E64($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E64);
    // 0x802779AC: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x802779B0: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x802779B4: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x802779B8: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x802779BC: lh          $t3, 0x20($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X20);
    // 0x802779C0: jalr        $t9
    // 0x802779C4: addu        $a0, $t3, $a3
    ctx->r4 = ADD32(ctx->r11, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x802779C4: addu        $a0, $t3, $a3
    ctx->r4 = ADD32(ctx->r11, ctx->r7);
    after_22:
    // 0x802779C8: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x802779CC: bnel        $t4, $zero, L_802779F4
    if (ctx->r12 != 0) {
        // 0x802779D0: lbu         $t7, 0x6EDC($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X6EDC);
            goto L_802779F4;
    }
    goto skip_23;
    // 0x802779D0: lbu         $t7, 0x6EDC($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6EDC);
    skip_23:
    // 0x802779D4: lw          $a3, 0x6E64($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6E64);
    // 0x802779D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802779DC: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x802779E0: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x802779E4: lh          $t5, 0x28($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X28);
    // 0x802779E8: jalr        $t9
    // 0x802779EC: addu        $a0, $t5, $a3
    ctx->r4 = ADD32(ctx->r13, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x802779EC: addu        $a0, $t5, $a3
    ctx->r4 = ADD32(ctx->r13, ctx->r7);
    after_23:
    // 0x802779F0: lbu         $t7, 0x6EDC($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6EDC);
L_802779F4:
    // 0x802779F4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802779F8: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x802779FC: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80277A00: bne         $at, $zero, L_80277984
    if (ctx->r1 != 0) {
        // 0x80277A04: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_80277984;
    }
    // 0x80277A04: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80277A08: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80277A0C:
    // 0x80277A0C: lbu         $t8, 0x6EE8($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6EE8);
    // 0x80277A10: blez        $t8, L_80277A98
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80277A14: sll         $t0, $s1, 2
        ctx->r8 = S32(ctx->r17 << 2);
            goto L_80277A98;
    }
L_80277A14:
    // 0x80277A14: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x80277A18: addu        $s0, $s2, $t0
    ctx->r16 = ADD32(ctx->r18, ctx->r8);
    // 0x80277A1C: lw          $a3, 0x6EE0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6EE0);
    // 0x80277A20: beql        $a3, $zero, L_80277A84
    if (ctx->r7 == 0) {
        // 0x80277A24: lbu         $t5, 0x6EE8($s2)
        ctx->r13 = MEM_BU(ctx->r18, 0X6EE8);
            goto L_80277A84;
    }
    goto skip_24;
    // 0x80277A24: lbu         $t5, 0x6EE8($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6EE8);
    skip_24:
    // 0x80277A28: jal         0x80320D60
    // 0x80277A2C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_24;
    // 0x80277A2C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_24:
    // 0x80277A30: beql        $v0, $zero, L_80277A84
    if (ctx->r2 == 0) {
        // 0x80277A34: lbu         $t5, 0x6EE8($s2)
        ctx->r13 = MEM_BU(ctx->r18, 0X6EE8);
            goto L_80277A84;
    }
    goto skip_25;
    // 0x80277A34: lbu         $t5, 0x6EE8($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6EE8);
    skip_25:
    // 0x80277A38: lw          $a3, 0x6EE0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6EE0);
    // 0x80277A3C: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80277A40: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x80277A44: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277A48: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x80277A4C: lh          $t1, 0x20($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X20);
    // 0x80277A50: jalr        $t9
    // 0x80277A54: addu        $a0, $t1, $a3
    ctx->r4 = ADD32(ctx->r9, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x80277A54: addu        $a0, $t1, $a3
    ctx->r4 = ADD32(ctx->r9, ctx->r7);
    after_25:
    // 0x80277A58: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x80277A5C: bnel        $t2, $zero, L_80277A84
    if (ctx->r10 != 0) {
        // 0x80277A60: lbu         $t5, 0x6EE8($s2)
        ctx->r13 = MEM_BU(ctx->r18, 0X6EE8);
            goto L_80277A84;
    }
    goto skip_26;
    // 0x80277A60: lbu         $t5, 0x6EE8($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6EE8);
    skip_26:
    // 0x80277A64: lw          $a3, 0x6EE0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6EE0);
    // 0x80277A68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277A6C: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80277A70: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x80277A74: lh          $t3, 0x28($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X28);
    // 0x80277A78: jalr        $t9
    // 0x80277A7C: addu        $a0, $t3, $a3
    ctx->r4 = ADD32(ctx->r11, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x80277A7C: addu        $a0, $t3, $a3
    ctx->r4 = ADD32(ctx->r11, ctx->r7);
    after_26:
    // 0x80277A80: lbu         $t5, 0x6EE8($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6EE8);
L_80277A84:
    // 0x80277A84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80277A88: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x80277A8C: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80277A90: bne         $at, $zero, L_80277A14
    if (ctx->r1 != 0) {
        // 0x80277A94: or          $s1, $t4, $zero
        ctx->r17 = ctx->r12 | 0;
            goto L_80277A14;
    }
    // 0x80277A94: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
L_80277A98:
    // 0x80277A98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80277A9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80277AA0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80277AA4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80277AA8: jr          $ra
    // 0x80277AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80277AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8023E7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E7F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023E7F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023E7F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023E7FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023E800: jal         0x80241760
    // 0x8023E804: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023E804: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023E808: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023E80C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023E810: bne         $t6, $zero, L_8023E824
    if (ctx->r14 != 0) {
        // 0x8023E814: nop
    
            goto L_8023E824;
    }
    // 0x8023E814: nop

    // 0x8023E818: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023E81C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8023E820: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_8023E824:
    // 0x8023E824: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8023E828: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E82C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8023E830: beq         $t9, $t0, L_8023E8B4
    if (ctx->r25 == ctx->r8) {
        // 0x8023E834: nop
    
            goto L_8023E8B4;
    }
    // 0x8023E834: nop

    // 0x8023E838: sw          $t0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r8;
    // 0x8023E83C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8023E840: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8023E844: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023E848: beq         $t1, $t2, L_8023E87C
    if (ctx->r9 == ctx->r10) {
        // 0x8023E84C: nop
    
            goto L_8023E87C;
    }
    // 0x8023E84C: nop

    // 0x8023E850: lhu         $t3, 0x10($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X10);
    // 0x8023E854: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023E858: beq         $t3, $at, L_8023E87C
    if (ctx->r11 == ctx->r1) {
        // 0x8023E85C: nop
    
            goto L_8023E87C;
    }
    // 0x8023E85C: nop

    // 0x8023E860: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    // 0x8023E864: jal         0x802417A0
    // 0x8023E868: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    static_3_802417A0(rdram, ctx);
        goto after_1;
    // 0x8023E868: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_1:
    // 0x8023E86C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8023E870: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    // 0x8023E874: jal         0x80241EFC
    // 0x8023E878: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    static_3_80241EFC(rdram, ctx);
        goto after_2;
    // 0x8023E878: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_2:
L_8023E87C:
    // 0x8023E87C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8023E880: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023E884: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8023E888: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x8023E88C: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8023E890: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x8023E894: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023E898: beq         $at, $zero, L_8023E8B4
    if (ctx->r1 == 0) {
        // 0x8023E89C: nop
    
            goto L_8023E8B4;
    }
    // 0x8023E89C: nop

    // 0x8023E8A0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8023E8A4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023E8A8: sh          $t0, 0x10($t5)
    MEM_H(0X10, ctx->r13) = ctx->r8;
    // 0x8023E8AC: jal         0x80241DFC
    // 0x8023E8B0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80241DFC(rdram, ctx);
        goto after_3;
    // 0x8023E8B0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
L_8023E8B4:
    // 0x8023E8B4: jal         0x80241780
    // 0x8023E8B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_4;
    // 0x8023E8B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8023E8BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E8C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023E8C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023E8C8: jr          $ra
    // 0x8023E8CC: nop

    return;
    // 0x8023E8CC: nop

;}
RECOMP_FUNC void D_802C8D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8DE0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802C8DE4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802C8DE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802C8DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802C8DF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802C8DF4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x802C8DF8: lbu         $t7, 0x1C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1C);
    // 0x802C8DFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802C8E00: beql        $t7, $zero, L_802C8E14
    if (ctx->r15 == 0) {
        // 0x802C8E04: lbu         $t8, 0xB($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0XB);
            goto L_802C8E14;
    }
    goto skip_0;
    // 0x802C8E04: lbu         $t8, 0xB($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XB);
    skip_0:
    // 0x802C8E08: jal         0x802F8870
    // 0x802C8E0C: nop

    static_3_802F8870(rdram, ctx);
        goto after_0;
    // 0x802C8E0C: nop

    after_0:
    // 0x802C8E10: lbu         $t8, 0xB($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XB);
L_802C8E14:
    // 0x802C8E14: beql        $t8, $zero, L_802C8E28
    if (ctx->r24 == 0) {
        // 0x802C8E18: lbu         $t9, 0x14($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X14);
            goto L_802C8E28;
    }
    goto skip_1;
    // 0x802C8E18: lbu         $t9, 0x14($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X14);
    skip_1:
    // 0x802C8E1C: jal         0x802F8868
    // 0x802C8E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802F8868(rdram, ctx);
        goto after_1;
    // 0x802C8E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802C8E24: lbu         $t9, 0x14($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X14);
L_802C8E28:
    // 0x802C8E28: beql        $t9, $zero, L_802C8E3C
    if (ctx->r25 == 0) {
        // 0x802C8E2C: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_802C8E3C;
    }
    goto skip_2;
    // 0x802C8E2C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x802C8E30: jal         0x802F84F0
    // 0x802C8E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802F84F0(rdram, ctx);
        goto after_2;
    // 0x802C8E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802C8E38: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_802C8E3C:
    // 0x802C8E3C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802C8E40: jal         0x8028FB18
    // 0x802C8E44: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    static_3_8028FB18(rdram, ctx);
        goto after_3;
    // 0x802C8E44: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_3:
    // 0x802C8E48: beql        $v0, $zero, L_802C8E5C
    if (ctx->r2 == 0) {
        // 0x802C8E4C: lbu         $t0, 0x34($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X34);
            goto L_802C8E5C;
    }
    goto skip_3;
    // 0x802C8E4C: lbu         $t0, 0x34($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X34);
    skip_3:
    // 0x802C8E50: jal         0x802F8C38
    // 0x802C8E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802F8C38(rdram, ctx);
        goto after_4;
    // 0x802C8E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802C8E58: lbu         $t0, 0x34($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X34);
L_802C8E5C:
    // 0x802C8E5C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802C8E60: beql        $t0, $zero, L_802C8E98
    if (ctx->r8 == 0) {
        // 0x802C8E64: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802C8E98;
    }
    goto skip_4;
    // 0x802C8E64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x802C8E68: lwc1        $f0, 0x32A8($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X32A8);
    // 0x802C8E6C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802C8E70: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802C8E74: jal         0x80290494
    // 0x802C8E78: nop

    static_3_80290494(rdram, ctx);
        goto after_5;
    // 0x802C8E78: nop

    after_5:
    // 0x802C8E7C: jal         0x8028E204
    // 0x802C8E80: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_8028E204(rdram, ctx);
        goto after_6;
    // 0x802C8E80: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x802C8E84: beql        $v0, $zero, L_802C8E98
    if (ctx->r2 == 0) {
        // 0x802C8E88: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802C8E98;
    }
    goto skip_5;
    // 0x802C8E88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x802C8E8C: jal         0x8028F0FC
    // 0x802C8E90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_8028F0FC(rdram, ctx);
        goto after_7;
    // 0x802C8E90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x802C8E94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802C8E98:
    // 0x802C8E98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802C8E9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802C8EA0: jr          $ra
    // 0x802C8EA4: nop

    return;
    // 0x802C8EA4: nop

;}
RECOMP_FUNC void D_802491D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802491D8: jr          $ra
    // 0x802491DC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    return;
    // 0x802491DC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void D_802EFA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFAC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EFAC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EFAC8: lwc1        $f14, 0x0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802EFACC: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802EFAD0: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802EFAD4: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802EFAD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802EFADC: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802EFAE0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802EFAE4: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802EFAE8: jal         0x8023CE00
    // 0x802EFAEC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    static_3_8023CE00(rdram, ctx);
        goto after_0;
    // 0x802EFAEC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x802EFAF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EFAF4: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EFAF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EFAFC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802EFB00: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802EFB04: nop

    // 0x802EFB08: bc1fl       L_802EFB2C
    if (!c1cs) {
        // 0x802EFB0C: lwc1        $f18, 0x0($a0)
        ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
            goto L_802EFB2C;
    }
    goto skip_0;
    // 0x802EFB0C: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x802EFB10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802EFB14: nop

    // 0x802EFB18: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x802EFB1C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x802EFB20: b           L_802EFB4C
    // 0x802EFB24: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
        goto L_802EFB4C;
    // 0x802EFB24: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x802EFB28: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
L_802EFB2C:
    // 0x802EFB2C: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802EFB30: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802EFB34: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802EFB38: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EFB3C: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x802EFB40: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802EFB44: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x802EFB48: swc1        $f16, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f16.u32l;
L_802EFB4C:
    // 0x802EFB4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EFB50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EFB54: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802EFB58: jr          $ra
    // 0x802EFB5C: nop

    return;
    // 0x802EFB5C: nop

;}
RECOMP_FUNC void D_80279474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802794EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802794F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802794F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802794F8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802794FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80279500: sw          $t6, 0x32A4($a0)
    MEM_W(0X32A4, ctx->r4) = ctx->r14;
    // 0x80279504: jal         0x80222E50
    // 0x80279508: sb          $zero, 0x32B8($a0)
    MEM_B(0X32B8, ctx->r4) = 0;
    static_3_80222E50(rdram, ctx);
        goto after_0;
    // 0x80279508: sb          $zero, 0x32B8($a0)
    MEM_B(0X32B8, ctx->r4) = 0;
    after_0:
    // 0x8027950C: lbu         $t7, 0x3344($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3344);
    // 0x80279510: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80279514: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80279518: swc1        $f0, 0x32B0($s0)
    MEM_W(0X32B0, ctx->r16) = ctx->f0.u32l;
    // 0x8027951C: swc1        $f0, 0x32A8($s0)
    MEM_W(0X32A8, ctx->r16) = ctx->f0.u32l;
    // 0x80279520: sb          $zero, 0x3628($s0)
    MEM_B(0X3628, ctx->r16) = 0;
    // 0x80279524: sb          $zero, 0x8A8($s0)
    MEM_B(0X8A8, ctx->r16) = 0;
    // 0x80279528: beq         $t7, $zero, L_8027953C
    if (ctx->r15 == 0) {
        // 0x8027952C: swc1        $f4, 0x32B4($s0)
        MEM_W(0X32B4, ctx->r16) = ctx->f4.u32l;
            goto L_8027953C;
    }
    // 0x8027952C: swc1        $f4, 0x32B4($s0)
    MEM_W(0X32B4, ctx->r16) = ctx->f4.u32l;
    // 0x80279530: jal         0x8030A4B8
    // 0x80279534: nop

    static_3_8030A4B8(rdram, ctx);
        goto after_1;
    // 0x80279534: nop

    after_1:
    // 0x80279538: sh          $v0, 0x362A($s0)
    MEM_H(0X362A, ctx->r16) = ctx->r2;
L_8027953C:
    // 0x8027953C: lw          $v1, 0x65FC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X65FC);
    // 0x80279540: bnel        $v1, $zero, L_8027955C
    if (ctx->r3 != 0) {
        // 0x80279544: lw          $v0, 0x6C($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X6C);
            goto L_8027955C;
    }
    goto skip_0;
    // 0x80279544: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
    skip_0:
    // 0x80279548: jal         0x802A8CC8
    // 0x8027954C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A8CC8(rdram, ctx);
        goto after_2;
    // 0x8027954C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80279550: sw          $v0, 0x65FC($s0)
    MEM_W(0X65FC, ctx->r16) = ctx->r2;
    // 0x80279554: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80279558: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
L_8027955C:
    // 0x8027955C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80279560: lw          $a2, 0x32A8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32A8);
    // 0x80279564: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x80279568: lh          $t8, 0x20($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X20);
    // 0x8027956C: jalr        $t9
    // 0x80279570: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80279570: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    after_3:
    // 0x80279574: jal         0x80320D08
    // 0x80279578: nop

    static_3_80320D08(rdram, ctx);
        goto after_4;
    // 0x80279578: nop

    after_4:
    // 0x8027957C: jal         0x802D722C
    // 0x80279580: nop

    static_3_802D722C(rdram, ctx);
        goto after_5;
    // 0x80279580: nop

    after_5:
    // 0x80279584: jal         0x80317D78
    // 0x80279588: nop

    static_3_80317D78(rdram, ctx);
        goto after_6;
    // 0x80279588: nop

    after_6:
    // 0x8027958C: jal         0x802D1B50
    // 0x80279590: nop

    static_3_802D1B50(rdram, ctx);
        goto after_7;
    // 0x80279590: nop

    after_7:
    // 0x80279594: addiu       $a0, $s0, 0x365C
    ctx->r4 = ADD32(ctx->r16, 0X365C);
    // 0x80279598: jal         0x802E5430
    // 0x8027959C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    static_3_802E5430(rdram, ctx);
        goto after_8;
    // 0x8027959C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_8:
    // 0x802795A0: addiu       $a0, $s0, 0x4E3C
    ctx->r4 = ADD32(ctx->r16, 0X4E3C);
    // 0x802795A4: jal         0x802E5430
    // 0x802795A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_802E5430(rdram, ctx);
        goto after_9;
    // 0x802795A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_9:
    // 0x802795AC: jal         0x80224CA8
    // 0x802795B0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    static_3_80224CA8(rdram, ctx);
        goto after_10;
    // 0x802795B0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_10:
    // 0x802795B4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802795B8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802795BC: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802795C0: beq         $at, $zero, L_80279708
    if (ctx->r1 == 0) {
        // 0x802795C4: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80279708;
    }
    // 0x802795C4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802795C8: bne         $v0, $at, L_8027960C
    if (ctx->r2 != ctx->r1) {
        // 0x802795CC: addiu       $a0, $s0, 0x340C
        ctx->r4 = ADD32(ctx->r16, 0X340C);
            goto L_8027960C;
    }
    // 0x802795CC: addiu       $a0, $s0, 0x340C
    ctx->r4 = ADD32(ctx->r16, 0X340C);
    // 0x802795D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802795D4: jal         0x802FC8FC
    // 0x802795D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    static_3_802FC8FC(rdram, ctx);
        goto after_11;
    // 0x802795D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_11:
    // 0x802795DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802795E0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802795E4: jal         0x802E4EA4
    // 0x802795E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802E4EA4(rdram, ctx);
        goto after_12;
    // 0x802795E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x802795EC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802795F0: jal         0x802FC94C
    // 0x802795F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802FC94C(rdram, ctx);
        goto after_13;
    // 0x802795F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x802795F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802795FC: jal         0x80318E94
    // 0x80279600: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    static_3_80318E94(rdram, ctx);
        goto after_14;
    // 0x80279600: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_14:
    // 0x80279604: b           L_80279688
    // 0x80279608: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
        goto L_80279688;
    // 0x80279608: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_8027960C:
    // 0x8027960C: lbu         $t0, 0x3344($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3344);
    // 0x80279610: addiu       $a0, $s0, 0x3350
    ctx->r4 = ADD32(ctx->r16, 0X3350);
    // 0x80279614: beq         $t0, $zero, L_80279650
    if (ctx->r8 == 0) {
        // 0x80279618: nop
    
            goto L_80279650;
    }
    // 0x80279618: nop

    // 0x8027961C: jal         0x8030A4B8
    // 0x80279620: nop

    static_3_8030A4B8(rdram, ctx);
        goto after_15;
    // 0x80279620: nop

    after_15:
    // 0x80279624: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80279628: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8027962C: sh          $v0, 0x362A($s0)
    MEM_H(0X362A, ctx->r16) = ctx->r2;
    // 0x80279630: lw          $t1, 0x54($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X54);
    // 0x80279634: lbu         $a1, 0x6C($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X6C);
    // 0x80279638: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027963C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80279640: jal         0x802E4EA4
    // 0x80279644: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    static_3_802E4EA4(rdram, ctx);
        goto after_16;
    // 0x80279644: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    after_16:
    // 0x80279648: b           L_80279668
    // 0x8027964C: nop

        goto L_80279668;
    // 0x8027964C: nop

L_80279650:
    // 0x80279650: jal         0x802FB1B4
    // 0x80279654: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802FB1B4(rdram, ctx);
        goto after_17;
    // 0x80279654: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x80279658: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027965C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80279660: jal         0x802E4EA4
    // 0x80279664: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802E4EA4(rdram, ctx);
        goto after_18;
    // 0x80279664: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
L_80279668:
    // 0x80279668: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8027966C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80279670: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80279674: addiu       $a1, $v0, 0x1
    ctx->r5 = ADD32(ctx->r2, 0X1);
    // 0x80279678: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x8027967C: jal         0x80318E94
    // 0x80279680: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    static_3_80318E94(rdram, ctx);
        goto after_19;
    // 0x80279680: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_19:
    // 0x80279684: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_80279688:
    // 0x80279688: jal         0x80318C94
    // 0x8027968C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318C94(rdram, ctx);
        goto after_20;
    // 0x8027968C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x80279690: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80279694: jal         0x802E75EC
    // 0x80279698: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802E75EC(rdram, ctx);
        goto after_21;
    // 0x80279698: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x8027969C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802796A0: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802796A4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802796A8: addiu       $a0, $s0, 0x4B88
    ctx->r4 = ADD32(ctx->r16, 0X4B88);
    // 0x802796AC: bne         $t3, $at, L_802796D4
    if (ctx->r11 != ctx->r1) {
        // 0x802796B0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_802796D4;
    }
    // 0x802796B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802796B4: addiu       $a0, $s0, 0x4B88
    ctx->r4 = ADD32(ctx->r16, 0X4B88);
    // 0x802796B8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802796BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802796C0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802796C4: jal         0x802BBEF0
    // 0x802796C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802BBEF0(rdram, ctx);
        goto after_22;
    // 0x802796C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_22:
    // 0x802796CC: b           L_802796E8
    // 0x802796D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
        goto L_802796E8;
    // 0x802796D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_802796D4:
    // 0x802796D4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802796D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802796DC: jal         0x802BBEF0
    // 0x802796E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    static_3_802BBEF0(rdram, ctx);
        goto after_23;
    // 0x802796E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_23:
    // 0x802796E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_802796E8:
    // 0x802796E8: jal         0x802BCECC
    // 0x802796EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802BCECC(rdram, ctx);
        goto after_24;
    // 0x802796EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x802796F0: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802796F4: sw          $t4, 0x4E18($s0)
    MEM_W(0X4E18, ctx->r16) = ctx->r12;
    // 0x802796F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x802796FC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80279700: sw          $t5, 0x4E1C($s0)
    MEM_W(0X4E1C, ctx->r16) = ctx->r13;
    // 0x80279704: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
L_80279708:
    // 0x80279708: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8027970C: bne         $v0, $at, L_80279880
    if (ctx->r2 != ctx->r1) {
        // 0x80279710: addiu       $a0, $s0, 0x340C
        ctx->r4 = ADD32(ctx->r16, 0X340C);
            goto L_80279880;
    }
    // 0x80279710: addiu       $a0, $s0, 0x340C
    ctx->r4 = ADD32(ctx->r16, 0X340C);
    // 0x80279714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80279718: jal         0x802FC8FC
    // 0x8027971C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    static_3_802FC8FC(rdram, ctx);
        goto after_25;
    // 0x8027971C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_25:
    // 0x80279720: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80279724: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80279728: jal         0x802E4EA4
    // 0x8027972C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802E4EA4(rdram, ctx);
        goto after_26;
    // 0x8027972C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_26:
    // 0x80279730: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80279734: jal         0x802E75EC
    // 0x80279738: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802E75EC(rdram, ctx);
        goto after_27;
    // 0x80279738: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x8027973C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80279740: jal         0x802FC94C
    // 0x80279744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802FC94C(rdram, ctx);
        goto after_28;
    // 0x80279744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_28:
    // 0x80279748: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8027974C: jal         0x80318E94
    // 0x80279750: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    static_3_80318E94(rdram, ctx);
        goto after_29;
    // 0x80279750: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_29:
    // 0x80279754: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80279758: jal         0x80318C94
    // 0x8027975C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80318C94(rdram, ctx);
        goto after_30;
    // 0x8027975C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_30:
    // 0x80279760: addiu       $a0, $s0, 0x6368
    ctx->r4 = ADD32(ctx->r16, 0X6368);
    // 0x80279764: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80279768: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8027976C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80279770: jal         0x802BBEF0
    // 0x80279774: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802BBEF0(rdram, ctx);
        goto after_31;
    // 0x80279774: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_31:
    // 0x80279778: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8027977C: jal         0x802BCECC
    // 0x80279780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802BCECC(rdram, ctx);
        goto after_32;
    // 0x80279780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_32:
    // 0x80279784: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80279788: sw          $t6, 0x65B4($s0)
    MEM_W(0X65B4, ctx->r16) = ctx->r14;
    // 0x8027978C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80279790: addiu       $a0, $s0, 0x32BC
    ctx->r4 = ADD32(ctx->r16, 0X32BC);
    // 0x80279794: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80279798: sw          $t7, 0x4E1C($s0)
    MEM_W(0X4E1C, ctx->r16) = ctx->r15;
    // 0x8027979C: jal         0x802CD828
    // 0x802797A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    static_3_802CD828(rdram, ctx);
        goto after_33;
    // 0x802797A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_33:
    // 0x802797A4: bne         $v0, $zero, L_802797B8
    if (ctx->r2 != 0) {
        // 0x802797A8: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_802797B8;
    }
    // 0x802797A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802797AC: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x802797B0: jal         0x802E7E20
    // 0x802797B4: ori         $a1, $a1, 0x86A0
    ctx->r5 = ctx->r5 | 0X86A0;
    static_3_802E7E20(rdram, ctx);
        goto after_34;
    // 0x802797B4: ori         $a1, $a1, 0x86A0
    ctx->r5 = ctx->r5 | 0X86A0;
    after_34:
L_802797B8:
    // 0x802797B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802797BC: jal         0x802CD828
    // 0x802797C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802CD828(rdram, ctx);
        goto after_35;
    // 0x802797C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_35:
    // 0x802797C4: bne         $v0, $zero, L_802797D8
    if (ctx->r2 != 0) {
        // 0x802797C8: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_802797D8;
    }
    // 0x802797C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802797CC: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x802797D0: jal         0x802E798C
    // 0x802797D4: ori         $a1, $a1, 0x86A0
    ctx->r5 = ctx->r5 | 0X86A0;
    func_802E790C(rdram, ctx);
        goto after_36;
    // 0x802797D4: ori         $a1, $a1, 0x86A0
    ctx->r5 = ctx->r5 | 0X86A0;
    after_36:
L_802797D8:
    // 0x802797D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802797DC: jal         0x802CD838
    // 0x802797E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802CD838(rdram, ctx);
        goto after_37;
    // 0x802797E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_37:
    // 0x802797E4: bne         $v0, $zero, L_802797F8
    if (ctx->r2 != 0) {
        // 0x802797E8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_802797F8;
    }
    // 0x802797E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802797EC: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x802797F0: jal         0x802E7E20
    // 0x802797F4: ori         $a1, $a1, 0x86A0
    ctx->r5 = ctx->r5 | 0X86A0;
    static_3_802E7E20(rdram, ctx);
        goto after_38;
    // 0x802797F4: ori         $a1, $a1, 0x86A0
    ctx->r5 = ctx->r5 | 0X86A0;
    after_38:
L_802797F8:
    // 0x802797F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802797FC: jal         0x802CD838
    // 0x80279800: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802CD838(rdram, ctx);
        goto after_39;
    // 0x80279800: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_39:
    // 0x80279804: bne         $v0, $zero, L_80279818
    if (ctx->r2 != 0) {
        // 0x80279808: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80279818;
    }
    // 0x80279808: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8027980C: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x80279810: jal         0x802E798C
    // 0x80279814: ori         $a1, $a1, 0x86A0
    ctx->r5 = ctx->r5 | 0X86A0;
    func_802E790C(rdram, ctx);
        goto after_40;
    // 0x80279814: ori         $a1, $a1, 0x86A0
    ctx->r5 = ctx->r5 | 0X86A0;
    after_40:
L_80279818:
    // 0x80279818: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8027981C: jal         0x802CD828
    // 0x80279820: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802CD828(rdram, ctx);
        goto after_41;
    // 0x80279820: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_41:
    // 0x80279824: beq         $v0, $zero, L_8027984C
    if (ctx->r2 == 0) {
        // 0x80279828: addiu       $t8, $zero, 0xE10
        ctx->r24 = ADD32(0, 0XE10);
            goto L_8027984C;
    }
    // 0x80279828: addiu       $t8, $zero, 0xE10
    ctx->r24 = ADD32(0, 0XE10);
    // 0x8027982C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80279830: beq         $v0, $at, L_80279854
    if (ctx->r2 == ctx->r1) {
        // 0x80279834: addiu       $t9, $zero, 0x258
        ctx->r25 = ADD32(0, 0X258);
            goto L_80279854;
    }
    // 0x80279834: addiu       $t9, $zero, 0x258
    ctx->r25 = ADD32(0, 0X258);
    // 0x80279838: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027983C: beq         $v0, $at, L_8027985C
    if (ctx->r2 == ctx->r1) {
        // 0x80279840: addiu       $t0, $zero, 0x12C
        ctx->r8 = ADD32(0, 0X12C);
            goto L_8027985C;
    }
    // 0x80279840: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x80279844: b           L_80279864
    // 0x80279848: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
        goto L_80279864;
    // 0x80279848: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_8027984C:
    // 0x8027984C: b           L_80279860
    // 0x80279850: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
        goto L_80279860;
    // 0x80279850: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_80279854:
    // 0x80279854: b           L_80279860
    // 0x80279858: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
        goto L_80279860;
    // 0x80279858: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_8027985C:
    // 0x8027985C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_80279860:
    // 0x80279860: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_80279864:
    // 0x80279864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80279868: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8027986C: nop

    // 0x80279870: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80279874: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80279878: jal         0x802B0078
    // 0x8027987C: nop

    static_3_802B0078(rdram, ctx);
        goto after_42;
    // 0x8027987C: nop

    after_42:
L_80279880:
    // 0x80279880: lw          $v1, 0x65FC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X65FC);
    // 0x80279884: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80279888: beq         $v1, $zero, L_802798B8
    if (ctx->r3 == 0) {
        // 0x8027988C: nop
    
            goto L_802798B8;
    }
    // 0x8027988C: nop

    // 0x80279890: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
    // 0x80279894: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80279898: lw          $a2, 0x32A8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32A8);
    // 0x8027989C: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x802798A0: lh          $t2, 0x48($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X48);
    // 0x802798A4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802798A8: jalr        $t9
    // 0x802798AC: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x802798AC: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    after_43:
    // 0x802798B0: b           L_802798C4
    // 0x802798B4: sw          $zero, 0x7170($s0)
    MEM_W(0X7170, ctx->r16) = 0;
        goto L_802798C4;
    // 0x802798B4: sw          $zero, 0x7170($s0)
    MEM_W(0X7170, ctx->r16) = 0;
L_802798B8:
    // 0x802798B8: jal         0x80231A24
    // 0x802798BC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_44;
    // 0x802798BC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_44:
    // 0x802798C0: sw          $zero, 0x7170($s0)
    MEM_W(0X7170, ctx->r16) = 0;
L_802798C4:
    // 0x802798C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802798C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802798CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802798D0: jr          $ra
    // 0x802798D4: nop

    return;
    // 0x802798D4: nop

;}
RECOMP_FUNC void D_802CFBFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CFC7C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802CFC80: jr          $ra
    // 0x802CFC84: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802CFC84: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802A4964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A49E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A49E8: jr          $ra
    // 0x802A49EC: sb          $a1, 0x195($a0)
    MEM_B(0X195, ctx->r4) = ctx->r5;
    return;
    // 0x802A49EC: sb          $a1, 0x195($a0)
    MEM_B(0X195, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_80293034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802930B4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x802930B8: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x802930BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802930C0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802930C4: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x802930C8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x802930CC: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x802930D0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802930D4: addiu       $t6, $sp, 0x98
    ctx->r14 = ADD32(ctx->r29, 0X98);
    // 0x802930D8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802930DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802930E0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802930E4: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x802930E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802930EC: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x802930F0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802930F4: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x802930F8: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    // 0x802930FC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80293100: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x80293104: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80293108: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x8029310C: jal         0x802AD568
    // 0x80293110: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x80293110: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80293114: blez        $v0, L_802932D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80293118: addiu       $s1, $sp, 0x54
        ctx->r17 = ADD32(ctx->r29, 0X54);
            goto L_802932D0;
    }
    // 0x80293118: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
    // 0x8029311C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293120: jal         0x802C51D0
    // 0x80293124: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x80293124: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80293128: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029312C: lui         $a1, 0xC000
    ctx->r5 = S32(0XC000 << 16);
    // 0x80293130: lui         $a2, 0x40E0
    ctx->r6 = S32(0X40E0 << 16);
    // 0x80293134: jal         0x8022A0D0
    // 0x80293138: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x80293138: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    after_2:
    // 0x8029313C: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80293140: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80293144: lwc1        $f20, 0x84($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80293148: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029314C: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x80293150: jal         0x8022970C
    // 0x80293154: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x80293154: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80293158: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8029315C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80293160: swc1        $f20, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f20.u32l;
    // 0x80293164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293168: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x8029316C: jal         0x802C4838
    // 0x80293170: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    static_3_802C4838(rdram, ctx);
        goto after_4;
    // 0x80293170: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80293174: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80293178: lwc1        $f10, 0x104($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X104);
    // 0x8029317C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293180: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80293184: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80293188: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8029318C: jal         0x802D01D4
    // 0x80293190: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x80293190: nop

    after_5:
    // 0x80293194: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80293198: lwc1        $f4, 0x108($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X108);
    // 0x8029319C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802931A0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802931A4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802931A8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802931AC: jal         0x802D01D4
    // 0x802931B0: nop

    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x802931B0: nop

    after_6:
    // 0x802931B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802931B8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802931BC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802931C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802931C4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802931C8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x802931CC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x802931D0: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x802931D4: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x802931D8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802931DC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x802931E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802931E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802931E8: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x802931EC: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x802931F0: jal         0x802AAEC0
    // 0x802931F4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_802AAEC0(rdram, ctx);
        goto after_7;
    // 0x802931F4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_7:
    // 0x802931F8: beq         $v0, $zero, L_80293234
    if (ctx->r2 == 0) {
        // 0x802931FC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80293234;
    }
    // 0x802931FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80293200: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80293204: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80293208: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8029320C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80293210: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80293214: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80293218: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x8029321C: jal         0x802E9420
    // 0x80293220: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    static_3_802E9420(rdram, ctx);
        goto after_8;
    // 0x80293220: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x80293224: lui         $a1, 0x3EA8
    ctx->r5 = S32(0X3EA8 << 16);
    // 0x80293228: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8029322C: jal         0x802E982C
    // 0x80293230: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    static_3_802E982C(rdram, ctx);
        goto after_9;
    // 0x80293230: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    after_9:
L_80293234:
    // 0x80293234: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80293238: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029323C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x80293240: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80293244: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80293248: jal         0x8022A0D0
    // 0x8029324C: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_10;
    // 0x8029324C: nop

    after_10:
    // 0x80293250: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80293254: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80293258: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8029325C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80293260: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80293264: lw          $t1, 0x8C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8C);
    // 0x80293268: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8029326C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80293270: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80293274: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80293278: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8029327C: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80293280: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x80293284: jal         0x802AAEC0
    // 0x80293288: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    static_3_802AAEC0(rdram, ctx);
        goto after_11;
    // 0x80293288: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_11:
    // 0x8029328C: beq         $v0, $zero, L_802932C8
    if (ctx->r2 == 0) {
        // 0x80293290: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802932C8;
    }
    // 0x80293290: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80293294: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80293298: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8029329C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802932A0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802932A4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x802932A8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x802932AC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x802932B0: jal         0x802E9420
    // 0x802932B4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    static_3_802E9420(rdram, ctx);
        goto after_12;
    // 0x802932B4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_12:
    // 0x802932B8: lui         $a1, 0x3EA8
    ctx->r5 = S32(0X3EA8 << 16);
    // 0x802932BC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x802932C0: jal         0x802E982C
    // 0x802932C4: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    static_3_802E982C(rdram, ctx);
        goto after_13;
    // 0x802932C4: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    after_13:
L_802932C8:
    // 0x802932C8: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802932CC: swc1        $f16, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f16.u32l;
L_802932D0:
    // 0x802932D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802932D4: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x802932D8: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x802932DC: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x802932E0: jr          $ra
    // 0x802932E4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x802932E4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void D_802CCD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCD88: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802CCD8C: jr          $ra
    // 0x802CCD90: swc1        $f12, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802CCD90: swc1        $f12, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802D5790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D5810: addiu       $sp, $sp, -0x1E0
    ctx->r29 = ADD32(ctx->r29, -0X1E0);
    // 0x802D5814: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802D5818: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802D581C: sw          $a1, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r5;
    // 0x802D5820: sw          $a2, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r6;
    // 0x802D5824: lbu         $v0, 0x364($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X364);
    // 0x802D5828: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802D582C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D5830: bnel        $v0, $at, L_802D59D4
    if (ctx->r2 != ctx->r1) {
        // 0x802D5834: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802D59D4;
    }
    goto skip_0;
    // 0x802D5834: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x802D5838: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x802D583C: lh          $t6, 0x38($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X38);
    // 0x802D5840: lw          $t9, 0x3C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X3C);
    // 0x802D5844: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802D5848: jalr        $t9
    // 0x802D584C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D584C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x802D5850: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802D5854: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x802D5858: lh          $t7, 0x48($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X48);
    // 0x802D585C: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x802D5860: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802D5864: jalr        $t9
    // 0x802D5868: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802D5868: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_1:
    // 0x802D586C: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802D5870: swc1        $f0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f0.u32l;
    // 0x802D5874: lh          $t8, 0x40($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X40);
    // 0x802D5878: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x802D587C: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802D5880: jalr        $t9
    // 0x802D5884: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802D5884: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_2:
    // 0x802D5888: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D588C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D5890: lwc1        $f4, 0x368($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X368);
    // 0x802D5894: swc1        $f0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f0.u32l;
    // 0x802D5898: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802D589C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802D58A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D58A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D58A8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x802D58AC: bc1f        L_802D58D4
    if (!c1cs) {
        // 0x802D58B0: lui         $a2, 0x3F63
        ctx->r6 = S32(0X3F63 << 16);
            goto L_802D58D4;
    }
    // 0x802D58B0: lui         $a2, 0x3F63
    ctx->r6 = S32(0X3F63 << 16);
    // 0x802D58B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D58B8: sb          $t1, 0x364($s0)
    MEM_B(0X364, ctx->r16) = ctx->r9;
    // 0x802D58BC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x802D58C0: swc1        $f8, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f8.u32l;
    // 0x802D58C4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802D58C8: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x802D58CC: jal         0x80317194
    // 0x802D58D0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_80317194(rdram, ctx);
        goto after_3;
    // 0x802D58D0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
L_802D58D4:
    // 0x802D58D4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802D58D8: lwc1        $f2, 0xAC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x802D58DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D58E0: nop

    // 0x802D58E4: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    // 0x802D58E8: nop

    // 0x802D58EC: bc1fl       L_802D5934
    if (!c1cs) {
        // 0x802D58F0: lw          $v0, 0x27C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X27C);
            goto L_802D5934;
    }
    goto skip_1;
    // 0x802D58F0: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    skip_1:
    // 0x802D58F4: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802D58F8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x802D58FC: lh          $t3, 0x98($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X98);
    // 0x802D5900: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x802D5904: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x802D5908: jalr        $t9
    // 0x802D590C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802D590C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_4:
    // 0x802D5910: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5914: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D5918: lwc1        $f18, 0x1E8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1E8);
    // 0x802D591C: lwc1        $f6, 0x368($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X368);
    // 0x802D5920: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802D5924: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802D5928: b           L_802D5994
    // 0x802D592C: swc1        $f8, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f8.u32l;
        goto L_802D5994;
    // 0x802D592C: swc1        $f8, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f8.u32l;
    // 0x802D5930: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
L_802D5934:
    // 0x802D5934: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x802D5938: lh          $t4, 0x98($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X98);
    // 0x802D593C: swc1        $f2, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f2.u32l;
    // 0x802D5940: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x802D5944: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802D5948: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x802D594C: jalr        $t9
    // 0x802D5950: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802D5950: nop

    after_5:
    // 0x802D5954: lwc1        $f2, 0x1DC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1DC);
    // 0x802D5958: lwc1        $f10, 0x378($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X378);
    // 0x802D595C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802D5960: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D5964: div.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802D5968: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D596C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D5970: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D5974: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802D5978: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802D597C: sub.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802D5980: bc1f        L_802D5994
    if (!c1cs) {
        // 0x802D5984: swc1        $f4, 0x368($s0)
        MEM_W(0X368, ctx->r16) = ctx->f4.u32l;
            goto L_802D5994;
    }
    // 0x802D5984: swc1        $f4, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f4.u32l;
    // 0x802D5988: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802D598C: nop

    // 0x802D5990: swc1        $f10, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f10.u32l;
L_802D5994:
    // 0x802D5994: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D5998: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802D599C: jal         0x80200B20
    // 0x802D59A0: lw          $a2, 0x368($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X368);
    static_3_80200B20(rdram, ctx);
        goto after_6;
    // 0x802D59A0: lw          $a2, 0x368($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X368);
    after_6:
    // 0x802D59A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D59A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D59AC: lwc1        $f18, 0x368($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X368);
    // 0x802D59B0: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x802D59B4: nop

    // 0x802D59B8: bc1fl       L_802D59D0
    if (!c1cs) {
        // 0x802D59BC: lbu         $v0, 0x364($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X364);
            goto L_802D59D0;
    }
    goto skip_2;
    // 0x802D59BC: lbu         $v0, 0x364($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X364);
    skip_2:
    // 0x802D59C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802D59C4: nop

    // 0x802D59C8: swc1        $f6, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f6.u32l;
    // 0x802D59CC: lbu         $v0, 0x364($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X364);
L_802D59D0:
    // 0x802D59D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802D59D4:
    // 0x802D59D4: bnel        $v0, $at, L_802D5F14
    if (ctx->r2 != ctx->r1) {
        // 0x802D59D8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_802D5F14;
    }
    goto skip_3;
    // 0x802D59D8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    skip_3:
    // 0x802D59DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D59E0: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802D59E4: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    // 0x802D59E8: lh          $t5, 0x48($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X48);
    // 0x802D59EC: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x802D59F0: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x802D59F4: jalr        $t9
    // 0x802D59F8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802D59F8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_7:
    // 0x802D59FC: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802D5A00: swc1        $f0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f0.u32l;
    // 0x802D5A04: lh          $t6, 0x40($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X40);
    // 0x802D5A08: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x802D5A0C: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x802D5A10: jalr        $t9
    // 0x802D5A14: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x802D5A14: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_8:
    // 0x802D5A18: lwc1        $f12, 0x370($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X370);
    // 0x802D5A1C: lwc1        $f2, 0x374($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X374);
    // 0x802D5A20: swc1        $f0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f0.u32l;
    // 0x802D5A24: lwc1        $f10, 0x1E8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1E8);
    // 0x802D5A28: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802D5A2C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802D5A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5A34: addiu       $a1, $s0, 0x394
    ctx->r5 = ADD32(ctx->r16, 0X394);
    // 0x802D5A38: bc1fl       L_802D5A60
    if (!c1cs) {
        // 0x802D5A3C: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_802D5A60;
    }
    goto skip_4;
    // 0x802D5A3C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_4:
    // 0x802D5A40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D5A44: lwc1        $f2, 0x374($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X374);
    // 0x802D5A48: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802D5A4C: add.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x802D5A50: swc1        $f18, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->f18.u32l;
    // 0x802D5A54: b           L_802D5A88
    // 0x802D5A58: lwc1        $f12, 0x370($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X370);
        goto L_802D5A88;
    // 0x802D5A58: lwc1        $f12, 0x370($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X370);
    // 0x802D5A5C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_802D5A60:
    // 0x802D5A60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802D5A64: lwc1        $f4, 0x1E8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1E8);
    // 0x802D5A68: bc1fl       L_802D5A8C
    if (!c1cs) {
        // 0x802D5A6C: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_802D5A8C;
    }
    goto skip_5;
    // 0x802D5A6C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_5:
    // 0x802D5A70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D5A74: lwc1        $f2, 0x374($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X374);
    // 0x802D5A78: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802D5A7C: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x802D5A80: swc1        $f10, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->f10.u32l;
    // 0x802D5A84: lwc1        $f12, 0x370($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X370);
L_802D5A88:
    // 0x802D5A88: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_802D5A8C:
    // 0x802D5A8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D5A90: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x802D5A94: nop

    // 0x802D5A98: bc1fl       L_802D5AD4
    if (!c1cs) {
        // 0x802D5A9C: lwc1        $f10, 0x368($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X368);
            goto L_802D5AD4;
    }
    goto skip_6;
    // 0x802D5A9C: lwc1        $f10, 0x368($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X368);
    skip_6:
    // 0x802D5AA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D5AA4: lwc1        $f6, 0x368($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X368);
    // 0x802D5AA8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802D5AAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D5AB0: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x802D5AB4: mul.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802D5AB8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802D5ABC: nop

    // 0x802D5AC0: bc1fl       L_802D5AD4
    if (!c1cs) {
        // 0x802D5AC4: lwc1        $f10, 0x368($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X368);
            goto L_802D5AD4;
    }
    goto skip_7;
    // 0x802D5AC4: lwc1        $f10, 0x368($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X368);
    skip_7:
    // 0x802D5AC8: swc1        $f0, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->f0.u32l;
    // 0x802D5ACC: lwc1        $f12, 0x370($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X370);
    // 0x802D5AD0: lwc1        $f10, 0x368($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X368);
L_802D5AD4:
    // 0x802D5AD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5AD8: ldc1        $f16, 0x0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, 0X0);
    // 0x802D5ADC: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x802D5AE0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5AE4: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x802D5AE8: nop

    // 0x802D5AEC: bc1f        L_802D5B08
    if (!c1cs) {
        // 0x802D5AF0: nop
    
            goto L_802D5B08;
    }
    // 0x802D5AF0: nop

    // 0x802D5AF4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5AF8: jal         0x8030843C
    // 0x802D5AFC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    static_3_8030843C(rdram, ctx);
        goto after_9;
    // 0x802D5AFC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_9:
    // 0x802D5B00: b           L_802D5DEC
    // 0x802D5B04: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5B04: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5B08:
    // 0x802D5B08: ldc1        $f18, 0x0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X0);
    // 0x802D5B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5B10: addiu       $a1, $s0, 0x39C
    ctx->r5 = ADD32(ctx->r16, 0X39C);
    // 0x802D5B14: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x802D5B18: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5B1C: bc1f        L_802D5B38
    if (!c1cs) {
        // 0x802D5B20: nop
    
            goto L_802D5B38;
    }
    // 0x802D5B20: nop

    // 0x802D5B24: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5B28: jal         0x8030843C
    // 0x802D5B2C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_10;
    // 0x802D5B2C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_10:
    // 0x802D5B30: b           L_802D5DEC
    // 0x802D5B34: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5B34: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5B38:
    // 0x802D5B38: ldc1        $f6, 0x0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X0);
    // 0x802D5B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5B40: addiu       $a1, $s0, 0x3A4
    ctx->r5 = ADD32(ctx->r16, 0X3A4);
    // 0x802D5B44: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x802D5B48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5B4C: bc1f        L_802D5B68
    if (!c1cs) {
        // 0x802D5B50: nop
    
            goto L_802D5B68;
    }
    // 0x802D5B50: nop

    // 0x802D5B54: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5B58: jal         0x8030843C
    // 0x802D5B5C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_11;
    // 0x802D5B5C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_11:
    // 0x802D5B60: b           L_802D5DEC
    // 0x802D5B64: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5B64: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5B68:
    // 0x802D5B68: ldc1        $f4, 0x0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X0);
    // 0x802D5B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5B70: addiu       $a1, $s0, 0x3AC
    ctx->r5 = ADD32(ctx->r16, 0X3AC);
    // 0x802D5B74: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x802D5B78: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5B7C: bc1f        L_802D5B98
    if (!c1cs) {
        // 0x802D5B80: nop
    
            goto L_802D5B98;
    }
    // 0x802D5B80: nop

    // 0x802D5B84: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5B88: jal         0x8030843C
    // 0x802D5B8C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_12;
    // 0x802D5B8C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_12:
    // 0x802D5B90: b           L_802D5DEC
    // 0x802D5B94: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5B94: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5B98:
    // 0x802D5B98: ldc1        $f8, 0x0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X0);
    // 0x802D5B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5BA0: addiu       $a1, $s0, 0x3B4
    ctx->r5 = ADD32(ctx->r16, 0X3B4);
    // 0x802D5BA4: c.lt.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d < ctx->f8.d;
    // 0x802D5BA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5BAC: bc1f        L_802D5BC8
    if (!c1cs) {
        // 0x802D5BB0: nop
    
            goto L_802D5BC8;
    }
    // 0x802D5BB0: nop

    // 0x802D5BB4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5BB8: jal         0x8030843C
    // 0x802D5BBC: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_13;
    // 0x802D5BBC: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_13:
    // 0x802D5BC0: b           L_802D5DEC
    // 0x802D5BC4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5BC4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5BC8:
    // 0x802D5BC8: ldc1        $f10, 0x0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X0);
    // 0x802D5BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5BD0: addiu       $a1, $s0, 0x3BC
    ctx->r5 = ADD32(ctx->r16, 0X3BC);
    // 0x802D5BD4: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x802D5BD8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5BDC: bc1f        L_802D5BF8
    if (!c1cs) {
        // 0x802D5BE0: nop
    
            goto L_802D5BF8;
    }
    // 0x802D5BE0: nop

    // 0x802D5BE4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5BE8: jal         0x8030843C
    // 0x802D5BEC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    static_3_8030843C(rdram, ctx);
        goto after_14;
    // 0x802D5BEC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_14:
    // 0x802D5BF0: b           L_802D5DEC
    // 0x802D5BF4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5BF4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5BF8:
    // 0x802D5BF8: ldc1        $f16, 0x0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, 0X0);
    // 0x802D5BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5C00: addiu       $a1, $s0, 0x3C4
    ctx->r5 = ADD32(ctx->r16, 0X3C4);
    // 0x802D5C04: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x802D5C08: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5C0C: bc1f        L_802D5C28
    if (!c1cs) {
        // 0x802D5C10: nop
    
            goto L_802D5C28;
    }
    // 0x802D5C10: nop

    // 0x802D5C14: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5C18: jal         0x8030843C
    // 0x802D5C1C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_15;
    // 0x802D5C1C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_15:
    // 0x802D5C20: b           L_802D5DEC
    // 0x802D5C24: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5C24: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5C28:
    // 0x802D5C28: ldc1        $f18, 0x0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X0);
    // 0x802D5C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5C30: addiu       $a1, $s0, 0x3CC
    ctx->r5 = ADD32(ctx->r16, 0X3CC);
    // 0x802D5C34: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x802D5C38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5C3C: bc1f        L_802D5C58
    if (!c1cs) {
        // 0x802D5C40: nop
    
            goto L_802D5C58;
    }
    // 0x802D5C40: nop

    // 0x802D5C44: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5C48: jal         0x8030843C
    // 0x802D5C4C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_16;
    // 0x802D5C4C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_16:
    // 0x802D5C50: b           L_802D5DEC
    // 0x802D5C54: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5C54: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5C58:
    // 0x802D5C58: ldc1        $f6, 0x0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X0);
    // 0x802D5C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5C60: addiu       $a1, $s0, 0x3D4
    ctx->r5 = ADD32(ctx->r16, 0X3D4);
    // 0x802D5C64: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x802D5C68: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5C6C: bc1f        L_802D5C88
    if (!c1cs) {
        // 0x802D5C70: nop
    
            goto L_802D5C88;
    }
    // 0x802D5C70: nop

    // 0x802D5C74: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5C78: jal         0x8030843C
    // 0x802D5C7C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_17;
    // 0x802D5C7C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_17:
    // 0x802D5C80: b           L_802D5DEC
    // 0x802D5C84: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5C84: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5C88:
    // 0x802D5C88: ldc1        $f4, 0x0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X0);
    // 0x802D5C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5C90: addiu       $a1, $s0, 0x3DC
    ctx->r5 = ADD32(ctx->r16, 0X3DC);
    // 0x802D5C94: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x802D5C98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5C9C: bc1f        L_802D5CB8
    if (!c1cs) {
        // 0x802D5CA0: nop
    
            goto L_802D5CB8;
    }
    // 0x802D5CA0: nop

    // 0x802D5CA4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5CA8: jal         0x8030843C
    // 0x802D5CAC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    static_3_8030843C(rdram, ctx);
        goto after_18;
    // 0x802D5CAC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_18:
    // 0x802D5CB0: b           L_802D5DEC
    // 0x802D5CB4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5CB4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5CB8:
    // 0x802D5CB8: ldc1        $f8, 0x0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X0);
    // 0x802D5CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5CC0: addiu       $a1, $s0, 0x3E4
    ctx->r5 = ADD32(ctx->r16, 0X3E4);
    // 0x802D5CC4: c.lt.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d < ctx->f8.d;
    // 0x802D5CC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5CCC: bc1f        L_802D5CE8
    if (!c1cs) {
        // 0x802D5CD0: nop
    
            goto L_802D5CE8;
    }
    // 0x802D5CD0: nop

    // 0x802D5CD4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5CD8: jal         0x8030843C
    // 0x802D5CDC: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_19;
    // 0x802D5CDC: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_19:
    // 0x802D5CE0: b           L_802D5DEC
    // 0x802D5CE4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5CE4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5CE8:
    // 0x802D5CE8: ldc1        $f10, 0x0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X0);
    // 0x802D5CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5CF0: addiu       $a1, $s0, 0x3EC
    ctx->r5 = ADD32(ctx->r16, 0X3EC);
    // 0x802D5CF4: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x802D5CF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5CFC: bc1f        L_802D5D18
    if (!c1cs) {
        // 0x802D5D00: nop
    
            goto L_802D5D18;
    }
    // 0x802D5D00: nop

    // 0x802D5D04: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5D08: jal         0x8030843C
    // 0x802D5D0C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_20;
    // 0x802D5D0C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_20:
    // 0x802D5D10: b           L_802D5DEC
    // 0x802D5D14: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5D14: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5D18:
    // 0x802D5D18: ldc1        $f16, 0x0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, 0X0);
    // 0x802D5D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5D20: addiu       $a1, $s0, 0x3F4
    ctx->r5 = ADD32(ctx->r16, 0X3F4);
    // 0x802D5D24: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x802D5D28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5D2C: bc1f        L_802D5D48
    if (!c1cs) {
        // 0x802D5D30: nop
    
            goto L_802D5D48;
    }
    // 0x802D5D30: nop

    // 0x802D5D34: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5D38: jal         0x8030843C
    // 0x802D5D3C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_21;
    // 0x802D5D3C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_21:
    // 0x802D5D40: b           L_802D5DEC
    // 0x802D5D44: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5D44: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5D48:
    // 0x802D5D48: ldc1        $f18, 0x0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X0);
    // 0x802D5D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5D50: addiu       $a1, $s0, 0x3FC
    ctx->r5 = ADD32(ctx->r16, 0X3FC);
    // 0x802D5D54: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x802D5D58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5D5C: bc1f        L_802D5D78
    if (!c1cs) {
        // 0x802D5D60: nop
    
            goto L_802D5D78;
    }
    // 0x802D5D60: nop

    // 0x802D5D64: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5D68: jal         0x8030843C
    // 0x802D5D6C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    static_3_8030843C(rdram, ctx);
        goto after_22;
    // 0x802D5D6C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_22:
    // 0x802D5D70: b           L_802D5DEC
    // 0x802D5D74: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5D74: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5D78:
    // 0x802D5D78: ldc1        $f6, 0x0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X0);
    // 0x802D5D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5D80: addiu       $a1, $s0, 0x404
    ctx->r5 = ADD32(ctx->r16, 0X404);
    // 0x802D5D84: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x802D5D88: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5D8C: bc1f        L_802D5DA8
    if (!c1cs) {
        // 0x802D5D90: nop
    
            goto L_802D5DA8;
    }
    // 0x802D5D90: nop

    // 0x802D5D94: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5D98: jal         0x8030843C
    // 0x802D5D9C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_23;
    // 0x802D5D9C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_23:
    // 0x802D5DA0: b           L_802D5DEC
    // 0x802D5DA4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5DA4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5DA8:
    // 0x802D5DA8: ldc1        $f4, 0x0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X0);
    // 0x802D5DAC: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x802D5DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5DB4: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x802D5DB8: addiu       $a1, $s0, 0x414
    ctx->r5 = ADD32(ctx->r16, 0X414);
    // 0x802D5DBC: bc1fl       L_802D5DE0
    if (!c1cs) {
        // 0x802D5DC0: mfc1        $a3, $f12
        ctx->r7 = (int32_t)ctx->f12.u32l;
            goto L_802D5DE0;
    }
    goto skip_8;
    // 0x802D5DC0: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    skip_8:
    // 0x802D5DC4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802D5DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5DCC: jal         0x8030843C
    // 0x802D5DD0: addiu       $a1, $s0, 0x40C
    ctx->r5 = ADD32(ctx->r16, 0X40C);
    static_3_8030843C(rdram, ctx);
        goto after_24;
    // 0x802D5DD0: addiu       $a1, $s0, 0x40C
    ctx->r5 = ADD32(ctx->r16, 0X40C);
    after_24:
    // 0x802D5DD4: b           L_802D5DEC
    // 0x802D5DD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802D5DEC;
    // 0x802D5DD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D5DDC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
L_802D5DE0:
    // 0x802D5DE0: jal         0x8030843C
    // 0x802D5DE4: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    static_3_8030843C(rdram, ctx);
        goto after_25;
    // 0x802D5DE4: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_25:
    // 0x802D5DE8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802D5DEC:
    // 0x802D5DEC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802D5DF0: jal         0x80200B20
    // 0x802D5DF4: lw          $a2, 0x368($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X368);
    static_3_80200B20(rdram, ctx);
        goto after_26;
    // 0x802D5DF4: lw          $a2, 0x368($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X368);
    after_26:
    // 0x802D5DF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5DFC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D5E00: lwc1        $f10, 0x370($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X370);
    // 0x802D5E04: lwc1        $f18, 0x1E8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1E8);
    // 0x802D5E08: lwc1        $f4, 0x368($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X368);
    // 0x802D5E0C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802D5E10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D5E14: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D5E18: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D5E1C: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802D5E20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D5E24: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5E28: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802D5E2C: swc1        $f8, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f8.u32l;
    // 0x802D5E30: lwc1        $f10, 0x368($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X368);
    // 0x802D5E34: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x802D5E38: nop

    // 0x802D5E3C: bc1f        L_802D5F04
    if (!c1cs) {
        // 0x802D5E40: nop
    
            goto L_802D5F04;
    }
    // 0x802D5E40: nop

    // 0x802D5E44: lbu         $t7, 0x470($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X470);
    // 0x802D5E48: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x802D5E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5E50: beq         $t7, $zero, L_802D5EF8
    if (ctx->r15 == 0) {
        // 0x802D5E54: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_802D5EF8;
    }
    // 0x802D5E54: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802D5E58: sb          $t8, 0x364($s0)
    MEM_B(0X364, ctx->r16) = ctx->r24;
    // 0x802D5E5C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x802D5E60: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802D5E64: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802D5E68: jal         0x80317194
    // 0x802D5E6C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_80317194(rdram, ctx);
        goto after_27;
    // 0x802D5E6C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_27:
    // 0x802D5E70: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802D5E74: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x802D5E78: bnel        $t2, $zero, L_802D5EFC
    if (ctx->r10 != 0) {
        // 0x802D5E7C: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_802D5EFC;
    }
    goto skip_9;
    // 0x802D5E7C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_9:
    // 0x802D5E80: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802D5E84: addiu       $a1, $sp, 0x194
    ctx->r5 = ADD32(ctx->r29, 0X194);
    // 0x802D5E88: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D5E8C: lh          $t3, 0x60($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X60);
    // 0x802D5E90: jalr        $t9
    // 0x802D5E94: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x802D5E94: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_28:
    // 0x802D5E98: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D5E9C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D5EA0: jal         0x802AAA30
    // 0x802D5EA4: addiu       $a1, $sp, 0x194
    ctx->r5 = ADD32(ctx->r29, 0X194);
    static_3_802AAA30(rdram, ctx);
        goto after_29;
    // 0x802D5EA4: addiu       $a1, $sp, 0x194
    ctx->r5 = ADD32(ctx->r29, 0X194);
    after_29:
    // 0x802D5EA8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D5EAC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D5EB0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802D5EB4: beq         $v0, $zero, L_802D5EF8
    if (ctx->r2 == 0) {
        // 0x802D5EB8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D5EF8;
    }
    // 0x802D5EB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D5EBC: jal         0x80289C5C
    // 0x802D5EC0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    static_3_80289C5C(rdram, ctx);
        goto after_30;
    // 0x802D5EC0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_30:
    // 0x802D5EC4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802D5EC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D5ECC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802D5ED0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D5ED4: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x802D5ED8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x802D5EDC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D5EE0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x802D5EE4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802D5EE8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802D5EEC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802D5EF0: jal         0x80289E78
    // 0x802D5EF4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    static_3_80289E78(rdram, ctx);
        goto after_31;
    // 0x802D5EF4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_31:
L_802D5EF8:
    // 0x802D5EF8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_802D5EFC:
    // 0x802D5EFC: b           L_802D60FC
    // 0x802D5F00: swc1        $f8, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f8.u32l;
        goto L_802D60FC;
    // 0x802D5F00: swc1        $f8, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f8.u32l;
L_802D5F04:
    // 0x802D5F04: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802D5F08: b           L_802D60FC
    // 0x802D5F0C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_802D60FC;
    // 0x802D5F0C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x802D5F10: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_802D5F14:
    // 0x802D5F14: bne         $v0, $at, L_802D60B4
    if (ctx->r2 != ctx->r1) {
        // 0x802D5F18: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_802D60B4;
    }
    // 0x802D5F18: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D5F1C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D5F20: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802D5F24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802D5F28: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802D5F2C: bne         $v0, $zero, L_802D5F3C
    if (ctx->r2 != 0) {
        // 0x802D5F30: nop
    
            goto L_802D5F3C;
    }
    // 0x802D5F30: nop

    // 0x802D5F34: lw          $v0, 0x46C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X46C);
    // 0x802D5F38: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_802D5F3C:
    // 0x802D5F3C: bne         $v0, $at, L_802D5F5C
    if (ctx->r2 != ctx->r1) {
        // 0x802D5F40: lwc1        $f0, 0x368($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X368);
            goto L_802D5F5C;
    }
    // 0x802D5F40: lwc1        $f0, 0x368($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X368);
    // 0x802D5F44: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D5F48: jal         0x80200B20
    // 0x802D5F4C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80200B20(rdram, ctx);
        goto after_32;
    // 0x802D5F4C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_32:
    // 0x802D5F50: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D5F54: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802D5F58: lwc1        $f0, 0x368($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X368);
L_802D5F5C:
    // 0x802D5F5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802D5F60: bne         $v0, $at, L_802D5F80
    if (ctx->r2 != ctx->r1) {
        // 0x802D5F64: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_802D5F80;
    }
    // 0x802D5F64: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802D5F68: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D5F6C: jal         0x80200B20
    // 0x802D5F70: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80200B20(rdram, ctx);
        goto after_33;
    // 0x802D5F70: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_33:
    // 0x802D5F74: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D5F78: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802D5F7C: lwc1        $f0, 0x368($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X368);
L_802D5F80:
    // 0x802D5F80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802D5F84: bne         $v0, $at, L_802D5FA4
    if (ctx->r2 != ctx->r1) {
        // 0x802D5F88: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_802D5FA4;
    }
    // 0x802D5F88: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802D5F8C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D5F90: jal         0x80200B20
    // 0x802D5F94: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80200B20(rdram, ctx);
        goto after_34;
    // 0x802D5F94: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_34:
    // 0x802D5F98: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D5F9C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802D5FA0: lwc1        $f0, 0x368($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X368);
L_802D5FA4:
    // 0x802D5FA4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802D5FA8: bne         $v0, $at, L_802D5FC0
    if (ctx->r2 != ctx->r1) {
        // 0x802D5FAC: addiu       $a1, $zero, 0xB
        ctx->r5 = ADD32(0, 0XB);
            goto L_802D5FC0;
    }
    // 0x802D5FAC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802D5FB0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D5FB4: jal         0x80200B20
    // 0x802D5FB8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80200B20(rdram, ctx);
        goto after_35;
    // 0x802D5FB8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_35:
    // 0x802D5FBC: lwc1        $f0, 0x368($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X368);
L_802D5FC0:
    // 0x802D5FC0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D5FC4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D5FC8: lwc1        $f16, 0x370($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X370);
    // 0x802D5FCC: lwc1        $f4, 0x1E8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1E8);
    // 0x802D5FD0: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802D5FD4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802D5FD8: nop

    // 0x802D5FDC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802D5FE0: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802D5FE4: swc1        $f8, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f8.u32l;
    // 0x802D5FE8: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802D5FEC: beq         $t5, $zero, L_802D601C
    if (ctx->r13 == 0) {
        // 0x802D5FF0: nop
    
            goto L_802D601C;
    }
    // 0x802D5FF0: nop

    // 0x802D5FF4: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802D5FF8: addiu       $a1, $sp, 0x154
    ctx->r5 = ADD32(ctx->r29, 0X154);
    // 0x802D5FFC: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D6000: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x802D6004: jalr        $t9
    // 0x802D6008: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x802D6008: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_36:
    // 0x802D600C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6010: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6014: jal         0x80289B18
    // 0x802D6018: addiu       $a1, $sp, 0x154
    ctx->r5 = ADD32(ctx->r29, 0X154);
    static_3_80289B18(rdram, ctx);
        goto after_37;
    // 0x802D6018: addiu       $a1, $sp, 0x154
    ctx->r5 = ADD32(ctx->r29, 0X154);
    after_37:
L_802D601C:
    // 0x802D601C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D6020: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D6024: lwc1        $f16, 0x368($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X368);
    // 0x802D6028: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D602C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D6030: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802D6034: nop

    // 0x802D6038: bc1fl       L_802D6100
    if (!c1cs) {
        // 0x802D603C: lwc1        $f0, 0x37C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
            goto L_802D6100;
    }
    goto skip_10;
    // 0x802D603C: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
    skip_10:
    // 0x802D6040: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802D6044: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802D6048: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D604C: bnel        $t7, $zero, L_802D6100
    if (ctx->r15 != 0) {
        // 0x802D6050: lwc1        $f0, 0x37C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
            goto L_802D6100;
    }
    goto skip_11;
    // 0x802D6050: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
    skip_11:
    // 0x802D6054: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D6058: sb          $t8, 0x364($s0)
    MEM_B(0X364, ctx->r16) = ctx->r24;
    // 0x802D605C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802D6060: swc1        $f18, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f18.u32l;
    // 0x802D6064: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x802D6068: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D606C: addiu       $a1, $sp, 0x154
    ctx->r5 = ADD32(ctx->r29, 0X154);
    // 0x802D6070: sh          $zero, 0x1890($t1)
    MEM_H(0X1890, ctx->r9) = 0;
    // 0x802D6074: jal         0x802AABD0
    // 0x802D6078: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AABD0(rdram, ctx);
        goto after_38;
    // 0x802D6078: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_38:
    // 0x802D607C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D6080: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D6084: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802D6088: beq         $v0, $zero, L_802D60FC
    if (ctx->r2 == 0) {
        // 0x802D608C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D60FC;
    }
    // 0x802D608C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D6090: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x802D6094: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D6098: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x802D609C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D60A0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D60A4: jal         0x80320634
    // 0x802D60A8: nop

    static_3_80320634(rdram, ctx);
        goto after_39;
    // 0x802D60A8: nop

    after_39:
    // 0x802D60AC: b           L_802D6100
    // 0x802D60B0: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
        goto L_802D6100;
    // 0x802D60B0: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
L_802D60B4:
    // 0x802D60B4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802D60B8: bne         $v0, $at, L_802D60E4
    if (ctx->r2 != ctx->r1) {
        // 0x802D60BC: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_802D60E4;
    }
    // 0x802D60BC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D60C0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D60C4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x802D60C8: beql        $a0, $zero, L_802D6100
    if (ctx->r4 == 0) {
        // 0x802D60CC: lwc1        $f0, 0x37C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
            goto L_802D6100;
    }
    goto skip_12;
    // 0x802D60CC: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
    skip_12:
    // 0x802D60D0: lbu         $t2, 0x30D($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X30D);
    // 0x802D60D4: bnel        $t2, $zero, L_802D6100
    if (ctx->r10 != 0) {
        // 0x802D60D8: lwc1        $f0, 0x37C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
            goto L_802D6100;
    }
    goto skip_13;
    // 0x802D60D8: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
    skip_13:
    // 0x802D60DC: b           L_802D60FC
    // 0x802D60E0: sb          $zero, 0x364($s0)
    MEM_B(0X364, ctx->r16) = 0;
        goto L_802D60FC;
    // 0x802D60E0: sb          $zero, 0x364($s0)
    MEM_B(0X364, ctx->r16) = 0;
L_802D60E4:
    // 0x802D60E4: bnel        $v0, $zero, L_802D6100
    if (ctx->r2 != 0) {
        // 0x802D60E8: lwc1        $f0, 0x37C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
            goto L_802D6100;
    }
    goto skip_14;
    // 0x802D60E8: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
    skip_14:
    // 0x802D60EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D60F0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802D60F4: sb          $t3, 0x19B($s0)
    MEM_B(0X19B, ctx->r16) = ctx->r11;
    // 0x802D60F8: swc1        $f4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f4.u32l;
L_802D60FC:
    // 0x802D60FC: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
L_802D6100:
    // 0x802D6100: lwc1        $f6, 0x1E4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x802D6104: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802D6108: nop

    // 0x802D610C: bc1fl       L_802D6130
    if (!c1cs) {
        // 0x802D6110: lbu         $t6, 0xE0C($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0XE0C);
            goto L_802D6130;
    }
    goto skip_15;
    // 0x802D6110: lbu         $t6, 0xE0C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XE0C);
    skip_15:
    // 0x802D6114: lbu         $t4, 0x47E($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X47E);
    // 0x802D6118: bnel        $t4, $zero, L_802D6130
    if (ctx->r12 != 0) {
        // 0x802D611C: lbu         $t6, 0xE0C($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0XE0C);
            goto L_802D6130;
    }
    goto skip_16;
    // 0x802D611C: lbu         $t6, 0xE0C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XE0C);
    skip_16:
    // 0x802D6120: lbu         $t5, 0x481($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X481);
    // 0x802D6124: beql        $t5, $zero, L_802D613C
    if (ctx->r13 == 0) {
        // 0x802D6128: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_802D613C;
    }
    goto skip_17;
    // 0x802D6128: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_17:
    // 0x802D612C: lbu         $t6, 0xE0C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XE0C);
L_802D6130:
    // 0x802D6130: beql        $t6, $zero, L_802D616C
    if (ctx->r14 == 0) {
        // 0x802D6134: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_802D616C;
    }
    goto skip_18;
    // 0x802D6134: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_18:
    // 0x802D6138: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_802D613C:
    // 0x802D613C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802D6140: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x802D6144: addiu       $t8, $s0, 0x47E
    ctx->r24 = ADD32(ctx->r16, 0X47E);
    // 0x802D6148: sb          $t9, 0x481($s0)
    MEM_B(0X481, ctx->r16) = ctx->r25;
    // 0x802D614C: sw          $t7, 0x48C($s0)
    MEM_W(0X48C, ctx->r16) = ctx->r15;
    // 0x802D6150: sw          $t8, 0x484($s0)
    MEM_W(0X484, ctx->r16) = ctx->r24;
    // 0x802D6154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D6158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D615C: jal         0x803073E8
    // 0x802D6160: swc1        $f8, 0x488($s0)
    MEM_W(0X488, ctx->r16) = ctx->f8.u32l;
    static_3_803073E8(rdram, ctx);
        goto after_40;
    // 0x802D6160: swc1        $f8, 0x488($s0)
    MEM_W(0X488, ctx->r16) = ctx->f8.u32l;
    after_40:
    // 0x802D6164: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x802D6168: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_802D616C:
    // 0x802D616C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D6170: lwc1        $f18, 0x1E4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x802D6174: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x802D6178: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802D617C: nop

    // 0x802D6180: bc1fl       L_802D61A4
    if (!c1cs) {
        // 0x802D6184: lbu         $t3, 0xE0C($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XE0C);
            goto L_802D61A4;
    }
    goto skip_19;
    // 0x802D6184: lbu         $t3, 0xE0C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE0C);
    skip_19:
    // 0x802D6188: lbu         $t1, 0x47D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X47D);
    // 0x802D618C: bnel        $t1, $zero, L_802D61A4
    if (ctx->r9 != 0) {
        // 0x802D6190: lbu         $t3, 0xE0C($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XE0C);
            goto L_802D61A4;
    }
    goto skip_20;
    // 0x802D6190: lbu         $t3, 0xE0C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE0C);
    skip_20:
    // 0x802D6194: lbu         $t2, 0x481($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X481);
    // 0x802D6198: beql        $t2, $zero, L_802D61B0
    if (ctx->r10 == 0) {
        // 0x802D619C: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_802D61B0;
    }
    goto skip_21;
    // 0x802D619C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_21:
    // 0x802D61A0: lbu         $t3, 0xE0C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE0C);
L_802D61A4:
    // 0x802D61A4: beql        $t3, $zero, L_802D61DC
    if (ctx->r11 == 0) {
        // 0x802D61A8: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_802D61DC;
    }
    goto skip_22;
    // 0x802D61A8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    skip_22:
    // 0x802D61AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_802D61B0:
    // 0x802D61B0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802D61B4: addiu       $t5, $s0, 0x47D
    ctx->r13 = ADD32(ctx->r16, 0X47D);
    // 0x802D61B8: sb          $t4, 0x481($s0)
    MEM_B(0X481, ctx->r16) = ctx->r12;
    // 0x802D61BC: sw          $zero, 0x48C($s0)
    MEM_W(0X48C, ctx->r16) = 0;
    // 0x802D61C0: sw          $t5, 0x484($s0)
    MEM_W(0X484, ctx->r16) = ctx->r13;
    // 0x802D61C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D61C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D61CC: jal         0x803073E8
    // 0x802D61D0: swc1        $f4, 0x488($s0)
    MEM_W(0X488, ctx->r16) = ctx->f4.u32l;
    static_3_803073E8(rdram, ctx);
        goto after_41;
    // 0x802D61D0: swc1        $f4, 0x488($s0)
    MEM_W(0X488, ctx->r16) = ctx->f4.u32l;
    after_41:
    // 0x802D61D4: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x802D61D8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_802D61DC:
    // 0x802D61DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D61E0: lwc1        $f10, 0x1E4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x802D61E4: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802D61E8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802D61EC: nop

    // 0x802D61F0: bc1fl       L_802D6214
    if (!c1cs) {
        // 0x802D61F4: lbu         $t7, 0xE0C($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0XE0C);
            goto L_802D6214;
    }
    goto skip_23;
    // 0x802D61F4: lbu         $t7, 0xE0C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE0C);
    skip_23:
    // 0x802D61F8: lbu         $t6, 0x480($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X480);
    // 0x802D61FC: bnel        $t6, $zero, L_802D6214
    if (ctx->r14 != 0) {
        // 0x802D6200: lbu         $t7, 0xE0C($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0XE0C);
            goto L_802D6214;
    }
    goto skip_24;
    // 0x802D6200: lbu         $t7, 0xE0C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE0C);
    skip_24:
    // 0x802D6204: lbu         $t9, 0x481($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X481);
    // 0x802D6208: beql        $t9, $zero, L_802D6220
    if (ctx->r25 == 0) {
        // 0x802D620C: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_802D6220;
    }
    goto skip_25;
    // 0x802D620C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_25:
    // 0x802D6210: lbu         $t7, 0xE0C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE0C);
L_802D6214:
    // 0x802D6214: beql        $t7, $zero, L_802D6250
    if (ctx->r15 == 0) {
        // 0x802D6218: lui         $at, 0x425C
        ctx->r1 = S32(0X425C << 16);
            goto L_802D6250;
    }
    goto skip_26;
    // 0x802D6218: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    skip_26:
    // 0x802D621C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_802D6220:
    // 0x802D6220: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802D6224: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802D6228: addiu       $t2, $s0, 0x480
    ctx->r10 = ADD32(ctx->r16, 0X480);
    // 0x802D622C: sb          $t8, 0x481($s0)
    MEM_B(0X481, ctx->r16) = ctx->r24;
    // 0x802D6230: sw          $t1, 0x48C($s0)
    MEM_W(0X48C, ctx->r16) = ctx->r9;
    // 0x802D6234: sw          $t2, 0x484($s0)
    MEM_W(0X484, ctx->r16) = ctx->r10;
    // 0x802D6238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D623C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D6240: jal         0x80307170
    // 0x802D6244: swc1        $f16, 0x488($s0)
    MEM_W(0X488, ctx->r16) = ctx->f16.u32l;
    static_3_80307170(rdram, ctx);
        goto after_42;
    // 0x802D6244: swc1        $f16, 0x488($s0)
    MEM_W(0X488, ctx->r16) = ctx->f16.u32l;
    after_42:
    // 0x802D6248: lwc1        $f0, 0x37C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x802D624C: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
L_802D6250:
    // 0x802D6250: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D6254: lwc1        $f6, 0x1E4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x802D6258: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x802D625C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802D6260: nop

    // 0x802D6264: bc1fl       L_802D6288
    if (!c1cs) {
        // 0x802D6268: lbu         $t5, 0xE0C($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0XE0C);
            goto L_802D6288;
    }
    goto skip_27;
    // 0x802D6268: lbu         $t5, 0xE0C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XE0C);
    skip_27:
    // 0x802D626C: lbu         $t3, 0x47F($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X47F);
    // 0x802D6270: bnel        $t3, $zero, L_802D6288
    if (ctx->r11 != 0) {
        // 0x802D6274: lbu         $t5, 0xE0C($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0XE0C);
            goto L_802D6288;
    }
    goto skip_28;
    // 0x802D6274: lbu         $t5, 0xE0C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XE0C);
    skip_28:
    // 0x802D6278: lbu         $t4, 0x481($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X481);
    // 0x802D627C: beql        $t4, $zero, L_802D6294
    if (ctx->r12 == 0) {
        // 0x802D6280: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_802D6294;
    }
    goto skip_29;
    // 0x802D6280: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_29:
    // 0x802D6284: lbu         $t5, 0xE0C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XE0C);
L_802D6288:
    // 0x802D6288: beql        $t5, $zero, L_802D62D4
    if (ctx->r13 == 0) {
        // 0x802D628C: lbu         $t8, 0x481($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X481);
            goto L_802D62D4;
    }
    goto skip_30;
    // 0x802D628C: lbu         $t8, 0x481($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X481);
    skip_30:
    // 0x802D6290: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_802D6294:
    // 0x802D6294: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802D6298: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802D629C: addiu       $t7, $s0, 0x47F
    ctx->r15 = ADD32(ctx->r16, 0X47F);
    // 0x802D62A0: sb          $t6, 0x481($s0)
    MEM_B(0X481, ctx->r16) = ctx->r14;
    // 0x802D62A4: sw          $t9, 0x48C($s0)
    MEM_W(0X48C, ctx->r16) = ctx->r25;
    // 0x802D62A8: sw          $t7, 0x484($s0)
    MEM_W(0X484, ctx->r16) = ctx->r15;
    // 0x802D62AC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D62B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802D62B4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802D62B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802D62BC: jal         0x8021B240
    // 0x802D62C0: swc1        $f8, 0x488($s0)
    MEM_W(0X488, ctx->r16) = ctx->f8.u32l;
    static_3_8021B240(rdram, ctx);
        goto after_43;
    // 0x802D62C0: swc1        $f8, 0x488($s0)
    MEM_W(0X488, ctx->r16) = ctx->f8.u32l;
    after_43:
    // 0x802D62C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D62C8: jal         0x80307170
    // 0x802D62CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80307170(rdram, ctx);
        goto after_44;
    // 0x802D62CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_44:
    // 0x802D62D0: lbu         $t8, 0x481($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X481);
L_802D62D4:
    // 0x802D62D4: beql        $t8, $zero, L_802D6350
    if (ctx->r24 == 0) {
        // 0x802D62D8: lw          $v0, 0x1A0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1A0);
            goto L_802D6350;
    }
    goto skip_31;
    // 0x802D62D8: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    skip_31:
    // 0x802D62DC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D62E0: lw          $a1, 0x48C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X48C);
    // 0x802D62E4: jal         0x80200B20
    // 0x802D62E8: lw          $a2, 0x488($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X488);
    static_3_80200B20(rdram, ctx);
        goto after_45;
    // 0x802D62E8: lw          $a2, 0x488($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X488);
    after_45:
    // 0x802D62EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D62F0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D62F4: lwc1        $f16, 0x1E8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1E8);
    // 0x802D62F8: lwc1        $f4, 0x488($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X488);
    // 0x802D62FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D6300: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802D6304: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D6308: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802D630C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D6310: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D6314: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x802D6318: swc1        $f6, 0x488($s0)
    MEM_W(0X488, ctx->r16) = ctx->f6.u32l;
    // 0x802D631C: lwc1        $f8, 0x488($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X488);
    // 0x802D6320: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802D6324: nop

    // 0x802D6328: bc1fl       L_802D6350
    if (!c1cs) {
        // 0x802D632C: lw          $v0, 0x1A0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1A0);
            goto L_802D6350;
    }
    goto skip_32;
    // 0x802D632C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    skip_32:
    // 0x802D6330: lw          $t2, 0x484($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X484);
    // 0x802D6334: sb          $zero, 0x481($s0)
    MEM_B(0X481, ctx->r16) = 0;
    // 0x802D6338: jal         0x803073E8
    // 0x802D633C: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    static_3_803073E8(rdram, ctx);
        goto after_46;
    // 0x802D633C: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    after_46:
    // 0x802D6340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D6344: jal         0x80307170
    // 0x802D6348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80307170(rdram, ctx);
        goto after_47;
    // 0x802D6348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_47:
    // 0x802D634C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
L_802D6350:
    // 0x802D6350: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D6354: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D6358: lh          $t3, 0x60($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X60);
    // 0x802D635C: jalr        $t9
    // 0x802D6360: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x802D6360: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_48:
    // 0x802D6364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D6368: jal         0x803071FC
    // 0x802D636C: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    static_3_803071FC(rdram, ctx);
        goto after_49;
    // 0x802D636C: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    after_49:
    // 0x802D6370: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D6374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D6378: jal         0x8021B6D4
    // 0x802D637C: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_50;
    // 0x802D637C: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_50:
    // 0x802D6380: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D6384: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D6388: jal         0x802297A8
    // 0x802D638C: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_51;
    // 0x802D638C: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_51:
    // 0x802D6390: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D6394: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x802D6398: jal         0x8021B6D4
    // 0x802D639C: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_52;
    // 0x802D639C: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_52:
    // 0x802D63A0: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D63A4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D63A8: jal         0x802297A8
    // 0x802D63AC: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_53;
    // 0x802D63AC: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_53:
    // 0x802D63B0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D63B4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x802D63B8: jal         0x8021B6D4
    // 0x802D63BC: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_54;
    // 0x802D63BC: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_54:
    // 0x802D63C0: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D63C4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D63C8: jal         0x802297A8
    // 0x802D63CC: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_55;
    // 0x802D63CC: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_55:
    // 0x802D63D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D63D4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802D63D8: jal         0x8021B6D4
    // 0x802D63DC: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_56;
    // 0x802D63DC: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_56:
    // 0x802D63E0: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D63E4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D63E8: jal         0x802297A8
    // 0x802D63EC: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_57;
    // 0x802D63EC: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_57:
    // 0x802D63F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D63F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D63F8: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D63FC: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802D6400: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x802D6404: nop

    // 0x802D6408: bc1f        L_802D6414
    if (!c1cs) {
        // 0x802D640C: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802D6414;
    }
    // 0x802D640C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D6410: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_802D6414:
    // 0x802D6414: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x802D6418: bne         $t4, $zero, L_802D64A4
    if (ctx->r12 != 0) {
        // 0x802D641C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802D64A4;
    }
    // 0x802D641C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D6420: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D6424: lwc1        $f18, 0x10C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D6428: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D642C: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x802D6430: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x802D6434: addiu       $a2, $sp, 0xCC
    ctx->r6 = ADD32(ctx->r29, 0XCC);
    // 0x802D6438: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    // 0x802D643C: addiu       $t5, $sp, 0xC4
    ctx->r13 = ADD32(ctx->r29, 0XC4);
    // 0x802D6440: bc1f        L_802D64A4
    if (!c1cs) {
        // 0x802D6444: addiu       $t6, $sp, 0xC0
        ctx->r14 = ADD32(ctx->r29, 0XC0);
            goto L_802D64A4;
    }
    // 0x802D6444: addiu       $t6, $sp, 0xC0
    ctx->r14 = ADD32(ctx->r29, 0XC0);
    // 0x802D6448: addiu       $t7, $sp, 0xBC
    ctx->r15 = ADD32(ctx->r29, 0XBC);
    // 0x802D644C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802D6450: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802D6454: jal         0x802CF1C8
    // 0x802D6458: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    static_3_802CF1C8(rdram, ctx);
        goto after_58;
    // 0x802D6458: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_58:
    // 0x802D645C: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x802D6460: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D6464: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D6468: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D646C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6470: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802D6474: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D6478: jal         0x802AABD0
    // 0x802D647C: swc1        $f16, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f16.u32l;
    static_3_802AABD0(rdram, ctx);
        goto after_59;
    // 0x802D647C: swc1        $f16, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f16.u32l;
    after_59:
    // 0x802D6480: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D6484: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D6488: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802D648C: beq         $v0, $zero, L_802D64A4
    if (ctx->r2 == 0) {
        // 0x802D6490: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D64A4;
    }
    // 0x802D6490: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D6494: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x802D6498: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x802D649C: jal         0x80320634
    // 0x802D64A0: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    static_3_80320634(rdram, ctx);
        goto after_60;
    // 0x802D64A0: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_60:
L_802D64A4:
    // 0x802D64A4: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802D64A8: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D64AC: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D64B0: lh          $t8, 0x60($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X60);
    // 0x802D64B4: jalr        $t9
    // 0x802D64B8: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x802D64B8: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_61:
    // 0x802D64BC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D64C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D64C4: jal         0x8021B6D4
    // 0x802D64C8: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_62;
    // 0x802D64C8: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_62:
    // 0x802D64CC: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D64D0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D64D4: jal         0x802297A8
    // 0x802D64D8: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_63;
    // 0x802D64D8: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_63:
    // 0x802D64DC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D64E0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802D64E4: jal         0x8021B6D4
    // 0x802D64E8: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_64;
    // 0x802D64E8: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_64:
    // 0x802D64EC: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D64F0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D64F4: jal         0x802297A8
    // 0x802D64F8: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_65;
    // 0x802D64F8: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_65:
    // 0x802D64FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D6500: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x802D6504: jal         0x8021B6D4
    // 0x802D6508: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_66;
    // 0x802D6508: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_66:
    // 0x802D650C: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D6510: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D6514: jal         0x802297A8
    // 0x802D6518: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_67;
    // 0x802D6518: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_67:
    // 0x802D651C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D6520: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802D6524: jal         0x8021B6D4
    // 0x802D6528: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_68;
    // 0x802D6528: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_68:
    // 0x802D652C: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D6530: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D6534: jal         0x802297A8
    // 0x802D6538: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_69;
    // 0x802D6538: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_69:
    // 0x802D653C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D6540: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D6544: lwc1        $f18, 0x10C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D6548: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802D654C: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x802D6550: nop

    // 0x802D6554: bc1f        L_802D6560
    if (!c1cs) {
        // 0x802D6558: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802D6560;
    }
    // 0x802D6558: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D655C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_802D6560:
    // 0x802D6560: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x802D6564: bne         $t1, $zero, L_802D65F0
    if (ctx->r9 != 0) {
        // 0x802D6568: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802D65F0;
    }
    // 0x802D6568: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D656C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D6570: lwc1        $f6, 0x10C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D6574: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D6578: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x802D657C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802D6580: addiu       $a2, $sp, 0xCC
    ctx->r6 = ADD32(ctx->r29, 0XCC);
    // 0x802D6584: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    // 0x802D6588: addiu       $t2, $sp, 0xC4
    ctx->r10 = ADD32(ctx->r29, 0XC4);
    // 0x802D658C: bc1f        L_802D65F0
    if (!c1cs) {
        // 0x802D6590: addiu       $t3, $sp, 0xC0
        ctx->r11 = ADD32(ctx->r29, 0XC0);
            goto L_802D65F0;
    }
    // 0x802D6590: addiu       $t3, $sp, 0xC0
    ctx->r11 = ADD32(ctx->r29, 0XC0);
    // 0x802D6594: addiu       $t4, $sp, 0xBC
    ctx->r12 = ADD32(ctx->r29, 0XBC);
    // 0x802D6598: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802D659C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802D65A0: jal         0x802CF1C8
    // 0x802D65A4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    static_3_802CF1C8(rdram, ctx);
        goto after_70;
    // 0x802D65A4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_70:
    // 0x802D65A8: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x802D65AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D65B0: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D65B4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D65B8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D65BC: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802D65C0: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D65C4: jal         0x802AABD0
    // 0x802D65C8: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    static_3_802AABD0(rdram, ctx);
        goto after_71;
    // 0x802D65C8: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    after_71:
    // 0x802D65CC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D65D0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D65D4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802D65D8: beq         $v0, $zero, L_802D65F0
    if (ctx->r2 == 0) {
        // 0x802D65DC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D65F0;
    }
    // 0x802D65DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D65E0: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x802D65E4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x802D65E8: jal         0x80320634
    // 0x802D65EC: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    static_3_80320634(rdram, ctx);
        goto after_72;
    // 0x802D65EC: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_72:
L_802D65F0:
    // 0x802D65F0: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802D65F4: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D65F8: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D65FC: lh          $t5, 0x60($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X60);
    // 0x802D6600: jalr        $t9
    // 0x802D6604: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x802D6604: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    after_73:
    // 0x802D6608: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D660C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D6610: jal         0x8021B6D4
    // 0x802D6614: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_74;
    // 0x802D6614: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_74:
    // 0x802D6618: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D661C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D6620: jal         0x802297A8
    // 0x802D6624: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_75;
    // 0x802D6624: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_75:
    // 0x802D6628: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D662C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x802D6630: jal         0x8021B6D4
    // 0x802D6634: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_76;
    // 0x802D6634: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_76:
    // 0x802D6638: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D663C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D6640: jal         0x802297A8
    // 0x802D6644: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_77;
    // 0x802D6644: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_77:
    // 0x802D6648: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D664C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x802D6650: jal         0x8021B6D4
    // 0x802D6654: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_78;
    // 0x802D6654: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_78:
    // 0x802D6658: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D665C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D6660: jal         0x802297A8
    // 0x802D6664: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_79;
    // 0x802D6664: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_79:
    // 0x802D6668: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D666C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x802D6670: jal         0x8021B6D4
    // 0x802D6674: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_80;
    // 0x802D6674: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_80:
    // 0x802D6678: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D667C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802D6680: jal         0x802297A8
    // 0x802D6684: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_81;
    // 0x802D6684: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_81:
    // 0x802D6688: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D668C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D6690: lwc1        $f6, 0x10C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D6694: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802D6698: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x802D669C: nop

    // 0x802D66A0: bc1f        L_802D66AC
    if (!c1cs) {
        // 0x802D66A4: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802D66AC;
    }
    // 0x802D66A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D66A8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_802D66AC:
    // 0x802D66AC: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802D66B0: bne         $t7, $zero, L_802D673C
    if (ctx->r15 != 0) {
        // 0x802D66B4: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802D673C;
    }
    // 0x802D66B4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D66B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D66BC: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D66C0: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D66C4: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x802D66C8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802D66CC: addiu       $a2, $sp, 0xCC
    ctx->r6 = ADD32(ctx->r29, 0XCC);
    // 0x802D66D0: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    // 0x802D66D4: addiu       $t8, $sp, 0xC4
    ctx->r24 = ADD32(ctx->r29, 0XC4);
    // 0x802D66D8: bc1f        L_802D673C
    if (!c1cs) {
        // 0x802D66DC: addiu       $t1, $sp, 0xC0
        ctx->r9 = ADD32(ctx->r29, 0XC0);
            goto L_802D673C;
    }
    // 0x802D66DC: addiu       $t1, $sp, 0xC0
    ctx->r9 = ADD32(ctx->r29, 0XC0);
    // 0x802D66E0: addiu       $t2, $sp, 0xBC
    ctx->r10 = ADD32(ctx->r29, 0XBC);
    // 0x802D66E4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802D66E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802D66EC: jal         0x802CF1C8
    // 0x802D66F0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    static_3_802CF1C8(rdram, ctx);
        goto after_82;
    // 0x802D66F0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_82:
    // 0x802D66F4: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x802D66F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D66FC: lwc1        $f16, 0x10C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D6700: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6704: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6708: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x802D670C: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D6710: jal         0x802AABD0
    // 0x802D6714: swc1        $f18, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f18.u32l;
    static_3_802AABD0(rdram, ctx);
        goto after_83;
    // 0x802D6714: swc1        $f18, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f18.u32l;
    after_83:
    // 0x802D6718: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D671C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D6720: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802D6724: beq         $v0, $zero, L_802D673C
    if (ctx->r2 == 0) {
        // 0x802D6728: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D673C;
    }
    // 0x802D6728: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D672C: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x802D6730: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x802D6734: jal         0x80320634
    // 0x802D6738: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    static_3_80320634(rdram, ctx);
        goto after_84;
    // 0x802D6738: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_84:
L_802D673C:
    // 0x802D673C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802D6740: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D6744: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D6748: lh          $t3, 0x60($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X60);
    // 0x802D674C: jalr        $t9
    // 0x802D6750: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x802D6750: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_85:
    // 0x802D6754: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D6758: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D675C: jal         0x8021B6D4
    // 0x802D6760: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_86;
    // 0x802D6760: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_86:
    // 0x802D6764: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D6768: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802D676C: jal         0x802297A8
    // 0x802D6770: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_87;
    // 0x802D6770: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_87:
    // 0x802D6774: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D6778: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x802D677C: jal         0x8021B6D4
    // 0x802D6780: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_88;
    // 0x802D6780: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_88:
    // 0x802D6784: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D6788: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802D678C: jal         0x802297A8
    // 0x802D6790: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_89;
    // 0x802D6790: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_89:
    // 0x802D6794: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D6798: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x802D679C: jal         0x8021B6D4
    // 0x802D67A0: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_90;
    // 0x802D67A0: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_90:
    // 0x802D67A4: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D67A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802D67AC: jal         0x802297A8
    // 0x802D67B0: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_91;
    // 0x802D67B0: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_91:
    // 0x802D67B4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D67B8: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x802D67BC: jal         0x8021B6D4
    // 0x802D67C0: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_8021B6D4(rdram, ctx);
        goto after_92;
    // 0x802D67C0: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_92:
    // 0x802D67C4: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D67C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802D67CC: jal         0x802297A8
    // 0x802D67D0: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    static_3_802297A8(rdram, ctx);
        goto after_93;
    // 0x802D67D0: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_93:
    // 0x802D67D4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D67D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D67DC: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D67E0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D67E4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802D67E8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802D67EC: nop

    // 0x802D67F0: bc1f        L_802D67FC
    if (!c1cs) {
        // 0x802D67F4: nop
    
            goto L_802D67FC;
    }
    // 0x802D67F4: nop

    // 0x802D67F8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_802D67FC:
    // 0x802D67FC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802D6800: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D6804: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D6808: bnel        $t8, $zero, L_802D6894
    if (ctx->r24 != 0) {
        // 0x802D680C: lwc1        $f0, 0x490($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X490);
            goto L_802D6894;
    }
    goto skip_33;
    // 0x802D680C: lwc1        $f0, 0x490($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X490);
    skip_33:
    // 0x802D6810: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D6814: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x802D6818: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x802D681C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802D6820: addiu       $a2, $sp, 0xCC
    ctx->r6 = ADD32(ctx->r29, 0XCC);
    // 0x802D6824: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    // 0x802D6828: addiu       $t1, $sp, 0xC4
    ctx->r9 = ADD32(ctx->r29, 0XC4);
    // 0x802D682C: bc1f        L_802D6890
    if (!c1cs) {
        // 0x802D6830: addiu       $t2, $sp, 0xC0
        ctx->r10 = ADD32(ctx->r29, 0XC0);
            goto L_802D6890;
    }
    // 0x802D6830: addiu       $t2, $sp, 0xC0
    ctx->r10 = ADD32(ctx->r29, 0XC0);
    // 0x802D6834: addiu       $t3, $sp, 0xBC
    ctx->r11 = ADD32(ctx->r29, 0XBC);
    // 0x802D6838: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802D683C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802D6840: jal         0x802CF1C8
    // 0x802D6844: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    static_3_802CF1C8(rdram, ctx);
        goto after_94;
    // 0x802D6844: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_94:
    // 0x802D6848: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x802D684C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D6850: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802D6854: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6858: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D685C: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x802D6860: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x802D6864: jal         0x802AABD0
    // 0x802D6868: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    static_3_802AABD0(rdram, ctx);
        goto after_95;
    // 0x802D6868: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    after_95:
    // 0x802D686C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D6870: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D6874: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802D6878: beq         $v0, $zero, L_802D6890
    if (ctx->r2 == 0) {
        // 0x802D687C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D6890;
    }
    // 0x802D687C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D6880: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x802D6884: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x802D6888: jal         0x80320634
    // 0x802D688C: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    static_3_80320634(rdram, ctx);
        goto after_96;
    // 0x802D688C: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_96:
L_802D6890:
    // 0x802D6890: lwc1        $f0, 0x490($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X490);
L_802D6894:
    // 0x802D6894: lwc1        $f8, 0x1E4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x802D6898: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802D689C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802D68A0: nop

    // 0x802D68A4: bc1fl       L_802D6A50
    if (!c1cs) {
        // 0x802D68A8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802D6A50;
    }
    goto skip_34;
    // 0x802D68A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_34:
    // 0x802D68AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D68B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D68B4: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x802D68B8: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x802D68BC: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    // 0x802D68C0: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x802D68C4: jal         0x80318498
    // 0x802D68C8: swc1        $f16, 0x490($s0)
    MEM_W(0X490, ctx->r16) = ctx->f16.u32l;
    static_3_80318498(rdram, ctx);
        goto after_97;
    // 0x802D68C8: swc1        $f16, 0x490($s0)
    MEM_W(0X490, ctx->r16) = ctx->f16.u32l;
    after_97:
    // 0x802D68CC: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x802D68D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D68D4: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802D68D8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D68DC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D68E0: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x802D68E4: jal         0x802AF028
    // 0x802D68E8: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    static_3_802AF028(rdram, ctx);
        goto after_98;
    // 0x802D68E8: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    after_98:
    // 0x802D68EC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802D68F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D68F4: addiu       $t9, $sp, 0xA8
    ctx->r25 = ADD32(ctx->r29, 0XA8);
    // 0x802D68F8: addiu       $t4, $sp, 0xA4
    ctx->r12 = ADD32(ctx->r29, 0XA4);
    // 0x802D68FC: addiu       $t5, $sp, 0xA0
    ctx->r13 = ADD32(ctx->r29, 0XA0);
    // 0x802D6900: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802D6904: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802D6908: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802D690C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D6910: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x802D6914: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x802D6918: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x802D691C: jal         0x80213BA8
    // 0x802D6920: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_80213BA8(rdram, ctx);
        goto after_99;
    // 0x802D6920: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_99:
    // 0x802D6924: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802D6928: bne         $at, $zero, L_802D6A4C
    if (ctx->r1 != 0) {
        // 0x802D692C: sw          $v0, 0xAC($sp)
        MEM_W(0XAC, ctx->r29) = ctx->r2;
            goto L_802D6A4C;
    }
    // 0x802D692C: sw          $v0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r2;
    // 0x802D6930: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802D6934: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    // 0x802D6938: blez        $v0, L_802D6A4C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802D693C: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_802D6A4C;
    }
    // 0x802D693C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x802D6940: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802D6944: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
L_802D6948:
    // 0x802D6948: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x802D694C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802D6950: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x802D6954: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x802D6958: beql        $t1, $a1, L_802D6A3C
    if (ctx->r9 == ctx->r5) {
        // 0x802D695C: lw          $t2, 0xAC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XAC);
            goto L_802D6A3C;
    }
    goto skip_35;
    // 0x802D695C: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    skip_35:
    // 0x802D6960: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x802D6964: sw          $a1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r5;
    // 0x802D6968: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D696C: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x802D6970: lwc1        $f16, 0x0($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802D6974: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x802D6978: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x802D697C: mul.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802D6980: subu        $t4, $t4, $t0
    ctx->r12 = SUB32(ctx->r12, ctx->r8);
    // 0x802D6984: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802D6988: addu        $v0, $t9, $t4
    ctx->r2 = ADD32(ctx->r25, ctx->r12);
    // 0x802D698C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802D6990: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802D6994: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x802D6998: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802D699C: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802D69A0: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x802D69A4: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x802D69A8: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802D69AC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802D69B0: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802D69B4: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x802D69B8: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x802D69BC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802D69C0: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
    // 0x802D69C4: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x802D69C8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802D69CC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802D69D0: jal         0x8022970C
    // 0x802D69D4: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    func_8022970C(rdram, ctx);
        goto after_100;
    // 0x802D69D4: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    after_100:
    // 0x802D69D8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x802D69DC: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x802D69E0: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x802D69E4: jal         0x8022A0D0
    // 0x802D69E8: lw          $a3, 0x8C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8C);
    static_3_8022A0D0(rdram, ctx);
        goto after_101;
    // 0x802D69E8: lw          $a3, 0x8C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8C);
    after_101:
    // 0x802D69EC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802D69F0: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    // 0x802D69F4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802D69F8: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x802D69FC: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x802D6A00: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x802D6A04: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802D6A08: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6A0C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802D6A10: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x802D6A14: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x802D6A18: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802D6A1C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D6A24: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x802D6A28: jal         0x802AF254
    // 0x802D6A2C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    static_3_802AF254(rdram, ctx);
        goto after_102;
    // 0x802D6A2C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_102:
    // 0x802D6A30: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802D6A34: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x802D6A38: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
L_802D6A3C:
    // 0x802D6A3C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x802D6A40: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802D6A44: bnel        $t0, $t2, L_802D6948
    if (ctx->r8 != ctx->r10) {
        // 0x802D6A48: lw          $t7, 0xA8($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XA8);
            goto L_802D6948;
    }
    goto skip_36;
    // 0x802D6A48: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    skip_36:
L_802D6A4C:
    // 0x802D6A4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802D6A50:
    // 0x802D6A50: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802D6A54: addiu       $sp, $sp, 0x1E0
    ctx->r29 = ADD32(ctx->r29, 0X1E0);
    // 0x802D6A58: jr          $ra
    // 0x802D6A5C: nop

    return;
    // 0x802D6A5C: nop

;}
RECOMP_FUNC void D_80242C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242C70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242C74: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80242C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242C7C: beq         $a1, $at, L_80242DD4
    if (ctx->r5 == ctx->r1) {
        // 0x80242C80: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80242DD4;
    }
    // 0x80242C80: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80242C84: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80242C88: bnel        $a1, $at, L_80242E38
    if (ctx->r5 != ctx->r1) {
        // 0x80242C8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80242E38;
    }
    goto skip_0;
    // 0x80242C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80242C90: sw          $a2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r6;
    // 0x80242C94: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80242C98: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x80242C9C: lui         $t7, 0x8024
    ctx->r15 = S32(0X8024 << 16);
    // 0x80242CA0: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
    // 0x80242CA4: lbu         $v0, 0x8($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X8);
    // 0x80242CA8: beql        $v0, $zero, L_80242CC8
    if (ctx->r2 == 0) {
        // 0x80242CAC: lw          $v0, 0x28($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X28);
            goto L_80242CC8;
    }
    goto skip_1;
    // 0x80242CAC: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    skip_1:
    // 0x80242CB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80242CB4: beq         $v0, $a0, L_80242D88
    if (ctx->r2 == ctx->r4) {
        // 0x80242CB8: lui         $t0, 0x0
        ctx->r8 = S32(0X0 << 16);
            goto L_80242D88;
    }
    // 0x80242CB8: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80242CBC: b           L_80242E38
    // 0x80242CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80242E38;
    // 0x80242CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242CC4: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
L_80242CC8:
    // 0x80242CC8: addiu       $t7, $t7, 0x336C
    ctx->r15 = ADD32(ctx->r15, 0X336C);
    // 0x80242CCC: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x80242CD0: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x80242CD4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80242CD8: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x80242CDC: mflo        $t9
    ctx->r25 = lo;
    // 0x80242CE0: bne         $a1, $zero, L_80242CEC
    if (ctx->r5 != 0) {
        // 0x80242CE4: nop
    
            goto L_80242CEC;
    }
    // 0x80242CE4: nop

    // 0x80242CE8: break       7
    do_break(2149854440);
L_80242CEC:
    // 0x80242CEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80242CF0: bne         $a1, $at, L_80242D04
    if (ctx->r5 != ctx->r1) {
        // 0x80242CF4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80242D04;
    }
    // 0x80242CF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80242CF8: bne         $t8, $at, L_80242D04
    if (ctx->r24 != ctx->r1) {
        // 0x80242CFC: nop
    
            goto L_80242D04;
    }
    // 0x80242CFC: nop

    // 0x80242D00: break       6
    do_break(2149854464);
L_80242D04:
    // 0x80242D04: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80242D08: mflo        $t0
    ctx->r8 = lo;
    // 0x80242D0C: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80242D10: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80242D14: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x80242D18: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80242D1C: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x80242D20: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80242D24: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80242D28: mflo        $t4
    ctx->r12 = lo;
    // 0x80242D2C: sw          $t4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r12;
    // 0x80242D30: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80242D34: beql        $v1, $zero, L_80242D7C
    if (ctx->r3 == 0) {
        // 0x80242D38: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_80242D7C;
    }
    goto skip_2;
    // 0x80242D38: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_2:
    // 0x80242D3C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80242D40: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x80242D44: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80242D48: sw          $t5, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r13;
    // 0x80242D4C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x80242D50: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80242D54: sw          $t7, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r15;
    // 0x80242D58: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x80242D5C: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80242D60: sw          $t9, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r25;
    // 0x80242D64: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x80242D68: jal         0x80249170
    // 0x80242D6C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    static_3_80249170(rdram, ctx);
        goto after_0;
    // 0x80242D6C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x80242D70: b           L_80242E38
    // 0x80242D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80242E38;
    // 0x80242D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242D78: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_80242D7C:
    // 0x80242D7C: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x80242D80: b           L_80242E34
    // 0x80242D84: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_80242E34;
    // 0x80242D84: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_80242D88:
    // 0x80242D88: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80242D8C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80242D90: sw          $t0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r8;
    // 0x80242D94: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80242D98: beql        $v1, $zero, L_80242DC8
    if (ctx->r3 == 0) {
        // 0x80242D9C: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_80242DC8;
    }
    goto skip_3;
    // 0x80242D9C: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_3:
    // 0x80242DA0: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80242DA4: sw          $t1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r9;
    // 0x80242DA8: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x80242DAC: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80242DB0: sw          $t3, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r11;
    // 0x80242DB4: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x80242DB8: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80242DBC: b           L_80242E34
    // 0x80242DC0: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
        goto L_80242E34;
    // 0x80242DC0: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
    // 0x80242DC4: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_80242DC8:
    // 0x80242DC8: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x80242DCC: b           L_80242E34
    // 0x80242DD0: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_80242E34;
    // 0x80242DD0: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_80242DD4:
    // 0x80242DD4: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80242DD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80242DDC: sw          $zero, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = 0;
    // 0x80242DE0: sw          $a0, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r4;
    // 0x80242DE4: beq         $v0, $zero, L_80242E34
    if (ctx->r2 == 0) {
        // 0x80242DE8: sw          $zero, 0x38($a3)
        MEM_W(0X38, ctx->r7) = 0;
            goto L_80242E34;
    }
    // 0x80242DE8: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x80242DEC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80242DF0: sw          $t6, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r14;
    // 0x80242DF4: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80242DF8: bne         $v1, $zero, L_80242E18
    if (ctx->r3 != 0) {
        // 0x80242DFC: nop
    
            goto L_80242E18;
    }
    // 0x80242DFC: nop

    // 0x80242E00: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80242E04: beql        $v1, $zero, L_80242E38
    if (ctx->r3 == 0) {
        // 0x80242E08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80242E38;
    }
    goto skip_4;
    // 0x80242E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x80242E0C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x80242E10: b           L_80242E34
    // 0x80242E14: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
        goto L_80242E34;
    // 0x80242E14: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
L_80242E18:
    // 0x80242E18: bnel        $a0, $v1, L_80242E38
    if (ctx->r4 != ctx->r3) {
        // 0x80242E1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80242E38;
    }
    goto skip_5;
    // 0x80242E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x80242E20: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80242E24: beql        $v1, $zero, L_80242E38
    if (ctx->r3 == 0) {
        // 0x80242E28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80242E38;
    }
    goto skip_6;
    // 0x80242E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x80242E2C: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x80242E30: sw          $t8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r24;
L_80242E34:
    // 0x80242E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80242E38:
    // 0x80242E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80242E3C: jr          $ra
    // 0x80242E40: nop

    return;
    // 0x80242E40: nop

;}
RECOMP_FUNC void D_802EA4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA554: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802EA558: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802EA55C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802EA560: lh          $a1, 0x0($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X0);
    // 0x802EA564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EA568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EA56C: blez        $a1, L_802EA5AC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802EA570: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802EA5AC;
    }
    // 0x802EA570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802EA574: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802EA578: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
L_802EA57C:
    // 0x802EA57C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802EA580: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802EA584: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802EA588: bne         $a0, $t6, L_802EA5A4
    if (ctx->r4 != ctx->r14) {
        // 0x802EA58C: nop
    
            goto L_802EA5A4;
    }
    // 0x802EA58C: nop

    // 0x802EA590: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EA594: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EA598: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x802EA59C: b           L_802EA5F4
    // 0x802EA5A0: swc1        $f6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f6.u32l;
        goto L_802EA5F4;
    // 0x802EA5A0: swc1        $f6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f6.u32l;
L_802EA5A4:
    // 0x802EA5A4: bne         $at, $zero, L_802EA57C
    if (ctx->r1 != 0) {
        // 0x802EA5A8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_802EA57C;
    }
    // 0x802EA5A8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_802EA5AC:
    // 0x802EA5AC: slti        $at, $a1, 0x200
    ctx->r1 = SIGNED(ctx->r5) < 0X200 ? 1 : 0;
    // 0x802EA5B0: bne         $at, $zero, L_802EA5CC
    if (ctx->r1 != 0) {
        // 0x802EA5B4: sll         $t7, $a1, 2
        ctx->r15 = S32(ctx->r5 << 2);
            goto L_802EA5CC;
    }
    // 0x802EA5B4: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802EA5B8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802EA5BC: jal         0x80231A24
    // 0x802EA5C0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802EA5C0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802EA5C4: b           L_802EA5F8
    // 0x802EA5C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802EA5F8;
    // 0x802EA5C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EA5CC:
    // 0x802EA5CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EA5D0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802EA5D4: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
    // 0x802EA5D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EA5DC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EA5E0: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x802EA5E4: swc1        $f10, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f10.u32l;
    // 0x802EA5E8: lh          $t8, 0x0($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X0);
    // 0x802EA5EC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802EA5F0: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
L_802EA5F4:
    // 0x802EA5F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EA5F8:
    // 0x802EA5F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EA5FC: jr          $ra
    // 0x802EA600: nop

    return;
    // 0x802EA600: nop

;}
RECOMP_FUNC void D_802EC014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC094: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EC098: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC09C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x802EC0A0: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EC0A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EC0A8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EC0AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802EC0B0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802EC0B4: addiu       $t7, $zero, 0x1E9
    ctx->r15 = ADD32(0, 0X1E9);
    // 0x802EC0B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802EC0BC: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EC0C0: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EC0C4: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EC0C8: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EC0CC: sh          $zero, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = 0;
    // 0x802EC0D0: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EC0D4: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EC0D8: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EC0DC: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802EC0E0: jr          $ra
    // 0x802EC0E4: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802EC0E4: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_802C703C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C70BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802C70C0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802C70C4: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x802C70C8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802C70CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802C70D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802C70D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802C70D8: jal         0x8021E6EC
    // 0x802C70DC: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_0;
    // 0x802C70DC: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_0:
    // 0x802C70E0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x802C70E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C70E8: beql        $a0, $at, L_802C70FC
    if (ctx->r4 == ctx->r1) {
        // 0x802C70EC: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_802C70FC;
    }
    goto skip_0;
    // 0x802C70EC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x802C70F0: jal         0x80233D58
    // 0x802C70F4: nop

    static_3_80233D58(rdram, ctx);
        goto after_1;
    // 0x802C70F4: nop

    after_1:
    // 0x802C70F8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_802C70FC:
    // 0x802C70FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C7100: beql        $a0, $at, L_802C7114
    if (ctx->r4 == ctx->r1) {
        // 0x802C7104: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_802C7114;
    }
    goto skip_1;
    // 0x802C7104: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_1:
    // 0x802C7108: jal         0x80233D58
    // 0x802C710C: nop

    static_3_80233D58(rdram, ctx);
        goto after_2;
    // 0x802C710C: nop

    after_2:
    // 0x802C7110: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_802C7114:
    // 0x802C7114: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C7118: beql        $a0, $at, L_802C712C
    if (ctx->r4 == ctx->r1) {
        // 0x802C711C: lw          $a0, 0x18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X18);
            goto L_802C712C;
    }
    goto skip_2;
    // 0x802C711C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    skip_2:
    // 0x802C7120: jal         0x80233D58
    // 0x802C7124: nop

    static_3_80233D58(rdram, ctx);
        goto after_3;
    // 0x802C7124: nop

    after_3:
    // 0x802C7128: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
L_802C712C:
    // 0x802C712C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C7130: beql        $a0, $at, L_802C7144
    if (ctx->r4 == ctx->r1) {
        // 0x802C7134: lw          $a0, 0x1C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X1C);
            goto L_802C7144;
    }
    goto skip_3;
    // 0x802C7134: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    skip_3:
    // 0x802C7138: jal         0x80233D58
    // 0x802C713C: nop

    static_3_80233D58(rdram, ctx);
        goto after_4;
    // 0x802C713C: nop

    after_4:
    // 0x802C7140: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
L_802C7144:
    // 0x802C7144: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C7148: beql        $a0, $at, L_802C715C
    if (ctx->r4 == ctx->r1) {
        // 0x802C714C: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_802C715C;
    }
    goto skip_4;
    // 0x802C714C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_4:
    // 0x802C7150: jal         0x80233D58
    // 0x802C7154: nop

    static_3_80233D58(rdram, ctx);
        goto after_5;
    // 0x802C7154: nop

    after_5:
    // 0x802C7158: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
L_802C715C:
    // 0x802C715C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C7160: beql        $a0, $at, L_802C7174
    if (ctx->r4 == ctx->r1) {
        // 0x802C7164: sw          $zero, 0x1D4($s0)
        MEM_W(0X1D4, ctx->r16) = 0;
            goto L_802C7174;
    }
    goto skip_5;
    // 0x802C7164: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
    skip_5:
    // 0x802C7168: jal         0x80233D58
    // 0x802C716C: nop

    static_3_80233D58(rdram, ctx);
        goto after_6;
    // 0x802C716C: nop

    after_6:
    // 0x802C7170: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
L_802C7174:
    // 0x802C7174: sw          $zero, 0x1D0($s0)
    MEM_W(0X1D0, ctx->r16) = 0;
    // 0x802C7178: sw          $zero, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = 0;
    // 0x802C717C: sw          $zero, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = 0;
    // 0x802C7180: sw          $zero, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = 0;
    // 0x802C7184: sw          $zero, 0x108($s0)
    MEM_W(0X108, ctx->r16) = 0;
    // 0x802C7188: sw          $zero, 0x104($s0)
    MEM_W(0X104, ctx->r16) = 0;
    // 0x802C718C: sw          $zero, 0x100($s0)
    MEM_W(0X100, ctx->r16) = 0;
    // 0x802C7190: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x802C7194: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x802C7198: jal         0x802333A0
    // 0x802C719C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802333A0(rdram, ctx);
        goto after_7;
    // 0x802C719C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x802C71A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802C71A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802C71A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802C71AC: jr          $ra
    // 0x802C71B0: nop

    return;
    // 0x802C71B0: nop

;}
RECOMP_FUNC void D_8029DC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DCB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029DCBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029DCC0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029DCC4: jal         0x802AD11C
    // 0x8029DCC8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AD11C(rdram, ctx);
        goto after_0;
    // 0x8029DCC8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8029DCCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029DCD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029DCD4: jr          $ra
    // 0x8029DCD8: nop

    return;
    // 0x8029DCD8: nop

;}
RECOMP_FUNC void D_802A5D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5DB0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A5DB4: jr          $ra
    // 0x802A5DB8: swc1        $f12, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802A5DB8: swc1        $f12, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802C2AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C2B20: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802C2B24: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802C2B28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802C2B2C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802C2B30: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x802C2B34: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802C2B38: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802C2B3C: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x802C2B40: addiu       $t9, $zero, 0x4D
    ctx->r25 = ADD32(0, 0X4D);
    // 0x802C2B44: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802C2B48: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802C2B4C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802C2B50: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802C2B54: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802C2B58: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2B5C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802C2B60: jal         0x802344F4
    // 0x802C2B64: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_0;
    // 0x802C2B64: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_0:
    // 0x802C2B68: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x802C2B6C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802C2B70: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802C2B74: addiu       $t2, $zero, 0x97
    ctx->r10 = ADD32(0, 0X97);
    // 0x802C2B78: addiu       $t3, $zero, 0x4D
    ctx->r11 = ADD32(0, 0X4D);
    // 0x802C2B7C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802C2B80: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802C2B84: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802C2B88: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802C2B8C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802C2B90: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2B94: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802C2B98: jal         0x802344F4
    // 0x802C2B9C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_1;
    // 0x802C2B9C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_1:
    // 0x802C2BA0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802C2BA4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802C2BA8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802C2BAC: addiu       $t6, $zero, 0xAF
    ctx->r14 = ADD32(0, 0XAF);
    // 0x802C2BB0: addiu       $t7, $zero, 0x4D
    ctx->r15 = ADD32(0, 0X4D);
    // 0x802C2BB4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802C2BB8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802C2BBC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802C2BC0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802C2BC4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802C2BC8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2BCC: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802C2BD0: jal         0x802344F4
    // 0x802C2BD4: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_2;
    // 0x802C2BD4: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_2:
    // 0x802C2BD8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x802C2BDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802C2BE0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802C2BE4: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x802C2BE8: addiu       $t1, $zero, 0xB5
    ctx->r9 = ADD32(0, 0XB5);
    // 0x802C2BEC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802C2BF0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802C2BF4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802C2BF8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802C2BFC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802C2C00: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2C04: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802C2C08: jal         0x802344F4
    // 0x802C2C0C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_3;
    // 0x802C2C0C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_3:
    // 0x802C2C10: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x802C2C14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802C2C18: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802C2C1C: addiu       $t4, $zero, 0x97
    ctx->r12 = ADD32(0, 0X97);
    // 0x802C2C20: addiu       $t5, $zero, 0xB5
    ctx->r13 = ADD32(0, 0XB5);
    // 0x802C2C24: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802C2C28: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802C2C2C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802C2C30: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802C2C34: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802C2C38: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2C3C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802C2C40: jal         0x802344F4
    // 0x802C2C44: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_4;
    // 0x802C2C44: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_4:
    // 0x802C2C48: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802C2C4C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802C2C50: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802C2C54: addiu       $t8, $zero, 0xAF
    ctx->r24 = ADD32(0, 0XAF);
    // 0x802C2C58: addiu       $t9, $zero, 0xB5
    ctx->r25 = ADD32(0, 0XB5);
    // 0x802C2C5C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802C2C60: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802C2C64: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802C2C68: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802C2C6C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802C2C70: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2C74: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802C2C78: jal         0x802344F4
    // 0x802C2C7C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_5;
    // 0x802C2C7C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_5:
    // 0x802C2C80: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x802C2C84: addiu       $at, $zero, 0x4E20
    ctx->r1 = ADD32(0, 0X4E20);
    // 0x802C2C88: bnel        $t0, $at, L_802C2CBC
    if (ctx->r8 != ctx->r1) {
        // 0x802C2C8C: lw          $t3, 0x8C($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X8C);
            goto L_802C2CBC;
    }
    goto skip_0;
    // 0x802C2C8C: lw          $t3, 0x8C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8C);
    skip_0:
    // 0x802C2C90: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802C2C94: addiu       $t1, $zero, 0xAF
    ctx->r9 = ADD32(0, 0XAF);
    // 0x802C2C98: addiu       $t2, $zero, 0x4D
    ctx->r10 = ADD32(0, 0X4D);
    // 0x802C2C9C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802C2CA0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802C2CA4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802C2CA8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2CAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2CB0: jal         0x802344F4
    // 0x802C2CB4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_6;
    // 0x802C2CB4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_6:
    // 0x802C2CB8: lw          $t3, 0x8C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8C);
L_802C2CBC:
    // 0x802C2CBC: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x802C2CC0: bnel        $t3, $at, L_802C2CF4
    if (ctx->r11 != ctx->r1) {
        // 0x802C2CC4: lw          $t6, 0x88($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X88);
            goto L_802C2CF4;
    }
    goto skip_1;
    // 0x802C2CC4: lw          $t6, 0x88($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X88);
    skip_1:
    // 0x802C2CC8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x802C2CCC: addiu       $t4, $zero, 0x97
    ctx->r12 = ADD32(0, 0X97);
    // 0x802C2CD0: addiu       $t5, $zero, 0x4D
    ctx->r13 = ADD32(0, 0X4D);
    // 0x802C2CD4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802C2CD8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802C2CDC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802C2CE0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2CE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2CE8: jal         0x802344F4
    // 0x802C2CEC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_7;
    // 0x802C2CEC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_7:
    // 0x802C2CF0: lw          $t6, 0x88($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X88);
L_802C2CF4:
    // 0x802C2CF4: ori         $at, $zero, 0xC350
    ctx->r1 = 0 | 0XC350;
    // 0x802C2CF8: bnel        $t6, $at, L_802C2D2C
    if (ctx->r14 != ctx->r1) {
        // 0x802C2CFC: lw          $t9, 0x6C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X6C);
            goto L_802C2D2C;
    }
    goto skip_2;
    // 0x802C2CFC: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    skip_2:
    // 0x802C2D00: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x802C2D04: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x802C2D08: addiu       $t8, $zero, 0x4D
    ctx->r24 = ADD32(0, 0X4D);
    // 0x802C2D0C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802C2D10: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802C2D14: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802C2D18: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2D1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2D20: jal         0x802344F4
    // 0x802C2D24: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_8;
    // 0x802C2D24: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x802C2D28: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
L_802C2D2C:
    // 0x802C2D2C: addiu       $at, $zero, 0x4E20
    ctx->r1 = ADD32(0, 0X4E20);
    // 0x802C2D30: bnel        $t9, $at, L_802C2D64
    if (ctx->r25 != ctx->r1) {
        // 0x802C2D34: lw          $t2, 0x68($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X68);
            goto L_802C2D64;
    }
    goto skip_3;
    // 0x802C2D34: lw          $t2, 0x68($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X68);
    skip_3:
    // 0x802C2D38: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802C2D3C: addiu       $t0, $zero, 0xAF
    ctx->r8 = ADD32(0, 0XAF);
    // 0x802C2D40: addiu       $t1, $zero, 0xB5
    ctx->r9 = ADD32(0, 0XB5);
    // 0x802C2D44: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802C2D48: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802C2D4C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802C2D50: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2D58: jal         0x802344F4
    // 0x802C2D5C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_9;
    // 0x802C2D5C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x802C2D60: lw          $t2, 0x68($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X68);
L_802C2D64:
    // 0x802C2D64: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x802C2D68: bnel        $t2, $at, L_802C2D9C
    if (ctx->r10 != ctx->r1) {
        // 0x802C2D6C: lw          $t5, 0x64($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X64);
            goto L_802C2D9C;
    }
    goto skip_4;
    // 0x802C2D6C: lw          $t5, 0x64($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X64);
    skip_4:
    // 0x802C2D70: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x802C2D74: addiu       $t3, $zero, 0x97
    ctx->r11 = ADD32(0, 0X97);
    // 0x802C2D78: addiu       $t4, $zero, 0xB5
    ctx->r12 = ADD32(0, 0XB5);
    // 0x802C2D7C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802C2D80: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802C2D84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802C2D88: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2D8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2D90: jal         0x802344F4
    // 0x802C2D94: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_10;
    // 0x802C2D94: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_10:
    // 0x802C2D98: lw          $t5, 0x64($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X64);
L_802C2D9C:
    // 0x802C2D9C: ori         $at, $zero, 0xC350
    ctx->r1 = 0 | 0XC350;
    // 0x802C2DA0: bne         $t5, $at, L_802C2DD0
    if (ctx->r13 != ctx->r1) {
        // 0x802C2DA4: nop
    
            goto L_802C2DD0;
    }
    // 0x802C2DA4: nop

    // 0x802C2DA8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x802C2DAC: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x802C2DB0: addiu       $t7, $zero, 0xB5
    ctx->r15 = ADD32(0, 0XB5);
    // 0x802C2DB4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802C2DB8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802C2DBC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802C2DC0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C2DC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2DC8: jal         0x802344F4
    // 0x802C2DCC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_11;
    // 0x802C2DCC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_11:
L_802C2DD0:
    // 0x802C2DD0: jal         0x8023413C
    // 0x802C2DD4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_8023413C(rdram, ctx);
        goto after_12;
    // 0x802C2DD4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_12:
    // 0x802C2DD8: jal         0x8023413C
    // 0x802C2DDC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_8023413C(rdram, ctx);
        goto after_13;
    // 0x802C2DDC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_13:
    // 0x802C2DE0: jal         0x8023413C
    // 0x802C2DE4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_8023413C(rdram, ctx);
        goto after_14;
    // 0x802C2DE4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_14:
    // 0x802C2DE8: jal         0x8023413C
    // 0x802C2DEC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    static_3_8023413C(rdram, ctx);
        goto after_15;
    // 0x802C2DEC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_15:
    // 0x802C2DF0: jal         0x8023413C
    // 0x802C2DF4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    static_3_8023413C(rdram, ctx);
        goto after_16;
    // 0x802C2DF4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_16:
    // 0x802C2DF8: jal         0x8023413C
    // 0x802C2DFC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    static_3_8023413C(rdram, ctx);
        goto after_17;
    // 0x802C2DFC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_17:
    // 0x802C2E00: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C2E04: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C2E08: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x802C2E0C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C2E10: addiu       $t9, $t8, 0x457
    ctx->r25 = ADD32(ctx->r24, 0X457);
    // 0x802C2E14: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802C2E18: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x802C2E1C: lw          $v0, 0xB4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB4);
    // 0x802C2E20: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x802C2E24: beq         $at, $zero, L_802C2E30
    if (ctx->r1 == 0) {
        // 0x802C2E28: nop
    
            goto L_802C2E30;
    }
    // 0x802C2E28: nop

    // 0x802C2E2C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_802C2E30:
    // 0x802C2E30: jal         0x8022FF90
    // 0x802C2E34: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    static_3_8022FF90(rdram, ctx);
        goto after_18;
    // 0x802C2E34: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_18:
    // 0x802C2E38: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C2E3C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x802C2E40: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C2E44: bgez        $v0, L_802C2E58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802C2E48: andi        $t1, $v0, 0x7
        ctx->r9 = ctx->r2 & 0X7;
            goto L_802C2E58;
    }
    // 0x802C2E48: andi        $t1, $v0, 0x7
    ctx->r9 = ctx->r2 & 0X7;
    // 0x802C2E4C: beq         $t1, $zero, L_802C2E58
    if (ctx->r9 == 0) {
        // 0x802C2E50: nop
    
            goto L_802C2E58;
    }
    // 0x802C2E50: nop

    // 0x802C2E54: addiu       $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
L_802C2E58:
    // 0x802C2E58: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x802C2E5C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C2E60: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x802C2E64: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802C2E68: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x802C2E6C: jal         0x8023072C
    // 0x802C2E70: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    static_3_8023072C(rdram, ctx);
        goto after_19;
    // 0x802C2E70: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_19:
    // 0x802C2E74: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C2E78: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C2E7C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C2E80: jal         0x8021E708
    // 0x802C2E84: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_20;
    // 0x802C2E84: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_20:
    // 0x802C2E88: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x802C2E8C: addiu       $a1, $zero, 0x59
    ctx->r5 = ADD32(0, 0X59);
    // 0x802C2E90: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x802C2E94: sll         $t4, $a0, 3
    ctx->r12 = S32(ctx->r4 << 3);
    // 0x802C2E98: jal         0x8021E87C
    // 0x802C2E9C: addiu       $a0, $t4, 0xC8
    ctx->r4 = ADD32(ctx->r12, 0XC8);
    static_3_8021E87C(rdram, ctx);
        goto after_21;
    // 0x802C2E9C: addiu       $a0, $t4, 0xC8
    ctx->r4 = ADD32(ctx->r12, 0XC8);
    after_21:
    // 0x802C2EA0: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x802C2EA4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802C2EA8: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
    // 0x802C2EAC: jal         0x8021E708
    // 0x802C2EB0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_22;
    // 0x802C2EB0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_22:
    // 0x802C2EB4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C2EB8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C2EBC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x802C2EC0: jal         0x8021E87C
    // 0x802C2EC4: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    static_3_8021E87C(rdram, ctx);
        goto after_23;
    // 0x802C2EC4: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    after_23:
    // 0x802C2EC8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C2ECC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C2ED0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802C2ED4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C2ED8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x802C2EDC: addiu       $t6, $t5, 0x457
    ctx->r14 = ADD32(ctx->r13, 0X457);
    // 0x802C2EE0: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802C2EE4: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x802C2EE8: lw          $v0, 0x1D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1D0);
    // 0x802C2EEC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C2EF0: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x802C2EF4: beq         $at, $zero, L_802C2F04
    if (ctx->r1 == 0) {
        // 0x802C2EF8: nop
    
            goto L_802C2F04;
    }
    // 0x802C2EF8: nop

    // 0x802C2EFC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802C2F00: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_802C2F04:
    // 0x802C2F04: jal         0x8023072C
    // 0x802C2F08: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_24;
    // 0x802C2F08: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_24:
    // 0x802C2F0C: jal         0x8022FF90
    // 0x802C2F10: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    static_3_8022FF90(rdram, ctx);
        goto after_25;
    // 0x802C2F10: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_25:
    // 0x802C2F14: bgez        $v0, L_802C2F28
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802C2F18: andi        $t7, $v0, 0x7
        ctx->r15 = ctx->r2 & 0X7;
            goto L_802C2F28;
    }
    // 0x802C2F18: andi        $t7, $v0, 0x7
    ctx->r15 = ctx->r2 & 0X7;
    // 0x802C2F1C: beq         $t7, $zero, L_802C2F28
    if (ctx->r15 == 0) {
        // 0x802C2F20: nop
    
            goto L_802C2F28;
    }
    // 0x802C2F20: nop

    // 0x802C2F24: addiu       $t7, $t7, -0x8
    ctx->r15 = ADD32(ctx->r15, -0X8);
L_802C2F28:
    // 0x802C2F28: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802C2F2C: subu        $t9, $t8, $t7
    ctx->r25 = SUB32(ctx->r24, ctx->r15);
    // 0x802C2F30: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x802C2F34: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x802C2F38: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802C2F3C: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
    // 0x802C2F40: jal         0x8021E708
    // 0x802C2F44: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_26;
    // 0x802C2F44: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_26:
    // 0x802C2F48: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C2F4C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C2F50: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x802C2F54: jal         0x8021E87C
    // 0x802C2F58: addiu       $a1, $zero, 0x59
    ctx->r5 = ADD32(0, 0X59);
    static_3_8021E87C(rdram, ctx);
        goto after_27;
    // 0x802C2F58: addiu       $a1, $zero, 0x59
    ctx->r5 = ADD32(0, 0X59);
    after_27:
    // 0x802C2F5C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C2F60: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C2F64: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C2F68: jal         0x8021E708
    // 0x802C2F6C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_28;
    // 0x802C2F6C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_28:
    // 0x802C2F70: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x802C2F74: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    // 0x802C2F78: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x802C2F7C: sll         $t0, $a0, 3
    ctx->r8 = S32(ctx->r4 << 3);
    // 0x802C2F80: jal         0x8021E87C
    // 0x802C2F84: addiu       $a0, $t0, 0xC8
    ctx->r4 = ADD32(ctx->r8, 0XC8);
    static_3_8021E87C(rdram, ctx);
        goto after_29;
    // 0x802C2F84: addiu       $a0, $t0, 0xC8
    ctx->r4 = ADD32(ctx->r8, 0XC8);
    after_29:
    // 0x802C2F88: jal         0x8021EC9C
    // 0x802C2F8C: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_30;
    // 0x802C2F8C: nop

    after_30:
    // 0x802C2F90: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802C2F94: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802C2F98: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802C2F9C: jr          $ra
    // 0x802C2FA0: nop

    return;
    // 0x802C2FA0: nop

;}
RECOMP_FUNC void D_80244750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244750: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80244754: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80244758: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8024475C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80244760: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80244764: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80244768: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8024476C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80244770: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80244774: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80244778: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8024477C: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x80244780: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80244784: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x80244788: ori         $t6, $t6, 0x6C0
    ctx->r14 = ctx->r14 | 0X6C0;
    // 0x8024478C: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x80244790: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80244794: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x80244798: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x8024479C: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x802447A0: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x802447A4: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x802447A8: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x802447AC: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x802447B0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802447B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802447B8: blez        $t8, L_802447FC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x802447BC: addiu       $s2, $t0, 0x10
        ctx->r18 = ADD32(ctx->r8, 0X10);
            goto L_802447FC;
    }
    // 0x802447BC: addiu       $s2, $t0, 0x10
    ctx->r18 = ADD32(ctx->r8, 0X10);
    // 0x802447C0: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
L_802447C4:
    // 0x802447C4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802447C8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x802447CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802447D0: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x802447D4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802447D8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x802447DC: jalr        $t9
    // 0x802447E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802447E0: nop

    after_0:
    // 0x802447E4: lw          $t1, 0x14($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X14);
    // 0x802447E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802447EC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802447F0: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802447F4: bne         $at, $zero, L_802447C4
    if (ctx->r1 != 0) {
        // 0x802447F8: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_802447C4;
    }
    // 0x802447F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_802447FC:
    // 0x802447FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80244800: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80244804: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80244808: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024480C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80244810: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80244814: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80244818: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8024481C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80244820: jr          $ra
    // 0x80244824: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80244824: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_80227F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227F00: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80227F04: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80227F08: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80227F0C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80227F10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80227F14: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80227F18: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80227F1C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80227F20: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80227F24: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80227F28: jal         0x80223840
    // 0x80227F2C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227F2C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80227F30: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x80227F34: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x80227F38: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80227F3C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227F40: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227F44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227F48: jal         0x8022393C
    // 0x80227F4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80227F4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80227F50: beq         $v0, $zero, L_80227F8C
    if (ctx->r2 == 0) {
        // 0x80227F54: lui         $s0, 0x434F
        ctx->r16 = S32(0X434F << 16);
            goto L_80227F8C;
    }
    // 0x80227F54: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x80227F58: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
L_80227F5C:
    // 0x80227F5C: bnel        $v0, $s0, L_80227F74
    if (ctx->r2 != ctx->r16) {
        // 0x80227F60: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80227F74;
    }
    goto skip_0;
    // 0x80227F60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80227F64: jal         0x80227458
    // 0x80227F68: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_80227458(rdram, ctx);
        goto after_2;
    // 0x80227F68: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x80227F6C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227F70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80227F74:
    // 0x80227F74: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227F78: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227F7C: jal         0x8022393C
    // 0x80227F80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80227F80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80227F84: bne         $v0, $zero, L_80227F5C
    if (ctx->r2 != 0) {
        // 0x80227F88: nop
    
            goto L_80227F5C;
    }
    // 0x80227F88: nop

L_80227F8C:
    // 0x80227F8C: jal         0x802238F0
    // 0x80227F90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802238F0(rdram, ctx);
        goto after_4;
    // 0x80227F90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80227F94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80227F98: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80227F9C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80227FA0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80227FA4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80227FA8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80227FAC: jr          $ra
    // 0x80227FB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80227FB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802A9E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9EF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A9EF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A9EFC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802A9F00: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802A9F04: jal         0x8023499C
    // 0x802A9F08: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    static_3_8023499C(rdram, ctx);
        goto after_0;
    // 0x802A9F08: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x802A9F0C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x802A9F10: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802A9F14: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A9F18: jal         0x8023499C
    // 0x802A9F1C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_1;
    // 0x802A9F1C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802A9F20: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A9F24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A9F28: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A9F2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A9F30: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802A9F34: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A9F38: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802A9F3C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x802A9F40: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802A9F44: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x802A9F48: mul.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A9F4C: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x802A9F50: swc1        $f10, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f10.u32l;
    // 0x802A9F54: jal         0x8023499C
    // 0x802A9F58: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_2;
    // 0x802A9F58: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x802A9F5C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A9F60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A9F64: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A9F68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A9F6C: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x802A9F70: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A9F74: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802A9F78: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A9F7C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A9F80: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A9F84: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x802A9F88: nop

    // 0x802A9F8C: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802A9F90: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802A9F94: nop

    // 0x802A9F98: bc1f        L_802A9FB0
    if (!c1cs) {
        // 0x802A9F9C: sub.s       $f12, $f18, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
            goto L_802A9FB0;
    }
    // 0x802A9F9C: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802A9FA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A9FA4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A9FA8: b           L_802A9FB8
    // 0x802A9FAC: nop

        goto L_802A9FB8;
    // 0x802A9FAC: nop

L_802A9FB0:
    // 0x802A9FB0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A9FB4: nop

L_802A9FB8:
    // 0x802A9FB8: jal         0x8022AA40
    // 0x802A9FBC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    static_3_8022AA40(rdram, ctx);
        goto after_3;
    // 0x802A9FBC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x802A9FC0: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802A9FC4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x802A9FC8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x802A9FCC: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x802A9FD0: lwc1        $f8, 0xC($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC);
    // 0x802A9FD4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802A9FD8: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x802A9FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9FE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A9FE4: jr          $ra
    // 0x802A9FE8: nop

    return;
    // 0x802A9FE8: nop

;}
RECOMP_FUNC void D_80234BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234BC4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234BC8: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80234BCC: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234BD0: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80234BD4: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234BD8: jr          $ra
    // 0x80234BDC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80234BDC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_802CB3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CB450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802CB454: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802CB458: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CB45C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802CB460: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802CB464: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802CB468: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802CB46C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802CB470: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x802CB474: jal         0x80223FC4
    // 0x802CB478: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_0;
    // 0x802CB478: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_0:
    // 0x802CB47C: bne         $v0, $zero, L_802CB494
    if (ctx->r2 != 0) {
        // 0x802CB480: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_802CB494;
    }
    // 0x802CB480: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802CB484: jal         0x80223FC4
    // 0x802CB488: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    static_3_80223FC4(rdram, ctx);
        goto after_1;
    // 0x802CB488: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_1:
    // 0x802CB48C: beql        $v0, $zero, L_802CB538
    if (ctx->r2 == 0) {
        // 0x802CB490: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_802CB538;
    }
    goto skip_0;
    // 0x802CB490: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    skip_0:
L_802CB494:
    // 0x802CB494: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802CB498: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x802CB49C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x802CB4A0: bne         $t7, $zero, L_802CB4B8
    if (ctx->r15 != 0) {
        // 0x802CB4A4: nop
    
            goto L_802CB4B8;
    }
    // 0x802CB4A4: nop

    // 0x802CB4A8: jal         0x802B18BC
    // 0x802CB4AC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    static_3_802B18BC(rdram, ctx);
        goto after_2;
    // 0x802CB4AC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_2:
    // 0x802CB4B0: b           L_802CB4C4
    // 0x802CB4B4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
        goto L_802CB4C4;
    // 0x802CB4B4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
L_802CB4B8:
    // 0x802CB4B8: jal         0x802B18BC
    // 0x802CB4BC: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    static_3_802B18BC(rdram, ctx);
        goto after_3;
    // 0x802CB4BC: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_3:
    // 0x802CB4C0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
L_802CB4C4:
    // 0x802CB4C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CB4C8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802CB4CC: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x802CB4D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802CB4D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CB4D8: bne         $v0, $at, L_802CB4FC
    if (ctx->r2 != ctx->r1) {
        // 0x802CB4DC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_802CB4FC;
    }
    // 0x802CB4DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802CB4E0: sh          $t1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r9;
    // 0x802CB4E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802CB4E8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802CB4EC: jal         0x802D0178
    // 0x802CB4F0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    static_3_802D0178(rdram, ctx);
        goto after_4;
    // 0x802CB4F0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x802CB4F4: b           L_802CB538
    // 0x802CB4F8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
        goto L_802CB538;
    // 0x802CB4F8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_802CB4FC:
    // 0x802CB4FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802CB500: bne         $v0, $at, L_802CB534
    if (ctx->r2 != ctx->r1) {
        // 0x802CB504: lw          $t4, 0x30($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X30);
            goto L_802CB534;
    }
    // 0x802CB504: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x802CB508: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x802CB50C: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
    // 0x802CB510: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x802CB514: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802CB518: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x802CB51C: bnel        $t6, $at, L_802CB538
    if (ctx->r14 != ctx->r1) {
        // 0x802CB520: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_802CB538;
    }
    goto skip_1;
    // 0x802CB520: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x802CB524: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x802CB528: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x802CB52C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802CB530: sw          $t7, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r15;
L_802CB534:
    // 0x802CB534: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_802CB538:
    // 0x802CB538: jal         0x80223FC4
    // 0x802CB53C: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    static_3_80223FC4(rdram, ctx);
        goto after_5;
    // 0x802CB53C: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_5:
    // 0x802CB540: beq         $v0, $zero, L_802CB5E0
    if (ctx->r2 == 0) {
        // 0x802CB544: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_802CB5E0;
    }
    // 0x802CB544: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x802CB548: jal         0x802B18BC
    // 0x802CB54C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    static_3_802B18BC(rdram, ctx);
        goto after_6;
    // 0x802CB54C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_6:
    // 0x802CB550: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x802CB554: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802CB558: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802CB55C: lh          $v0, 0x0($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X0);
    // 0x802CB560: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802CB564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CB568: bne         $v0, $at, L_802CB58C
    if (ctx->r2 != ctx->r1) {
        // 0x802CB56C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_802CB58C;
    }
    // 0x802CB56C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802CB570: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x802CB574: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802CB578: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802CB57C: jal         0x802D0178
    // 0x802CB580: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    static_3_802D0178(rdram, ctx);
        goto after_7;
    // 0x802CB580: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x802CB584: b           L_802CB5E4
    // 0x802CB588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802CB5E4;
    // 0x802CB588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802CB58C:
    // 0x802CB58C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802CB590: bne         $v0, $at, L_802CB5C8
    if (ctx->r2 != ctx->r1) {
        // 0x802CB594: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_802CB5C8;
    }
    // 0x802CB594: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802CB598: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x802CB59C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802CB5A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CB5A4: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
    // 0x802CB5A8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x802CB5AC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x802CB5B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802CB5B4: lh          $a0, 0xB6($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XB6);
    // 0x802CB5B8: jal         0x802D0178
    // 0x802CB5BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    static_3_802D0178(rdram, ctx);
        goto after_8;
    // 0x802CB5BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_8:
    // 0x802CB5C0: b           L_802CB5E4
    // 0x802CB5C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802CB5E4;
    // 0x802CB5C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802CB5C8:
    // 0x802CB5C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CB5CC: bnel        $v0, $at, L_802CB5E4
    if (ctx->r2 != ctx->r1) {
        // 0x802CB5D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802CB5E4;
    }
    goto skip_2;
    // 0x802CB5D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x802CB5D4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802CB5D8: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x802CB5DC: sw          $zero, 0x8($t7)
    MEM_W(0X8, ctx->r15) = 0;
L_802CB5E0:
    // 0x802CB5E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802CB5E4:
    // 0x802CB5E4: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x802CB5E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802CB5EC: jr          $ra
    // 0x802CB5F0: nop

    return;
    // 0x802CB5F0: nop

;}
RECOMP_FUNC void D_80298B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298BF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80298BF4: jr          $ra
    // 0x80298BF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80298BF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_8029A334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029A3B4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8029A3B8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8029A3BC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8029A3C0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029A3C4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8029A3C8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8029A3CC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8029A3D0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8029A3D4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8029A3D8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8029A3DC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8029A3E0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8029A3E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8029A3E8: jal         0x802CB994
    // 0x8029A3EC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_802CB994(rdram, ctx);
        goto after_0;
    // 0x8029A3EC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x8029A3F0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8029A3F4: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    // 0x8029A3F8: jal         0x802CB920
    // 0x8029A3FC: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    static_3_802CB920(rdram, ctx);
        goto after_1;
    // 0x8029A3FC: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    after_1:
    // 0x8029A400: jal         0x8021E66C
    // 0x8029A404: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_2;
    // 0x8029A404: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8029A408: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x8029A40C: addiu       $s3, $zero, 0x7E
    ctx->r19 = ADD32(0, 0X7E);
    // 0x8029A410: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x8029A414: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x8029A418: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x8029A41C: addiu       $s5, $zero, 0x28
    ctx->r21 = ADD32(0, 0X28);
L_8029A420:
    // 0x8029A420: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8029A424: addiu       $s1, $s7, 0x8
    ctx->r17 = ADD32(ctx->r23, 0X8);
L_8029A428:
    // 0x8029A428: jal         0x8022FF90
    // 0x8029A42C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    static_3_8022FF90(rdram, ctx);
        goto after_3;
    // 0x8029A42C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_3:
    // 0x8029A430: beql        $v0, $zero, L_8029A468
    if (ctx->r2 == 0) {
        // 0x8029A434: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8029A468;
    }
    goto skip_0;
    // 0x8029A434: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8029A438: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029A43C: addiu       $t6, $s0, -0x2
    ctx->r14 = ADD32(ctx->r16, -0X2);
    // 0x8029A440: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8029A444: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8029A448: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8029A44C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8029A450: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8029A454: mflo        $a2
    ctx->r6 = lo;
    // 0x8029A458: addiu       $a2, $a2, 0x8B
    ctx->r6 = ADD32(ctx->r6, 0X8B);
    // 0x8029A45C: jal         0x802CB848
    // 0x8029A460: nop

    static_3_802CB848(rdram, ctx);
        goto after_4;
    // 0x8029A460: nop

    after_4:
    // 0x8029A464: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8029A468:
    // 0x8029A468: bne         $s0, $s6, L_8029A428
    if (ctx->r16 != ctx->r22) {
        // 0x8029A46C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8029A428;
    }
    // 0x8029A46C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8029A470: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8029A474: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x8029A478: addiu       $s3, $s3, -0x12
    ctx->r19 = ADD32(ctx->r19, -0X12);
    // 0x8029A47C: bne         $at, $zero, L_8029A420
    if (ctx->r1 != 0) {
        // 0x8029A480: addiu       $s7, $s7, 0x14
        ctx->r23 = ADD32(ctx->r23, 0X14);
            goto L_8029A420;
    }
    // 0x8029A480: addiu       $s7, $s7, 0x14
    ctx->r23 = ADD32(ctx->r23, 0X14);
    // 0x8029A484: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x8029A488: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x8029A48C: addiu       $s3, $zero, 0xA2
    ctx->r19 = ADD32(0, 0XA2);
    // 0x8029A490: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x8029A494: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x8029A498: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8029A49C:
    // 0x8029A49C: lbu         $t7, 0x1C($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X1C);
    // 0x8029A4A0: bnel        $s2, $t7, L_8029A4EC
    if (ctx->r18 != ctx->r15) {
        // 0x8029A4A4: lbu         $t9, 0x1B($s4)
        ctx->r25 = MEM_BU(ctx->r20, 0X1B);
            goto L_8029A4EC;
    }
    goto skip_1;
    // 0x8029A4A4: lbu         $t9, 0x1B($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X1B);
    skip_1:
    // 0x8029A4A8: lbu         $t8, 0x1B($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X1B);
    // 0x8029A4AC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8029A4B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029A4B4: bne         $s2, $t8, L_8029A4D8
    if (ctx->r18 != ctx->r24) {
        // 0x8029A4B8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029A4D8;
    }
    // 0x8029A4B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029A4BC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8029A4C0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029A4C4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8029A4C8: jal         0x8021E708
    // 0x8029A4CC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_5;
    // 0x8029A4CC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
    // 0x8029A4D0: b           L_8029A524
    // 0x8029A4D4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8029A524;
    // 0x8029A4D4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8029A4D8:
    // 0x8029A4D8: jal         0x8021E708
    // 0x8029A4DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_6;
    // 0x8029A4DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
    // 0x8029A4E0: b           L_8029A524
    // 0x8029A4E4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8029A524;
    // 0x8029A4E4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8029A4E8: lbu         $t9, 0x1B($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X1B);
L_8029A4EC:
    // 0x8029A4EC: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x8029A4F0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8029A4F4: bne         $s2, $t9, L_8029A518
    if (ctx->r18 != ctx->r25) {
        // 0x8029A4F8: addiu       $a2, $zero, 0x80
        ctx->r6 = ADD32(0, 0X80);
            goto L_8029A518;
    }
    // 0x8029A4F8: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8029A4FC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8029A500: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029A504: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8029A508: jal         0x8021E708
    // 0x8029A50C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_7;
    // 0x8029A50C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_7:
    // 0x8029A510: b           L_8029A524
    // 0x8029A514: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8029A524;
    // 0x8029A514: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8029A518:
    // 0x8029A518: jal         0x8021E708
    // 0x8029A51C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_8;
    // 0x8029A51C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_8:
    // 0x8029A520: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8029A524:
    // 0x8029A524: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8029A528: jal         0x8021E87C
    // 0x8029A52C: lw          $a2, 0x0($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X0);
    static_3_8021E87C(rdram, ctx);
        goto after_9;
    // 0x8029A52C: lw          $a2, 0x0($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X0);
    after_9:
    // 0x8029A530: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8029A534: or          $s1, $fp, $zero
    ctx->r17 = ctx->r30 | 0;
L_8029A538:
    // 0x8029A538: jal         0x8022FF90
    // 0x8029A53C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    static_3_8022FF90(rdram, ctx);
        goto after_10;
    // 0x8029A53C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_10:
    // 0x8029A540: beql        $v0, $zero, L_8029A574
    if (ctx->r2 == 0) {
        // 0x8029A544: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8029A574;
    }
    goto skip_2;
    // 0x8029A544: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x8029A548: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029A54C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8029A550: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8029A554: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8029A558: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8029A55C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8029A560: mflo        $a2
    ctx->r6 = lo;
    // 0x8029A564: addiu       $a2, $a2, 0x8B
    ctx->r6 = ADD32(ctx->r6, 0X8B);
    // 0x8029A568: jal         0x802CB7B0
    // 0x8029A56C: nop

    static_3_802CB7B0(rdram, ctx);
        goto after_11;
    // 0x8029A56C: nop

    after_11:
    // 0x8029A570: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8029A574:
    // 0x8029A574: bne         $s0, $s6, L_8029A538
    if (ctx->r16 != ctx->r22) {
        // 0x8029A578: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8029A538;
    }
    // 0x8029A578: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8029A57C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8029A580: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8029A584: addiu       $s3, $s3, -0x12
    ctx->r19 = ADD32(ctx->r19, -0X12);
    // 0x8029A588: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8029A58C: bne         $s2, $at, L_8029A49C
    if (ctx->r18 != ctx->r1) {
        // 0x8029A590: addiu       $fp, $fp, 0x14
        ctx->r30 = ADD32(ctx->r30, 0X14);
            goto L_8029A49C;
    }
    // 0x8029A590: addiu       $fp, $fp, 0x14
    ctx->r30 = ADD32(ctx->r30, 0X14);
    // 0x8029A594: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8029A598: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8029A59C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8029A5A0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8029A5A4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8029A5A8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8029A5AC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8029A5B0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8029A5B4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8029A5B8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8029A5BC: jr          $ra
    // 0x8029A5C0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8029A5C0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802E8904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8984: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E8988: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E898C: jr          $ra
    // 0x802E8990: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E8990: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802CCCF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCD70: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802CCD74: jr          $ra
    // 0x802CCD78: swc1        $f12, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802CCD78: swc1        $f12, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802A1138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A11B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A11BC: jr          $ra
    // 0x802A11C0: sb          $a1, 0x39C($a0)
    MEM_B(0X39C, ctx->r4) = ctx->r5;
    return;
    // 0x802A11C0: sb          $a1, 0x39C($a0)
    MEM_B(0X39C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802E5E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E5E98: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x802E5E9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E5EA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E5EA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E5EA8: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x802E5EAC: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x802E5EB0: jal         0x80318268
    // 0x802E5EB4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80318268(rdram, ctx);
        goto after_0;
    // 0x802E5EB4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x802E5EB8: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x802E5EBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802E5EC0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E5EC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802E5EC8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802E5ECC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802E5ED0: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x802E5ED4: bc1f        L_802E5FA4
    if (!c1cs) {
        // 0x802E5ED8: sw          $t6, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r14;
            goto L_802E5FA4;
    }
    // 0x802E5ED8: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x802E5EDC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802E5EE0: jal         0x80316430
    // 0x802E5EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80316430(rdram, ctx);
        goto after_1;
    // 0x802E5EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802E5EE8: lw          $v0, 0x100($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X100);
    // 0x802E5EEC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802E5EF0: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x802E5EF4: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802E5EF8: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802E5EFC: jalr        $t9
    // 0x802E5F00: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802E5F00: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    after_2:
    // 0x802E5F04: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802E5F08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802E5F0C: lwc1        $f2, 0x44($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802E5F10: lwc1        $f12, 0x48($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X48);
    // 0x802E5F14: lwc1        $f14, 0x4C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802E5F18: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x802E5F1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E5F20: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802E5F24: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x802E5F28: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802E5F2C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802E5F30: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x802E5F34: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x802E5F38: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802E5F3C: sh          $t0, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r8;
    // 0x802E5F40: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802E5F44: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802E5F48: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x802E5F4C: sh          $t2, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r10;
    // 0x802E5F50: sh          $t4, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r12;
    // 0x802E5F54: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E5F58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E5F5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802E5F60: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802E5F64: sh          $t6, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r14;
    // 0x802E5F68: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802E5F6C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802E5F70: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802E5F74: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x802E5F78: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x802E5F7C: sh          $v1, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r3;
    // 0x802E5F80: sh          $v1, 0x136($s0)
    MEM_H(0X136, ctx->r16) = ctx->r3;
    // 0x802E5F84: sh          $v0, 0x130($s0)
    MEM_H(0X130, ctx->r16) = ctx->r2;
    // 0x802E5F88: sh          $v0, 0x132($s0)
    MEM_H(0X132, ctx->r16) = ctx->r2;
    // 0x802E5F8C: jal         0x80318490
    // 0x802E5F90: sh          $v0, 0x134($s0)
    MEM_H(0X134, ctx->r16) = ctx->r2;
    static_3_80318490(rdram, ctx);
        goto after_3;
    // 0x802E5F90: sh          $v0, 0x134($s0)
    MEM_H(0X134, ctx->r16) = ctx->r2;
    after_3:
    // 0x802E5F94: beq         $v0, $zero, L_802E605C
    if (ctx->r2 == 0) {
        // 0x802E5F98: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_802E605C;
    }
    // 0x802E5F98: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802E5F9C: b           L_802E605C
    // 0x802E5FA0: sb          $t9, 0x1B7($s0)
    MEM_B(0X1B7, ctx->r16) = ctx->r25;
        goto L_802E605C;
    // 0x802E5FA0: sb          $t9, 0x1B7($s0)
    MEM_B(0X1B7, ctx->r16) = ctx->r25;
L_802E5FA4:
    // 0x802E5FA4: lw          $v0, 0x100($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X100);
    // 0x802E5FA8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x802E5FAC: lh          $t8, 0x50($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X50);
    // 0x802E5FB0: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802E5FB4: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802E5FB8: jalr        $t9
    // 0x802E5FBC: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802E5FBC: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    after_4:
    // 0x802E5FC0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802E5FC4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802E5FC8: lwc1        $f2, 0x44($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802E5FCC: lwc1        $f12, 0x48($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X48);
    // 0x802E5FD0: lwc1        $f14, 0x4C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802E5FD4: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x802E5FD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E5FDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802E5FE0: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x802E5FE4: sh          $t8, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r24;
    // 0x802E5FE8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802E5FEC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802E5FF0: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x802E5FF4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x802E5FF8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802E5FFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802E6000: sh          $t1, 0x130($s0)
    MEM_H(0X130, ctx->r16) = ctx->r9;
    // 0x802E6004: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802E6008: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x802E600C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802E6010: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x802E6014: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802E6018: sh          $t3, 0x132($s0)
    MEM_H(0X132, ctx->r16) = ctx->r11;
    // 0x802E601C: sh          $t5, 0x134($s0)
    MEM_H(0X134, ctx->r16) = ctx->r13;
    // 0x802E6020: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802E6024: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802E6028: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x802E602C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802E6030: sh          $v1, 0x136($s0)
    MEM_H(0X136, ctx->r16) = ctx->r3;
    // 0x802E6034: sh          $v1, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r3;
    // 0x802E6038: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x802E603C: nop

    // 0x802E6040: sh          $v0, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r2;
    // 0x802E6044: sh          $v0, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r2;
    // 0x802E6048: jal         0x80318490
    // 0x802E604C: sh          $v0, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r2;
    static_3_80318490(rdram, ctx);
        goto after_5;
    // 0x802E604C: sh          $v0, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r2;
    after_5:
    // 0x802E6050: beql        $v0, $zero, L_802E6060
    if (ctx->r2 == 0) {
        // 0x802E6054: lw          $a2, 0x0($s0)
        ctx->r6 = MEM_W(ctx->r16, 0X0);
            goto L_802E6060;
    }
    goto skip_0;
    // 0x802E6054: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x802E6058: sb          $zero, 0x1B7($s0)
    MEM_B(0X1B7, ctx->r16) = 0;
L_802E605C:
    // 0x802E605C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
L_802E6060:
    // 0x802E6060: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802E6064: lw          $v0, 0x1A0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1A0);
    // 0x802E6068: lh          $t9, 0x60($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X60);
    // 0x802E606C: addu        $a0, $t9, $a2
    ctx->r4 = ADD32(ctx->r25, ctx->r6);
    // 0x802E6070: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802E6074: jalr        $t9
    // 0x802E6078: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802E6078: nop

    after_6:
    // 0x802E607C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x802E6080: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E6084: lhu         $v1, 0x10($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X10);
    // 0x802E6088: beq         $v1, $zero, L_802E6098
    if (ctx->r3 == 0) {
        // 0x802E608C: nop
    
            goto L_802E6098;
    }
    // 0x802E608C: nop

    // 0x802E6090: bnel        $v1, $at, L_802E60DC
    if (ctx->r3 != ctx->r1) {
        // 0x802E6094: lw          $t1, 0x1C0($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X1C0);
            goto L_802E60DC;
    }
    goto skip_1;
    // 0x802E6094: lw          $t1, 0x1C0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C0);
    skip_1:
L_802E6098:
    // 0x802E6098: jal         0x80318774
    // 0x802E609C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_80318774(rdram, ctx);
        goto after_7;
    // 0x802E609C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_7:
    // 0x802E60A0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x802E60A4: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x802E60A8: lw          $v0, 0x1A0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1A0);
    // 0x802E60AC: lw          $t9, 0x84($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X84);
    // 0x802E60B0: lh          $t0, 0x80($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X80);
    // 0x802E60B4: jalr        $t9
    // 0x802E60B8: addu        $a0, $t0, $a2
    ctx->r4 = ADD32(ctx->r8, ctx->r6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x802E60B8: addu        $a0, $t0, $a2
    ctx->r4 = ADD32(ctx->r8, ctx->r6);
    after_8:
    // 0x802E60BC: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802E60C0: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802E60C4: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802E60C8: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802E60CC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802E60D0: jal         0x802D01D4
    // 0x802E60D4: nop

    static_3_802D01D4(rdram, ctx);
        goto after_9;
    // 0x802E60D4: nop

    after_9:
    // 0x802E60D8: lw          $t1, 0x1C0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C0);
L_802E60DC:
    // 0x802E60DC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x802E60E0: beql        $t1, $zero, L_802E610C
    if (ctx->r9 == 0) {
        // 0x802E60E4: lwc1        $f4, 0x3C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
            goto L_802E610C;
    }
    goto skip_2;
    // 0x802E60E4: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    skip_2:
    // 0x802E60E8: jal         0x802AED60
    // 0x802E60EC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    static_3_802AED60(rdram, ctx);
        goto after_10;
    // 0x802E60EC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    after_10:
    // 0x802E60F0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802E60F4: beql        $v0, $at, L_802E610C
    if (ctx->r2 == ctx->r1) {
        // 0x802E60F8: lwc1        $f4, 0x3C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
            goto L_802E610C;
    }
    goto skip_3;
    // 0x802E60F8: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    skip_3:
    // 0x802E60FC: jal         0x802E6EAC
    // 0x802E6100: lw          $a0, 0x1C0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C0);
    static_3_802E6EAC(rdram, ctx);
        goto after_11;
    // 0x802E6100: lw          $a0, 0x1C0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C0);
    after_11:
    // 0x802E6104: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x802E6108: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
L_802E610C:
    // 0x802E610C: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802E6110: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802E6114: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x802E6118: lbu         $t2, 0x1B6($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1B6);
    // 0x802E611C: beql        $t2, $zero, L_802E61F8
    if (ctx->r10 == 0) {
        // 0x802E6120: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_802E61F8;
    }
    goto skip_4;
    // 0x802E6120: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_4:
    // 0x802E6124: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802E6128: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x802E612C: jal         0x80318214
    // 0x802E6130: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    static_3_80318214(rdram, ctx);
        goto after_12;
    // 0x802E6130: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    after_12:
    // 0x802E6134: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E6138: ldc1        $f8, 0x0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X0);
    // 0x802E613C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x802E6140: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E6144: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802E6148: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E614C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E6150: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802E6154: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802E6158: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802E615C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802E6160: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x802E6164: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E6168: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E616C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802E6170: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802E6174: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x802E6178: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x802E617C: bc1fl       L_802E6190
    if (!c1cs) {
        // 0x802E6180: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802E6190;
    }
    goto skip_5;
    // 0x802E6180: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_5:
    // 0x802E6184: b           L_802E61A8
    // 0x802E6188: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
        goto L_802E61A8;
    // 0x802E6188: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x802E618C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802E6190:
    // 0x802E6190: nop

    // 0x802E6194: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802E6198: nop

    // 0x802E619C: bc1fl       L_802E61AC
    if (!c1cs) {
        // 0x802E61A0: c.le.s      $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl <= ctx->f14.fl;
            goto L_802E61AC;
    }
    goto skip_6;
    // 0x802E61A0: c.le.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl <= ctx->f14.fl;
    skip_6:
    // 0x802E61A4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_802E61A8:
    // 0x802E61A8: c.le.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl <= ctx->f14.fl;
L_802E61AC:
    // 0x802E61AC: nop

    // 0x802E61B0: bc1f        L_802E61C0
    if (!c1cs) {
        // 0x802E61B4: nop
    
            goto L_802E61C0;
    }
    // 0x802E61B4: nop

    // 0x802E61B8: b           L_802E61C0
    // 0x802E61BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802E61C0;
    // 0x802E61BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802E61C0:
    // 0x802E61C0: negu        $t3, $v0
    ctx->r11 = SUB32(0, ctx->r2);
    // 0x802E61C4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x802E61C8: lui         $at, 0x40D8
    ctx->r1 = S32(0X40D8 << 16);
    // 0x802E61CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802E61D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802E61D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E61D8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802E61DC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E61E0: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802E61E4: nop

    // 0x802E61E8: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802E61EC: add.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x802E61F0: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x802E61F4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_802E61F8:
    // 0x802E61F8: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802E61FC: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802E6200: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802E6204: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x802E6208: nop

    // 0x802E620C: bc1tl       L_802E6230
    if (c1cs) {
        // 0x802E6210: mfc1        $a1, $f14
        ctx->r5 = (int32_t)ctx->f14.u32l;
            goto L_802E6230;
    }
    goto skip_7;
    // 0x802E6210: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    skip_7:
    // 0x802E6214: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802E6218: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x802E621C: jal         0x802D01D4
    // 0x802E6220: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_13;
    // 0x802E6220: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x802E6224: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802E6228: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802E622C: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
L_802E6230:
    // 0x802E6230: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802E6234: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802E6238: jal         0x8022A0D0
    // 0x802E623C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    static_3_8022A0D0(rdram, ctx);
        goto after_14;
    // 0x802E623C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    after_14:
    // 0x802E6240: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x802E6244: jal         0x80228DE0
    // 0x802E6248: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    func_80228DE0(rdram, ctx);
        goto after_15;
    // 0x802E6248: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    after_15:
    // 0x802E624C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802E6250: sb          $t4, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r12;
    // 0x802E6254: jal         0x80318490
    // 0x802E6258: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_80318490(rdram, ctx);
        goto after_16;
    // 0x802E6258: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_16:
    // 0x802E625C: beql        $v0, $zero, L_802E6280
    if (ctx->r2 == 0) {
        // 0x802E6260: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802E6280;
    }
    goto skip_8;
    // 0x802E6260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x802E6264: jal         0x8031743C
    // 0x802E6268: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_8031743C(rdram, ctx);
        goto after_17;
    // 0x802E6268: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_17:
    // 0x802E626C: bne         $v0, $zero, L_802E627C
    if (ctx->r2 != 0) {
        // 0x802E6270: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802E627C;
    }
    // 0x802E6270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E6274: jal         0x80316A6C
    // 0x802E6278: lbu         $a1, 0x1B7($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1B7);
    static_3_80316A6C(rdram, ctx);
        goto after_18;
    // 0x802E6278: lbu         $a1, 0x1B7($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1B7);
    after_18:
L_802E627C:
    // 0x802E627C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E6280:
    // 0x802E6280: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E6284: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x802E6288: jr          $ra
    // 0x802E628C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E628C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802233DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802233DC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802233E0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802233E4: nor         $t6, $a0, $zero
    ctx->r14 = ~(ctx->r4 | 0);
    // 0x802233E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802233EC: and         $v1, $t6, $v0
    ctx->r3 = ctx->r14 & ctx->r2;
    // 0x802233F0: beq         $v1, $v0, L_80223408
    if (ctx->r3 == ctx->r2) {
        // 0x802233F4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80223408;
    }
    // 0x802233F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802233F8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802233FC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80223400: jal         0x80220C44
    // 0x80223404: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    static_3_80220C44(rdram, ctx);
        goto after_0;
    // 0x80223404: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
L_80223408:
    // 0x80223408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022340C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80223410: jr          $ra
    // 0x80223414: nop

    return;
    // 0x80223414: nop

;}
RECOMP_FUNC void D_8029AF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029AFDC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8029AFE0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8029AFE4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8029AFE8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029AFEC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8029AFF0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8029AFF4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8029AFF8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8029AFFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029B000: jal         0x802CB994
    // 0x8029B004: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_802CB994(rdram, ctx);
        goto after_0;
    // 0x8029B004: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x8029B008: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8029B00C: jal         0x802CB8E0
    // 0x8029B010: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    static_3_802CB8E0(rdram, ctx);
        goto after_1;
    // 0x8029B010: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_1:
    // 0x8029B014: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8029B018: addiu       $s1, $zero, 0x9D
    ctx->r17 = ADD32(0, 0X9D);
    // 0x8029B01C: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8029B020: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8029B024: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_8029B028:
    // 0x8029B028: lbu         $t6, 0x1B($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X1B);
    // 0x8029B02C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029B030: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8029B034: bne         $s0, $t6, L_8029B058
    if (ctx->r16 != ctx->r14) {
        // 0x8029B038: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029B058;
    }
    // 0x8029B038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029B03C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029B040: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029B044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029B048: jal         0x8021E708
    // 0x8029B04C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_2;
    // 0x8029B04C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x8029B050: b           L_8029B064
    // 0x8029B054: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
        goto L_8029B064;
    // 0x8029B054: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
L_8029B058:
    // 0x8029B058: jal         0x8021E708
    // 0x8029B05C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_3;
    // 0x8029B05C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x8029B060: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
L_8029B064:
    // 0x8029B064: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8029B068: jal         0x8021E87C
    // 0x8029B06C: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    static_3_8021E87C(rdram, ctx);
        goto after_4;
    // 0x8029B06C: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    after_4:
    // 0x8029B070: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8029B074: addiu       $s1, $s1, -0x12
    ctx->r17 = ADD32(ctx->r17, -0X12);
    // 0x8029B078: bne         $s0, $s3, L_8029B028
    if (ctx->r16 != ctx->r19) {
        // 0x8029B07C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8029B028;
    }
    // 0x8029B07C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8029B080: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8029B084: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029B088: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8029B08C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8029B090: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8029B094: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8029B098: jr          $ra
    // 0x8029B09C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8029B09C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802D00B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D0138: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x802D013C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0140: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0144: lui         $at, 0x43F5
    ctx->r1 = S32(0X43F5 << 16);
    // 0x802D0148: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D014C: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x802D0150: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D0154: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802D0158: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802D015C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802D0160: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D0164: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0168: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802D016C: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0170: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0174: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802D0178: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D017C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0180: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x802D0184: lwc1        $f24, 0x0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0188: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D018C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0190: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802D0194: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D0198: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x802D019C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D01A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D01A4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D01A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D01AC: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x802D01B0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D01B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D01B8: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x802D01BC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D01C0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802D01C4: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x802D01C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D01CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D01D0: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x802D01D4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D01D8: lui         $at, 0x43C3
    ctx->r1 = S32(0X43C3 << 16);
    // 0x802D01DC: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x802D01E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D01E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D01E8: swc1        $f6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f6.u32l;
    // 0x802D01EC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D01F0: lui         $at, 0x43C3
    ctx->r1 = S32(0X43C3 << 16);
    // 0x802D01F4: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x802D01F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D01FC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802D0200: swc1        $f24, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f24.u32l;
    // 0x802D0204: swc1        $f24, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f24.u32l;
    // 0x802D0208: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x802D020C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802D0210: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802D0214: swc1        $f22, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f22.u32l;
    // 0x802D0218: swc1        $f22, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f22.u32l;
    // 0x802D021C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802D0220: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x802D0224: swc1        $f20, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f20.u32l;
    // 0x802D0228: swc1        $f20, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f20.u32l;
    // 0x802D022C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x802D0230: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x802D0234: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x802D0238: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x802D023C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802D0240: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802D0244: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802D0248: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802D024C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802D0250: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x802D0254: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802D0258: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802D025C: addiu       $s1, $sp, 0x78
    ctx->r17 = ADD32(ctx->r29, 0X78);
    // 0x802D0260: addiu       $s2, $a0, 0xE10
    ctx->r18 = ADD32(ctx->r4, 0XE10);
    // 0x802D0264: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802D0268: addiu       $s4, $sp, 0xD8
    ctx->r20 = ADD32(ctx->r29, 0XD8);
    // 0x802D026C: addiu       $s5, $sp, 0xA8
    ctx->r21 = ADD32(ctx->r29, 0XA8);
    // 0x802D0270: addiu       $s7, $sp, 0x7C
    ctx->r23 = ADD32(ctx->r29, 0X7C);
    // 0x802D0274: addiu       $fp, $sp, 0x88
    ctx->r30 = ADD32(ctx->r29, 0X88);
    // 0x802D0278: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x802D027C: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x802D0280: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x802D0284: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x802D0288: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x802D028C: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x802D0290: swc1        $f2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f2.u32l;
    // 0x802D0294: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    // 0x802D0298: swc1        $f12, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f12.u32l;
    // 0x802D029C: swc1        $f12, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f12.u32l;
    // 0x802D02A0: swc1        $f12, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f12.u32l;
    // 0x802D02A4: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x802D02A8: swc1        $f14, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f14.u32l;
    // 0x802D02AC: swc1        $f14, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f14.u32l;
    // 0x802D02B0: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x802D02B4: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    // 0x802D02B8: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x802D02BC: swc1        $f10, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f10.u32l;
    // 0x802D02C0: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    // 0x802D02C4: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x802D02C8: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x802D02CC: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x802D02D0: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
L_802D02D4:
    // 0x802D02D4: lw          $s0, 0xFB0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0XFB0);
    // 0x802D02D8: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    // 0x802D02DC: lh          $t6, 0x110($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X110);
    // 0x802D02E0: lw          $t9, 0x114($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X114);
    // 0x802D02E4: addu        $a0, $t6, $s3
    ctx->r4 = ADD32(ctx->r14, ctx->r19);
    // 0x802D02E8: jalr        $t9
    // 0x802D02EC: addiu       $a0, $a0, 0xE10
    ctx->r4 = ADD32(ctx->r4, 0XE10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D02EC: addiu       $a0, $a0, 0xE10
    ctx->r4 = ADD32(ctx->r4, 0XE10);
    after_0:
    // 0x802D02F0: lw          $s0, 0xFB0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0XFB0);
    // 0x802D02F4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802D02F8: lh          $t7, 0xB0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XB0);
    // 0x802D02FC: lw          $t9, 0xB4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB4);
    // 0x802D0300: addu        $a0, $t7, $s3
    ctx->r4 = ADD32(ctx->r15, ctx->r19);
    // 0x802D0304: jalr        $t9
    // 0x802D0308: addiu       $a0, $a0, 0xE10
    ctx->r4 = ADD32(ctx->r4, 0XE10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802D0308: addiu       $a0, $a0, 0xE10
    ctx->r4 = ADD32(ctx->r4, 0XE10);
    after_1:
    // 0x802D030C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x802D0310: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802D0314: jal         0x80309758
    // 0x802D0318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309758(rdram, ctx);
        goto after_2;
    // 0x802D0318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802D031C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D0320: jal         0x80318E80
    // 0x802D0324: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_3;
    // 0x802D0324: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x802D0328: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802D032C: jal         0x80318C88
    // 0x802D0330: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318C88(rdram, ctx);
        goto after_4;
    // 0x802D0330: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x802D0334: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802D0338: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x802D033C: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x802D0340: jal         0x80318E04
    // 0x802D0344: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    static_3_80318E04(rdram, ctx);
        goto after_5;
    // 0x802D0344: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    after_5:
    // 0x802D0348: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x802D034C: jal         0x80318C9C
    // 0x802D0350: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318C9C(rdram, ctx);
        goto after_6;
    // 0x802D0350: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x802D0354: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    // 0x802D0358: jal         0x802AB2AC
    // 0x802D035C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_7;
    // 0x802D035C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x802D0360: beq         $s1, $s7, L_802D0380
    if (ctx->r17 == ctx->r23) {
        // 0x802D0364: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802D0380;
    }
    // 0x802D0364: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802D0368: beq         $s1, $fp, L_802D0380
    if (ctx->r17 == ctx->r30) {
        // 0x802D036C: addiu       $t8, $sp, 0x94
        ctx->r24 = ADD32(ctx->r29, 0X94);
            goto L_802D0380;
    }
    // 0x802D036C: addiu       $t8, $sp, 0x94
    ctx->r24 = ADD32(ctx->r29, 0X94);
    // 0x802D0370: beq         $s1, $t8, L_802D0380
    if (ctx->r17 == ctx->r24) {
        // 0x802D0374: addiu       $t0, $sp, 0xA0
        ctx->r8 = ADD32(ctx->r29, 0XA0);
            goto L_802D0380;
    }
    // 0x802D0374: addiu       $t0, $sp, 0xA0
    ctx->r8 = ADD32(ctx->r29, 0XA0);
    // 0x802D0378: bne         $s1, $t0, L_802D0390
    if (ctx->r17 != ctx->r8) {
        // 0x802D037C: addiu       $t1, $sp, 0x80
        ctx->r9 = ADD32(ctx->r29, 0X80);
            goto L_802D0390;
    }
    // 0x802D037C: addiu       $t1, $sp, 0x80
    ctx->r9 = ADD32(ctx->r29, 0X80);
L_802D0380:
    // 0x802D0380: jal         0x8028C14C
    // 0x802D0384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8028C14C(rdram, ctx);
        goto after_8;
    // 0x802D0384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x802D0388: b           L_802D03BC
    // 0x802D038C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
        goto L_802D03BC;
    // 0x802D038C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_802D0390:
    // 0x802D0390: beq         $s1, $t1, L_802D03AC
    if (ctx->r17 == ctx->r9) {
        // 0x802D0394: addiu       $t2, $sp, 0x8C
        ctx->r10 = ADD32(ctx->r29, 0X8C);
            goto L_802D03AC;
    }
    // 0x802D0394: addiu       $t2, $sp, 0x8C
    ctx->r10 = ADD32(ctx->r29, 0X8C);
    // 0x802D0398: beq         $s1, $t2, L_802D03AC
    if (ctx->r17 == ctx->r10) {
        // 0x802D039C: addiu       $t3, $sp, 0x98
        ctx->r11 = ADD32(ctx->r29, 0X98);
            goto L_802D03AC;
    }
    // 0x802D039C: addiu       $t3, $sp, 0x98
    ctx->r11 = ADD32(ctx->r29, 0X98);
    // 0x802D03A0: beq         $s1, $t3, L_802D03AC
    if (ctx->r17 == ctx->r11) {
        // 0x802D03A4: addiu       $t4, $sp, 0xA4
        ctx->r12 = ADD32(ctx->r29, 0XA4);
            goto L_802D03AC;
    }
    // 0x802D03A4: addiu       $t4, $sp, 0xA4
    ctx->r12 = ADD32(ctx->r29, 0XA4);
    // 0x802D03A8: bne         $s1, $t4, L_802D03B8
    if (ctx->r17 != ctx->r12) {
        // 0x802D03AC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802D03B8;
    }
L_802D03AC:
    // 0x802D03AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802D03B0: jal         0x8028C14C
    // 0x802D03B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028C14C(rdram, ctx);
        goto after_9;
    // 0x802D03B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
L_802D03B8:
    // 0x802D03B8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_802D03BC:
    // 0x802D03BC: addiu       $t5, $sp, 0xA8
    ctx->r13 = ADD32(ctx->r29, 0XA8);
    // 0x802D03C0: addiu       $s3, $s3, 0x448
    ctx->r19 = ADD32(ctx->r19, 0X448);
    // 0x802D03C4: addiu       $s2, $s2, 0x448
    ctx->r18 = ADD32(ctx->r18, 0X448);
    // 0x802D03C8: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x802D03CC: bne         $s1, $t5, L_802D02D4
    if (ctx->r17 != ctx->r13) {
        // 0x802D03D0: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_802D02D4;
    }
    // 0x802D03D0: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x802D03D4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802D03D8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802D03DC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802D03E0: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x802D03E4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802D03E8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802D03EC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802D03F0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802D03F4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802D03F8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802D03FC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802D0400: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802D0404: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802D0408: jr          $ra
    // 0x802D040C: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x802D040C: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_8022B2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8022B2C0:
    // 0x8022B2C0: lw          $a1, 0x0($a3) — ROM `aero_us.z64` / Capstone; label precedes `func_8022B2F4` glabel.
    ctx->r5 = MEM_W(0, ctx->r7);
    // 0x8022B2C4: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8022B2C8: bnel        $at, $zero, L_8022B2EC
    if (ctx->r1 != 0) {
        // 0x8022B2CC: sltu        $at, $a0, $a1
        ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
        goto L_8022B2EC;
    }
    // 0x8022B2D0: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(4, ctx->r7);
    // 0x8022B2D4: sltu        $at, $v0, $t6
    ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
    // 0x8022B2D8: beql        $at, $zero, L_8022B2EC
    if (ctx->r1 == 0) {
        // 0x8022B2DC: sltu        $at, $a0, $a1
        ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
        goto L_8022B2EC;
    }
    // 0x8022B2E0: jr          $ra
    // 0x8022B2E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
L_8022B2EC:
    // 0x8022B2EC: bnez        $at, L_8022B30C
    // 0x8022B2F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    if (ctx->r1 != 0) {
        goto L_8022B30C;
    }
    // 0x8022B2F4: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(4, ctx->r7);
    // 0x8022B2F8: sltu        $at, $a0, $t7
    ctx->r1 = ctx->r4 < ctx->r15 ? 1 : 0;
    // 0x8022B2FC: beql        $at, $zero, L_8022B310
    if (ctx->r1 == 0) {
        // 0x8022B300: slt         $at, $v1, $a2
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
        goto L_8022B310;
    }
    goto skip_0;
    // 0x8022B300: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    skip_0:
    // 0x8022B304: jr          $ra
    // 0x8022B308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
L_8022B30C:
    // 0x8022B30C: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
L_8022B310:
    // 0x8022B310: bne         $at, $zero, L_8022B2C0
    if (ctx->r1 != 0) {
        // 0x8022B314: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_8022B2C0;
    }
    // 0x8022B314: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x8022B318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B31C: jr          $ra
    // 0x8022B320: nop

    return;
    // 0x8022B320: nop

    // 0x8022B324: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022B328: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B32C: lui         $s2, 0x8027
    // ROM @ 0x8022B32C; N64Recomp regen can emit lui 0 here.
    ctx->r18 = S32(0X8027 << 16);
    // 0x8022B330: addiu       $s2, $s2, 0x5E70
    ctx->r18 = ADD32(ctx->r18, 0X5E70);
    // 0x8022B334: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(0, ctx->r18);
    // 0x8022B338: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022B33C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B340: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B344: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8022B348: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022B34C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022B350: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022B354: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022B358: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8022B35C: blez        $t6, L_8022B3E4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8022B360: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8022B3E4;
    }
    // 0x8022B360: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022B364: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x8022B368: lui         $s4, 0x8027
    ctx->r20 = S32(0X8027 << 16);
    // 0x8022B36C: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x8022B370: addiu       $s3, $s3, 0x5E80
    ctx->r19 = ADD32(ctx->r19, 0X5E80);
    // 0x8022B374: addiu       $s4, $s4, 0x5F88
    ctx->r20 = ADD32(ctx->r20, 0X5F88);
    // 0x8022B378: addiu       $s5, $s5, 0x3FD4
    ctx->r21 = ADD32(ctx->r21, 0X3FD4);
    // 0x8022B37C: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
L_8022B380:
    // 0x8022B380: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x8022B384: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8022B388: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8022B38C: sltu        $at, $v1, $t8
    ctx->r1 = ctx->r3 < ctx->r24 ? 1 : 0;
    // 0x8022B390: bnel        $at, $zero, L_8022B3D4
    if (ctx->r1 != 0) {
        // 0x8022B394: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B3D4;
    }
    goto skip_1;
    // 0x8022B394: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x8022B398: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8022B39C: sltu        $at, $v1, $t9
    ctx->r1 = ctx->r3 < ctx->r25 ? 1 : 0;
    // 0x8022B3A0: beql        $at, $zero, L_8022B3D4
    if (ctx->r1 == 0) {
        // 0x8022B3A4: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B3D4;
    }
    goto skip_2;
    // 0x8022B3A4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x8022B3A8: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x8022B3AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022B3B0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8022B3B4: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x8022B3B8: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8022B3BC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8022B3C0: beql        $t1, $zero, L_8022B3D4
    if (ctx->r9 == 0) {
        // 0x8022B3C4: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B3D4;
    }
    goto skip_3;
    // 0x8022B3C4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_3:
    // 0x8022B3C8: jal         0x80231A24
    // 0x8022B3CC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022B3CC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_0:
    // 0x8022B3D0: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
L_8022B3D4:
    // 0x8022B3D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022B3D8: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8022B3DC: bnel        $at, $zero, L_8022B380
    if (ctx->r1 != 0) {
        // 0x8022B3E0: sll         $t7, $s0, 3
        ctx->r15 = S32(ctx->r16 << 3);
            goto L_8022B380;
    }
    goto skip_4;
    // 0x8022B3E0: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    skip_4:
L_8022B3E4:
    // 0x8022B3E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022B3E8: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x8022B3EC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022B3F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B3F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B3F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B3FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B400: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B404: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B408: jr          $ra
    // 0x8022B40C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8022B40C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802EF974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF9F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EF9F8: bne         $a0, $zero, L_802EFA0C
    if (ctx->r4 != 0) {
        // 0x802EF9FC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EFA0C;
    }
    // 0x802EF9FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EFA00: jal         0x802C67EC
    // 0x802EFA04: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EFA04: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x802EFA08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EFA0C:
    // 0x802EFA0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EFA10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EFA14: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EFA18: jr          $ra
    // 0x802EFA1C: nop

    return;
    // 0x802EFA1C: nop

;}
RECOMP_FUNC void D_802E8ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8F50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802E8F54: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E8F58: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802E8F5C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802E8F60: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802E8F64: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802E8F68: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802E8F6C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802E8F70: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802E8F74: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802E8F78: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802E8F7C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802E8F80: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802E8F84: bne         $t6, $at, L_802E8F94
    if (ctx->r14 != ctx->r1) {
        // 0x802E8F88: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802E8F94;
    }
    // 0x802E8F88: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802E8F8C: b           L_802E8F98
    // 0x802E8F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802E8F98;
    // 0x802E8F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802E8F94:
    // 0x802E8F94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802E8F98:
    // 0x802E8F98: beq         $v0, $zero, L_802E8FE0
    if (ctx->r2 == 0) {
        // 0x802E8F9C: lui         $s1, 0x0
        ctx->r17 = S32(0X0 << 16);
            goto L_802E8FE0;
    }
    // 0x802E8F9C: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802E8FA0: lw          $t7, 0x14($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X14);
    // 0x802E8FA4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802E8FA8: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802E8FAC: bne         $t7, $at, L_802E8FCC
    if (ctx->r15 != ctx->r1) {
        // 0x802E8FB0: addiu       $s1, $s1, 0x0
        ctx->r17 = ADD32(ctx->r17, 0X0);
            goto L_802E8FCC;
    }
    // 0x802E8FB0: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802E8FB4: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802E8FB8: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802E8FBC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802E8FC0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802E8FC4: b           L_802E90A0
    // 0x802E8FC8: addiu       $s3, $v0, 0x4E3C
    ctx->r19 = ADD32(ctx->r2, 0X4E3C);
        goto L_802E90A0;
    // 0x802E8FC8: addiu       $s3, $v0, 0x4E3C
    ctx->r19 = ADD32(ctx->r2, 0X4E3C);
L_802E8FCC:
    // 0x802E8FCC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802E8FD0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802E8FD4: addiu       $s3, $v0, 0x365C
    ctx->r19 = ADD32(ctx->r2, 0X365C);
    // 0x802E8FD8: b           L_802E90A0
    // 0x802E8FDC: nop

        goto L_802E90A0;
    // 0x802E8FDC: nop

L_802E8FE0:
    // 0x802E8FE0: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802E8FE4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802E8FE8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E8FEC: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E8FF0: lbu         $t8, 0x6FB8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6FB8);
    // 0x802E8FF4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802E8FF8: blezl       $t8, L_802E909C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x802E8FFC: mtc1        $zero, $f22
        ctx->f22.u32l = 0;
            goto L_802E909C;
    }
    goto skip_0;
    // 0x802E8FFC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    skip_0:
    // 0x802E9000: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802E9004: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E9008: addu        $t9, $v0, $s0
    ctx->r25 = ADD32(ctx->r2, ctx->r16);
L_802E900C:
    // 0x802E900C: lw          $a0, 0x6F94($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6F94);
    // 0x802E9010: beql        $a0, $zero, L_802E9080
    if (ctx->r4 == 0) {
        // 0x802E9014: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E9080;
    }
    goto skip_1;
    // 0x802E9014: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x802E9018: jal         0x80317E10
    // 0x802E901C: nop

    static_3_80317E10(rdram, ctx);
        goto after_0;
    // 0x802E901C: nop

    after_0:
    // 0x802E9020: beql        $v0, $zero, L_802E9080
    if (ctx->r2 == 0) {
        // 0x802E9024: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E9080;
    }
    goto skip_2;
    // 0x802E9024: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_2:
    // 0x802E9028: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x802E902C: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x802E9030: jal         0x803183C0
    // 0x802E9034: lw          $a0, 0x6F94($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F94);
    static_3_803183C0(rdram, ctx);
        goto after_1;
    // 0x802E9034: lw          $a0, 0x6F94($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F94);
    after_1:
    // 0x802E9038: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x802E903C: nop

    // 0x802E9040: bc1fl       L_802E9080
    if (!c1cs) {
        // 0x802E9044: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E9080;
    }
    goto skip_3;
    // 0x802E9044: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_3:
    // 0x802E9048: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x802E904C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802E9050: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x802E9054: jal         0x80318510
    // 0x802E9058: lw          $a1, 0x6F94($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X6F94);
    static_3_80318510(rdram, ctx);
        goto after_2;
    // 0x802E9058: lw          $a1, 0x6F94($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X6F94);
    after_2:
    // 0x802E905C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802E9060: nop

    // 0x802E9064: bc1fl       L_802E9080
    if (!c1cs) {
        // 0x802E9068: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E9080;
    }
    goto skip_4;
    // 0x802E9068: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_4:
    // 0x802E906C: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x802E9070: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802E9074: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x802E9078: lw          $s3, 0x6F94($t5)
    ctx->r19 = MEM_W(ctx->r13, 0X6F94);
    // 0x802E907C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_802E9080:
    // 0x802E9080: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802E9084: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E9088: lbu         $t6, 0x6FB8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6FB8);
    // 0x802E908C: slt         $at, $s2, $t6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802E9090: bnel        $at, $zero, L_802E900C
    if (ctx->r1 != 0) {
        // 0x802E9094: addu        $t9, $v0, $s0
        ctx->r25 = ADD32(ctx->r2, ctx->r16);
            goto L_802E900C;
    }
    goto skip_5;
    // 0x802E9094: addu        $t9, $v0, $s0
    ctx->r25 = ADD32(ctx->r2, ctx->r16);
    skip_5:
    // 0x802E9098: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
L_802E909C:
    // 0x802E909C: nop

L_802E90A0:
    // 0x802E90A0: bne         $s3, $zero, L_802E9150
    if (ctx->r19 != 0) {
        // 0x802E90A4: nop
    
            goto L_802E9150;
    }
    // 0x802E90A4: nop

    // 0x802E90A8: lbu         $t7, 0x6FB8($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6FB8);
    // 0x802E90AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E90B0: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E90B4: blez        $t7, L_802E9150
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802E90B8: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_802E9150;
    }
    // 0x802E90B8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802E90BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E90C0: addu        $t8, $v0, $s0
    ctx->r24 = ADD32(ctx->r2, ctx->r16);
L_802E90C4:
    // 0x802E90C4: lw          $a0, 0x6F94($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X6F94);
    // 0x802E90C8: beql        $a0, $zero, L_802E9138
    if (ctx->r4 == 0) {
        // 0x802E90CC: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E9138;
    }
    goto skip_6;
    // 0x802E90CC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_6:
    // 0x802E90D0: jal         0x80317E10
    // 0x802E90D4: nop

    static_3_80317E10(rdram, ctx);
        goto after_3;
    // 0x802E90D4: nop

    after_3:
    // 0x802E90D8: beql        $v0, $zero, L_802E9138
    if (ctx->r2 == 0) {
        // 0x802E90DC: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E9138;
    }
    goto skip_7;
    // 0x802E90DC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_7:
    // 0x802E90E0: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x802E90E4: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x802E90E8: jal         0x803183C0
    // 0x802E90EC: lw          $a0, 0x6F94($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6F94);
    static_3_803183C0(rdram, ctx);
        goto after_4;
    // 0x802E90EC: lw          $a0, 0x6F94($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6F94);
    after_4:
    // 0x802E90F0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x802E90F4: nop

    // 0x802E90F8: bc1fl       L_802E9138
    if (!c1cs) {
        // 0x802E90FC: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E9138;
    }
    goto skip_8;
    // 0x802E90FC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_8:
    // 0x802E9100: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x802E9104: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802E9108: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x802E910C: jal         0x80318510
    // 0x802E9110: lw          $a1, 0x6F94($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X6F94);
    static_3_80318510(rdram, ctx);
        goto after_5;
    // 0x802E9110: lw          $a1, 0x6F94($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X6F94);
    after_5:
    // 0x802E9114: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802E9118: nop

    // 0x802E911C: bc1fl       L_802E9138
    if (!c1cs) {
        // 0x802E9120: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E9138;
    }
    goto skip_9;
    // 0x802E9120: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_9:
    // 0x802E9124: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x802E9128: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802E912C: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x802E9130: lw          $s3, 0x6F94($t4)
    ctx->r19 = MEM_W(ctx->r12, 0X6F94);
    // 0x802E9134: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_802E9138:
    // 0x802E9138: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802E913C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E9140: lbu         $t5, 0x6FB8($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X6FB8);
    // 0x802E9144: slt         $at, $s2, $t5
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x802E9148: bnel        $at, $zero, L_802E90C4
    if (ctx->r1 != 0) {
        // 0x802E914C: addu        $t8, $v0, $s0
        ctx->r24 = ADD32(ctx->r2, ctx->r16);
            goto L_802E90C4;
    }
    goto skip_10;
    // 0x802E914C: addu        $t8, $v0, $s0
    ctx->r24 = ADD32(ctx->r2, ctx->r16);
    skip_10:
L_802E9150:
    // 0x802E9150: bne         $s3, $zero, L_802E9200
    if (ctx->r19 != 0) {
        // 0x802E9154: nop
    
            goto L_802E9200;
    }
    // 0x802E9154: nop

    // 0x802E9158: lbu         $t6, 0x6EFC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6EFC);
    // 0x802E915C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E9160: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E9164: blez        $t6, L_802E9200
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802E9168: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_802E9200;
    }
    // 0x802E9168: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802E916C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E9170: addu        $t7, $v0, $s0
    ctx->r15 = ADD32(ctx->r2, ctx->r16);
L_802E9174:
    // 0x802E9174: lw          $a0, 0x6EEC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X6EEC);
    // 0x802E9178: beql        $a0, $zero, L_802E91E8
    if (ctx->r4 == 0) {
        // 0x802E917C: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E91E8;
    }
    goto skip_11;
    // 0x802E917C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_11:
    // 0x802E9180: jal         0x80317E10
    // 0x802E9184: nop

    static_3_80317E10(rdram, ctx);
        goto after_6;
    // 0x802E9184: nop

    after_6:
    // 0x802E9188: beql        $v0, $zero, L_802E91E8
    if (ctx->r2 == 0) {
        // 0x802E918C: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E91E8;
    }
    goto skip_12;
    // 0x802E918C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_12:
    // 0x802E9190: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x802E9194: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802E9198: jal         0x803183C0
    // 0x802E919C: lw          $a0, 0x6EEC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6EEC);
    static_3_803183C0(rdram, ctx);
        goto after_7;
    // 0x802E919C: lw          $a0, 0x6EEC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6EEC);
    after_7:
    // 0x802E91A0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x802E91A4: nop

    // 0x802E91A8: bc1fl       L_802E91E8
    if (!c1cs) {
        // 0x802E91AC: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E91E8;
    }
    goto skip_13;
    // 0x802E91AC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_13:
    // 0x802E91B0: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x802E91B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802E91B8: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x802E91BC: jal         0x80318510
    // 0x802E91C0: lw          $a1, 0x6EEC($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X6EEC);
    static_3_80318510(rdram, ctx);
        goto after_8;
    // 0x802E91C0: lw          $a1, 0x6EEC($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X6EEC);
    after_8:
    // 0x802E91C4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802E91C8: nop

    // 0x802E91CC: bc1fl       L_802E91E8
    if (!c1cs) {
        // 0x802E91D0: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_802E91E8;
    }
    goto skip_14;
    // 0x802E91D0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_14:
    // 0x802E91D4: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x802E91D8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802E91DC: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x802E91E0: lw          $s3, 0x6EEC($t3)
    ctx->r19 = MEM_W(ctx->r11, 0X6EEC);
    // 0x802E91E4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_802E91E8:
    // 0x802E91E8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802E91EC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E91F0: lbu         $t4, 0x6EFC($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X6EFC);
    // 0x802E91F4: slt         $at, $s2, $t4
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802E91F8: bnel        $at, $zero, L_802E9174
    if (ctx->r1 != 0) {
        // 0x802E91FC: addu        $t7, $v0, $s0
        ctx->r15 = ADD32(ctx->r2, ctx->r16);
            goto L_802E9174;
    }
    goto skip_15;
    // 0x802E91FC: addu        $t7, $v0, $s0
    ctx->r15 = ADD32(ctx->r2, ctx->r16);
    skip_15:
L_802E9200:
    // 0x802E9200: beq         $s3, $zero, L_802E9214
    if (ctx->r19 == 0) {
        // 0x802E9204: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_802E9214;
    }
    // 0x802E9204: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x802E9208: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802E920C: b           L_802E9218
    // 0x802E9210: sb          $t5, 0xEC($s4)
    MEM_B(0XEC, ctx->r20) = ctx->r13;
        goto L_802E9218;
    // 0x802E9210: sb          $t5, 0xEC($s4)
    MEM_B(0XEC, ctx->r20) = ctx->r13;
L_802E9214:
    // 0x802E9214: sb          $zero, 0xEC($s4)
    MEM_B(0XEC, ctx->r20) = 0;
L_802E9218:
    // 0x802E9218: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802E921C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802E9220: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802E9224: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802E9228: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802E922C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802E9230: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802E9234: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802E9238: jr          $ra
    // 0x802E923C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802E923C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802ED3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED43C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802ED440: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED444: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802ED448: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ED44C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ED450: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x802ED454: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802ED458: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802ED45C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ED460: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ED464: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802ED468: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ED46C: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ED470: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ED474: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ED478: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED47C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ED480: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ED484: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802ED488: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802ED48C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED490: jr          $ra
    // 0x802ED494: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802ED494: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_80279218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279290: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80279294: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80279298: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8027929C: beq         $a1, $zero, L_8027930C
    if (ctx->r5 == 0) {
        // 0x802792A0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8027930C;
    }
    // 0x802792A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802792A4: lh          $t6, 0x6C38($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6C38);
    // 0x802792A8: blezl       $t6, L_8027930C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802792AC: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8027930C;
    }
    goto skip_0;
    // 0x802792AC: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    skip_0:
    // 0x802792B0: blez        $a1, L_8027930C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802792B4: lui         $at, 0xFF
        ctx->r1 = S32(0XFF << 16);
            goto L_8027930C;
    }
    // 0x802792B4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802792B8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x802792BC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x802792C0: lbu         $t9, 0x3F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3F);
    // 0x802792C4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802792C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802792CC: and         $a1, $v0, $at
    ctx->r5 = ctx->r2 & ctx->r1;
    // 0x802792D0: srl         $a2, $v0, 24
    ctx->r6 = S32(U32(ctx->r2) >> 24);
    // 0x802792D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802792D8: jal         0x802AF254
    // 0x802792DC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    static_3_802AF254(rdram, ctx);
        goto after_0;
    // 0x802792DC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_0:
    // 0x802792E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802792E4: bne         $v0, $at, L_802792F4
    if (ctx->r2 != ctx->r1) {
        // 0x802792E8: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_802792F4;
    }
    // 0x802792E8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802792EC: b           L_8027930C
    // 0x802792F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8027930C;
    // 0x802792F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802792F4:
    // 0x802792F4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802792F8: beql        $v0, $at, L_80279310
    if (ctx->r2 == ctx->r1) {
        // 0x802792FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80279310;
    }
    goto skip_1;
    // 0x802792FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80279300: b           L_8027930C
    // 0x80279304: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_8027930C;
    // 0x80279304: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80279308: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_8027930C:
    // 0x8027930C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80279310:
    // 0x80279310: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80279314: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80279318: jr          $ra
    // 0x8027931C: nop

    return;
    // 0x8027931C: nop

;}

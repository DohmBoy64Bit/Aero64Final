#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802ECDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECE44: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x802ECE48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ECE4C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802ECE50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ECE54: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ECE58: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x802ECE5C: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802ECE60: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802ECE64: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ECE68: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ECE6C: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802ECE70: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ECE74: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ECE78: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ECE7C: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ECE80: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802ECE84: jr          $ra
    // 0x802ECE88: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802ECE88: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_80233FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233FEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233FF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80233FF4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80233FF8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80233FFC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80234000: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234004: jal         0x8023CBF0
    // 0x80234008: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023CBF0(rdram, ctx);
        goto after_0;
    // 0x80234008: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8023400C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80234010: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x80234014: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80234018: addiu       $s2, $zero, 0xFFF
    ctx->r18 = ADD32(0, 0XFFF);
    // 0x8023401C: blez        $v1, L_802340B4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80234020: lui         $s1, 0x0
        ctx->r17 = S32(0X0 << 16);
            goto L_802340B4;
    }
    // 0x80234020: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80234024: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80234028: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
L_8023402C:
    // 0x8023402C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234030: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80234034: addu        $a0, $s0, $t6
    ctx->r4 = ADD32(ctx->r16, ctx->r14);
    // 0x80234038: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x8023403C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80234040: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234044: beq         $t7, $zero, L_80234058
    if (ctx->r15 == 0) {
        // 0x80234048: nop
    
            goto L_80234058;
    }
    // 0x80234048: nop

    // 0x8023404C: lbu         $t8, 0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2);
    // 0x80234050: bnel        $t8, $zero, L_80234064
    if (ctx->r24 != 0) {
        // 0x80234054: lhu         $t9, 0xC($a0)
        ctx->r25 = MEM_HU(ctx->r4, 0XC);
            goto L_80234064;
    }
    goto skip_0;
    // 0x80234054: lhu         $t9, 0xC($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XC);
    skip_0:
L_80234058:
    // 0x80234058: b           L_802340A4
    // 0x8023405C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_802340A4;
    // 0x8023405C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234060: lhu         $t9, 0xC($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XC);
L_80234064:
    // 0x80234064: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234068: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023406C: bne         $s2, $t9, L_80234080
    if (ctx->r18 != ctx->r25) {
        // 0x80234070: sll         $v0, $v0, 3
        ctx->r2 = S32(ctx->r2 << 3);
            goto L_80234080;
    }
    // 0x80234070: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80234074: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234078: b           L_802340A4
    // 0x8023407C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_802340A4;
    // 0x8023407C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80234080:
    // 0x80234080: jal         0x80233EA0
    // 0x80234084: nop

    static_3_80233EA0(rdram, ctx);
        goto after_1;
    // 0x80234084: nop

    after_1:
    // 0x80234088: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8023408C: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x80234090: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234094: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80234098: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023409C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802340A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802340A4:
    // 0x802340A4: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    // 0x802340A8: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802340AC: bnel        $at, $zero, L_8023402C
    if (ctx->r1 != 0) {
        // 0x802340B0: lw          $t6, 0x0($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X0);
            goto L_8023402C;
    }
    goto skip_1;
    // 0x802340B0: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    skip_1:
L_802340B4:
    // 0x802340B4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802340B8: jal         0x8023A700
    // 0x802340BC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023A700(rdram, ctx);
        goto after_2;
    // 0x802340BC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x802340C0: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802340C4: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x802340C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802340CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802340D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802340D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802340D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802340DC: addiu       $t1, $t0, -0x8
    ctx->r9 = ADD32(ctx->r8, -0X8);
    // 0x802340E0: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802340E4: jr          $ra
    // 0x802340E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802340E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802ED4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED528: beq         $a0, $zero, L_802ED558
    if (ctx->r4 == 0) {
        // 0x802ED52C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ED558;
    }
    // 0x802ED52C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ED530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ED534: jal         0x8031C514
    // 0x802ED538: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ED538: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ED53C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED540: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED544: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ED548: beql        $t7, $zero, L_802ED55C
    if (ctx->r15 == 0) {
        // 0x802ED54C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ED55C;
    }
    goto skip_0;
    // 0x802ED54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ED550: jal         0x802C681C
    // 0x802ED554: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ED554: nop

    after_1:
L_802ED558:
    // 0x802ED558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ED55C:
    // 0x802ED55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED560: jr          $ra
    // 0x802ED564: nop

    return;
    // 0x802ED564: nop

;}
RECOMP_FUNC void D_8029B190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029B210: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029B214: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8029B218: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8029B21C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8029B220: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8029B224: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8029B228: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8029B22C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8029B230: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8029B234: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8029B238: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029B23C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029B240: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029B244: jal         0x802CEEB4
    // 0x8029B248: addiu       $a3, $zero, 0xB3
    ctx->r7 = ADD32(0, 0XB3);
    static_3_802CEEB4(rdram, ctx);
        goto after_0;
    // 0x8029B248: addiu       $a3, $zero, 0xB3
    ctx->r7 = ADD32(0, 0XB3);
    after_0:
    // 0x8029B24C: addiu       $t7, $zero, 0xCC
    ctx->r15 = ADD32(0, 0XCC);
    // 0x8029B250: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8029B254: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8029B258: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8029B25C: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    // 0x8029B260: addiu       $a3, $zero, 0xB3
    ctx->r7 = ADD32(0, 0XB3);
    // 0x8029B264: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029B268: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029B26C: jal         0x802CEEB4
    // 0x8029B270: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    static_3_802CEEB4(rdram, ctx);
        goto after_1;
    // 0x8029B270: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x8029B274: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8029B278: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8029B27C: jr          $ra
    // 0x8029B280: nop

    return;
    // 0x8029B280: nop

;}
RECOMP_FUNC void D_802D6E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D6EFC: addiu       $sp, $sp, -0x208
    ctx->r29 = ADD32(ctx->r29, -0X208);
    // 0x802D6F00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D6F04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D6F08: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x802D6F0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D6F10: sb          $v0, 0x380($a0)
    MEM_B(0X380, ctx->r4) = ctx->r2;
    // 0x802D6F14: jal         0x8021BA90
    // 0x802D6F18: sb          $v0, 0x381($a0)
    MEM_B(0X381, ctx->r4) = ctx->r2;
    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x802D6F18: sb          $v0, 0x381($a0)
    MEM_B(0X381, ctx->r4) = ctx->r2;
    after_0:
    // 0x802D6F1C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802D6F20: bne         $v0, $at, L_802D6F48
    if (ctx->r2 != ctx->r1) {
        // 0x802D6F24: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_802D6F48;
    }
    // 0x802D6F24: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x802D6F28: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6F2C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802D6F30: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802D6F34: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802D6F38: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802D6F3C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D6F40: jal         0x80231A24
    // 0x802D6F44: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802D6F44: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    after_1:
L_802D6F48:
    // 0x802D6F48: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D6F4C: jal         0x8021ACB0
    // 0x802D6F50: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x802D6F50: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x802D6F54: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D6F58: jal         0x8021B838
    // 0x802D6F5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_3;
    // 0x802D6F5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x802D6F60: jal         0x80307DE4
    // 0x802D6F64: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80307DE4(rdram, ctx);
        goto after_4;
    // 0x802D6F64: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_4:
    // 0x802D6F68: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802D6F6C: addiu       $v1, $s0, 0x1A4
    ctx->r3 = ADD32(ctx->r16, 0X1A4);
    // 0x802D6F70: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x802D6F74: lh          $t6, 0x20($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X20);
    // 0x802D6F78: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x802D6F7C: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x802D6F80: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x802D6F84: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x802D6F88: jalr        $t9
    // 0x802D6F8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802D6F8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x802D6F90: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802D6F94: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802D6F98: lh          $t7, 0xA0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA0);
    // 0x802D6F9C: lw          $t9, 0xA4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XA4);
    // 0x802D6FA0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802D6FA4: jalr        $t9
    // 0x802D6FA8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802D6FA8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_6:
    // 0x802D6FAC: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802D6FB0: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x802D6FB4: lh          $t8, 0x98($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X98);
    // 0x802D6FB8: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x802D6FBC: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802D6FC0: jalr        $t9
    // 0x802D6FC4: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802D6FC4: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_7:
    // 0x802D6FC8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802D6FCC: jal         0x802D27F4
    // 0x802D6FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D27F4(rdram, ctx);
        goto after_8;
    // 0x802D6FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x802D6FD4: lbu         $t0, 0xE0C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE0C);
    // 0x802D6FD8: beql        $t0, $zero, L_802D6FEC
    if (ctx->r8 == 0) {
        // 0x802D6FDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802D6FEC;
    }
    goto skip_0;
    // 0x802D6FDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x802D6FE0: b           L_802D6FEC
    // 0x802D6FE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802D6FEC;
    // 0x802D6FE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802D6FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D6FEC:
    // 0x802D6FEC: sb          $v0, 0x364($s0)
    MEM_B(0X364, ctx->r16) = ctx->r2;
    // 0x802D6FF0: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802D6FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D6FF8: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802D6FFC: lh          $t1, 0xB0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XB0);
    // 0x802D7000: jalr        $t9
    // 0x802D7004: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802D7004: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    after_9:
    // 0x802D7008: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802D700C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D7010: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x802D7014: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D7018: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D701C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802D7020: jal         0x80309758
    // 0x802D7024: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    static_3_80309758(rdram, ctx);
        goto after_10;
    // 0x802D7024: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    after_10:
    // 0x802D7028: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D702C: jal         0x80318E80
    // 0x802D7030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_11;
    // 0x802D7030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x802D7034: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802D7038: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802D703C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D7040: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D7044: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802D7048: jal         0x80309758
    // 0x802D704C: swc1        $f6, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f6.u32l;
    static_3_80309758(rdram, ctx);
        goto after_12;
    // 0x802D704C: swc1        $f6, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f6.u32l;
    after_12:
    // 0x802D7050: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802D7054: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D7058: swc1        $f0, 0x41C($s0)
    MEM_W(0X41C, ctx->r16) = ctx->f0.u32l;
    // 0x802D705C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D7060: jal         0x80309758
    // 0x802D7064: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_13;
    // 0x802D7064: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x802D7068: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802D706C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D7070: swc1        $f0, 0x420($s0)
    MEM_W(0X420, ctx->r16) = ctx->f0.u32l;
    // 0x802D7074: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D7078: jal         0x80309758
    // 0x802D707C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_14;
    // 0x802D707C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x802D7080: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802D7084: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D7088: swc1        $f0, 0x424($s0)
    MEM_W(0X424, ctx->r16) = ctx->f0.u32l;
    // 0x802D708C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D7090: jal         0x80309758
    // 0x802D7094: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_15;
    // 0x802D7094: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x802D7098: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x802D709C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D70A0: swc1        $f0, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->f0.u32l;
    // 0x802D70A4: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D70A8: jal         0x80309758
    // 0x802D70AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_16;
    // 0x802D70AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x802D70B0: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x802D70B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D70B8: swc1        $f0, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->f0.u32l;
    // 0x802D70BC: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D70C0: jal         0x80309758
    // 0x802D70C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_17;
    // 0x802D70C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
    // 0x802D70C8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x802D70CC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D70D0: swc1        $f0, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->f0.u32l;
    // 0x802D70D4: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D70D8: jal         0x80309758
    // 0x802D70DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_18;
    // 0x802D70DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x802D70E0: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x802D70E4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D70E8: swc1        $f0, 0x434($s0)
    MEM_W(0X434, ctx->r16) = ctx->f0.u32l;
    // 0x802D70EC: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D70F0: jal         0x80309758
    // 0x802D70F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_19;
    // 0x802D70F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_19:
    // 0x802D70F8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x802D70FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D7100: swc1        $f0, 0x438($s0)
    MEM_W(0X438, ctx->r16) = ctx->f0.u32l;
    // 0x802D7104: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D7108: jal         0x80309758
    // 0x802D710C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_20;
    // 0x802D710C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x802D7110: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x802D7114: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D7118: swc1        $f0, 0x43C($s0)
    MEM_W(0X43C, ctx->r16) = ctx->f0.u32l;
    // 0x802D711C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802D7120: jal         0x80309758
    // 0x802D7124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_21;
    // 0x802D7124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x802D7128: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802D712C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D7130: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802D7134: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D7138: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802D713C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802D7140: lbu         $t2, 0xE0C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XE0C);
    // 0x802D7144: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802D7148: swc1        $f0, 0x440($s0)
    MEM_W(0X440, ctx->r16) = ctx->f0.u32l;
    // 0x802D714C: sb          $zero, 0x481($s0)
    MEM_B(0X481, ctx->r16) = 0;
    // 0x802D7150: sw          $zero, 0x48C($s0)
    MEM_W(0X48C, ctx->r16) = 0;
    // 0x802D7154: swc1        $f2, 0x444($s0)
    MEM_W(0X444, ctx->r16) = ctx->f2.u32l;
    // 0x802D7158: swc1        $f2, 0x448($s0)
    MEM_W(0X448, ctx->r16) = ctx->f2.u32l;
    // 0x802D715C: swc1        $f2, 0x44C($s0)
    MEM_W(0X44C, ctx->r16) = ctx->f2.u32l;
    // 0x802D7160: swc1        $f2, 0x450($s0)
    MEM_W(0X450, ctx->r16) = ctx->f2.u32l;
    // 0x802D7164: swc1        $f12, 0x45C($s0)
    MEM_W(0X45C, ctx->r16) = ctx->f12.u32l;
    // 0x802D7168: swc1        $f12, 0x460($s0)
    MEM_W(0X460, ctx->r16) = ctx->f12.u32l;
    // 0x802D716C: swc1        $f12, 0x464($s0)
    MEM_W(0X464, ctx->r16) = ctx->f12.u32l;
    // 0x802D7170: swc1        $f12, 0x468($s0)
    MEM_W(0X468, ctx->r16) = ctx->f12.u32l;
    // 0x802D7174: swc1        $f14, 0x454($s0)
    MEM_W(0X454, ctx->r16) = ctx->f14.u32l;
    // 0x802D7178: swc1        $f14, 0x458($s0)
    MEM_W(0X458, ctx->r16) = ctx->f14.u32l;
    // 0x802D717C: beq         $t2, $zero, L_802D71D8
    if (ctx->r10 == 0) {
        // 0x802D7180: swc1        $f8, 0x488($s0)
        MEM_W(0X488, ctx->r16) = ctx->f8.u32l;
            goto L_802D71D8;
    }
    // 0x802D7180: swc1        $f8, 0x488($s0)
    MEM_W(0X488, ctx->r16) = ctx->f8.u32l;
    // 0x802D7184: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D7188: sb          $a1, 0x47D($s0)
    MEM_B(0X47D, ctx->r16) = ctx->r5;
    // 0x802D718C: sb          $a1, 0x47E($s0)
    MEM_B(0X47E, ctx->r16) = ctx->r5;
    // 0x802D7190: sb          $a1, 0x47F($s0)
    MEM_B(0X47F, ctx->r16) = ctx->r5;
    // 0x802D7194: sb          $a1, 0x480($s0)
    MEM_B(0X480, ctx->r16) = ctx->r5;
    // 0x802D7198: jal         0x80307170
    // 0x802D719C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80307170(rdram, ctx);
        goto after_22;
    // 0x802D719C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x802D71A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D71A4: jal         0x803073E8
    // 0x802D71A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_803073E8(rdram, ctx);
        goto after_23;
    // 0x802D71A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x802D71AC: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802D71B0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802D71B4: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D71B8: lh          $t3, 0x60($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X60);
    // 0x802D71BC: jalr        $t9
    // 0x802D71C0: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x802D71C0: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_24:
    // 0x802D71C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D71C8: jal         0x803071FC
    // 0x802D71CC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    static_3_803071FC(rdram, ctx);
        goto after_25;
    // 0x802D71CC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_25:
    // 0x802D71D0: b           L_802D71E8
    // 0x802D71D4: nop

        goto L_802D71E8;
    // 0x802D71D4: nop

L_802D71D8:
    // 0x802D71D8: sb          $zero, 0x47D($s0)
    MEM_B(0X47D, ctx->r16) = 0;
    // 0x802D71DC: sb          $zero, 0x47E($s0)
    MEM_B(0X47E, ctx->r16) = 0;
    // 0x802D71E0: sb          $zero, 0x47F($s0)
    MEM_B(0X47F, ctx->r16) = 0;
    // 0x802D71E4: sb          $zero, 0x480($s0)
    MEM_B(0X480, ctx->r16) = 0;
L_802D71E8:
    // 0x802D71E8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D71EC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D71F0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802D71F4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x802D71F8: jal         0x802AA4A4
    // 0x802D71FC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_26;
    // 0x802D71FC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_26:
    // 0x802D7200: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802D7204: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D7208: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802D720C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D7210: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802D7214: addiu       $t4, $sp, 0x1F8
    ctx->r12 = ADD32(ctx->r29, 0X1F8);
    // 0x802D7218: swc1        $f16, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->f16.u32l;
    // 0x802D721C: swc1        $f18, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f18.u32l;
    // 0x802D7220: swc1        $f10, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f10.u32l;
    // 0x802D7224: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x802D7228: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D722C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x802D7230: lw          $a2, 0x4($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X4);
    // 0x802D7234: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x802D7238: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D723C: lw          $a3, 0x8($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X8);
    // 0x802D7240: jal         0x8028C404
    // 0x802D7244: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    static_3_8028C404(rdram, ctx);
        goto after_27;
    // 0x802D7244: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_27:
    // 0x802D7248: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D724C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D7250: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802D7254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802D7258: jal         0x802AA4A4
    // 0x802D725C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_28;
    // 0x802D725C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_28:
    // 0x802D7260: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D7264: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D7268: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802D726C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802D7270: jal         0x802AA4A4
    // 0x802D7274: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_29;
    // 0x802D7274: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_29:
    // 0x802D7278: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D727C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802D7280: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D7284: sw          $v0, 0x478($s0)
    MEM_W(0X478, ctx->r16) = ctx->r2;
    // 0x802D7288: addiu       $t7, $sp, 0x1F8
    ctx->r15 = ADD32(ctx->r29, 0X1F8);
    // 0x802D728C: swc1        $f0, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->f0.u32l;
    // 0x802D7290: swc1        $f0, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f0.u32l;
    // 0x802D7294: swc1        $f4, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f4.u32l;
    // 0x802D7298: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802D729C: lw          $a0, 0x478($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X478);
    // 0x802D72A0: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x802D72A4: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x802D72A8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x802D72AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D72B0: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x802D72B4: jal         0x8028C404
    // 0x802D72B8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    static_3_8028C404(rdram, ctx);
        goto after_30;
    // 0x802D72B8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_30:
    // 0x802D72BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D72C0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D72C4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802D72C8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802D72CC: jal         0x802AA4A4
    // 0x802D72D0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_31;
    // 0x802D72D0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_31:
    // 0x802D72D4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802D72D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D72DC: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x802D72E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D72E4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802D72E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D72EC: addiu       $t1, $sp, 0x1F8
    ctx->r9 = ADD32(ctx->r29, 0X1F8);
    // 0x802D72F0: swc1        $f6, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f6.u32l;
    // 0x802D72F4: swc1        $f8, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->f8.u32l;
    // 0x802D72F8: swc1        $f10, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f10.u32l;
    // 0x802D72FC: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802D7300: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D7304: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x802D7308: lw          $a2, 0x4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X4);
    // 0x802D730C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x802D7310: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D7314: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x802D7318: jal         0x8028C404
    // 0x802D731C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    static_3_8028C404(rdram, ctx);
        goto after_32;
    // 0x802D731C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_32:
    // 0x802D7320: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D7324: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D7328: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802D732C: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x802D7330: jal         0x802AA4A4
    // 0x802D7334: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_33;
    // 0x802D7334: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_33:
    // 0x802D7338: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x802D733C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D7340: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x802D7344: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D7348: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802D734C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D7350: addiu       $t9, $sp, 0x1F8
    ctx->r25 = ADD32(ctx->r29, 0X1F8);
    // 0x802D7354: swc1        $f16, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f16.u32l;
    // 0x802D7358: swc1        $f18, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->f18.u32l;
    // 0x802D735C: swc1        $f4, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f4.u32l;
    // 0x802D7360: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x802D7364: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D7368: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x802D736C: lw          $a2, 0x4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X4);
    // 0x802D7370: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x802D7374: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D7378: lw          $a3, 0x8($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X8);
    // 0x802D737C: jal         0x8028C404
    // 0x802D7380: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    static_3_8028C404(rdram, ctx);
        goto after_34;
    // 0x802D7380: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_34:
    // 0x802D7384: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D7388: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D738C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802D7390: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x802D7394: jal         0x802AA4A4
    // 0x802D7398: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_35;
    // 0x802D7398: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_35:
    // 0x802D739C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802D73A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D73A4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802D73A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D73AC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802D73B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D73B4: addiu       $t6, $sp, 0x1F8
    ctx->r14 = ADD32(ctx->r29, 0X1F8);
    // 0x802D73B8: swc1        $f6, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f6.u32l;
    // 0x802D73BC: swc1        $f8, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->f8.u32l;
    // 0x802D73C0: swc1        $f10, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f10.u32l;
    // 0x802D73C4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802D73C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D73CC: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x802D73D0: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x802D73D4: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x802D73D8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D73DC: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x802D73E0: jal         0x8028C404
    // 0x802D73E4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    static_3_8028C404(rdram, ctx);
        goto after_36;
    // 0x802D73E4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_36:
    // 0x802D73E8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D73EC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D73F0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802D73F4: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x802D73F8: jal         0x802AA4A4
    // 0x802D73FC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_37;
    // 0x802D73FC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_37:
    // 0x802D7400: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x802D7404: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D7408: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802D740C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D7410: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802D7414: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D7418: addiu       $t0, $sp, 0x1F8
    ctx->r8 = ADD32(ctx->r29, 0X1F8);
    // 0x802D741C: swc1        $f16, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f16.u32l;
    // 0x802D7420: swc1        $f18, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->f18.u32l;
    // 0x802D7424: swc1        $f4, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f4.u32l;
    // 0x802D7428: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x802D742C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D7430: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x802D7434: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x802D7438: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x802D743C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D7440: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x802D7444: jal         0x8028C404
    // 0x802D7448: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    static_3_8028C404(rdram, ctx);
        goto after_38;
    // 0x802D7448: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_38:
    // 0x802D744C: jal         0x8022970C
    // 0x802D7450: addiu       $a0, $sp, 0x1B8
    ctx->r4 = ADD32(ctx->r29, 0X1B8);
    func_8022970C(rdram, ctx);
        goto after_39;
    // 0x802D7450: addiu       $a0, $sp, 0x1B8
    ctx->r4 = ADD32(ctx->r29, 0X1B8);
    after_39:
    // 0x802D7454: jal         0x8022970C
    // 0x802D7458: addiu       $a0, $sp, 0x178
    ctx->r4 = ADD32(ctx->r29, 0X178);
    func_8022970C(rdram, ctx);
        goto after_40;
    // 0x802D7458: addiu       $a0, $sp, 0x178
    ctx->r4 = ADD32(ctx->r29, 0X178);
    after_40:
    // 0x802D745C: jal         0x8022970C
    // 0x802D7460: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    func_8022970C(rdram, ctx);
        goto after_41;
    // 0x802D7460: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    after_41:
    // 0x802D7464: jal         0x8022970C
    // 0x802D7468: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    func_8022970C(rdram, ctx);
        goto after_42;
    // 0x802D7468: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    after_42:
    // 0x802D746C: jal         0x8022970C
    // 0x802D7470: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    func_8022970C(rdram, ctx);
        goto after_43;
    // 0x802D7470: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    after_43:
    // 0x802D7474: jal         0x8022970C
    // 0x802D7478: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    func_8022970C(rdram, ctx);
        goto after_44;
    // 0x802D7478: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_44:
    // 0x802D747C: lui         $a2, 0xBFC9
    ctx->r6 = S32(0XBFC9 << 16);
    // 0x802D7480: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x802D7484: addiu       $a0, $sp, 0x1B8
    ctx->r4 = ADD32(ctx->r29, 0X1B8);
    // 0x802D7488: lui         $a1, 0x4124
    ctx->r5 = S32(0X4124 << 16);
    // 0x802D748C: jal         0x8022A0D0
    // 0x802D7490: lui         $a3, 0x4283
    ctx->r7 = S32(0X4283 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_45;
    // 0x802D7490: lui         $a3, 0x4283
    ctx->r7 = S32(0X4283 << 16);
    after_45:
    // 0x802D7494: lui         $a2, 0xBFC9
    ctx->r6 = S32(0XBFC9 << 16);
    // 0x802D7498: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x802D749C: addiu       $a0, $sp, 0x178
    ctx->r4 = ADD32(ctx->r29, 0X178);
    // 0x802D74A0: lui         $a1, 0xC124
    ctx->r5 = S32(0XC124 << 16);
    // 0x802D74A4: jal         0x8022A0D0
    // 0x802D74A8: lui         $a3, 0x4283
    ctx->r7 = S32(0X4283 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_46;
    // 0x802D74A8: lui         $a3, 0x4283
    ctx->r7 = S32(0X4283 << 16);
    after_46:
    // 0x802D74AC: lui         $a2, 0xC1A5
    ctx->r6 = S32(0XC1A5 << 16);
    // 0x802D74B0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x802D74B4: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    // 0x802D74B8: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x802D74BC: jal         0x8022A0D0
    // 0x802D74C0: lui         $a3, 0x427A
    ctx->r7 = S32(0X427A << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_47;
    // 0x802D74C0: lui         $a3, 0x427A
    ctx->r7 = S32(0X427A << 16);
    after_47:
    // 0x802D74C4: lui         $a2, 0xC1A5
    ctx->r6 = S32(0XC1A5 << 16);
    // 0x802D74C8: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x802D74CC: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    // 0x802D74D0: lui         $a1, 0xC140
    ctx->r5 = S32(0XC140 << 16);
    // 0x802D74D4: jal         0x8022A0D0
    // 0x802D74D8: lui         $a3, 0x427A
    ctx->r7 = S32(0X427A << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_48;
    // 0x802D74D8: lui         $a3, 0x427A
    ctx->r7 = S32(0X427A << 16);
    after_48:
    // 0x802D74DC: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x802D74E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D74E4: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x802D74E8: jal         0x8022A0D0
    // 0x802D74EC: lui         $a3, 0x4288
    ctx->r7 = S32(0X4288 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_49;
    // 0x802D74EC: lui         $a3, 0x4288
    ctx->r7 = S32(0X4288 << 16);
    after_49:
    // 0x802D74F0: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x802D74F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D74F8: lui         $a2, 0xC130
    ctx->r6 = S32(0XC130 << 16);
    // 0x802D74FC: jal         0x8022A0D0
    // 0x802D7500: lui         $a3, 0x4288
    ctx->r7 = S32(0X4288 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_50;
    // 0x802D7500: lui         $a3, 0x4288
    ctx->r7 = S32(0X4288 << 16);
    after_50:
    // 0x802D7504: lui         $a1, 0xBF6C
    ctx->r5 = S32(0XBF6C << 16);
    // 0x802D7508: ori         $a1, $a1, 0xCE6E
    ctx->r5 = ctx->r5 | 0XCE6E;
    // 0x802D750C: addiu       $a0, $sp, 0x1B8
    ctx->r4 = ADD32(ctx->r29, 0X1B8);
    // 0x802D7510: jal         0x802D01D4
    // 0x802D7514: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_51;
    // 0x802D7514: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_51:
    // 0x802D7518: lui         $a1, 0x3F6C
    ctx->r5 = S32(0X3F6C << 16);
    // 0x802D751C: ori         $a1, $a1, 0xCE6E
    ctx->r5 = ctx->r5 | 0XCE6E;
    // 0x802D7520: addiu       $a0, $sp, 0x178
    ctx->r4 = ADD32(ctx->r29, 0X178);
    // 0x802D7524: jal         0x802D01D4
    // 0x802D7528: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_52;
    // 0x802D7528: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_52:
    // 0x802D752C: lui         $a1, 0xC001
    ctx->r5 = S32(0XC001 << 16);
    // 0x802D7530: ori         $a1, $a1, 0x3C9
    ctx->r5 = ctx->r5 | 0X3C9;
    // 0x802D7534: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    // 0x802D7538: jal         0x802D01D4
    // 0x802D753C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_53;
    // 0x802D753C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_53:
    // 0x802D7540: lui         $a1, 0x4001
    ctx->r5 = S32(0X4001 << 16);
    // 0x802D7544: ori         $a1, $a1, 0x3C9
    ctx->r5 = ctx->r5 | 0X3C9;
    // 0x802D7548: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    // 0x802D754C: jal         0x802D01D4
    // 0x802D7550: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_54;
    // 0x802D7550: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_54:
    // 0x802D7554: addiu       $a0, $s0, 0x494
    ctx->r4 = ADD32(ctx->r16, 0X494);
    // 0x802D7558: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802D755C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802D7560: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x802D7564: jal         0x802C4A20
    // 0x802D7568: addiu       $a2, $sp, 0x1B8
    ctx->r6 = ADD32(ctx->r29, 0X1B8);
    static_3_802C4A20(rdram, ctx);
        goto after_55;
    // 0x802D7568: addiu       $a2, $sp, 0x1B8
    ctx->r6 = ADD32(ctx->r29, 0X1B8);
    after_55:
    // 0x802D756C: addiu       $a0, $s0, 0x628
    ctx->r4 = ADD32(ctx->r16, 0X628);
    // 0x802D7570: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802D7574: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802D7578: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x802D757C: jal         0x802C4A20
    // 0x802D7580: addiu       $a2, $sp, 0x178
    ctx->r6 = ADD32(ctx->r29, 0X178);
    static_3_802C4A20(rdram, ctx);
        goto after_56;
    // 0x802D7580: addiu       $a2, $sp, 0x178
    ctx->r6 = ADD32(ctx->r29, 0X178);
    after_56:
    // 0x802D7584: addiu       $a0, $s0, 0x7BC
    ctx->r4 = ADD32(ctx->r16, 0X7BC);
    // 0x802D7588: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802D758C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802D7590: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x802D7594: jal         0x802C4A20
    // 0x802D7598: addiu       $a2, $sp, 0x138
    ctx->r6 = ADD32(ctx->r29, 0X138);
    static_3_802C4A20(rdram, ctx);
        goto after_57;
    // 0x802D7598: addiu       $a2, $sp, 0x138
    ctx->r6 = ADD32(ctx->r29, 0X138);
    after_57:
    // 0x802D759C: addiu       $a0, $s0, 0x950
    ctx->r4 = ADD32(ctx->r16, 0X950);
    // 0x802D75A0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802D75A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802D75A8: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x802D75AC: jal         0x802C4A20
    // 0x802D75B0: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    static_3_802C4A20(rdram, ctx);
        goto after_58;
    // 0x802D75B0: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    after_58:
    // 0x802D75B4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802D75B8: jal         0x802C5824
    // 0x802D75BC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_59;
    // 0x802D75BC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_59:
    // 0x802D75C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802D75C4: jal         0x802C5824
    // 0x802D75C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_60;
    // 0x802D75C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_60:
    // 0x802D75CC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D75D0: jal         0x802C5824
    // 0x802D75D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_61;
    // 0x802D75D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_61:
    // 0x802D75D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802D75DC: jal         0x802C5824
    // 0x802D75E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_62;
    // 0x802D75E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_62:
    // 0x802D75E4: addiu       $a0, $s0, 0xAE4
    ctx->r4 = ADD32(ctx->r16, 0XAE4);
    // 0x802D75E8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802D75EC: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802D75F0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802D75F4: jal         0x802C4A20
    // 0x802D75F8: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    static_3_802C4A20(rdram, ctx);
        goto after_63;
    // 0x802D75F8: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_63:
    // 0x802D75FC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802D7600: jal         0x802C5824
    // 0x802D7604: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_64;
    // 0x802D7604: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_64:
    // 0x802D7608: addiu       $a0, $s0, 0xC78
    ctx->r4 = ADD32(ctx->r16, 0XC78);
    // 0x802D760C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802D7610: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802D7614: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802D7618: jal         0x802C4A20
    // 0x802D761C: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    static_3_802C4A20(rdram, ctx);
        goto after_65;
    // 0x802D761C: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    after_65:
    // 0x802D7620: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802D7624: jal         0x802C580C
    // 0x802D7628: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_66;
    // 0x802D7628: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_66:
    // 0x802D762C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802D7630: jal         0x802C5818
    // 0x802D7634: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_67;
    // 0x802D7634: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_67:
    // 0x802D7638: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802D763C: jal         0x802C5824
    // 0x802D7640: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_68;
    // 0x802D7640: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_68:
    // 0x802D7644: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802D7648: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x802D764C: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802D7650: lh          $t3, 0xB8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XB8);
    // 0x802D7654: jalr        $t9
    // 0x802D7658: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x802D7658: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_69:
    // 0x802D765C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D7660: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D7664: addiu       $sp, $sp, 0x208
    ctx->r29 = ADD32(ctx->r29, 0X208);
    // 0x802D7668: jr          $ra
    // 0x802D766C: nop

    return;
    // 0x802D766C: nop

;}
RECOMP_FUNC void D_802C8AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8B34: jr          $ra
    // 0x802C8B38: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    return;
    // 0x802C8B38: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
;}
RECOMP_FUNC void func_80228DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228DE0: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80228DE4: swc1        $f16, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f16.u32l;
    // 0x80228DE8: lwc1        $f18, 0x2C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x80228DEC: swc1        $f18, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f18.u32l;
    // 0x80228DF0: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x80228DF4: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x80228DF8: lwc1        $f6, 0x34($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80228DFC: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x80228E00: lwc1        $f8, 0x38($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80228E04: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x80228E08: lwc1        $f10, 0x3C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x80228E0C: jr          $ra
    // 0x80228E10: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    return;
    // 0x80228E10: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void D_80208540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80208544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80208548: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020854C: jal         0x80208230
    // 0x80208550: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80208230(rdram, ctx);
        goto after_0;
    // 0x80208550: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80208554: beq         $v0, $zero, L_80208564
    if (ctx->r2 == 0) {
        // 0x80208558: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80208564;
    }
    // 0x80208558: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020855C: b           L_80208578
    // 0x80208560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80208578;
    // 0x80208560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208564:
    // 0x80208564: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80208568: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8020856C: jal         0x802392C0
    // 0x80208570: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    static_3_802392C0(rdram, ctx);
        goto after_1;
    // 0x80208570: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80208574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208578:
    // 0x80208578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020857C: jr          $ra
    // 0x80208580: nop

    return;
    // 0x80208580: nop

;}
RECOMP_FUNC void D_802EC478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC4F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC4FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC500: beq         $a0, $zero, L_802EC530
    if (ctx->r4 == 0) {
        // 0x802EC504: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EC530;
    }
    // 0x802EC504: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EC508: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EC50C: jal         0x8031C514
    // 0x802EC510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EC510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EC514: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EC518: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC51C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EC520: beql        $t7, $zero, L_802EC534
    if (ctx->r15 == 0) {
        // 0x802EC524: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EC534;
    }
    goto skip_0;
    // 0x802EC524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EC528: jal         0x802C681C
    // 0x802EC52C: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EC52C: nop

    after_1:
L_802EC530:
    // 0x802EC530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EC534:
    // 0x802EC534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC538: jr          $ra
    // 0x802EC53C: nop

    return;
    // 0x802EC53C: nop

;}
RECOMP_FUNC void D_802421E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802421E0: jr          $ra
    // 0x802421E4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x802421E4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void D_802EA6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA748: jr          $ra
    // 0x802EA74C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EA74C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_80222B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222B40: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80222B44: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80222B48: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80222B4C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80222B50: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80222B54: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80222B58: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80222B5C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80222B60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80222B64: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x80222B68: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80222B6C: ori         $at, $at, 0x10
    ctx->r1 = ctx->r1 | 0X10;
    // 0x80222B70: lui         $t9, 0x380
    ctx->r25 = S32(0X380 << 16);
    // 0x80222B74: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80222B78: addu        $t1, $v0, $at
    ctx->r9 = ADD32(ctx->r2, ctx->r1);
    // 0x80222B7C: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x80222B80: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222B84: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x80222B88: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80222B8C: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x80222B90: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x80222B94: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x80222B98: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x80222B9C: lh          $t3, 0x8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X8);
    // 0x80222BA0: lh          $t9, 0xE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE);
    // 0x80222BA4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80222BA8: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x80222BAC: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80222BB0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80222BB4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80222BB8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80222BBC: nop

    // 0x80222BC0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80222BC4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80222BC8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80222BCC: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80222BD0: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x80222BD4: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x80222BD8: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80222BDC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80222BE0: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x80222BE4: or          $t5, $t8, $t4
    ctx->r13 = ctx->r24 | ctx->r12;
    // 0x80222BE8: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x80222BEC: lh          $t6, 0xA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA);
    // 0x80222BF0: lh          $t3, 0xC($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XC);
    // 0x80222BF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222BF8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80222BFC: subu        $t8, $t0, $t3
    ctx->r24 = SUB32(ctx->r8, ctx->r11);
    // 0x80222C00: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80222C04: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80222C08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80222C0C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80222C10: nop

    // 0x80222C14: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80222C18: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80222C1C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80222C20: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80222C24: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80222C28: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80222C2C: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x80222C30: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x80222C34: or          $t7, $t2, $t6
    ctx->r15 = ctx->r10 | ctx->r14;
    // 0x80222C38: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80222C3C: lh          $t9, 0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8);
    // 0x80222C40: sh          $t9, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r25;
    // 0x80222C44: lh          $t1, 0xA($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XA);
    // 0x80222C48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222C4C: sh          $t1, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r9;
    // 0x80222C50: lh          $t3, 0xC($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XC);
    // 0x80222C54: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222C58: sh          $t3, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r11;
    // 0x80222C5C: lh          $t8, 0xE($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XE);
    // 0x80222C60: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222C64: jr          $ra
    // 0x80222C68: sh          $t8, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r24;
    return;
    // 0x80222C68: sh          $t8, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void D_802EFDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFE30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EFE34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EFE38: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x802EFE3C: sh          $zero, 0x30C($a0)
    MEM_H(0X30C, ctx->r4) = 0;
    // 0x802EFE40: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802EFE44: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x802EFE48: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802EFE4C: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802EFE50: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802EFE54: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802EFE58: jalr        $t9
    // 0x802EFE5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802EFE5C: nop

    after_0:
    // 0x802EFE60: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802EFE64: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802EFE68: lw          $v0, 0x1A0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1A0);
    // 0x802EFE6C: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x802EFE70: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802EFE74: addu        $a0, $t7, $a2
    ctx->r4 = ADD32(ctx->r15, ctx->r6);
    // 0x802EFE78: jalr        $t9
    // 0x802EFE7C: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802EFE7C: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    after_1:
    // 0x802EFE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EFE84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EFE88: jr          $ra
    // 0x802EFE8C: nop

    return;
    // 0x802EFE8C: nop

;}
RECOMP_FUNC void D_80238DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238DE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80238DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238DEC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80238DF0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80238DF4: jal         0x8023D604
    // 0x80238DF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8023D604(rdram, ctx);
        goto after_0;
    // 0x80238DF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80238DFC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80238E00: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80238E04: jal         0x802465B0
    // 0x80238E08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802465B0(rdram, ctx);
        goto after_1;
    // 0x80238E08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80238E0C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80238E10: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80238E14: jal         0x802374B0
    // 0x80238E18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_2;
    // 0x80238E18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80238E1C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80238E20: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80238E24: jal         0x802465B0
    // 0x80238E28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_3;
    // 0x80238E28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80238E2C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80238E30: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80238E34: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80238E38: jal         0x802374B0
    // 0x80238E3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_4;
    // 0x80238E3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80238E40: addiu       $a0, $sp, 0x37
    ctx->r4 = ADD32(ctx->r29, 0X37);
    // 0x80238E44: jal         0x8023D6E4
    // 0x80238E48: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    static_3_8023D6E4(rdram, ctx);
        goto after_5;
    // 0x80238E48: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x80238E4C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80238E50: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x80238E54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80238E58: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80238E5C: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80238E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238E64: andi        $a0, $v0, 0x1
    ctx->r4 = ctx->r2 & 0X1;
    // 0x80238E68: beq         $a0, $zero, L_80238E80
    if (ctx->r4 == 0) {
        // 0x80238E6C: andi        $t9, $v0, 0x2
        ctx->r25 = ctx->r2 & 0X2;
            goto L_80238E80;
    }
    // 0x80238E6C: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x80238E70: beq         $t9, $zero, L_80238E80
    if (ctx->r25 == 0) {
        // 0x80238E74: nop
    
            goto L_80238E80;
    }
    // 0x80238E74: nop

    // 0x80238E78: b           L_80238EB8
    // 0x80238E7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80238EB8;
    // 0x80238E7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80238E80:
    // 0x80238E80: lbu         $t0, 0x3($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X3);
    // 0x80238E84: nop

    // 0x80238E88: bne         $t0, $zero, L_80238E98
    if (ctx->r8 != 0) {
        // 0x80238E8C: nop
    
            goto L_80238E98;
    }
    // 0x80238E8C: nop

    // 0x80238E90: bne         $a0, $zero, L_80238EA0
    if (ctx->r4 != 0) {
        // 0x80238E94: andi        $t1, $v0, 0x4
        ctx->r9 = ctx->r2 & 0X4;
            goto L_80238EA0;
    }
    // 0x80238E94: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
L_80238E98:
    // 0x80238E98: b           L_80238EB8
    // 0x80238E9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80238EB8;
    // 0x80238E9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80238EA0:
    // 0x80238EA0: beq         $t1, $zero, L_80238EB4
    if (ctx->r9 == 0) {
        // 0x80238EA4: lw          $v0, 0x3C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X3C);
            goto L_80238EB4;
    }
    // 0x80238EA4: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x80238EA8: b           L_80238EB8
    // 0x80238EAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80238EB8;
    // 0x80238EAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238EB0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_80238EB4:
    // 0x80238EB4: nop

L_80238EB8:
    // 0x80238EB8: jr          $ra
    // 0x80238EBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80238EBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_80206B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80206B94: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80206B98: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80206B9C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80206BA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80206BA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80206BA8: blez        $v1, L_80206C5C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80206BAC: addiu       $t2, $zero, 0x24
        ctx->r10 = ADD32(0, 0X24);
            goto L_80206C5C;
    }
    // 0x80206BAC: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x80206BB0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80206BB4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80206BB8: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80206BBC: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80206BC0: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80206BC4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80206BC8:
    // 0x80206BC8: blez        $v1, L_80206C1C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80206BCC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80206C1C;
    }
    // 0x80206BCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80206BD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80206BD4: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
L_80206BD8:
    // 0x80206BD8: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80206BDC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80206BE0: nop

    // 0x80206BE4: bc1fl       L_80206C0C
    if (!c1cs) {
        // 0x80206BE8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80206C0C;
    }
    goto skip_0;
    // 0x80206BE8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80206BEC: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80206BF0: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80206BF4: sb          $a0, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r4;
    // 0x80206BF8: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x80206BFC: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80206C00: addu        $a2, $t8, $a1
    ctx->r6 = ADD32(ctx->r24, ctx->r5);
    // 0x80206C04: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80206C08: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80206C0C:
    // 0x80206C0C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80206C10: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    // 0x80206C14: bne         $at, $zero, L_80206BD8
    if (ctx->r1 != 0) {
        // 0x80206C18: addiu       $a2, $a2, 0x24
        ctx->r6 = ADD32(ctx->r6, 0X24);
            goto L_80206BD8;
    }
    // 0x80206C18: addiu       $a2, $a2, 0x24
    ctx->r6 = ADD32(ctx->r6, 0X24);
L_80206C1C:
    // 0x80206C1C: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80206C20: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x80206C24: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x80206C28: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x80206C2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80206C30: multu       $t5, $t2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80206C34: mflo        $t6
    ctx->r14 = lo;
    // 0x80206C38: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
    // 0x80206C3C: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80206C40: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80206C44: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x80206C48: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80206C4C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80206C50: bnel        $at, $zero, L_80206BC8
    if (ctx->r1 != 0) {
        // 0x80206C54: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_80206BC8;
    }
    goto skip_1;
    // 0x80206C54: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_1:
    // 0x80206C58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80206C5C:
    // 0x80206C5C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80206C60: blez        $v1, L_80206CAC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80206C64: addiu       $t1, $t1, 0x0
        ctx->r9 = ADD32(ctx->r9, 0X0);
            goto L_80206CAC;
    }
    // 0x80206C64: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80206C68: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80206C6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80206C70:
    // 0x80206C70: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x80206C74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80206C78: addu        $a1, $t7, $a0
    ctx->r5 = ADD32(ctx->r15, ctx->r4);
    // 0x80206C7C: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80206C80: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80206C84: nop

    // 0x80206C88: bc1fl       L_80206CA4
    if (!c1cs) {
        // 0x80206C8C: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80206CA4;
    }
    goto skip_2;
    // 0x80206C8C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_2:
    // 0x80206C90: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x80206C94: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80206C98: swc1        $f10, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f10.u32l;
    // 0x80206C9C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80206CA0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_80206CA4:
    // 0x80206CA4: bne         $at, $zero, L_80206C70
    if (ctx->r1 != 0) {
        // 0x80206CA8: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_80206C70;
    }
    // 0x80206CA8: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_80206CAC:
    // 0x80206CAC: jr          $ra
    // 0x80206CB0: nop

    return;
    // 0x80206CB0: nop

;}
RECOMP_FUNC void D_802A61C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6244: bne         $a0, $zero, L_802A625C
    if (ctx->r4 != 0) {
        // 0x802A6248: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A625C;
    }
    // 0x802A6248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A624C: jal         0x802C67EC
    // 0x802A6250: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A6250: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_0:
    // 0x802A6254: beq         $v0, $zero, L_802A6284
    if (ctx->r2 == 0) {
        // 0x802A6258: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A6284;
    }
    // 0x802A6258: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802A625C:
    // 0x802A625C: jal         0x802D1960
    // 0x802A6260: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802D18E0(rdram, ctx);
        goto after_1;
    // 0x802A6260: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802A6264: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A6268: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A626C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A6270: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6274: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A6278: sb          $zero, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = 0;
    // 0x802A627C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6280: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
L_802A6284:
    // 0x802A6284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A628C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A6290: jr          $ra
    // 0x802A6294: nop

    return;
    // 0x802A6294: nop

;}
RECOMP_FUNC void D_80228CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228CA0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80228CA4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80228CA8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80228CAC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80228CB0: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x80228CB4: jr          $ra
    // 0x80228CB8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x80228CB8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
;}
RECOMP_FUNC void D_802D7F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8008: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D800C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D8010: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D8014: jr          $ra
    // 0x802D8018: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802D8018: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void D_802E9C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9C8C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E9C90: jr          $ra
    // 0x802E9C94: sb          $a1, 0x19A($a0)
    MEM_B(0X19A, ctx->r4) = ctx->r5;
    return;
    // 0x802E9C94: sb          $a1, 0x19A($a0)
    MEM_B(0X19A, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_802000DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802000DC: swc1        $f0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f0.u32l;
    // 0x802000E0: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802000E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802000E8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802000EC: jr          $ra
    // 0x802000F0: nop

    return;
    // 0x802000F0: nop

;}
RECOMP_FUNC void D_802E6A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6AA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802E6AA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802E6AAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802E6AB0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802E6AB4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802E6AB8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x802E6ABC: lbu         $t7, 0xB8($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XB8);
    // 0x802E6AC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E6AC4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802E6AC8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802E6ACC: beql        $t7, $at, L_802E6C24
    if (ctx->r15 == ctx->r1) {
        // 0x802E6AD0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802E6C24;
    }
    goto skip_0;
    // 0x802E6AD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802E6AD4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x802E6AD8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802E6ADC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x802E6AE0: bne         $t9, $at, L_802E6B0C
    if (ctx->r25 != ctx->r1) {
        // 0x802E6AE4: nop
    
            goto L_802E6B0C;
    }
    // 0x802E6AE4: nop

    // 0x802E6AE8: jal         0x80305EF0
    // 0x802E6AEC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    static_3_80305EF0(rdram, ctx);
        goto after_0;
    // 0x802E6AEC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x802E6AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E6AF4: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x802E6AF8: jal         0x80305E90
    // 0x802E6AFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_1;
    // 0x802E6AFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x802E6B00: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802E6B04: b           L_802E6B84
    // 0x802E6B08: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
        goto L_802E6B84;
    // 0x802E6B08: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_802E6B0C:
    // 0x802E6B0C: jal         0x80305EF0
    // 0x802E6B10: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_80305EF0(rdram, ctx);
        goto after_2;
    // 0x802E6B10: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x802E6B14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E6B18: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x802E6B1C: jal         0x80305E90
    // 0x802E6B20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_3;
    // 0x802E6B20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802E6B24: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E6B28: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E6B2C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E6B30: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E6B34: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802E6B38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E6B3C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E6B40: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802E6B44: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802E6B48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802E6B4C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802E6B50: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802E6B54: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802E6B58: bc1fl       L_802E6B6C
    if (!c1cs) {
        // 0x802E6B5C: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_802E6B6C;
    }
    goto skip_1;
    // 0x802E6B5C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_1:
    // 0x802E6B60: b           L_802E6B84
    // 0x802E6B64: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_802E6B84;
    // 0x802E6B64: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x802E6B68: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_802E6B6C:
    // 0x802E6B6C: nop

    // 0x802E6B70: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802E6B74: nop

    // 0x802E6B78: bc1fl       L_802E6B88
    if (!c1cs) {
        // 0x802E6B7C: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_802E6B88;
    }
    goto skip_2;
    // 0x802E6B7C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    skip_2:
    // 0x802E6B80: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_802E6B84:
    // 0x802E6B84: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
L_802E6B88:
    // 0x802E6B88: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E6B8C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E6B90: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x802E6B94: addiu       $s0, $t0, 0xBC
    ctx->r16 = ADD32(ctx->r8, 0XBC);
    // 0x802E6B98: lbu         $a2, 0xB8($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0XB8);
    // 0x802E6B9C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802E6BA0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802E6BA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E6BA8: jal         0x80302238
    // 0x802E6BAC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_4;
    // 0x802E6BAC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802E6BB0: beq         $v0, $zero, L_802E6BD8
    if (ctx->r2 == 0) {
        // 0x802E6BB4: lwc1        $f2, 0x28($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
            goto L_802E6BD8;
    }
    // 0x802E6BB4: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802E6BB8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E6BBC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E6BC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E6BC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802E6BC8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802E6BCC: jal         0x8030276C
    // 0x802E6BD0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030276C(rdram, ctx);
        goto after_5;
    // 0x802E6BD0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802E6BD4: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
L_802E6BD8:
    // 0x802E6BD8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E6BDC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E6BE0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802E6BE4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E6BE8: jal         0x80302664
    // 0x802E6BEC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_6;
    // 0x802E6BEC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802E6BF0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E6BF4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E6BF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E6BFC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802E6C00: jal         0x8030262C
    // 0x802E6C04: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_7;
    // 0x802E6C04: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802E6C08: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E6C0C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E6C10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E6C14: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802E6C18: jal         0x803025D8
    // 0x802E6C1C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_8;
    // 0x802E6C1C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802E6C20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802E6C24:
    // 0x802E6C24: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802E6C28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802E6C2C: jr          $ra
    // 0x802E6C30: nop

    return;
    // 0x802E6C30: nop

;}
RECOMP_FUNC void D_80295004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295084: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80295088: jr          $ra
    // 0x8029508C: swc1        $f12, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x8029508C: swc1        $f12, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802E8704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E8788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E878C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E8790: lw          $a3, 0xC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XC);
    // 0x802E8794: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E8798: sh          $a1, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r5;
    // 0x802E879C: bne         $a3, $zero, L_802E87C8
    if (ctx->r7 != 0) {
        // 0x802E87A0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E87C8;
    }
    // 0x802E87A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E87A4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E87A8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E87AC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E87B0: jal         0x80231A24
    // 0x802E87B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E87B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E87B8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E87BC: addiu       $t7, $zero, 0x29A
    ctx->r15 = ADD32(0, 0X29A);
    // 0x802E87C0: sw          $t7, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r15;
    // 0x802E87C4: lw          $a3, 0xC($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XC);
L_802E87C8:
    // 0x802E87C8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802E87CC: jal         0x802D27B0
    // 0x802E87D0: lhu         $a1, 0x10($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X10);
    static_3_802D27B0(rdram, ctx);
        goto after_1;
    // 0x802E87D0: lhu         $a1, 0x10($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X10);
    after_1:
    // 0x802E87D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E87D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E87DC: jr          $ra
    // 0x802E87E0: nop

    return;
    // 0x802E87E0: nop

;}
RECOMP_FUNC void D_802A77C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7840: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7844: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7848: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802A784C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x802A7850: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A7854: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802A7858: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A785C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802A7860: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A7864: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802A7868: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802A786C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802A7870: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802A7874: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A7878: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A787C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802A7880: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802A7884: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802A7888: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802A788C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802A7890: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802A7894: jal         0x80308530
    // 0x802A7898: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_0;
    // 0x802A7898: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x802A789C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A78A0: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A78A4: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x802A78A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A78AC: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x802A78B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A78B4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802A78B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A78BC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802A78C0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802A78C4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802A78C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A78CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802A78D0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802A78D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A78D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A78DC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802A78E0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802A78E4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802A78E8: jal         0x80308530
    // 0x802A78EC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_1;
    // 0x802A78EC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802A78F0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A78F4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A78F8: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x802A78FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A7900: lui         $at, 0x4264
    ctx->r1 = S32(0X4264 << 16);
    // 0x802A7904: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A7908: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802A790C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A7910: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802A7914: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802A7918: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802A791C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802A7920: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802A7924: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802A7928: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A792C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A7930: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x802A7934: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x802A7938: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802A793C: jal         0x80308530
    // 0x802A7940: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    static_3_80308530(rdram, ctx);
        goto after_2;
    // 0x802A7940: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802A7944: lui         $at, 0xC487
    ctx->r1 = S32(0XC487 << 16);
    // 0x802A7948: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A794C: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x802A7950: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A7954: lui         $at, 0x4268
    ctx->r1 = S32(0X4268 << 16);
    // 0x802A7958: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A795C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802A7960: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A7964: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802A7968: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802A796C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802A7970: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802A7974: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802A7978: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802A797C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A7980: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A7984: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802A7988: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802A798C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802A7990: jal         0x80308530
    // 0x802A7994: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_3;
    // 0x802A7994: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x802A7998: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802A799C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802A79A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802A79A4: jr          $ra
    // 0x802A79A8: nop

    return;
    // 0x802A79A8: nop

;}
RECOMP_FUNC void D_802D8410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8490: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8494: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D8498: jr          $ra
    // 0x802D849C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D849C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802E6D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6DC8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x802E6DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E6DD0: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x802E6DD4: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E6DD8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E6DDC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E6DE0: bne         $v1, $zero, L_802E6E08
    if (ctx->r3 != 0) {
        // 0x802E6DE4: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E6E08;
    }
    // 0x802E6DE4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E6DE8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E6DEC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E6DF0: jal         0x80231A24
    // 0x802E6DF4: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E6DF4: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E6DF8: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    // 0x802E6DFC: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E6E00: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E6E04: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E6E08:
    // 0x802E6E08: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E6E0C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802E6E10: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E6E14: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802E6E18: jalr        $t9
    // 0x802E6E1C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E6E1C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E6E20: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x802E6E24: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x802E6E28: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x802E6E2C: jal         0x8028C2C0
    // 0x802E6E30: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    static_3_8028C2C0(rdram, ctx);
        goto after_2;
    // 0x802E6E30: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x802E6E34: jal         0x8022970C
    // 0x802E6E38: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802E6E38: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x802E6E3C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802E6E40: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802E6E44: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802E6E48: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802E6E4C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802E6E50: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x802E6E54: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x802E6E58: jal         0x802CF718
    // 0x802E6E5C: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    static_3_802CF718(rdram, ctx);
        goto after_4;
    // 0x802E6E5C: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x802E6E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E6E64: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x802E6E68: jr          $ra
    // 0x802E6E6C: nop

    return;
    // 0x802E6E6C: nop

;}
RECOMP_FUNC void D_802E69DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6A5C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E6A60: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E6A64: jr          $ra
    // 0x802E6A68: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E6A68: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80299428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802994A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802994AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802994B0: jr          $ra
    // 0x802994B4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802994B4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80277FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278058: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8027805C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80278060: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80278064: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80278068: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027806C: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x80278070: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x80278074: beq         $a2, $at, L_80278198
    if (ctx->r6 == ctx->r1) {
        // 0x80278078: sw          $a3, 0xAC($sp)
        MEM_W(0XAC, ctx->r29) = ctx->r7;
            goto L_80278198;
    }
    // 0x80278078: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x8027807C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80278080: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x80278084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278088: jal         0x8022FCDC
    // 0x8027808C: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    static_3_8022FCDC(rdram, ctx);
        goto after_0;
    // 0x8027808C: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    after_0:
    // 0x80278090: jal         0x802AF028
    // 0x80278094: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    static_3_802AF028(rdram, ctx);
        goto after_1;
    // 0x80278094: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    after_1:
    // 0x80278098: lw          $v1, 0xA4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA4);
    // 0x8027809C: addiu       $t6, $sp, 0x54
    ctx->r14 = ADD32(ctx->r29, 0X54);
    // 0x802780A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802780A4: lw          $a1, 0x30($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X30);
    // 0x802780A8: lw          $a2, 0x34($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X34);
    // 0x802780AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802780B0: jal         0x80211984
    // 0x802780B4: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    static_3_80211984(rdram, ctx);
        goto after_2;
    // 0x802780B4: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x802780B8: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802780BC: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802780C0: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802780C4: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802780C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802780CC: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x802780D0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802780D4: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x802780D8: jal         0x8022FE5C
    // 0x802780DC: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    static_3_8022FE5C(rdram, ctx);
        goto after_3;
    // 0x802780DC: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x802780E0: jal         0x8021BA90
    // 0x802780E4: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_8021BA90(rdram, ctx);
        goto after_4;
    // 0x802780E4: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_4:
    // 0x802780E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802780EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802780F0: jal         0x8021ACB0
    // 0x802780F4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    static_3_8021ACB0(rdram, ctx);
        goto after_5;
    // 0x802780F4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_5:
    // 0x802780F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802780FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278100: jal         0x8021B4B0
    // 0x80278104: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    static_3_8021B4B0(rdram, ctx);
        goto after_6;
    // 0x80278104: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_6:
    // 0x80278108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027810C: jal         0x8021B838
    // 0x80278110: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_7;
    // 0x80278110: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80278114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278118: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8027811C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80278120: jal         0x8021B240
    // 0x80278124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_8;
    // 0x80278124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x80278128: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x8027812C: jal         0x8022FE90
    // 0x80278130: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    static_3_8022FE90(rdram, ctx);
        goto after_9;
    // 0x80278130: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    after_9:
    // 0x80278134: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x80278138: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x8027813C: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x80278140: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80278144: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80278148: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027814C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80278150: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80278154: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x80278158: jal         0x802CF110
    // 0x8027815C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    static_3_802CF110(rdram, ctx);
        goto after_10;
    // 0x8027815C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_10:
    // 0x80278160: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80278164: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80278168: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x8027816C: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80278170: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x80278174: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80278178: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8027817C: jal         0x802AA66C
    // 0x80278180: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    static_3_802AA66C(rdram, ctx);
        goto after_11;
    // 0x80278180: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x80278184: beq         $v0, $zero, L_80278198
    if (ctx->r2 == 0) {
        // 0x80278188: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80278198;
    }
    // 0x80278188: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027818C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80278190: jal         0x8028A948
    // 0x80278194: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    static_3_8028A948(rdram, ctx);
        goto after_12;
    // 0x80278194: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    after_12:
L_80278198:
    // 0x80278198: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027819C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802781A0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x802781A4: jr          $ra
    // 0x802781A8: nop

    return;
    // 0x802781A8: nop

;}
RECOMP_FUNC void D_80283640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802836C0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802836C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802836C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802836CC: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802836D0: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x802836D4: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802836D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802836DC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x802836E0: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802836E4: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x802836E8: jalr        $t9
    // 0x802836EC: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802836EC: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x802836F0: jal         0x80318214
    // 0x802836F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318214(rdram, ctx);
        goto after_1;
    // 0x802836F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802836F8: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x802836FC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80283700: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x80283704: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x80283708: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8028370C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x80283710: jal         0x802C53E4
    // 0x80283714: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_2;
    // 0x80283714: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80283718: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028371C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x80283720: jal         0x802C5468
    // 0x80283724: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    static_3_802C5468(rdram, ctx);
        goto after_3;
    // 0x80283724: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    after_3:
    // 0x80283728: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028372C: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    // 0x80283730: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x80283734: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x80283738: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8028373C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x80283740: jal         0x802C53E4
    // 0x80283744: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_4;
    // 0x80283744: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80283748: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028374C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x80283750: jal         0x802C5468
    // 0x80283754: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    static_3_802C5468(rdram, ctx);
        goto after_5;
    // 0x80283754: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    after_5:
    // 0x80283758: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8028375C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80283760: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80283764: jr          $ra
    // 0x80283768: nop

    return;
    // 0x80283768: nop

;}
RECOMP_FUNC void D_8022C5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C5D0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022C5D4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022C5D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C5E0: bne         $t6, $zero, L_8022C644
    if (ctx->r14 != 0) {
        // 0x8022C5E4: lui         $t7, 0x0
        ctx->r15 = S32(0X0 << 16);
            goto L_8022C644;
    }
    // 0x8022C5E4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022C5E8: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8022C5EC: addiu       $t8, $zero, 0x61
    ctx->r24 = ADD32(0, 0X61);
    // 0x8022C5F0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C5F4: bne         $t7, $zero, L_8022C610
    if (ctx->r15 != 0) {
        // 0x8022C5F8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8022C610;
    }
    // 0x8022C5F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022C5FC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C600: jal         0x80231A24
    // 0x8022C604: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C604: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022C608: b           L_8022C648
    // 0x8022C60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022C648;
    // 0x8022C60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C610:
    // 0x8022C610: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x8022C614: jal         0x8022D560
    // 0x8022C618: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    static_3_8022D560(rdram, ctx);
        goto after_1;
    // 0x8022C618: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_1:
    // 0x8022C61C: jal         0x8023D7F0
    // 0x8022C620: nop

    static_3_8023D7F0(rdram, ctx);
        goto after_2;
    // 0x8022C620: nop

    after_2:
    // 0x8022C624: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C628: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8022C62C: jal         0x8023D92C
    // 0x8022C630: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_8023D92C(rdram, ctx);
        goto after_3;
    // 0x8022C630: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_3:
    // 0x8022C634: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C638: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8022C63C: jal         0x8023DA94
    // 0x8022C640: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_8023DA94(rdram, ctx);
        goto after_4;
    // 0x8022C640: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_4:
L_8022C644:
    // 0x8022C644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C648:
    // 0x8022C648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022C64C: jr          $ra
    // 0x8022C650: nop

    return;
    // 0x8022C650: nop

;}
RECOMP_FUNC void D_802D2998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2A18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2A1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2A20: jal         0x80303180
    // 0x802D2A24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80303180(rdram, ctx);
        goto after_0;
    // 0x802D2A24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D2A28: beq         $v0, $zero, L_802D2A58
    if (ctx->r2 == 0) {
        // 0x802D2A2C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_802D2A58;
    }
    // 0x802D2A2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D2A30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802D2A34: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802D2A38: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802D2A3C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802D2A40: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802D2A44: nop

    // 0x802D2A48: bc1f        L_802D2A60
    if (!c1cs) {
        // 0x802D2A4C: nop
    
            goto L_802D2A60;
    }
    // 0x802D2A4C: nop

    // 0x802D2A50: b           L_802D2A60
    // 0x802D2A54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802D2A60;
    // 0x802D2A54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D2A58:
    // 0x802D2A58: b           L_802D2A60
    // 0x802D2A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D2A60;
    // 0x802D2A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D2A60:
    // 0x802D2A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2A68: jr          $ra
    // 0x802D2A6C: nop

    return;
    // 0x802D2A6C: nop

;}
RECOMP_FUNC void D_802D2E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2EE8: jr          $ra
    // 0x802D2EEC: sw          $a1, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r5;
    return;
    // 0x802D2EEC: sw          $a1, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802D7CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D7D2C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802D7D30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D7D34: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x802D7D38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D7D3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D7D40: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x802D7D44: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x802D7D48: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x802D7D4C: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802D7D50: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x802D7D54: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802D7D58: lh          $t6, 0x98($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X98);
    // 0x802D7D5C: sw          $a3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r7;
    // 0x802D7D60: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x802D7D64: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802D7D68: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802D7D6C: jalr        $t9
    // 0x802D7D70: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D7D70: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x802D7D74: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x802D7D78: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802D7D7C: lw          $v0, 0x1A0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1A0);
    // 0x802D7D80: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D7D84: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x802D7D88: jalr        $t9
    // 0x802D7D8C: addu        $a0, $t7, $a3
    ctx->r4 = ADD32(ctx->r15, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802D7D8C: addu        $a0, $t7, $a3
    ctx->r4 = ADD32(ctx->r15, ctx->r7);
    after_1:
    // 0x802D7D90: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x802D7D94: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802D7D98: jal         0x80305E90
    // 0x802D7D9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_2;
    // 0x802D7D9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802D7DA0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D7DA4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D7DA8: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x802D7DAC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802D7DB0: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802D7DB4: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x802D7DB8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802D7DBC: jal         0x80302238
    // 0x802D7DC0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_3;
    // 0x802D7DC0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802D7DC4: beq         $v0, $zero, L_802D7DE0
    if (ctx->r2 == 0) {
        // 0x802D7DC8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802D7DE0;
    }
    // 0x802D7DC8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D7DCC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D7DD0: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802D7DD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D7DD8: jal         0x8030276C
    // 0x802D7DDC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030276C(rdram, ctx);
        goto after_4;
    // 0x802D7DDC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
L_802D7DE0:
    // 0x802D7DE0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D7DE4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D7DE8: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802D7DEC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x802D7DF0: jal         0x803025D8
    // 0x802D7DF4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_5;
    // 0x802D7DF4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802D7DF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D7DFC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x802D7E00: jr          $ra
    // 0x802D7E04: nop

    return;
    // 0x802D7E04: nop

;}
RECOMP_FUNC void D_80295088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295108: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8029510C: jr          $ra
    // 0x80295110: swc1        $f12, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80295110: swc1        $f12, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802E090C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E098C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802E0990: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E0994: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E0998: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x802E099C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802E09A0: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x802E09A4: jal         0x80228DE0
    // 0x802E09A8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802E09A8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x802E09AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E09B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802E09B4: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x802E09B8: jal         0x8022A0D0
    // 0x802E09BC: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802E09BC: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_1:
    // 0x802E09C0: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x802E09C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E09C8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E09CC: lwc1        $f0, 0x20($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X20);
    // 0x802E09D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E09D4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802E09D8: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802E09DC: nop

    // 0x802E09E0: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802E09E4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x802E09E8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802E09EC: jal         0x802D01D4
    // 0x802E09F0: nop

    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802E09F0: nop

    after_2:
    // 0x802E09F4: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802E09F8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x802E09FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802E0A00: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x802E0A04: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802E0A08: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802E0A0C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802E0A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0A14: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802E0A18: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x802E0A1C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802E0A20: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802E0A24: jal         0x8022A0D0
    // 0x802E0A28: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_3;
    // 0x802E0A28: nop

    after_3:
    // 0x802E0A2C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802E0A30: jal         0x802CF888
    // 0x802E0A34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802CF888(rdram, ctx);
        goto after_4;
    // 0x802E0A34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x802E0A38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E0A3C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E0A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0A44: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802E0A48: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802E0A4C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802E0A50: jal         0x802D01D4
    // 0x802E0A54: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802E0A54: nop

    after_5:
    // 0x802E0A58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802E0A5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E0A60: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802E0A64: jr          $ra
    // 0x802E0A68: nop

    return;
    // 0x802E0A68: nop

;}
RECOMP_FUNC void D_802CAA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CAAA4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CAAA8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802CAAAC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802CAAB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802CAAB4: addiu       $v0, $sp, 0x8
    ctx->r2 = ADD32(ctx->r29, 0X8);
    // 0x802CAAB8: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802CAABC: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x802CAAC0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802CAAC4: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x802CAAC8: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802CAACC: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x802CAAD0: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x802CAAD4: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x802CAAD8: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802CAADC: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x802CAAE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CAAE4: bne         $a1, $at, L_802CAB04
    if (ctx->r5 != ctx->r1) {
        // 0x802CAAE8: sw          $t9, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r25;
            goto L_802CAB04;
    }
    // 0x802CAAE8: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x802CAAEC: lb          $t0, 0xC($a0)
    ctx->r8 = MEM_B(ctx->r4, 0XC);
    // 0x802CAAF0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802CAAF4: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x802CAAF8: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x802CAAFC: b           L_802CAB24
    // 0x802CAB00: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
        goto L_802CAB24;
    // 0x802CAB00: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
L_802CAB04:
    // 0x802CAB04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802CAB08: bnel        $a1, $at, L_802CAB28
    if (ctx->r5 != ctx->r1) {
        // 0x802CAB0C: lw          $v0, 0x4($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X4);
            goto L_802CAB28;
    }
    goto skip_0;
    // 0x802CAB0C: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    skip_0:
    // 0x802CAB10: lb          $t4, 0xC($a0)
    ctx->r12 = MEM_B(ctx->r4, 0XC);
    // 0x802CAB14: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802CAB18: addu        $t8, $v0, $t5
    ctx->r24 = ADD32(ctx->r2, ctx->r13);
    // 0x802CAB1C: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x802CAB20: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
L_802CAB24:
    // 0x802CAB24: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
L_802CAB28:
    // 0x802CAB28: jr          $ra
    // 0x802CAB2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802CAB2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802A9160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A91E0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x802A91E4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802A91E8: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x802A91EC: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x802A91F0: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x802A91F4: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x802A91F8: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x802A91FC: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x802A9200: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x802A9204: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x802A9208: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x802A920C: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x802A9210: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802A9214: jal         0x8021BA90
    // 0x802A9218: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x802A9218: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x802A921C: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
    // 0x802A9220: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A9224: jal         0x8021ACB0
    // 0x802A9228: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    static_3_8021ACB0(rdram, ctx);
        goto after_1;
    // 0x802A9228: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_1:
    // 0x802A922C: lw          $a0, 0x4($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X4);
    // 0x802A9230: jal         0x8021B838
    // 0x802A9234: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_2;
    // 0x802A9234: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x802A9238: jal         0x8021BA90
    // 0x802A923C: nop

    func_8021BA90(rdram, ctx);
        goto after_3;
    // 0x802A923C: nop

    after_3:
    // 0x802A9240: sw          $v0, 0x280($s5)
    MEM_W(0X280, ctx->r21) = ctx->r2;
    // 0x802A9244: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A9248: jal         0x8021ACB0
    // 0x802A924C: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    static_3_8021ACB0(rdram, ctx);
        goto after_4;
    // 0x802A924C: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    after_4:
    // 0x802A9250: lw          $a0, 0x280($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X280);
    // 0x802A9254: jal         0x8021B838
    // 0x802A9258: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_5;
    // 0x802A9258: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x802A925C: lw          $s0, 0x27C($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X27C);
    // 0x802A9260: addiu       $s1, $s5, 0x1A4
    ctx->r17 = ADD32(ctx->r21, 0X1A4);
    // 0x802A9264: sw          $s1, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r17;
    // 0x802A9268: lh          $t6, 0x20($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X20);
    // 0x802A926C: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x802A9270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A9274: addu        $a0, $t6, $s5
    ctx->r4 = ADD32(ctx->r14, ctx->r21);
    // 0x802A9278: jalr        $t9
    // 0x802A927C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802A927C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_6:
    // 0x802A9280: lw          $s0, 0x27C($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X27C);
    // 0x802A9284: lw          $a1, 0x4($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X4);
    // 0x802A9288: lh          $t7, 0xA0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA0);
    // 0x802A928C: lw          $t9, 0xA4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA4);
    // 0x802A9290: addu        $a0, $t7, $s5
    ctx->r4 = ADD32(ctx->r15, ctx->r21);
    // 0x802A9294: jalr        $t9
    // 0x802A9298: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802A9298: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_7:
    // 0x802A929C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802A92A0: jal         0x802D27F4
    // 0x802A92A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802D27F4(rdram, ctx);
        goto after_8;
    // 0x802A92A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x802A92A8: lw          $s0, 0x1A0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X1A0);
    // 0x802A92AC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802A92B0: lw          $t9, 0xB4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB4);
    // 0x802A92B4: lh          $t8, 0xB0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XB0);
    // 0x802A92B8: jalr        $t9
    // 0x802A92BC: addu        $a0, $t8, $s5
    ctx->r4 = ADD32(ctx->r24, ctx->r21);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802A92BC: addu        $a0, $t8, $s5
    ctx->r4 = ADD32(ctx->r24, ctx->r21);
    after_9:
    // 0x802A92C0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802A92C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A92C8: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x802A92CC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802A92D0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802A92D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802A92D8: jal         0x80309758
    // 0x802A92DC: swc1        $f4, 0x44($s5)
    MEM_W(0X44, ctx->r21) = ctx->f4.u32l;
    static_3_80309758(rdram, ctx);
        goto after_10;
    // 0x802A92DC: swc1        $f4, 0x44($s5)
    MEM_W(0X44, ctx->r21) = ctx->f4.u32l;
    after_10:
    // 0x802A92E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A92E4: jal         0x80318E80
    // 0x802A92E8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_11;
    // 0x802A92E8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_11:
    // 0x802A92EC: addiu       $s3, $sp, 0x90
    ctx->r19 = ADD32(ctx->r29, 0X90);
    // 0x802A92F0: jal         0x8022970C
    // 0x802A92F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8022970C(rdram, ctx);
        goto after_12;
    // 0x802A92F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_12:
    // 0x802A92F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802A92FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802A9300: lui         $a3, 0x4260
    ctx->r7 = S32(0X4260 << 16);
    // 0x802A9304: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802A9308: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A930C: jal         0x8022A0D0
    // 0x802A9310: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_13;
    // 0x802A9310: nop

    after_13:
    // 0x802A9314: addiu       $s0, $s5, 0x740
    ctx->r16 = ADD32(ctx->r21, 0X740);
    // 0x802A9318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A931C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802A9320: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x802A9324: jal         0x802C4A20
    // 0x802A9328: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    static_3_802C4A20(rdram, ctx);
        goto after_14;
    // 0x802A9328: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_14:
    // 0x802A932C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802A9330: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x802A9334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A9338: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x802A933C: jal         0x802C580C
    // 0x802A9340: nop

    static_3_802C580C(rdram, ctx);
        goto after_15;
    // 0x802A9340: nop

    after_15:
    // 0x802A9344: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x802A9348: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x802A934C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A9350: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x802A9354: jal         0x802C5818
    // 0x802A9358: nop

    static_3_802C5818(rdram, ctx);
        goto after_16;
    // 0x802A9358: nop

    after_16:
    // 0x802A935C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802A9360: jal         0x802C5824
    // 0x802A9364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5824(rdram, ctx);
        goto after_17;
    // 0x802A9364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x802A9368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A936C: jal         0x802C5830
    // 0x802A9370: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    static_3_802C5830(rdram, ctx);
        goto after_18;
    // 0x802A9370: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    after_18:
    // 0x802A9374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A9378: jal         0x802C584C
    // 0x802A937C: lui         $a1, 0x4148
    ctx->r5 = S32(0X4148 << 16);
    static_3_802C584C(rdram, ctx);
        goto after_19;
    // 0x802A937C: lui         $a1, 0x4148
    ctx->r5 = S32(0X4148 << 16);
    after_19:
    // 0x802A9380: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802A9384: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x802A9388: addiu       $t3, $t1, 0x24
    ctx->r11 = ADD32(ctx->r9, 0X24);
    // 0x802A938C: addiu       $t0, $sp, 0x6C
    ctx->r8 = ADD32(ctx->r29, 0X6C);
L_802A9390:
    // 0x802A9390: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802A9394: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x802A9398: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x802A939C: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x802A93A0: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x802A93A4: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x802A93A8: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x802A93AC: bne         $t1, $t3, L_802A9390
    if (ctx->r9 != ctx->r11) {
        // 0x802A93B0: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_802A9390;
    }
    // 0x802A93B0: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x802A93B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A93B8: lwc1        $f24, 0x0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A93BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A93C0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802A93C4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802A93C8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802A93CC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802A93D0: addiu       $s1, $sp, 0x6C
    ctx->r17 = ADD32(ctx->r29, 0X6C);
    // 0x802A93D4: addiu       $s0, $s5, 0x284
    ctx->r16 = ADD32(ctx->r21, 0X284);
    // 0x802A93D8: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_802A93DC:
    // 0x802A93DC: jal         0x8022970C
    // 0x802A93E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8022970C(rdram, ctx);
        goto after_20;
    // 0x802A93E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_20:
    // 0x802A93E4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802A93E8: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x802A93EC: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x802A93F0: jal         0x8022A0D0
    // 0x802A93F4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    static_3_8022A0D0(rdram, ctx);
        goto after_21;
    // 0x802A93F4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    after_21:
    // 0x802A93F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A93FC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802A9400: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x802A9404: jal         0x802C4A20
    // 0x802A9408: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    static_3_802C4A20(rdram, ctx);
        goto after_22;
    // 0x802A9408: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_22:
    // 0x802A940C: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x802A9410: jal         0x802C580C
    // 0x802A9414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C580C(rdram, ctx);
        goto after_23;
    // 0x802A9414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x802A9418: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x802A941C: jal         0x802C5818
    // 0x802A9420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5818(rdram, ctx);
        goto after_24;
    // 0x802A9420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x802A9424: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802A9428: jal         0x802C5824
    // 0x802A942C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5824(rdram, ctx);
        goto after_25;
    // 0x802A942C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x802A9430: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x802A9434: jal         0x802C5830
    // 0x802A9438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5830(rdram, ctx);
        goto after_26;
    // 0x802A9438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x802A943C: mtc1        $s2, $f6
    ctx->f6.u32l = ctx->r18;
    // 0x802A9440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A9444: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802A9448: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x802A944C: add.s       $f16, $f20, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f20.fl + ctx->f10.fl;
    // 0x802A9450: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802A9454: jal         0x802C584C
    // 0x802A9458: nop

    static_3_802C584C(rdram, ctx);
        goto after_27;
    // 0x802A9458: nop

    after_27:
    // 0x802A945C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802A9460: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x802A9464: bne         $s2, $s4, L_802A93DC
    if (ctx->r18 != ctx->r20) {
        // 0x802A9468: addiu       $s0, $s0, 0x194
        ctx->r16 = ADD32(ctx->r16, 0X194);
            goto L_802A93DC;
    }
    // 0x802A9468: addiu       $s0, $s0, 0x194
    ctx->r16 = ADD32(ctx->r16, 0X194);
    // 0x802A946C: lw          $s0, 0x1A0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X1A0);
    // 0x802A9470: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x802A9474: lw          $t9, 0xBC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XBC);
    // 0x802A9478: lh          $t4, 0xB8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XB8);
    // 0x802A947C: jalr        $t9
    // 0x802A9480: addu        $a0, $t4, $s5
    ctx->r4 = ADD32(ctx->r12, ctx->r21);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x802A9480: addu        $a0, $t4, $s5
    ctx->r4 = ADD32(ctx->r12, ctx->r21);
    after_28:
    // 0x802A9484: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802A9488: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802A948C: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x802A9490: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x802A9494: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x802A9498: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x802A949C: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x802A94A0: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x802A94A4: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x802A94A8: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x802A94AC: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x802A94B0: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x802A94B4: jr          $ra
    // 0x802A94B8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x802A94B8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void D_802EF9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFA20: jr          $ra
    // 0x802EFA24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EFA24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_8024A540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A540: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8024A544: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8024A548: sb          $zero, 0xF($sp)
    MEM_B(0XF, ctx->r29) = 0;
    // 0x8024A54C: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_8024A550:
    // 0x8024A550: lbu         $t6, 0xF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A554: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x8024A558: beq         $t7, $zero, L_8024A56C
    if (ctx->r15 == 0) {
        // 0x8024A55C: nop
    
            goto L_8024A56C;
    }
    // 0x8024A55C: nop

    // 0x8024A560: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x8024A564: b           L_8024A570
    // 0x8024A568: sb          $t8, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r24;
        goto L_8024A570;
    // 0x8024A568: sb          $t8, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r24;
L_8024A56C:
    // 0x8024A56C: sb          $zero, 0xE($sp)
    MEM_B(0XE, ctx->r29) = 0;
L_8024A570:
    // 0x8024A570: lbu         $t9, 0xF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A574: andi        $t1, $a0, 0x400
    ctx->r9 = ctx->r4 & 0X400;
    // 0x8024A578: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8024A57C: beq         $t1, $zero, L_8024A58C
    if (ctx->r9 == 0) {
        // 0x8024A580: sb          $t0, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r8;
            goto L_8024A58C;
    }
    // 0x8024A580: sb          $t0, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r8;
    // 0x8024A584: b           L_8024A590
    // 0x8024A588: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8024A590;
    // 0x8024A588: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8024A58C:
    // 0x8024A58C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8024A590:
    // 0x8024A590: lbu         $t2, 0xF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A594: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x8024A598: lbu         $t7, 0xE($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XE);
    // 0x8024A59C: andi        $t3, $a1, 0xFF
    ctx->r11 = ctx->r5 & 0XFF;
    // 0x8024A5A0: sll         $t5, $a0, 1
    ctx->r13 = S32(ctx->r4 << 1);
    // 0x8024A5A4: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x8024A5A8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8024A5AC: andi        $t8, $t4, 0xFF
    ctx->r24 = ctx->r12 & 0XFF;
    // 0x8024A5B0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8024A5B4: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x8024A5B8: sb          $t4, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r12;
    // 0x8024A5BC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8024A5C0: xor         $t9, $t8, $t7
    ctx->r25 = ctx->r24 ^ ctx->r15;
    // 0x8024A5C4: sw          $t1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r9;
    // 0x8024A5C8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8024A5CC: bne         $at, $zero, L_8024A550
    if (ctx->r1 != 0) {
        // 0x8024A5D0: sb          $t9, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r25;
            goto L_8024A550;
    }
    // 0x8024A5D0: sb          $t9, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r25;
    // 0x8024A5D4: lbu         $v0, 0xF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A5D8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8024A5DC: andi        $t2, $v0, 0x1F
    ctx->r10 = ctx->r2 & 0X1F;
    // 0x8024A5E0: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8024A5E4: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8024A5E8: jr          $ra
    // 0x8024A5EC: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x8024A5EC: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
;}
RECOMP_FUNC void D_802B7B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7BE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B7BE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B7BE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B7BEC: lbu         $t6, 0x968($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7BF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B7BF4: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    // 0x802B7BF8: beql        $t6, $zero, L_802B7C68
    if (ctx->r14 == 0) {
        // 0x802B7BFC: sb          $zero, 0x7D3($s0)
        MEM_B(0X7D3, ctx->r16) = 0;
            goto L_802B7C68;
    }
    goto skip_0;
    // 0x802B7BFC: sb          $zero, 0x7D3($s0)
    MEM_B(0X7D3, ctx->r16) = 0;
    skip_0:
    // 0x802B7C00: lbu         $t7, 0x7D3($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X7D3);
    // 0x802B7C04: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x802B7C08: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7C0C: bnel        $t7, $zero, L_802B7C68
    if (ctx->r15 != 0) {
        // 0x802B7C10: sb          $zero, 0x7D3($s0)
        MEM_B(0X7D3, ctx->r16) = 0;
            goto L_802B7C68;
    }
    goto skip_1;
    // 0x802B7C10: sb          $zero, 0x7D3($s0)
    MEM_B(0X7D3, ctx->r16) = 0;
    skip_1:
    // 0x802B7C14: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802B7C18: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802B7C1C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7C20: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B7C24: addiu       $a0, $v0, 0x8F4
    ctx->r4 = ADD32(ctx->r2, 0X8F4);
    // 0x802B7C28: jal         0x80302988
    // 0x802B7C2C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80302988(rdram, ctx);
        goto after_0;
    // 0x802B7C2C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802B7C30: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7C34: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802B7C38: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7C3C: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    // 0x802B7C40: jal         0x80302988
    // 0x802B7C44: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x802B7C44: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x802B7C48: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B7C4C: sb          $zero, 0x7D0($s0)
    MEM_B(0X7D0, ctx->r16) = 0;
    // 0x802B7C50: sb          $zero, 0x7D1($s0)
    MEM_B(0X7D1, ctx->r16) = 0;
    // 0x802B7C54: sb          $zero, 0x7D2($s0)
    MEM_B(0X7D2, ctx->r16) = 0;
    // 0x802B7C58: sb          $t8, 0x7D3($s0)
    MEM_B(0X7D3, ctx->r16) = ctx->r24;
    // 0x802B7C5C: b           L_802B7C68
    // 0x802B7C60: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
        goto L_802B7C68;
    // 0x802B7C60: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x802B7C64: sb          $zero, 0x7D3($s0)
    MEM_B(0X7D3, ctx->r16) = 0;
L_802B7C68:
    // 0x802B7C68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B7C6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B7C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B7C74: jr          $ra
    // 0x802B7C78: nop

    return;
    // 0x802B7C78: nop

;}
RECOMP_FUNC void D_802E09EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0A6C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E0A70: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E0A74: jr          $ra
    // 0x802E0A78: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E0A78: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802164E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802164E4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802164E8: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x802164EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802164F0: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x802164F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802164F8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802164FC: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80216500: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80216504: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80216508: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8021650C: nop

    // 0x80216510: bc1fl       L_80216524
    if (!c1cs) {
        // 0x80216514: lwc1        $f8, 0x70($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
            goto L_80216524;
    }
    goto skip_0;
    // 0x80216514: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    skip_0:
    // 0x80216518: b           L_80216570
    // 0x8021651C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80216570;
    // 0x8021651C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80216520: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
L_80216524:
    // 0x80216524: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x80216528: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x8021652C: jal         0x8022A2F0
    // 0x80216530: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    static_3_8022A2F0(rdram, ctx);
        goto after_0;
    // 0x80216530: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80216534: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80216538: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8021653C: jal         0x8022A4F4
    // 0x80216540: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    static_3_8022A4F4(rdram, ctx);
        goto after_1;
    // 0x80216540: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80216544: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x80216548: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021654C: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80216550: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80216554: jal         0x8021A468
    // 0x80216558: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    static_3_8021A468(rdram, ctx);
        goto after_2;
    // 0x80216558: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    after_2:
    // 0x8021655C: beql        $v0, $zero, L_80216570
    if (ctx->r2 == 0) {
        // 0x80216560: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80216570;
    }
    goto skip_1;
    // 0x80216560: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x80216564: b           L_80216570
    // 0x80216568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216570;
    // 0x80216568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021656C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80216570:
    // 0x80216570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80216574: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80216578: jr          $ra
    // 0x8021657C: nop

    return;
    // 0x8021657C: nop

;}
RECOMP_FUNC void D_802ABA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABAA8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802ABAAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802ABAB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802ABAB4: lbu         $t6, 0x1D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1D);
    // 0x802ABAB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ABABC: bne         $t6, $zero, L_802ABAD8
    if (ctx->r14 != 0) {
        // 0x802ABAC0: lui         $t7, 0x0
        ctx->r15 = S32(0X0 << 16);
            goto L_802ABAD8;
    }
    // 0x802ABAC0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802ABAC4: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802ABAC8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802ABACC: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    // 0x802ABAD0: bne         $t7, $at, L_802ABAE0
    if (ctx->r15 != ctx->r1) {
        // 0x802ABAD4: nop
    
            goto L_802ABAE0;
    }
    // 0x802ABAD4: nop

L_802ABAD8:
    // 0x802ABAD8: b           L_802ABAE0
    // 0x802ABADC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
        goto L_802ABAE0;
    // 0x802ABADC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
L_802ABAE0:
    // 0x802ABAE0: jal         0x8021ACB0
    // 0x802ABAE4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802ABAE4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x802ABAE8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802ABAEC: jal         0x8021B838
    // 0x802ABAF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802ABAF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802ABAF4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802ABAF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ABAFC: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802ABB00: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ABB04: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x802ABB08: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802ABB0C: lh          $t9, 0xB8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XB8);
    // 0x802ABB10: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802ABB14: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x802ABB18: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802ABB1C: jalr        $t9
    // 0x802ABB20: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802ABB20: nop

    after_2:
    // 0x802ABB24: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802ABB28: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802ABB2C: jal         0x802FD4B0
    // 0x802ABB30: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802ABB30: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x802ABB34: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABB38: jal         0x802FD498
    // 0x802ABB3C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802ABB3C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802ABB40: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABB44: jal         0x802FD4A4
    // 0x802ABB48: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802ABB48: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    after_5:
    // 0x802ABB4C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABB50: jal         0x802FD480
    // 0x802ABB54: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802ABB54: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    after_6:
    // 0x802ABB58: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABB5C: jal         0x802FD48C
    // 0x802ABB60: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802ABB60: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    after_7:
    // 0x802ABB64: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x802ABB68: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802ABB6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802ABB70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802ABB74: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802ABB78: jal         0x80317194
    // 0x802ABB7C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802ABB7C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802ABB80: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
    // 0x802ABB84: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802ABB88: sw          $v0, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r2;
    // 0x802ABB8C: sw          $v0, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r2;
    // 0x802ABB90: sw          $v0, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r2;
    // 0x802ABB94: bne         $t1, $zero, L_802ABBAC
    if (ctx->r9 != 0) {
        // 0x802ABB98: sw          $v0, 0x2AC($s0)
        MEM_W(0X2AC, ctx->r16) = ctx->r2;
            goto L_802ABBAC;
    }
    // 0x802ABB98: sw          $v0, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r2;
    // 0x802ABB9C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802ABBA0: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802ABBA4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802ABBA8: bne         $t2, $at, L_802ABBC4
    if (ctx->r10 != ctx->r1) {
        // 0x802ABBAC: addiu       $t3, $zero, 0x34
        ctx->r11 = ADD32(0, 0X34);
            goto L_802ABBC4;
    }
L_802ABBAC:
    // 0x802ABBAC: addiu       $t3, $zero, 0x34
    ctx->r11 = ADD32(0, 0X34);
    // 0x802ABBB0: addiu       $t4, $zero, 0x36
    ctx->r12 = ADD32(0, 0X36);
    // 0x802ABBB4: addiu       $t5, $zero, 0x35
    ctx->r13 = ADD32(0, 0X35);
    // 0x802ABBB8: sw          $t3, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r11;
    // 0x802ABBBC: sw          $t4, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r12;
    // 0x802ABBC0: sw          $t5, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r13;
L_802ABBC4:
    // 0x802ABBC4: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802ABBC8: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802ABBCC: lui         $a1, 0x4188
    ctx->r5 = S32(0X4188 << 16);
    // 0x802ABBD0: jal         0x802D51DC
    // 0x802ABBD4: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802ABBD4: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    after_9:
    // 0x802ABBD8: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802ABBDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ABBE0: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802ABBE4: jal         0x802C4A20
    // 0x802ABBE8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802ABBE8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802ABBEC: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802ABBF0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802ABBF4: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802ABBF8: jal         0x802C4A20
    // 0x802ABBFC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_11;
    // 0x802ABBFC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_11:
    // 0x802ABC00: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802ABC04: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x802ABC08: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802ABC0C: jal         0x802C4A20
    // 0x802ABC10: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802ABC10: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802ABC14: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802ABC18: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x802ABC1C: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    // 0x802ABC20: jal         0x802C4A20
    // 0x802ABC24: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_13;
    // 0x802ABC24: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_13:
    // 0x802ABC28: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x802ABC2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ABC30: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x802ABC34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802ABC38: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802ABC3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802ABC40: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ABC44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802ABC48: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x802ABC4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802ABC50: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802ABC54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ABC58: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802ABC5C: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802ABC60: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802ABC64: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802ABC68: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
    // 0x802ABC6C: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x802ABC70: swc1        $f4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f4.u32l;
    // 0x802ABC74: jal         0x8022970C
    // 0x802ABC78: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_14;
    // 0x802ABC78: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_14:
    // 0x802ABC7C: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802ABC80: jal         0x8022970C
    // 0x802ABC84: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x802ABC84: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_15:
    // 0x802ABC88: lui         $a1, 0xC0EA
    ctx->r5 = S32(0XC0EA << 16);
    // 0x802ABC8C: lui         $a2, 0xC0AD
    ctx->r6 = S32(0XC0AD << 16);
    // 0x802ABC90: lui         $a3, 0x3ED5
    ctx->r7 = S32(0X3ED5 << 16);
    // 0x802ABC94: ori         $a3, $a3, 0x8106
    ctx->r7 = ctx->r7 | 0X8106;
    // 0x802ABC98: ori         $a2, $a2, 0x78D5
    ctx->r6 = ctx->r6 | 0X78D5;
    // 0x802ABC9C: ori         $a1, $a1, 0x419
    ctx->r5 = ctx->r5 | 0X419;
    // 0x802ABCA0: jal         0x8022A0D0
    // 0x802ABCA4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8022A0D0(rdram, ctx);
        goto after_16;
    // 0x802ABCA4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_16:
    // 0x802ABCA8: lui         $a1, 0x40EA
    ctx->r5 = S32(0X40EA << 16);
    // 0x802ABCAC: lui         $a2, 0xC0AD
    ctx->r6 = S32(0XC0AD << 16);
    // 0x802ABCB0: lui         $a3, 0x3ED5
    ctx->r7 = S32(0X3ED5 << 16);
    // 0x802ABCB4: ori         $a3, $a3, 0x8106
    ctx->r7 = ctx->r7 | 0X8106;
    // 0x802ABCB8: ori         $a2, $a2, 0x78D5
    ctx->r6 = ctx->r6 | 0X78D5;
    // 0x802ABCBC: ori         $a1, $a1, 0x419
    ctx->r5 = ctx->r5 | 0X419;
    // 0x802ABCC0: jal         0x8022A0D0
    // 0x802ABCC4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802ABCC4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_17:
    // 0x802ABCC8: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802ABCCC: jal         0x803169A0
    // 0x802ABCD0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_18;
    // 0x802ABCD0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x802ABCD4: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802ABCD8: jal         0x803169A0
    // 0x802ABCDC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    static_3_803169A0(rdram, ctx);
        goto after_19;
    // 0x802ABCDC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_19:
    // 0x802ABCE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802ABCE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802ABCE8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802ABCEC: jr          $ra
    // 0x802ABCF0: nop

    return;
    // 0x802ABCF0: nop

;}
RECOMP_FUNC void D_802291A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802291A8: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x802291AC: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x802291B0: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x802291B4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x802291B8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802291BC: sw          $a0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r4;
    // 0x802291C0: bne         $a0, $a1, L_802291CC
    if (ctx->r4 != ctx->r5) {
        // 0x802291C4: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_802291CC;
    }
    // 0x802291C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802291C8: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
L_802291CC:
    // 0x802291CC: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x802291D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802291D4: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x802291D8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802291DC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802291E0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802291E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802291E8: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x802291EC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802291F0: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x802291F4: nop

    // 0x802291F8: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802291FC: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x80229200: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    // 0x80229204: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80229208: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8022920C: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x80229210: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80229214: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80229218: nop

    // 0x8022921C: sra         $t1, $t2, 16
    ctx->r9 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80229220: sh          $t1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r9;
    // 0x80229224: sh          $t2, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r10;
    // 0x80229228: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8022922C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80229230: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80229234: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80229238: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8022923C: nop

    // 0x80229240: sra         $t4, $t5, 16
    ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80229244: sh          $t4, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r12;
    // 0x80229248: sh          $t5, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r13;
    // 0x8022924C: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80229250: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80229254: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80229258: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8022925C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80229260: nop

    // 0x80229264: sra         $t7, $t8, 16
    ctx->r15 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80229268: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x8022926C: sh          $t8, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r24;
    // 0x80229270: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80229274: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229278: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8022927C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80229280: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80229284: nop

    // 0x80229288: sra         $t0, $t1, 16
    ctx->r8 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8022928C: sh          $t0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r8;
    // 0x80229290: sh          $t1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r9;
    // 0x80229294: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x80229298: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8022929C: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x802292A0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802292A4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802292A8: nop

    // 0x802292AC: sra         $t3, $t4, 16
    ctx->r11 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802292B0: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    // 0x802292B4: sh          $t4, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r12;
    // 0x802292B8: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x802292BC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802292C0: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x802292C4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802292C8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x802292CC: nop

    // 0x802292D0: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802292D4: sh          $t6, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r14;
    // 0x802292D8: sh          $t7, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r15;
    // 0x802292DC: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x802292E0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802292E4: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x802292E8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802292EC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x802292F0: nop

    // 0x802292F4: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802292F8: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
    // 0x802292FC: sh          $t0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r8;
    // 0x80229300: lwc1        $f8, 0x20($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X20);
    // 0x80229304: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80229308: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8022930C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80229310: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x80229314: nop

    // 0x80229318: sra         $t2, $t3, 16
    ctx->r10 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8022931C: sh          $t2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r10;
    // 0x80229320: sh          $t3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r11;
    // 0x80229324: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x80229328: addiu       $t3, $zero, 0x7FFF
    ctx->r11 = ADD32(0, 0X7FFF);
    // 0x8022932C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80229330: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80229334: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80229338: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8022933C: nop

    // 0x80229340: sra         $t5, $t6, 16
    ctx->r13 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80229344: sh          $t5, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r13;
    // 0x80229348: sh          $t6, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r14;
    // 0x8022934C: lwc1        $f16, 0x28($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X28);
    // 0x80229350: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229354: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x80229358: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8022935C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80229360: nop

    // 0x80229364: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80229368: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
    // 0x8022936C: sh          $t9, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r25;
    // 0x80229370: lwc1        $f8, 0x2C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80229374: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80229378: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8022937C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80229380: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x80229384: nop

    // 0x80229388: sra         $t1, $t2, 16
    ctx->r9 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8022938C: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x80229390: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
    // 0x80229394: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80229398: lwc1        $f12, 0x30($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X30);
    // 0x8022939C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802293A0: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x802293A4: nop

    // 0x802293A8: bc1f        L_802293F4
    if (!c1cs) {
        // 0x802293AC: nop
    
            goto L_802293F4;
    }
    // 0x802293AC: nop

    // 0x802293B0: sh          $t3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r11;
    // 0x802293B4: lwc1        $f6, 0x30($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X30);
    // 0x802293B8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802293BC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802293C0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802293C4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802293C8: mfc1        $a2, $f9
    ctx->r6 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x802293CC: jal         0x80231A24
    // 0x802293D0: nop

    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802293D0: nop

    after_0:
    // 0x802293D4: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x802293D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802293DC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802293E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802293E4: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x802293E8: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x802293EC: b           L_80229470
    // 0x802293F0: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_80229470;
    // 0x802293F0: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_802293F4:
    // 0x802293F4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802293F8: addiu       $t4, $zero, -0x8000
    ctx->r12 = ADD32(0, -0X8000);
    // 0x802293FC: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80229400: nop

    // 0x80229404: bc1f        L_80229450
    if (!c1cs) {
        // 0x80229408: nop
    
            goto L_80229450;
    }
    // 0x80229408: nop

    // 0x8022940C: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
    // 0x80229410: lwc1        $f16, 0x30($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X30);
    // 0x80229414: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80229418: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022941C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80229420: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80229424: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x80229428: jal         0x80231A24
    // 0x8022942C: nop

    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022942C: nop

    after_1:
    // 0x80229430: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80229434: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80229438: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8022943C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80229440: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x80229444: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x80229448: b           L_80229470
    // 0x8022944C: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_80229470;
    // 0x8022944C: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_80229450:
    // 0x80229450: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80229454: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80229458: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8022945C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80229460: nop

    // 0x80229464: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80229468: sh          $t6, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r14;
    // 0x8022946C: sh          $t7, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r15;
L_80229470:
    // 0x80229470: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80229474: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80229478: lwc1        $f12, 0x34($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X34);
    // 0x8022947C: addiu       $t8, $zero, 0x7FFF
    ctx->r24 = ADD32(0, 0X7FFF);
    // 0x80229480: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80229484: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80229488: nop

    // 0x8022948C: bc1f        L_802294D8
    if (!c1cs) {
        // 0x80229490: nop
    
            goto L_802294D8;
    }
    // 0x80229490: nop

    // 0x80229494: sh          $t8, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r24;
    // 0x80229498: lwc1        $f16, 0x34($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X34);
    // 0x8022949C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802294A0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802294A4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802294A8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802294AC: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x802294B0: jal         0x80231A24
    // 0x802294B4: nop

    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x802294B4: nop

    after_2:
    // 0x802294B8: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x802294BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802294C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802294C4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802294C8: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x802294CC: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x802294D0: b           L_80229554
    // 0x802294D4: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_80229554;
    // 0x802294D4: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_802294D8:
    // 0x802294D8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802294DC: addiu       $t9, $zero, -0x8000
    ctx->r25 = ADD32(0, -0X8000);
    // 0x802294E0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802294E4: nop

    // 0x802294E8: bc1f        L_80229534
    if (!c1cs) {
        // 0x802294EC: nop
    
            goto L_80229534;
    }
    // 0x802294EC: nop

    // 0x802294F0: sh          $t9, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r25;
    // 0x802294F4: lwc1        $f6, 0x34($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X34);
    // 0x802294F8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802294FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80229500: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80229504: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80229508: mfc1        $a2, $f9
    ctx->r6 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x8022950C: jal         0x80231A24
    // 0x80229510: nop

    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80229510: nop

    after_3:
    // 0x80229514: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80229518: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022951C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80229520: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80229524: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x80229528: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x8022952C: b           L_80229554
    // 0x80229530: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_80229554;
    // 0x80229530: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_80229534:
    // 0x80229534: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80229538: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8022953C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80229540: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x80229544: nop

    // 0x80229548: sra         $t1, $t2, 16
    ctx->r9 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8022954C: sh          $t1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r9;
    // 0x80229550: sh          $t2, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r10;
L_80229554:
    // 0x80229554: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80229558: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8022955C: lwc1        $f12, 0x38($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X38);
    // 0x80229560: addiu       $t3, $zero, 0x7FFF
    ctx->r11 = ADD32(0, 0X7FFF);
    // 0x80229564: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80229568: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8022956C: nop

    // 0x80229570: bc1f        L_802295BC
    if (!c1cs) {
        // 0x80229574: nop
    
            goto L_802295BC;
    }
    // 0x80229574: nop

    // 0x80229578: sh          $t3, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r11;
    // 0x8022957C: lwc1        $f6, 0x38($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X38);
    // 0x80229580: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80229584: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80229588: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8022958C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80229590: mfc1        $a2, $f9
    ctx->r6 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x80229594: jal         0x80231A24
    // 0x80229598: nop

    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80229598: nop

    after_4:
    // 0x8022959C: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x802295A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802295A4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802295A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802295AC: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x802295B0: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x802295B4: b           L_80229638
    // 0x802295B8: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_80229638;
    // 0x802295B8: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_802295BC:
    // 0x802295BC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802295C0: addiu       $t4, $zero, -0x8000
    ctx->r12 = ADD32(0, -0X8000);
    // 0x802295C4: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x802295C8: nop

    // 0x802295CC: bc1f        L_80229618
    if (!c1cs) {
        // 0x802295D0: nop
    
            goto L_80229618;
    }
    // 0x802295D0: nop

    // 0x802295D4: sh          $t4, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r12;
    // 0x802295D8: lwc1        $f16, 0x38($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X38);
    // 0x802295DC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802295E0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802295E4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802295E8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802295EC: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x802295F0: jal         0x80231A24
    // 0x802295F4: nop

    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x802295F4: nop

    after_5:
    // 0x802295F8: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x802295FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80229600: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80229604: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80229608: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x8022960C: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x80229610: b           L_80229638
    // 0x80229614: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_80229638;
    // 0x80229614: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_80229618:
    // 0x80229618: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8022961C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80229620: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80229624: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80229628: nop

    // 0x8022962C: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80229630: sh          $t6, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r14;
    // 0x80229634: sh          $t7, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r15;
L_80229638:
    // 0x80229638: lwc1        $f10, 0x3C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x8022963C: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x80229640: addiu       $t3, $t1, 0x3C
    ctx->r11 = ADD32(ctx->r9, 0X3C);
    // 0x80229644: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80229648: or          $t4, $sp, $zero
    ctx->r12 = ctx->r29 | 0;
    // 0x8022964C: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x80229650: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80229654: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x80229658: nop

    // 0x8022965C: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80229660: sh          $t9, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r25;
    // 0x80229664: bne         $s0, $s1, L_802296A8
    if (ctx->r16 != ctx->r17) {
        // 0x80229668: sh          $t0, 0x3E($s0)
        MEM_H(0X3E, ctx->r16) = ctx->r8;
            goto L_802296A8;
    }
    // 0x80229668: sh          $t0, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r8;
    // 0x8022966C: lw          $a0, 0xE8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE8);
L_80229670:
    // 0x80229670: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80229674: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80229678: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8022967C: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x80229680: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x80229684: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x80229688: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x8022968C: bne         $t1, $t3, L_80229670
    if (ctx->r9 != ctx->r11) {
        // 0x80229690: sw          $at, 0x4($t4)
        MEM_W(0X4, ctx->r12) = ctx->r1;
            goto L_80229670;
    }
    // 0x80229690: sw          $at, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r1;
    // 0x80229694: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80229698: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x8022969C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x802296A0: jal         0x80228EB0
    // 0x802296A4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    static_3_80228EB0(rdram, ctx);
        goto after_6;
    // 0x802296A4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_6:
L_802296A8:
    // 0x802296A8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802296AC: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x802296B0: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x802296B4: jr          $ra
    // 0x802296B8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x802296B8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void D_8028C398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C418: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8028C41C: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8028C420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028C424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028C428: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8028C42C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028C430: bne         $t6, $at, L_8028C440
    if (ctx->r14 != ctx->r1) {
        // 0x8028C434: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8028C440;
    }
    // 0x8028C434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028C438: b           L_8028C444
    // 0x8028C43C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8028C444;
    // 0x8028C43C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028C440:
    // 0x8028C440: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8028C444:
    // 0x8028C444: beq         $v0, $zero, L_8028C464
    if (ctx->r2 == 0) {
        // 0x8028C448: nop
    
            goto L_8028C464;
    }
    // 0x8028C448: nop

    // 0x8028C44C: jal         0x80233D58
    // 0x8028C450: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    static_3_80233D58(rdram, ctx);
        goto after_0;
    // 0x8028C450: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    after_0:
    // 0x8028C454: jal         0x80233D58
    // 0x8028C458: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    static_3_80233D58(rdram, ctx);
        goto after_1;
    // 0x8028C458: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_1:
    // 0x8028C45C: b           L_8028C4A4
    // 0x8028C460: nop

        goto L_8028C4A4;
    // 0x8028C460: nop

L_8028C464:
    // 0x8028C464: jal         0x80233D58
    // 0x8028C468: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    static_3_80233D58(rdram, ctx);
        goto after_2;
    // 0x8028C468: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    after_2:
    // 0x8028C46C: jal         0x80233D58
    // 0x8028C470: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    static_3_80233D58(rdram, ctx);
        goto after_3;
    // 0x8028C470: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    after_3:
    // 0x8028C474: jal         0x80233D58
    // 0x8028C478: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
    static_3_80233D58(rdram, ctx);
        goto after_4;
    // 0x8028C478: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
    after_4:
    // 0x8028C47C: jal         0x80233D58
    // 0x8028C480: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    static_3_80233D58(rdram, ctx);
        goto after_5;
    // 0x8028C480: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    after_5:
    // 0x8028C484: jal         0x80233D58
    // 0x8028C488: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    static_3_80233D58(rdram, ctx);
        goto after_6;
    // 0x8028C488: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    after_6:
    // 0x8028C48C: jal         0x80233D58
    // 0x8028C490: lw          $a0, 0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X60);
    static_3_80233D58(rdram, ctx);
        goto after_7;
    // 0x8028C490: lw          $a0, 0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X60);
    after_7:
    // 0x8028C494: jal         0x80233D58
    // 0x8028C498: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    static_3_80233D58(rdram, ctx);
        goto after_8;
    // 0x8028C498: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    after_8:
    // 0x8028C49C: jal         0x80233D58
    // 0x8028C4A0: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    static_3_80233D58(rdram, ctx);
        goto after_9;
    // 0x8028C4A0: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_9:
L_8028C4A4:
    // 0x8028C4A4: jal         0x80233D58
    // 0x8028C4A8: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    static_3_80233D58(rdram, ctx);
        goto after_10;
    // 0x8028C4A8: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    after_10:
    // 0x8028C4AC: jal         0x80233D58
    // 0x8028C4B0: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    static_3_80233D58(rdram, ctx);
        goto after_11;
    // 0x8028C4B0: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    after_11:
    // 0x8028C4B4: jal         0x80233D58
    // 0x8028C4B8: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    static_3_80233D58(rdram, ctx);
        goto after_12;
    // 0x8028C4B8: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    after_12:
    // 0x8028C4BC: jal         0x80233D58
    // 0x8028C4C0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    static_3_80233D58(rdram, ctx);
        goto after_13;
    // 0x8028C4C0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_13:
    // 0x8028C4C4: jal         0x80233D58
    // 0x8028C4C8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    static_3_80233D58(rdram, ctx);
        goto after_14;
    // 0x8028C4C8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_14:
    // 0x8028C4CC: jal         0x80233D58
    // 0x8028C4D0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_80233D58(rdram, ctx);
        goto after_15;
    // 0x8028C4D0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_15:
    // 0x8028C4D4: jal         0x80233D58
    // 0x8028C4D8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    static_3_80233D58(rdram, ctx);
        goto after_16;
    // 0x8028C4D8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_16:
    // 0x8028C4DC: jal         0x80233D58
    // 0x8028C4E0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_80233D58(rdram, ctx);
        goto after_17;
    // 0x8028C4E0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_17:
    // 0x8028C4E4: jal         0x80233D58
    // 0x8028C4E8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    static_3_80233D58(rdram, ctx);
        goto after_18;
    // 0x8028C4E8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_18:
    // 0x8028C4EC: jal         0x80233D58
    // 0x8028C4F0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    static_3_80233D58(rdram, ctx);
        goto after_19;
    // 0x8028C4F0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_19:
    // 0x8028C4F4: jal         0x80233D58
    // 0x8028C4F8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    static_3_80233D58(rdram, ctx);
        goto after_20;
    // 0x8028C4F8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_20:
    // 0x8028C4FC: jal         0x80233D58
    // 0x8028C500: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    static_3_80233D58(rdram, ctx);
        goto after_21;
    // 0x8028C500: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    after_21:
    // 0x8028C504: jal         0x80233D58
    // 0x8028C508: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    static_3_80233D58(rdram, ctx);
        goto after_22;
    // 0x8028C508: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_22:
    // 0x8028C50C: jal         0x80233D58
    // 0x8028C510: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    static_3_80233D58(rdram, ctx);
        goto after_23;
    // 0x8028C510: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    after_23:
    // 0x8028C514: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8028C518: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x8028C51C: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x8028C520: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x8028C524: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8028C528: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x8028C52C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8028C530: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8028C534: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8028C538: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8028C53C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8028C540: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8028C544: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x8028C548: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8028C54C: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x8028C550: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x8028C554: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8028C558: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x8028C55C: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
    // 0x8028C560: sw          $v0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r2;
    // 0x8028C564: sw          $v0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r2;
    // 0x8028C568: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x8028C56C: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x8028C570: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
    // 0x8028C574: sw          $v0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r2;
    // 0x8028C578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C57C: jal         0x802BCECC
    // 0x8028C580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802BCECC(rdram, ctx);
        goto after_24;
    // 0x8028C580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x8028C584: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8028C588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028C58C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028C590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028C594: jr          $ra
    // 0x8028C598: nop

    return;
    // 0x8028C598: nop

;}
RECOMP_FUNC void D_802A1E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F1C: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x802A1F20: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x802A1F24: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x802A1F28: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x802A1F2C: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x802A1F30: jr          $ra
    // 0x802A1F34: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    return;
    // 0x802A1F34: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_802F08BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F093C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802F0940: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802F0944: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802F0948: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802F094C: addiu       $s0, $a0, 0x2C8C
    ctx->r16 = ADD32(ctx->r4, 0X2C8C);
    // 0x802F0950: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802F0954: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802F0958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F095C: jal         0x802B3F64
    // 0x802F0960: addiu       $a1, $zero, 0x87
    ctx->r5 = ADD32(0, 0X87);
    static_3_802B3F64(rdram, ctx);
        goto after_0;
    // 0x802F0960: addiu       $a1, $zero, 0x87
    ctx->r5 = ADD32(0, 0X87);
    after_0:
    // 0x802F0964: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x802F0968: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F096C: lui         $a2, 0xC567
    ctx->r6 = S32(0XC567 << 16);
    // 0x802F0970: lui         $a3, 0x44FE
    ctx->r7 = S32(0X44FE << 16);
    // 0x802F0974: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802F0978: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x802F097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F0984: jal         0x802B447C
    // 0x802F0988: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_1;
    // 0x802F0988: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x802F098C: lui         $at, 0x432F
    ctx->r1 = S32(0X432F << 16);
    // 0x802F0990: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F0994: lui         $a2, 0xC537
    ctx->r6 = S32(0XC537 << 16);
    // 0x802F0998: lui         $a3, 0x4510
    ctx->r7 = S32(0X4510 << 16);
    // 0x802F099C: ori         $a3, $a3, 0xF000
    ctx->r7 = ctx->r7 | 0XF000;
    // 0x802F09A0: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802F09A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F09A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F09AC: jal         0x802B447C
    // 0x802F09B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_2;
    // 0x802F09B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x802F09B4: lui         $at, 0x4329
    ctx->r1 = S32(0X4329 << 16);
    // 0x802F09B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F09BC: lui         $a2, 0xC509
    ctx->r6 = S32(0XC509 << 16);
    // 0x802F09C0: lui         $a3, 0x4521
    ctx->r7 = S32(0X4521 << 16);
    // 0x802F09C4: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F09C8: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802F09CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F09D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F09D4: jal         0x802B447C
    // 0x802F09D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_3;
    // 0x802F09D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x802F09DC: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802F09E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F09E4: lui         $a3, 0x4557
    ctx->r7 = S32(0X4557 << 16);
    // 0x802F09E8: ori         $a3, $a3, 0x7000
    ctx->r7 = ctx->r7 | 0X7000;
    // 0x802F09EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F09F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F09F4: lui         $a2, 0xC336
    ctx->r6 = S32(0XC336 << 16);
    // 0x802F09F8: jal         0x802B447C
    // 0x802F09FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_4;
    // 0x802F09FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x802F0A00: lui         $at, 0x4357
    ctx->r1 = S32(0X4357 << 16);
    // 0x802F0A04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F0A08: lui         $a3, 0x4514
    ctx->r7 = S32(0X4514 << 16);
    // 0x802F0A0C: ori         $a3, $a3, 0x3000
    ctx->r7 = ctx->r7 | 0X3000;
    // 0x802F0A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0A14: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F0A18: lui         $a2, 0x4244
    ctx->r6 = S32(0X4244 << 16);
    // 0x802F0A1C: jal         0x802B447C
    // 0x802F0A20: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_5;
    // 0x802F0A20: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x802F0A24: lui         $at, 0x4364
    ctx->r1 = S32(0X4364 << 16);
    // 0x802F0A28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F0A2C: lui         $a3, 0xC520
    ctx->r7 = S32(0XC520 << 16);
    // 0x802F0A30: ori         $a3, $a3, 0xB000
    ctx->r7 = ctx->r7 | 0XB000;
    // 0x802F0A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0A38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F0A3C: lui         $a2, 0x42A2
    ctx->r6 = S32(0X42A2 << 16);
    // 0x802F0A40: jal         0x802B447C
    // 0x802F0A44: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_6;
    // 0x802F0A44: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x802F0A48: lui         $at, 0x433B
    ctx->r1 = S32(0X433B << 16);
    // 0x802F0A4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F0A50: lui         $a3, 0xC53B
    ctx->r7 = S32(0XC53B << 16);
    // 0x802F0A54: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F0A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0A5C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F0A60: lui         $a2, 0xC430
    ctx->r6 = S32(0XC430 << 16);
    // 0x802F0A64: jal         0x802B447C
    // 0x802F0A68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_7;
    // 0x802F0A68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x802F0A6C: lui         $at, 0x4399
    ctx->r1 = S32(0X4399 << 16);
    // 0x802F0A70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F0A74: lui         $a2, 0xC3C6
    ctx->r6 = S32(0XC3C6 << 16);
    // 0x802F0A78: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802F0A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0A80: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F0A84: lui         $a3, 0xC3F6
    ctx->r7 = S32(0XC3F6 << 16);
    // 0x802F0A88: jal         0x802B447C
    // 0x802F0A8C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_8;
    // 0x802F0A8C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x802F0A90: lui         $at, 0x434F
    ctx->r1 = S32(0X434F << 16);
    // 0x802F0A94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F0A98: lui         $a3, 0xC499
    ctx->r7 = S32(0XC499 << 16);
    // 0x802F0A9C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F0AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0AA4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F0AA8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x802F0AAC: jal         0x802B447C
    // 0x802F0AB0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_9;
    // 0x802F0AB0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x802F0AB4: lui         $at, 0x4371
    ctx->r1 = S32(0X4371 << 16);
    // 0x802F0AB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F0ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0AC0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F0AC4: lui         $a2, 0x43D9
    ctx->r6 = S32(0X43D9 << 16);
    // 0x802F0AC8: lui         $a3, 0xC4DF
    ctx->r7 = S32(0XC4DF << 16);
    // 0x802F0ACC: jal         0x802B447C
    // 0x802F0AD0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_10;
    // 0x802F0AD0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x802F0AD4: lui         $at, 0x4346
    ctx->r1 = S32(0X4346 << 16);
    // 0x802F0AD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F0ADC: lui         $a2, 0x450A
    ctx->r6 = S32(0X450A << 16);
    // 0x802F0AE0: lui         $a3, 0xC4BD
    ctx->r7 = S32(0XC4BD << 16);
    // 0x802F0AE4: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802F0AE8: ori         $a2, $a2, 0xF000
    ctx->r6 = ctx->r6 | 0XF000;
    // 0x802F0AEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0AF0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F0AF4: jal         0x802B447C
    // 0x802F0AF8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_11;
    // 0x802F0AF8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x802F0AFC: lui         $at, 0x434F
    ctx->r1 = S32(0X434F << 16);
    // 0x802F0B00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F0B04: lui         $a2, 0x4505
    ctx->r6 = S32(0X4505 << 16);
    // 0x802F0B08: lui         $a3, 0xC432
    ctx->r7 = S32(0XC432 << 16);
    // 0x802F0B0C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F0B10: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802F0B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0B18: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802F0B1C: jal         0x802B447C
    // 0x802F0B20: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_12;
    // 0x802F0B20: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_12:
    // 0x802F0B24: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802F0B28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F0B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0B30: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F0B34: lui         $a2, 0x43AD
    ctx->r6 = S32(0X43AD << 16);
    // 0x802F0B38: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x802F0B3C: jal         0x802B447C
    // 0x802F0B40: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_13;
    // 0x802F0B40: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_13:
    // 0x802F0B44: lui         $at, 0x43C6
    ctx->r1 = S32(0X43C6 << 16);
    // 0x802F0B48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F0B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0B50: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802F0B54: lui         $a2, 0xC399
    ctx->r6 = S32(0XC399 << 16);
    // 0x802F0B58: lui         $a3, 0x43D9
    ctx->r7 = S32(0X43D9 << 16);
    // 0x802F0B5C: jal         0x802B447C
    // 0x802F0B60: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_14;
    // 0x802F0B60: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x802F0B64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0B68: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0B6C: lui         $a3, 0x44A2
    ctx->r7 = S32(0X44A2 << 16);
    // 0x802F0B70: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802F0B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0B78: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802F0B7C: lui         $a2, 0xC47C
    ctx->r6 = S32(0XC47C << 16);
    // 0x802F0B80: jal         0x802B447C
    // 0x802F0B84: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_15;
    // 0x802F0B84: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_15:
    // 0x802F0B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0B8C: jal         0x80318C9C
    // 0x802F0B90: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_16;
    // 0x802F0B90: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    after_16:
    // 0x802F0B94: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802F0B98: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    // 0x802F0B9C: addiu       $s0, $s0, 0x332C
    ctx->r16 = ADD32(ctx->r16, 0X332C);
    // 0x802F0BA0: jal         0x802B3F64
    // 0x802F0BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B3F64(rdram, ctx);
        goto after_17;
    // 0x802F0BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x802F0BA8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802F0BAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F0BB0: lui         $a2, 0xC577
    ctx->r6 = S32(0XC577 << 16);
    // 0x802F0BB4: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802F0BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0BBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F0BC0: lui         $a3, 0x447A
    ctx->r7 = S32(0X447A << 16);
    // 0x802F0BC4: jal         0x802B447C
    // 0x802F0BC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_18;
    // 0x802F0BC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_18:
    // 0x802F0BCC: lui         $at, 0x42A2
    ctx->r1 = S32(0X42A2 << 16);
    // 0x802F0BD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F0BD4: lui         $a2, 0xC567
    ctx->r6 = S32(0XC567 << 16);
    // 0x802F0BD8: lui         $a3, 0x449A
    ctx->r7 = S32(0X449A << 16);
    // 0x802F0BDC: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F0BE0: ori         $a2, $a2, 0x7000
    ctx->r6 = ctx->r6 | 0X7000;
    // 0x802F0BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0BE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F0BEC: jal         0x802B447C
    // 0x802F0BF0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_19;
    // 0x802F0BF0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_19:
    // 0x802F0BF4: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x802F0BF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F0BFC: lui         $a2, 0xC531
    ctx->r6 = S32(0XC531 << 16);
    // 0x802F0C00: ori         $a2, $a2, 0xF000
    ctx->r6 = ctx->r6 | 0XF000;
    // 0x802F0C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0C08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F0C0C: lui         $a3, 0x4503
    ctx->r7 = S32(0X4503 << 16);
    // 0x802F0C10: jal         0x802B447C
    // 0x802F0C14: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_20;
    // 0x802F0C14: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_20:
    // 0x802F0C18: lui         $at, 0x43C3
    ctx->r1 = S32(0X43C3 << 16);
    // 0x802F0C1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F0C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0C24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F0C28: lui         $a2, 0xC30A
    ctx->r6 = S32(0XC30A << 16);
    // 0x802F0C2C: lui         $a3, 0x4449
    ctx->r7 = S32(0X4449 << 16);
    // 0x802F0C30: jal         0x802B447C
    // 0x802F0C34: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_21;
    // 0x802F0C34: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_21:
    // 0x802F0C38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0C3C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0C40: lui         $a3, 0xC4AE
    ctx->r7 = S32(0XC4AE << 16);
    // 0x802F0C44: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F0C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0C4C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F0C50: lui         $a2, 0x4254
    ctx->r6 = S32(0X4254 << 16);
    // 0x802F0C54: jal         0x802B447C
    // 0x802F0C58: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_22;
    // 0x802F0C58: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_22:
    // 0x802F0C5C: lui         $at, 0x4365
    ctx->r1 = S32(0X4365 << 16);
    // 0x802F0C60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F0C64: lui         $a3, 0xC507
    ctx->r7 = S32(0XC507 << 16);
    // 0x802F0C68: ori         $a3, $a3, 0xF000
    ctx->r7 = ctx->r7 | 0XF000;
    // 0x802F0C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0C70: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F0C74: lui         $a2, 0x4336
    ctx->r6 = S32(0X4336 << 16);
    // 0x802F0C78: jal         0x802B447C
    // 0x802F0C7C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_23;
    // 0x802F0C7C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_23:
    // 0x802F0C80: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0C84: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0C88: lui         $a2, 0x4446
    ctx->r6 = S32(0X4446 << 16);
    // 0x802F0C8C: lui         $a3, 0xC530
    ctx->r7 = S32(0XC530 << 16);
    // 0x802F0C90: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F0C94: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802F0C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0C9C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F0CA0: jal         0x802B447C
    // 0x802F0CA4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_24;
    // 0x802F0CA4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_24:
    // 0x802F0CA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0CAC: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0CB0: lui         $a3, 0xC53E
    ctx->r7 = S32(0XC53E << 16);
    // 0x802F0CB4: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F0CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0CBC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F0CC0: lui         $a2, 0xC3C7
    ctx->r6 = S32(0XC3C7 << 16);
    // 0x802F0CC4: jal         0x802B447C
    // 0x802F0CC8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_25;
    // 0x802F0CC8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_25:
    // 0x802F0CCC: lui         $at, 0x4359
    ctx->r1 = S32(0X4359 << 16);
    // 0x802F0CD0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F0CD4: lui         $a3, 0x44D6
    ctx->r7 = S32(0X44D6 << 16);
    // 0x802F0CD8: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802F0CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0CE0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F0CE4: lui         $a2, 0x4304
    ctx->r6 = S32(0X4304 << 16);
    // 0x802F0CE8: jal         0x802B447C
    // 0x802F0CEC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_26;
    // 0x802F0CEC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_26:
    // 0x802F0CF0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x802F0CF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F0CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0CFC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F0D00: lui         $a2, 0x446D
    ctx->r6 = S32(0X446D << 16);
    // 0x802F0D04: lui         $a3, 0x4540
    ctx->r7 = S32(0X4540 << 16);
    // 0x802F0D08: jal         0x802B447C
    // 0x802F0D0C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_27;
    // 0x802F0D0C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_27:
    // 0x802F0D10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0D14: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0D18: lui         $a3, 0xC52E
    ctx->r7 = S32(0XC52E << 16);
    // 0x802F0D1C: ori         $a3, $a3, 0x9000
    ctx->r7 = ctx->r7 | 0X9000;
    // 0x802F0D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0D24: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F0D28: lui         $a2, 0x43D7
    ctx->r6 = S32(0X43D7 << 16);
    // 0x802F0D2C: jal         0x802B447C
    // 0x802F0D30: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_28;
    // 0x802F0D30: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_28:
    // 0x802F0D34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0D38: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0D3C: lui         $a3, 0xC51C
    ctx->r7 = S32(0XC51C << 16);
    // 0x802F0D40: ori         $a3, $a3, 0x5000
    ctx->r7 = ctx->r7 | 0X5000;
    // 0x802F0D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0D48: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802F0D4C: lui         $a2, 0xC3F1
    ctx->r6 = S32(0XC3F1 << 16);
    // 0x802F0D50: jal         0x802B447C
    // 0x802F0D54: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_29;
    // 0x802F0D54: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_29:
    // 0x802F0D58: lui         $at, 0x436D
    ctx->r1 = S32(0X436D << 16);
    // 0x802F0D5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F0D60: lui         $a2, 0xC3CE
    ctx->r6 = S32(0XC3CE << 16);
    // 0x802F0D64: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802F0D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0D6C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F0D70: lui         $a3, 0xC42E
    ctx->r7 = S32(0XC42E << 16);
    // 0x802F0D74: jal         0x802B447C
    // 0x802F0D78: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_30;
    // 0x802F0D78: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_30:
    // 0x802F0D7C: lui         $at, 0x4374
    ctx->r1 = S32(0X4374 << 16);
    // 0x802F0D80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F0D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0D88: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802F0D8C: lui         $a2, 0xC2E8
    ctx->r6 = S32(0XC2E8 << 16);
    // 0x802F0D90: lui         $a3, 0x4368
    ctx->r7 = S32(0X4368 << 16);
    // 0x802F0D94: jal         0x802B447C
    // 0x802F0D98: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_31;
    // 0x802F0D98: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_31:
    // 0x802F0D9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0DA0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0DA4: lui         $a3, 0x448D
    ctx->r7 = S32(0X448D << 16);
    // 0x802F0DA8: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802F0DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0DB0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802F0DB4: lui         $a2, 0xC080
    ctx->r6 = S32(0XC080 << 16);
    // 0x802F0DB8: jal         0x802B447C
    // 0x802F0DBC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_32;
    // 0x802F0DBC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_32:
    // 0x802F0DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0DC4: jal         0x80318C9C
    // 0x802F0DC8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_33;
    // 0x802F0DC8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_33:
    // 0x802F0DCC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802F0DD0: addiu       $a1, $zero, 0x87
    ctx->r5 = ADD32(0, 0X87);
    // 0x802F0DD4: addiu       $s0, $s0, 0x39CC
    ctx->r16 = ADD32(ctx->r16, 0X39CC);
    // 0x802F0DD8: jal         0x802B3F64
    // 0x802F0DDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B3F64(rdram, ctx);
        goto after_34;
    // 0x802F0DDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x802F0DE0: lui         $at, 0x4329
    ctx->r1 = S32(0X4329 << 16);
    // 0x802F0DE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F0DE8: lui         $a2, 0xC509
    ctx->r6 = S32(0XC509 << 16);
    // 0x802F0DEC: lui         $a3, 0x4521
    ctx->r7 = S32(0X4521 << 16);
    // 0x802F0DF0: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F0DF4: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802F0DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F0E00: jal         0x802B447C
    // 0x802F0E04: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_35;
    // 0x802F0E04: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_35:
    // 0x802F0E08: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802F0E0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F0E10: lui         $a3, 0x4557
    ctx->r7 = S32(0X4557 << 16);
    // 0x802F0E14: ori         $a3, $a3, 0x7000
    ctx->r7 = ctx->r7 | 0X7000;
    // 0x802F0E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0E1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F0E20: lui         $a2, 0xC336
    ctx->r6 = S32(0XC336 << 16);
    // 0x802F0E24: jal         0x802B447C
    // 0x802F0E28: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_36;
    // 0x802F0E28: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_36:
    // 0x802F0E2C: lui         $at, 0x4357
    ctx->r1 = S32(0X4357 << 16);
    // 0x802F0E30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F0E34: lui         $a3, 0x4514
    ctx->r7 = S32(0X4514 << 16);
    // 0x802F0E38: ori         $a3, $a3, 0x3000
    ctx->r7 = ctx->r7 | 0X3000;
    // 0x802F0E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0E40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F0E44: lui         $a2, 0x4244
    ctx->r6 = S32(0X4244 << 16);
    // 0x802F0E48: jal         0x802B447C
    // 0x802F0E4C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_37;
    // 0x802F0E4C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_37:
    // 0x802F0E50: lui         $at, 0x4364
    ctx->r1 = S32(0X4364 << 16);
    // 0x802F0E54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F0E58: lui         $a3, 0xC520
    ctx->r7 = S32(0XC520 << 16);
    // 0x802F0E5C: ori         $a3, $a3, 0xB000
    ctx->r7 = ctx->r7 | 0XB000;
    // 0x802F0E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0E64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F0E68: lui         $a2, 0x42A2
    ctx->r6 = S32(0X42A2 << 16);
    // 0x802F0E6C: jal         0x802B447C
    // 0x802F0E70: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_38;
    // 0x802F0E70: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_38:
    // 0x802F0E74: lui         $at, 0x433B
    ctx->r1 = S32(0X433B << 16);
    // 0x802F0E78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F0E7C: lui         $a3, 0xC53B
    ctx->r7 = S32(0XC53B << 16);
    // 0x802F0E80: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F0E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0E88: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F0E8C: lui         $a2, 0xC430
    ctx->r6 = S32(0XC430 << 16);
    // 0x802F0E90: jal         0x802B447C
    // 0x802F0E94: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_39;
    // 0x802F0E94: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_39:
    // 0x802F0E98: lui         $at, 0x4399
    ctx->r1 = S32(0X4399 << 16);
    // 0x802F0E9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F0EA0: lui         $a2, 0xC3C6
    ctx->r6 = S32(0XC3C6 << 16);
    // 0x802F0EA4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802F0EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0EAC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F0EB0: lui         $a3, 0xC3F6
    ctx->r7 = S32(0XC3F6 << 16);
    // 0x802F0EB4: jal         0x802B447C
    // 0x802F0EB8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_40;
    // 0x802F0EB8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_40:
    // 0x802F0EBC: lui         $at, 0x434F
    ctx->r1 = S32(0X434F << 16);
    // 0x802F0EC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F0EC4: lui         $a3, 0xC499
    ctx->r7 = S32(0XC499 << 16);
    // 0x802F0EC8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F0ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0ED0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F0ED4: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x802F0ED8: jal         0x802B447C
    // 0x802F0EDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_41;
    // 0x802F0EDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_41:
    // 0x802F0EE0: lui         $at, 0x4371
    ctx->r1 = S32(0X4371 << 16);
    // 0x802F0EE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F0EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0EEC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F0EF0: lui         $a2, 0x43D9
    ctx->r6 = S32(0X43D9 << 16);
    // 0x802F0EF4: lui         $a3, 0xC4DF
    ctx->r7 = S32(0XC4DF << 16);
    // 0x802F0EF8: jal         0x802B447C
    // 0x802F0EFC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_42;
    // 0x802F0EFC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_42:
    // 0x802F0F00: lui         $at, 0x4346
    ctx->r1 = S32(0X4346 << 16);
    // 0x802F0F04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F0F08: lui         $a2, 0x450A
    ctx->r6 = S32(0X450A << 16);
    // 0x802F0F0C: lui         $a3, 0xC4BD
    ctx->r7 = S32(0XC4BD << 16);
    // 0x802F0F10: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802F0F14: ori         $a2, $a2, 0xF000
    ctx->r6 = ctx->r6 | 0XF000;
    // 0x802F0F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0F1C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F0F20: jal         0x802B447C
    // 0x802F0F24: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_43;
    // 0x802F0F24: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_43:
    // 0x802F0F28: lui         $at, 0x434F
    ctx->r1 = S32(0X434F << 16);
    // 0x802F0F2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F0F30: lui         $a2, 0x4505
    ctx->r6 = S32(0X4505 << 16);
    // 0x802F0F34: lui         $a3, 0xC432
    ctx->r7 = S32(0XC432 << 16);
    // 0x802F0F38: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F0F3C: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802F0F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0F44: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F0F48: jal         0x802B447C
    // 0x802F0F4C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_44;
    // 0x802F0F4C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_44:
    // 0x802F0F50: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802F0F54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F0F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0F5C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F0F60: lui         $a2, 0x43AD
    ctx->r6 = S32(0X43AD << 16);
    // 0x802F0F64: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x802F0F68: jal         0x802B447C
    // 0x802F0F6C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_45;
    // 0x802F0F6C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_45:
    // 0x802F0F70: lui         $at, 0x43C6
    ctx->r1 = S32(0X43C6 << 16);
    // 0x802F0F74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F0F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0F7C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802F0F80: lui         $a2, 0xC399
    ctx->r6 = S32(0XC399 << 16);
    // 0x802F0F84: lui         $a3, 0x43D9
    ctx->r7 = S32(0X43D9 << 16);
    // 0x802F0F88: jal         0x802B447C
    // 0x802F0F8C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_46;
    // 0x802F0F8C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_46:
    // 0x802F0F90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0F94: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0F98: lui         $a3, 0x44A2
    ctx->r7 = S32(0X44A2 << 16);
    // 0x802F0F9C: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802F0FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0FA4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F0FA8: lui         $a2, 0xC47A
    ctx->r6 = S32(0XC47A << 16);
    // 0x802F0FAC: jal         0x802B447C
    // 0x802F0FB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_47;
    // 0x802F0FB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_47:
    // 0x802F0FB4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0FB8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0FBC: lui         $a3, 0x44A2
    ctx->r7 = S32(0X44A2 << 16);
    // 0x802F0FC0: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802F0FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0FC8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802F0FCC: lui         $a2, 0xC47A
    ctx->r6 = S32(0XC47A << 16);
    // 0x802F0FD0: jal         0x802B447C
    // 0x802F0FD4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_48;
    // 0x802F0FD4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_48:
    // 0x802F0FD8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0FDC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0FE4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802F0FE8: lui         $a2, 0xC47A
    ctx->r6 = S32(0XC47A << 16);
    // 0x802F0FEC: lui         $a3, 0x4395
    ctx->r7 = S32(0X4395 << 16);
    // 0x802F0FF0: jal         0x802B447C
    // 0x802F0FF4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_49;
    // 0x802F0FF4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_49:
    // 0x802F0FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0FFC: jal         0x80318C9C
    // 0x802F1000: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_50;
    // 0x802F1000: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    after_50:
    // 0x802F1004: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802F1008: addiu       $a1, $zero, 0x87
    ctx->r5 = ADD32(0, 0X87);
    // 0x802F100C: addiu       $s0, $s0, 0x406C
    ctx->r16 = ADD32(ctx->r16, 0X406C);
    // 0x802F1010: jal         0x802B3F64
    // 0x802F1014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B3F64(rdram, ctx);
        goto after_51;
    // 0x802F1014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_51:
    // 0x802F1018: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F101C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F1020: lui         $a2, 0x4523
    ctx->r6 = S32(0X4523 << 16);
    // 0x802F1024: lui         $a3, 0xC510
    ctx->r7 = S32(0XC510 << 16);
    // 0x802F1028: ori         $a3, $a3, 0x1000
    ctx->r7 = ctx->r7 | 0X1000;
    // 0x802F102C: ori         $a2, $a2, 0x5000
    ctx->r6 = ctx->r6 | 0X5000;
    // 0x802F1030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F1038: jal         0x802B447C
    // 0x802F103C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_52;
    // 0x802F103C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_52:
    // 0x802F1040: lui         $at, 0x43AD
    ctx->r1 = S32(0X43AD << 16);
    // 0x802F1044: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F1048: lui         $a3, 0xC56E
    ctx->r7 = S32(0XC56E << 16);
    // 0x802F104C: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802F1050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F1058: lui         $a2, 0x43B8
    ctx->r6 = S32(0X43B8 << 16);
    // 0x802F105C: jal         0x802B447C
    // 0x802F1060: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_53;
    // 0x802F1060: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_53:
    // 0x802F1064: lui         $at, 0x439D
    ctx->r1 = S32(0X439D << 16);
    // 0x802F1068: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F106C: lui         $a3, 0xC551
    ctx->r7 = S32(0XC551 << 16);
    // 0x802F1070: ori         $a3, $a3, 0xF000
    ctx->r7 = ctx->r7 | 0XF000;
    // 0x802F1074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1078: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F107C: lui         $a2, 0xC378
    ctx->r6 = S32(0XC378 << 16);
    // 0x802F1080: jal         0x802B447C
    // 0x802F1084: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_54;
    // 0x802F1084: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_54:
    // 0x802F1088: lui         $at, 0x436A
    ctx->r1 = S32(0X436A << 16);
    // 0x802F108C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F1090: lui         $a3, 0xC490
    ctx->r7 = S32(0XC490 << 16);
    // 0x802F1094: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802F1098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F109C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F10A0: lui         $a2, 0x432A
    ctx->r6 = S32(0X432A << 16);
    // 0x802F10A4: jal         0x802B447C
    // 0x802F10A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_55;
    // 0x802F10A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_55:
    // 0x802F10AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F10B0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F10B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F10B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F10BC: lui         $a2, 0xC328
    ctx->r6 = S32(0XC328 << 16);
    // 0x802F10C0: lui         $a3, 0xC3A1
    ctx->r7 = S32(0XC3A1 << 16);
    // 0x802F10C4: jal         0x802B447C
    // 0x802F10C8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_56;
    // 0x802F10C8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_56:
    // 0x802F10CC: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x802F10D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F10D4: lui         $a2, 0xC3F4
    ctx->r6 = S32(0XC3F4 << 16);
    // 0x802F10D8: lui         $a3, 0xC434
    ctx->r7 = S32(0XC434 << 16);
    // 0x802F10DC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F10E0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802F10E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F10E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F10EC: jal         0x802B447C
    // 0x802F10F0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_57;
    // 0x802F10F0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_57:
    // 0x802F10F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F10F8: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F10FC: lui         $a2, 0x442F
    ctx->r6 = S32(0X442F << 16);
    // 0x802F1100: lui         $a3, 0xC4F3
    ctx->r7 = S32(0XC4F3 << 16);
    // 0x802F1104: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802F1108: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802F110C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1110: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F1114: jal         0x802B447C
    // 0x802F1118: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_58;
    // 0x802F1118: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_58:
    // 0x802F111C: lui         $at, 0x436A
    ctx->r1 = S32(0X436A << 16);
    // 0x802F1120: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F1124: lui         $a2, 0x4539
    ctx->r6 = S32(0X4539 << 16);
    // 0x802F1128: lui         $a3, 0xC482
    ctx->r7 = S32(0XC482 << 16);
    // 0x802F112C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1130: ori         $a2, $a2, 0x7000
    ctx->r6 = ctx->r6 | 0X7000;
    // 0x802F1134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1138: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F113C: jal         0x802B447C
    // 0x802F1140: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_59;
    // 0x802F1140: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_59:
    // 0x802F1144: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x802F1148: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F114C: lui         $a2, 0x44EA
    ctx->r6 = S32(0X44EA << 16);
    // 0x802F1150: lui         $a3, 0xC49C
    ctx->r7 = S32(0XC49C << 16);
    // 0x802F1154: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802F1158: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802F115C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1160: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F1164: jal         0x802B447C
    // 0x802F1168: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_60;
    // 0x802F1168: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_60:
    // 0x802F116C: lui         $at, 0x4314
    ctx->r1 = S32(0X4314 << 16);
    // 0x802F1170: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F1174: lui         $a2, 0x4493
    ctx->r6 = S32(0X4493 << 16);
    // 0x802F1178: lui         $a3, 0xC4D3
    ctx->r7 = S32(0XC4D3 << 16);
    // 0x802F117C: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F1180: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802F1184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1188: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F118C: jal         0x802B447C
    // 0x802F1190: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_61;
    // 0x802F1190: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_61:
    // 0x802F1194: lui         $at, 0x434A
    ctx->r1 = S32(0X434A << 16);
    // 0x802F1198: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F119C: lui         $a3, 0xC4DD
    ctx->r7 = S32(0XC4DD << 16);
    // 0x802F11A0: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802F11A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F11A8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F11AC: lui         $a2, 0x43E2
    ctx->r6 = S32(0X43E2 << 16);
    // 0x802F11B0: jal         0x802B447C
    // 0x802F11B4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_62;
    // 0x802F11B4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_62:
    // 0x802F11B8: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
    // 0x802F11BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F11C0: lui         $a3, 0xC3BC
    ctx->r7 = S32(0XC3BC << 16);
    // 0x802F11C4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F11C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F11CC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802F11D0: lui         $a2, 0xC298
    ctx->r6 = S32(0XC298 << 16);
    // 0x802F11D4: jal         0x802B447C
    // 0x802F11D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_63;
    // 0x802F11D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_63:
    // 0x802F11DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F11E0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F11E4: lui         $a2, 0x43B3
    ctx->r6 = S32(0X43B3 << 16);
    // 0x802F11E8: lui         $a3, 0x4570
    ctx->r7 = S32(0X4570 << 16);
    // 0x802F11EC: ori         $a3, $a3, 0x9000
    ctx->r7 = ctx->r7 | 0X9000;
    // 0x802F11F0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802F11F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F11F8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F11FC: jal         0x802B447C
    // 0x802F1200: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_64;
    // 0x802F1200: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_64:
    // 0x802F1204: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F1208: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F120C: lui         $a2, 0x44D3
    ctx->r6 = S32(0X44D3 << 16);
    // 0x802F1210: lui         $a3, 0xC42B
    ctx->r7 = S32(0XC42B << 16);
    // 0x802F1214: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1218: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802F121C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1220: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802F1224: jal         0x802B447C
    // 0x802F1228: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_65;
    // 0x802F1228: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_65:
    // 0x802F122C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802F1230: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F1234: lui         $a2, 0xC49E
    ctx->r6 = S32(0XC49E << 16);
    // 0x802F1238: lui         $a3, 0x446D
    ctx->r7 = S32(0X446D << 16);
    // 0x802F123C: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F1240: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802F1244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1248: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802F124C: jal         0x802B447C
    // 0x802F1250: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_66;
    // 0x802F1250: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_66:
    // 0x802F1254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1258: jal         0x80318C9C
    // 0x802F125C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_67;
    // 0x802F125C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_67:
    // 0x802F1260: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802F1264: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    // 0x802F1268: addiu       $s0, $s0, 0x470C
    ctx->r16 = ADD32(ctx->r16, 0X470C);
    // 0x802F126C: jal         0x802B3F64
    // 0x802F1270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B3F64(rdram, ctx);
        goto after_68;
    // 0x802F1270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_68:
    // 0x802F1274: lui         $at, 0x4310
    ctx->r1 = S32(0X4310 << 16);
    // 0x802F1278: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F127C: lui         $a2, 0xC527
    ctx->r6 = S32(0XC527 << 16);
    // 0x802F1280: lui         $a3, 0xC42B
    ctx->r7 = S32(0XC42B << 16);
    // 0x802F1284: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1288: ori         $a2, $a2, 0x7000
    ctx->r6 = ctx->r6 | 0X7000;
    // 0x802F128C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F1294: jal         0x802B447C
    // 0x802F1298: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_69;
    // 0x802F1298: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_69:
    // 0x802F129C: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x802F12A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F12A4: lui         $a2, 0xC3B7
    ctx->r6 = S32(0XC3B7 << 16);
    // 0x802F12A8: lui         $a3, 0xC55D
    ctx->r7 = S32(0XC55D << 16);
    // 0x802F12AC: ori         $a3, $a3, 0x5000
    ctx->r7 = ctx->r7 | 0X5000;
    // 0x802F12B0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802F12B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F12B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F12BC: jal         0x802B447C
    // 0x802F12C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_70;
    // 0x802F12C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_70:
    // 0x802F12C4: lui         $at, 0x4373
    ctx->r1 = S32(0X4373 << 16);
    // 0x802F12C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F12CC: lui         $a2, 0x4438
    ctx->r6 = S32(0X4438 << 16);
    // 0x802F12D0: lui         $a3, 0xC564
    ctx->r7 = S32(0XC564 << 16);
    // 0x802F12D4: ori         $a3, $a3, 0x3000
    ctx->r7 = ctx->r7 | 0X3000;
    // 0x802F12D8: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802F12DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F12E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F12E4: jal         0x802B447C
    // 0x802F12E8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_71;
    // 0x802F12E8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_71:
    // 0x802F12EC: lui         $at, 0x4308
    ctx->r1 = S32(0X4308 << 16);
    // 0x802F12F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F12F4: lui         $a2, 0x44CB
    ctx->r6 = S32(0X44CB << 16);
    // 0x802F12F8: lui         $a3, 0xC3C2
    ctx->r7 = S32(0XC3C2 << 16);
    // 0x802F12FC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1300: ori         $a2, $a2, 0x2000
    ctx->r6 = ctx->r6 | 0X2000;
    // 0x802F1304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1308: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F130C: jal         0x802B447C
    // 0x802F1310: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_72;
    // 0x802F1310: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_72:
    // 0x802F1314: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F1318: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F131C: lui         $a3, 0x4408
    ctx->r7 = S32(0X4408 << 16);
    // 0x802F1320: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802F1324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1328: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F132C: lui         $a2, 0x436B
    ctx->r6 = S32(0X436B << 16);
    // 0x802F1330: jal         0x802B447C
    // 0x802F1334: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_73;
    // 0x802F1334: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_73:
    // 0x802F1338: lui         $at, 0x43BB
    ctx->r1 = S32(0X43BB << 16);
    // 0x802F133C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F1340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1344: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F1348: lui         $a2, 0xC2FC
    ctx->r6 = S32(0XC2FC << 16);
    // 0x802F134C: lui         $a3, 0x4301
    ctx->r7 = S32(0X4301 << 16);
    // 0x802F1350: jal         0x802B447C
    // 0x802F1354: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_74;
    // 0x802F1354: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_74:
    // 0x802F1358: lui         $at, 0x433B
    ctx->r1 = S32(0X433B << 16);
    // 0x802F135C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F1360: lui         $a3, 0xC4BE
    ctx->r7 = S32(0XC4BE << 16);
    // 0x802F1364: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F1368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F136C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F1370: lui         $a2, 0x4339
    ctx->r6 = S32(0X4339 << 16);
    // 0x802F1374: jal         0x802B447C
    // 0x802F1378: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_75;
    // 0x802F1378: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_75:
    // 0x802F137C: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x802F1380: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F1384: lui         $a3, 0xC53C
    ctx->r7 = S32(0XC53C << 16);
    // 0x802F1388: ori         $a3, $a3, 0x7000
    ctx->r7 = ctx->r7 | 0X7000;
    // 0x802F138C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1390: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F1394: lui         $a2, 0xC3C6
    ctx->r6 = S32(0XC3C6 << 16);
    // 0x802F1398: jal         0x802B447C
    // 0x802F139C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_76;
    // 0x802F139C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_76:
    // 0x802F13A0: lui         $at, 0x4395
    ctx->r1 = S32(0X4395 << 16);
    // 0x802F13A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F13A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F13AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F13B0: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x802F13B4: lui         $a3, 0x4400
    ctx->r7 = S32(0X4400 << 16);
    // 0x802F13B8: jal         0x802B447C
    // 0x802F13BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_77;
    // 0x802F13BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_77:
    // 0x802F13C0: lui         $at, 0x4373
    ctx->r1 = S32(0X4373 << 16);
    // 0x802F13C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F13C8: lui         $a3, 0x4582
    ctx->r7 = S32(0X4582 << 16);
    // 0x802F13CC: ori         $a3, $a3, 0x5800
    ctx->r7 = ctx->r7 | 0X5800;
    // 0x802F13D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F13D4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F13D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802F13DC: jal         0x802B447C
    // 0x802F13E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_78;
    // 0x802F13E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_78:
    // 0x802F13E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F13E8: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F13EC: lui         $a2, 0x444B
    ctx->r6 = S32(0X444B << 16);
    // 0x802F13F0: lui         $a3, 0x456B
    ctx->r7 = S32(0X456B << 16);
    // 0x802F13F4: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F13F8: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802F13FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1400: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F1404: jal         0x802B447C
    // 0x802F1408: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_79;
    // 0x802F1408: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_79:
    // 0x802F140C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F1410: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F1414: lui         $a3, 0xC48A
    ctx->r7 = S32(0XC48A << 16);
    // 0x802F1418: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F141C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1420: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802F1424: lui         $a2, 0x43CD
    ctx->r6 = S32(0X43CD << 16);
    // 0x802F1428: jal         0x802B447C
    // 0x802F142C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_80;
    // 0x802F142C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_80:
    // 0x802F1430: lui         $at, 0x43D5
    ctx->r1 = S32(0X43D5 << 16);
    // 0x802F1434: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F1438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F143C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F1440: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x802F1444: lui         $a3, 0xC3DC
    ctx->r7 = S32(0XC3DC << 16);
    // 0x802F1448: jal         0x802B447C
    // 0x802F144C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_81;
    // 0x802F144C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_81:
    // 0x802F1450: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802F1454: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F1458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F145C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802F1460: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x802F1464: lui         $a3, 0xC1D8
    ctx->r7 = S32(0XC1D8 << 16);
    // 0x802F1468: jal         0x802B447C
    // 0x802F146C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_82;
    // 0x802F146C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_82:
    // 0x802F1470: lui         $at, 0x436C
    ctx->r1 = S32(0X436C << 16);
    // 0x802F1474: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F1478: lui         $a3, 0x443B
    ctx->r7 = S32(0X443B << 16);
    // 0x802F147C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1484: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802F1488: lui         $a2, 0x4286
    ctx->r6 = S32(0X4286 << 16);
    // 0x802F148C: jal         0x802B447C
    // 0x802F1490: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_83;
    // 0x802F1490: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_83:
    // 0x802F1494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1498: jal         0x80318C9C
    // 0x802F149C: lui         $a1, 0x435C
    ctx->r5 = S32(0X435C << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_84;
    // 0x802F149C: lui         $a1, 0x435C
    ctx->r5 = S32(0X435C << 16);
    after_84:
    // 0x802F14A0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802F14A4: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    // 0x802F14A8: addiu       $s0, $s0, 0x4DAC
    ctx->r16 = ADD32(ctx->r16, 0X4DAC);
    // 0x802F14AC: jal         0x802B3F64
    // 0x802F14B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B3F64(rdram, ctx);
        goto after_85;
    // 0x802F14B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_85:
    // 0x802F14B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F14B8: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F14BC: lui         $a3, 0x4566
    ctx->r7 = S32(0X4566 << 16);
    // 0x802F14C0: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F14C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F14C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F14CC: lui         $a2, 0xC540
    ctx->r6 = S32(0XC540 << 16);
    // 0x802F14D0: jal         0x802B447C
    // 0x802F14D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_86;
    // 0x802F14D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_86:
    // 0x802F14D8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802F14DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F14E0: lui         $a2, 0xC517
    ctx->r6 = S32(0XC517 << 16);
    // 0x802F14E4: lui         $a3, 0x44A3
    ctx->r7 = S32(0X44A3 << 16);
    // 0x802F14E8: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802F14EC: ori         $a2, $a2, 0xF000
    ctx->r6 = ctx->r6 | 0XF000;
    // 0x802F14F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F14F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F14F8: jal         0x802B447C
    // 0x802F14FC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_87;
    // 0x802F14FC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_87:
    // 0x802F1500: lui         $at, 0x4343
    ctx->r1 = S32(0X4343 << 16);
    // 0x802F1504: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F1508: lui         $a3, 0x447D
    ctx->r7 = S32(0X447D << 16);
    // 0x802F150C: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F1510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1514: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F1518: lui         $a2, 0xC48E
    ctx->r6 = S32(0XC48E << 16);
    // 0x802F151C: jal         0x802B447C
    // 0x802F1520: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_88;
    // 0x802F1520: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_88:
    // 0x802F1524: lui         $at, 0x4374
    ctx->r1 = S32(0X4374 << 16);
    // 0x802F1528: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F152C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1530: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F1534: lui         $a2, 0xC3FF
    ctx->r6 = S32(0XC3FF << 16);
    // 0x802F1538: lui         $a3, 0x447A
    ctx->r7 = S32(0X447A << 16);
    // 0x802F153C: jal         0x802B447C
    // 0x802F1540: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_89;
    // 0x802F1540: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_89:
    // 0x802F1544: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802F1548: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F154C: lui         $a3, 0x446D
    ctx->r7 = S32(0X446D << 16);
    // 0x802F1550: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F1554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1558: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F155C: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x802F1560: jal         0x802B447C
    // 0x802F1564: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_90;
    // 0x802F1564: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_90:
    // 0x802F1568: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802F156C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F1570: lui         $a3, 0xC55C
    ctx->r7 = S32(0XC55C << 16);
    // 0x802F1574: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F1578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F157C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F1580: lui         $a2, 0x430F
    ctx->r6 = S32(0X430F << 16);
    // 0x802F1584: jal         0x802B447C
    // 0x802F1588: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_91;
    // 0x802F1588: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_91:
    // 0x802F158C: lui         $at, 0x433D
    ctx->r1 = S32(0X433D << 16);
    // 0x802F1590: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F1594: lui         $a2, 0xC3C5
    ctx->r6 = S32(0XC3C5 << 16);
    // 0x802F1598: lui         $a3, 0xC574
    ctx->r7 = S32(0XC574 << 16);
    // 0x802F159C: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F15A0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802F15A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F15A8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F15AC: jal         0x802B447C
    // 0x802F15B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_92;
    // 0x802F15B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_92:
    // 0x802F15B4: lui         $at, 0x4286
    ctx->r1 = S32(0X4286 << 16);
    // 0x802F15B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F15BC: lui         $a3, 0xC52A
    ctx->r7 = S32(0XC52A << 16);
    // 0x802F15C0: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F15C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F15C8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F15CC: lui         $a2, 0xC39D
    ctx->r6 = S32(0XC39D << 16);
    // 0x802F15D0: jal         0x802B447C
    // 0x802F15D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_93;
    // 0x802F15D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_93:
    // 0x802F15D8: lui         $at, 0x4319
    ctx->r1 = S32(0X4319 << 16);
    // 0x802F15DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F15E0: lui         $a3, 0xC4F3
    ctx->r7 = S32(0XC4F3 << 16);
    // 0x802F15E4: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802F15E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F15EC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F15F0: lui         $a2, 0xC2D4
    ctx->r6 = S32(0XC2D4 << 16);
    // 0x802F15F4: jal         0x802B447C
    // 0x802F15F8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_94;
    // 0x802F15F8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_94:
    // 0x802F15FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F1600: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F1604: lui         $a2, 0x44C9
    ctx->r6 = S32(0X44C9 << 16);
    // 0x802F1608: lui         $a3, 0x4523
    ctx->r7 = S32(0X4523 << 16);
    // 0x802F160C: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802F1610: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802F1614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1618: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F161C: jal         0x802B447C
    // 0x802F1620: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_95;
    // 0x802F1620: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_95:
    // 0x802F1624: lui         $at, 0x436E
    ctx->r1 = S32(0X436E << 16);
    // 0x802F1628: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F162C: lui         $a3, 0x455A
    ctx->r7 = S32(0X455A << 16);
    // 0x802F1630: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802F1634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1638: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F163C: lui         $a2, 0xC302
    ctx->r6 = S32(0XC302 << 16);
    // 0x802F1640: jal         0x802B447C
    // 0x802F1644: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_96;
    // 0x802F1644: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_96:
    // 0x802F1648: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x802F164C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F1650: lui         $a3, 0x454B
    ctx->r7 = S32(0X454B << 16);
    // 0x802F1654: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802F1658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F165C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802F1660: lui         $a2, 0xC44A
    ctx->r6 = S32(0XC44A << 16);
    // 0x802F1664: jal         0x802B447C
    // 0x802F1668: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_97;
    // 0x802F1668: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_97:
    // 0x802F166C: lui         $at, 0x4379
    ctx->r1 = S32(0X4379 << 16);
    // 0x802F1670: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F1674: lui         $a3, 0x44E8
    ctx->r7 = S32(0X44E8 << 16);
    // 0x802F1678: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802F167C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1680: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F1684: lui         $a2, 0xC33A
    ctx->r6 = S32(0XC33A << 16);
    // 0x802F1688: jal         0x802B447C
    // 0x802F168C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_98;
    // 0x802F168C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_98:
    // 0x802F1690: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F1694: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F1698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F169C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802F16A0: lui         $a2, 0x432C
    ctx->r6 = S32(0X432C << 16);
    // 0x802F16A4: lui         $a3, 0xC2BE
    ctx->r7 = S32(0XC2BE << 16);
    // 0x802F16A8: jal         0x802B447C
    // 0x802F16AC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_99;
    // 0x802F16AC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_99:
    // 0x802F16B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F16B4: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F16B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F16BC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802F16C0: lui         $a2, 0xC208
    ctx->r6 = S32(0XC208 << 16);
    // 0x802F16C4: lui         $a3, 0xC485
    ctx->r7 = S32(0XC485 << 16);
    // 0x802F16C8: jal         0x802B447C
    // 0x802F16CC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_100;
    // 0x802F16CC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_100:
    // 0x802F16D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F16D4: jal         0x80318C9C
    // 0x802F16D8: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_101;
    // 0x802F16D8: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_101:
    // 0x802F16DC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802F16E0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802F16E4: addiu       $s0, $s1, 0x2C8C
    ctx->r16 = ADD32(ctx->r17, 0X2C8C);
L_802F16E8:
    // 0x802F16E8: lw          $v0, 0x2E2C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2E2C);
    // 0x802F16EC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F16F0: lh          $t6, 0xB0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XB0);
    // 0x802F16F4: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802F16F8: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    // 0x802F16FC: jalr        $t9
    // 0x802F1700: addiu       $a0, $a0, 0x2C8C
    ctx->r4 = ADD32(ctx->r4, 0X2C8C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_102;
    // 0x802F1700: addiu       $a0, $a0, 0x2C8C
    ctx->r4 = ADD32(ctx->r4, 0X2C8C);
    after_102:
    // 0x802F1704: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x802F1708: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802F170C: jal         0x802AB2AC
    // 0x802F1710: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    static_3_802AB2AC(rdram, ctx);
        goto after_103;
    // 0x802F1710: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_103:
    // 0x802F1714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1718: jal         0x802B44B8
    // 0x802F171C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802B44B8(rdram, ctx);
        goto after_104;
    // 0x802F171C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_104:
    // 0x802F1720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1724: jal         0x802B44E4
    // 0x802F1728: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B44E4(rdram, ctx);
        goto after_105;
    // 0x802F1728: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_105:
    // 0x802F172C: addiu       $s2, $s2, 0x6A0
    ctx->r18 = ADD32(ctx->r18, 0X6A0);
    // 0x802F1730: addiu       $at, $zero, 0x27C0
    ctx->r1 = ADD32(0, 0X27C0);
    // 0x802F1734: addiu       $s1, $s1, 0x6A0
    ctx->r17 = ADD32(ctx->r17, 0X6A0);
    // 0x802F1738: bne         $s2, $at, L_802F16E8
    if (ctx->r18 != ctx->r1) {
        // 0x802F173C: addiu       $s0, $s0, 0x6A0
        ctx->r16 = ADD32(ctx->r16, 0X6A0);
            goto L_802F16E8;
    }
    // 0x802F173C: addiu       $s0, $s0, 0x6A0
    ctx->r16 = ADD32(ctx->r16, 0X6A0);
    // 0x802F1740: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802F1744: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802F1748: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802F174C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802F1750: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802F1754: jr          $ra
    // 0x802F1758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802F1758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8022F440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022F440: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8022F444: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8022F448: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x8022F44C: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8022F450: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8022F454: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8022F458: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8022F45C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8022F460: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8022F464: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8022F468: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8022F46C: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x8022F470: sw          $a3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r7;
    // 0x8022F474: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8022F478: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8022F47C: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8022F480: addu        $s7, $t7, $t8
    ctx->r23 = ADD32(ctx->r15, ctx->r24);
    // 0x8022F484: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
    // 0x8022F488: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8022F48C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022F490: blez        $v1, L_8022F758
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022F494: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_8022F758;
    }
    // 0x8022F494: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8022F498: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x8022F49C: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x8022F4A0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_8022F4A4:
    // 0x8022F4A4: lw          $t9, 0x1C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X1C);
    // 0x8022F4A8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8022F4AC: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x8022F4B0: sllv        $t1, $t0, $s4
    ctx->r9 = S32(ctx->r8 << (ctx->r20 & 31));
    // 0x8022F4B4: and         $t2, $t9, $t1
    ctx->r10 = ctx->r25 & ctx->r9;
    // 0x8022F4B8: bne         $t2, $zero, L_8022F4D4
    if (ctx->r10 != 0) {
        // 0x8022F4BC: addu        $s1, $a0, $s6
        ctx->r17 = ADD32(ctx->r4, ctx->r22);
            goto L_8022F4D4;
    }
    // 0x8022F4BC: addu        $s1, $a0, $s6
    ctx->r17 = ADD32(ctx->r4, ctx->r22);
    // 0x8022F4C0: lbu         $t3, 0x7($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X7);
    // 0x8022F4C4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8022F4C8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8022F4CC: beq         $t4, $zero, L_8022F4DC
    if (ctx->r12 == 0) {
        // 0x8022F4D0: nop
    
            goto L_8022F4DC;
    }
    // 0x8022F4D0: nop

L_8022F4D4:
    // 0x8022F4D4: b           L_8022F4DC
    // 0x8022F4D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_8022F4DC;
    // 0x8022F4D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8022F4DC:
    // 0x8022F4DC: bnel        $s2, $zero, L_8022F53C
    if (ctx->r18 != 0) {
        // 0x8022F4E0: lw          $v0, 0x8($s5)
        ctx->r2 = MEM_W(ctx->r21, 0X8);
            goto L_8022F53C;
    }
    goto skip_0;
    // 0x8022F4E0: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    skip_0:
    // 0x8022F4E4: lbu         $t5, 0x7($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X7);
    // 0x8022F4E8: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8022F4EC: slt         $at, $s4, $t7
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8022F4F0: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x8022F4F4: beql        $t6, $zero, L_8022F53C
    if (ctx->r14 == 0) {
        // 0x8022F4F8: lw          $v0, 0x8($s5)
        ctx->r2 = MEM_W(ctx->r21, 0X8);
            goto L_8022F53C;
    }
    goto skip_1;
    // 0x8022F4F8: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    skip_1:
    // 0x8022F4FC: beq         $at, $zero, L_8022F744
    if (ctx->r1 == 0) {
        // 0x8022F500: addu        $v0, $a0, $s6
        ctx->r2 = ADD32(ctx->r4, ctx->r22);
            goto L_8022F744;
    }
    // 0x8022F500: addu        $v0, $a0, $s6
    ctx->r2 = ADD32(ctx->r4, ctx->r22);
    // 0x8022F504: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x8022F508: lbu         $t0, 0x2A($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X2A);
    // 0x8022F50C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022F510: subu        $s2, $t8, $t0
    ctx->r18 = SUB32(ctx->r24, ctx->r8);
    // 0x8022F514: blezl       $s2, L_8022F748
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8022F518: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8022F748;
    }
    goto skip_2;
    // 0x8022F518: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
L_8022F51C:
    // 0x8022F51C: jal         0x802230E4
    // 0x8022F520: nop

    static_3_802230E4(rdram, ctx);
        goto after_0;
    // 0x8022F520: nop

    after_0:
    // 0x8022F524: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022F528: bne         $s0, $s2, L_8022F51C
    if (ctx->r16 != ctx->r18) {
        // 0x8022F52C: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8022F51C;
    }
    // 0x8022F52C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8022F530: b           L_8022F744
    // 0x8022F534: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
        goto L_8022F744;
    // 0x8022F534: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
    // 0x8022F538: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
L_8022F53C:
    // 0x8022F53C: sll         $s0, $s4, 2
    ctx->r16 = S32(ctx->r20 << 2);
    // 0x8022F540: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022F544: addu        $t9, $v0, $s0
    ctx->r25 = ADD32(ctx->r2, ctx->r16);
    // 0x8022F548: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x8022F54C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022F550: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x8022F554: beq         $t1, $zero, L_8022F58C
    if (ctx->r9 == 0) {
        // 0x8022F558: lui         $t0, 0x0
        ctx->r8 = S32(0X0 << 16);
            goto L_8022F58C;
    }
    // 0x8022F558: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8022F55C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022F560: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022F564: lui         $t3, 0x104
    ctx->r11 = S32(0X104 << 16);
    // 0x8022F568: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x8022F56C: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x8022F570: ori         $t3, $t3, 0x40
    ctx->r11 = ctx->r11 | 0X40;
    // 0x8022F574: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8022F578: lw          $t4, 0x8($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X8);
    // 0x8022F57C: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x8022F580: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8022F584: b           L_8022F618
    // 0x8022F588: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
        goto L_8022F618;
    // 0x8022F588: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_8022F58C:
    // 0x8022F58C: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8022F590: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8022F594: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8022F598: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8022F59C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8022F5A0: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8022F5A4: lw          $t3, 0x0($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X0);
    // 0x8022F5A8: sll         $t6, $s4, 6
    ctx->r14 = S32(ctx->r20 << 6);
    // 0x8022F5AC: or          $t1, $sp, $zero
    ctx->r9 = ctx->r29 | 0;
    // 0x8022F5B0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8022F5B4: sw          $t4, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r12;
    // 0x8022F5B8: lw          $t5, 0x4($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X4);
    // 0x8022F5BC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8022F5C0: addiu       $t0, $t7, 0x3C
    ctx->r8 = ADD32(ctx->r15, 0X3C);
L_8022F5C4:
    // 0x8022F5C4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8022F5C8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8022F5CC: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x8022F5D0: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x8022F5D4: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8022F5D8: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x8022F5DC: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8022F5E0: bne         $t7, $t0, L_8022F5C4
    if (ctx->r15 != ctx->r8) {
        // 0x8022F5E4: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_8022F5C4;
    }
    // 0x8022F5E4: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x8022F5E8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8022F5EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8022F5F0: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8022F5F4: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8022F5F8: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8022F5FC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8022F600: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x8022F604: jal         0x80222FE0
    // 0x8022F608: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    static_3_80222FE0(rdram, ctx);
        goto after_1;
    // 0x8022F608: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    after_1:
    // 0x8022F60C: lw          $t2, 0x8($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X8);
    // 0x8022F610: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8022F614: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
L_8022F618:
    // 0x8022F618: beql        $s2, $zero, L_8022F6F0
    if (ctx->r18 == 0) {
        // 0x8022F61C: lbu         $v1, 0x4($s7)
        ctx->r3 = MEM_BU(ctx->r23, 0X4);
            goto L_8022F6F0;
    }
    goto skip_3;
    // 0x8022F61C: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
    skip_3:
    // 0x8022F620: lbu         $t4, 0x20($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X20);
    // 0x8022F624: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022F628: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x8022F62C: beql        $t4, $zero, L_8022F6C0
    if (ctx->r12 == 0) {
        // 0x8022F630: lbu         $t8, 0x4($s1)
        ctx->r24 = MEM_BU(ctx->r17, 0X4);
            goto L_8022F6C0;
    }
    goto skip_4;
    // 0x8022F630: lbu         $t8, 0x4($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4);
    skip_4:
    // 0x8022F634: lw          $t5, 0x4($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X4);
    // 0x8022F638: sll         $t6, $s4, 6
    ctx->r14 = S32(ctx->r20 << 6);
    // 0x8022F63C: or          $t1, $sp, $zero
    ctx->r9 = ctx->r29 | 0;
    // 0x8022F640: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x8022F644: addiu       $t7, $t9, 0x3C
    ctx->r15 = ADD32(ctx->r25, 0X3C);
L_8022F648:
    // 0x8022F648: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8022F64C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8022F650: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x8022F654: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x8022F658: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8022F65C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8022F660: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8022F664: bne         $t9, $t7, L_8022F648
    if (ctx->r25 != ctx->r15) {
        // 0x8022F668: sw          $at, 0x4($t1)
        MEM_W(0X4, ctx->r9) = ctx->r1;
            goto L_8022F648;
    }
    // 0x8022F668: sw          $at, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r1;
    // 0x8022F66C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8022F670: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x8022F674: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8022F678: jal         0x80228F38
    // 0x8022F67C: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    static_3_80228F38(rdram, ctx);
        goto after_2;
    // 0x8022F67C: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_2:
    // 0x8022F680: lw          $v0, 0xF4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XF4);
    // 0x8022F684: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8022F688: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8022F68C: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8022F690: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x8022F694: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022F698: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8022F69C: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x8022F6A0: lwc1        $f16, 0x34($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8022F6A4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8022F6A8: swc1        $f18, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f18.u32l;
    // 0x8022F6AC: lwc1        $f6, 0x38($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8022F6B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022F6B4: jal         0x802219B8
    // 0x8022F6B8: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    static_3_802219B8(rdram, ctx);
        goto after_3;
    // 0x8022F6B8: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8022F6BC: lbu         $t8, 0x4($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4);
L_8022F6C0:
    // 0x8022F6C0: blezl       $t8, L_8022F6F0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8022F6C4: lbu         $v1, 0x4($s7)
        ctx->r3 = MEM_BU(ctx->r23, 0X4);
            goto L_8022F6F0;
    }
    goto skip_5;
    // 0x8022F6C4: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
    skip_5:
    // 0x8022F6C8: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
L_8022F6CC:
    // 0x8022F6CC: sll         $t3, $s0, 4
    ctx->r11 = S32(ctx->r16 << 4);
    // 0x8022F6D0: jal         0x80220C44
    // 0x8022F6D4: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    static_3_80220C44(rdram, ctx);
        goto after_4;
    // 0x8022F6D4: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    after_4:
    // 0x8022F6D8: lbu         $t4, 0x4($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X4);
    // 0x8022F6DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022F6E0: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8022F6E4: bnel        $at, $zero, L_8022F6CC
    if (ctx->r1 != 0) {
        // 0x8022F6E8: lw          $t2, 0x0($s1)
        ctx->r10 = MEM_W(ctx->r17, 0X0);
            goto L_8022F6CC;
    }
    goto skip_6;
    // 0x8022F6E8: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    skip_6:
    // 0x8022F6EC: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
L_8022F6F0:
    // 0x8022F6F0: addiu       $t5, $s4, 0x1
    ctx->r13 = ADD32(ctx->r20, 0X1);
    // 0x8022F6F4: bnel        $t5, $v1, L_8022F708
    if (ctx->r13 != ctx->r3) {
        // 0x8022F6F8: lw          $t6, 0x0($s7)
        ctx->r14 = MEM_W(ctx->r23, 0X0);
            goto L_8022F708;
    }
    goto skip_7;
    // 0x8022F6F8: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    skip_7:
    // 0x8022F6FC: b           L_8022F758
    // 0x8022F700: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_8022F758;
    // 0x8022F700: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8022F704: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
L_8022F708:
    // 0x8022F708: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022F70C: addu        $v0, $t6, $s6
    ctx->r2 = ADD32(ctx->r14, ctx->r22);
    // 0x8022F710: lbu         $t0, 0x6($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X6);
    // 0x8022F714: lbu         $t7, 0x2A($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2A);
    // 0x8022F718: subu        $s2, $t0, $t7
    ctx->r18 = SUB32(ctx->r8, ctx->r15);
    // 0x8022F71C: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x8022F720: bltz        $s2, L_8022F744
    if (SIGNED(ctx->r18) < 0) {
        // 0x8022F724: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8022F744;
    }
    // 0x8022F724: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8022F728: addiu       $s1, $s2, 0x1
    ctx->r17 = ADD32(ctx->r18, 0X1);
L_8022F72C:
    // 0x8022F72C: jal         0x802230E4
    // 0x8022F730: nop

    static_3_802230E4(rdram, ctx);
        goto after_5;
    // 0x8022F730: nop

    after_5:
    // 0x8022F734: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022F738: bne         $s1, $s0, L_8022F72C
    if (ctx->r17 != ctx->r16) {
        // 0x8022F73C: nop
    
            goto L_8022F72C;
    }
    // 0x8022F73C: nop

    // 0x8022F740: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
L_8022F744:
    // 0x8022F744: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022F748:
    // 0x8022F748: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022F74C: bne         $at, $zero, L_8022F4A4
    if (ctx->r1 != 0) {
        // 0x8022F750: addiu       $s6, $s6, 0x24
        ctx->r22 = ADD32(ctx->r22, 0X24);
            goto L_8022F4A4;
    }
    // 0x8022F750: addiu       $s6, $s6, 0x24
    ctx->r22 = ADD32(ctx->r22, 0X24);
    // 0x8022F754: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8022F758:
    // 0x8022F758: blezl       $s3, L_8022F778
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8022F75C: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_8022F778;
    }
    goto skip_8;
    // 0x8022F75C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_8:
L_8022F760:
    // 0x8022F760: jal         0x802230E4
    // 0x8022F764: nop

    static_3_802230E4(rdram, ctx);
        goto after_6;
    // 0x8022F764: nop

    after_6:
    // 0x8022F768: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8022F76C: bne         $s4, $s3, L_8022F760
    if (ctx->r20 != ctx->r19) {
        // 0x8022F770: nop
    
            goto L_8022F760;
    }
    // 0x8022F770: nop

    // 0x8022F774: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_8022F778:
    // 0x8022F778: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8022F77C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8022F780: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8022F784: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8022F788: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8022F78C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8022F790: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8022F794: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x8022F798: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x8022F79C: jr          $ra
    // 0x8022F7A0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8022F7A0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void D_80228648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228648: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8022864C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80228650: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80228654: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80228658: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022865C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80228660: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x80228664: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80228668: ori         $at, $at, 0x20
    ctx->r1 = ctx->r1 | 0X20;
    // 0x8022866C: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x80228670: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x80228674: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80228678: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x8022867C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80228680: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80228684: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x80228688: lhu         $a2, 0x0($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X0);
    // 0x8022868C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80228690: lui         $t2, 0x300
    ctx->r10 = S32(0X300 << 16);
    // 0x80228694: blez        $a2, L_80228700
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80228698: lui         $t1, 0x0
        ctx->r9 = S32(0X0 << 16);
            goto L_80228700;
    }
    // 0x80228698: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8022869C: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x802286A0: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
L_802286A4:
    // 0x802286A4: sll         $t3, $a1, 5
    ctx->r11 = S32(ctx->r5 << 5);
    // 0x802286A8: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x802286AC: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x802286B0: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x802286B4: addiu       $t8, $t7, 0x84
    ctx->r24 = ADD32(ctx->r15, 0X84);
    // 0x802286B8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802286BC: beq         $t5, $zero, L_802286F4
    if (ctx->r13 == 0) {
        // 0x802286C0: andi        $t9, $t8, 0xFF
        ctx->r25 = ctx->r24 & 0XFF;
            goto L_802286F4;
    }
    // 0x802286C0: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x802286C4: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x802286C8: sll         $t3, $t9, 16
    ctx->r11 = S32(ctx->r25 << 16);
    // 0x802286CC: or          $t4, $t3, $t2
    ctx->r12 = ctx->r11 | ctx->r10;
    // 0x802286D0: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x802286D4: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x802286D8: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x802286DC: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x802286E0: lw          $t6, 0x1C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1C);
    // 0x802286E4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802286E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802286EC: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x802286F0: lhu         $a2, 0x0($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X0);
L_802286F4:
    // 0x802286F4: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x802286F8: bnel        $at, $zero, L_802286A4
    if (ctx->r1 != 0) {
        // 0x802286FC: lw          $t4, 0x0($t1)
        ctx->r12 = MEM_W(ctx->r9, 0X0);
            goto L_802286A4;
    }
    goto skip_0;
    // 0x802286FC: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    skip_0:
L_80228700:
    // 0x80228700: jr          $ra
    // 0x80228704: nop

    return;
    // 0x80228704: nop

;}

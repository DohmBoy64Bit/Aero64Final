#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80246BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246BFC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80246C00: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80246C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80246C08: jal         0x80236B80
    // 0x80246C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_0;
    // 0x80246C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80246C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80246C18: jr          $ra
    // 0x80246C1C: nop

    return;
    // 0x80246C1C: nop

;}
RECOMP_FUNC void D_802E859C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E861C: jr          $ra
    // 0x802E8620: sw          $a1, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r5;
    return;
    // 0x802E8620: sw          $a1, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_80238124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023812C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80238130: jal         0x802380B0
    // 0x80238134: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_0;
    // 0x80238134: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_0:
    // 0x80238138: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x8023813C: beq         $t6, $zero, L_80238168
    if (ctx->r14 == 0) {
        // 0x80238140: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_80238168;
    }
    // 0x80238140: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80238144: andi        $t1, $v0, 0x7F
    ctx->r9 = ctx->r2 & 0X7F;
L_80238148:
    // 0x80238148: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8023814C: jal         0x802380B0
    // 0x80238150: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_1;
    // 0x80238150: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_1:
    // 0x80238154: sll         $t7, $t1, 7
    ctx->r15 = S32(ctx->r9 << 7);
    // 0x80238158: andi        $t8, $v0, 0x7F
    ctx->r24 = ctx->r2 & 0X7F;
    // 0x8023815C: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x80238160: bne         $t9, $zero, L_80238148
    if (ctx->r25 != 0) {
        // 0x80238164: addu        $t1, $t7, $t8
        ctx->r9 = ADD32(ctx->r15, ctx->r24);
            goto L_80238148;
    }
    // 0x80238164: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
L_80238168:
    // 0x80238168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023816C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80238170: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80238174: jr          $ra
    // 0x80238178: nop

    return;
    // 0x80238178: nop

    // 0x8023817C: jr          $ra
    // 0x80238180: nop

    return;
    // 0x80238180: nop

;}
RECOMP_FUNC void D_802CBC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CBCCC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x802CBCD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802CBCD4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802CBCD8: jal         0x8022331C
    // 0x802CBCDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802CBCDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x802CBCE0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802CBCE4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802CBCE8: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802CBCEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CBCF0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802CBCF4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802CBCF8: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x802CBCFC: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802CBD00: jal         0x8022A848
    // 0x802CBD04: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_1;
    // 0x802CBD04: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x802CBD08: jal         0x80221B2C
    // 0x802CBD0C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    static_3_80221B2C(rdram, ctx);
        goto after_2;
    // 0x802CBD0C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    after_2:
    // 0x802CBD10: jal         0x8022970C
    // 0x802CBD14: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802CBD14: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x802CBD18: jal         0x8022149C
    // 0x802CBD1C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    static_3_8022149C(rdram, ctx);
        goto after_4;
    // 0x802CBD1C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x802CBD20: jal         0x802233EC
    // 0x802CBD24: lui         $a0, 0xC2
    ctx->r4 = S32(0XC2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_5;
    // 0x802CBD24: lui         $a0, 0xC2
    ctx->r4 = S32(0XC2 << 16);
    after_5:
    // 0x802CBD28: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802CBD2C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802CBD30: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802CBD34: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x802CBD38: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    // 0x802CBD3C: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    // 0x802CBD40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CBD44: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CBD48: jal         0x802CEEB4
    // 0x802CBD4C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    static_3_802CEEB4(rdram, ctx);
        goto after_6;
    // 0x802CBD4C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_6:
    // 0x802CBD50: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802CBD54: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CBD58: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802CBD5C: jal         0x8021E708
    // 0x802CBD60: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_7;
    // 0x802CBD60: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_7:
    // 0x802CBD64: jal         0x8021E66C
    // 0x802CBD68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_8;
    // 0x802CBD68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x802CBD6C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CBD70: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CBD74: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    // 0x802CBD78: jal         0x8021E87C
    // 0x802CBD7C: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    static_3_8021E87C(rdram, ctx);
        goto after_9;
    // 0x802CBD7C: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    after_9:
    // 0x802CBD80: addiu       $t7, $zero, 0xCC
    ctx->r15 = ADD32(0, 0XCC);
    // 0x802CBD84: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802CBD88: addiu       $a0, $zero, 0xB9
    ctx->r4 = ADD32(0, 0XB9);
    // 0x802CBD8C: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x802CBD90: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    // 0x802CBD94: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    // 0x802CBD98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CBD9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CBDA0: jal         0x802CEEB4
    // 0x802CBDA4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    static_3_802CEEB4(rdram, ctx);
        goto after_10;
    // 0x802CBDA4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_10:
    // 0x802CBDA8: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x802CBDAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CBDB0: bnel        $v0, $at, L_802CBED0
    if (ctx->r2 != ctx->r1) {
        // 0x802CBDB4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802CBED0;
    }
    goto skip_0;
    // 0x802CBDB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x802CBDB8: jal         0x8023413C
    // 0x802CBDBC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_8023413C(rdram, ctx);
        goto after_11;
    // 0x802CBDBC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_11:
    // 0x802CBDC0: lw          $t8, 0xB4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XB4);
    // 0x802CBDC4: lh          $t9, 0xAA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XAA);
    // 0x802CBDC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CBDCC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802CBDD0: beq         $t8, $t9, L_802CBE18
    if (ctx->r24 == ctx->r25) {
        // 0x802CBDD4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802CBE18;
    }
    // 0x802CBDD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CBDD8: jal         0x8021E708
    // 0x802CBDDC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_12;
    // 0x802CBDDC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_12:
    // 0x802CBDE0: lh          $t0, 0xAA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XAA);
    // 0x802CBDE4: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x802CBDE8: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    // 0x802CBDEC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802CBDF0: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x802CBDF4: jal         0x802CE360
    // 0x802CBDF8: lw          $a0, 0xB8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XB8);
    static_3_802CE360(rdram, ctx);
        goto after_13;
    // 0x802CBDF8: lw          $a0, 0xB8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XB8);
    after_13:
    // 0x802CBDFC: lh          $t3, 0xAA($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XAA);
    // 0x802CBE00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CBE04: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x802CBE08: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802CBE0C: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x802CBE10: jal         0x8021E87C
    // 0x802CBE14: lw          $a2, 0xB8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0XB8);
    static_3_8021E87C(rdram, ctx);
        goto after_14;
    // 0x802CBE14: lw          $a2, 0xB8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0XB8);
    after_14:
L_802CBE18:
    // 0x802CBE18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CBE1C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CBE20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CBE24: jal         0x8021E708
    // 0x802CBE28: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_15;
    // 0x802CBE28: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_15:
    // 0x802CBE2C: lh          $t6, 0xA8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA8);
    // 0x802CBE30: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x802CBE34: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    // 0x802CBE38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802CBE3C: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x802CBE40: jal         0x802CE360
    // 0x802CBE44: lw          $a0, 0xB8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XB8);
    static_3_802CE360(rdram, ctx);
        goto after_16;
    // 0x802CBE44: lw          $a0, 0xB8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XB8);
    after_16:
    // 0x802CBE48: lh          $t9, 0xA8($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA8);
    // 0x802CBE4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CBE50: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    // 0x802CBE54: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802CBE58: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x802CBE5C: jal         0x8021E87C
    // 0x802CBE60: lw          $a2, 0xB8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XB8);
    static_3_8021E87C(rdram, ctx);
        goto after_17;
    // 0x802CBE60: lw          $a2, 0xB8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XB8);
    after_17:
    // 0x802CBE64: lh          $t2, 0xA6($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA6);
    // 0x802CBE68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802CBE6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CBE70: beq         $t2, $at, L_802CBEBC
    if (ctx->r10 == ctx->r1) {
        // 0x802CBE74: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_802CBEBC;
    }
    // 0x802CBE74: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802CBE78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CBE7C: jal         0x8021E708
    // 0x802CBE80: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_18;
    // 0x802CBE80: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_18:
    // 0x802CBE84: lh          $t3, 0xA6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XA6);
    // 0x802CBE88: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x802CBE8C: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    // 0x802CBE90: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802CBE94: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x802CBE98: jal         0x802CE360
    // 0x802CBE9C: lw          $a0, 0xB8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XB8);
    static_3_802CE360(rdram, ctx);
        goto after_19;
    // 0x802CBE9C: lw          $a0, 0xB8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XB8);
    after_19:
    // 0x802CBEA0: lh          $t6, 0xA6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA6);
    // 0x802CBEA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CBEA8: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    // 0x802CBEAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802CBEB0: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x802CBEB4: jal         0x8021E87C
    // 0x802CBEB8: lw          $a2, 0xB8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0XB8);
    static_3_8021E87C(rdram, ctx);
        goto after_20;
    // 0x802CBEB8: lw          $a2, 0xB8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0XB8);
    after_20:
L_802CBEBC:
    // 0x802CBEBC: jal         0x8023413C
    // 0x802CBEC0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_8023413C(rdram, ctx);
        goto after_21;
    // 0x802CBEC0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_21:
    // 0x802CBEC4: b           L_802CBFA8
    // 0x802CBEC8: addiu       $t1, $zero, 0xCC
    ctx->r9 = ADD32(0, 0XCC);
        goto L_802CBFA8;
    // 0x802CBEC8: addiu       $t1, $zero, 0xCC
    ctx->r9 = ADD32(0, 0XCC);
    // 0x802CBECC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802CBED0:
    // 0x802CBED0: beq         $v0, $at, L_802CBEE0
    if (ctx->r2 == ctx->r1) {
        // 0x802CBED4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802CBEE0;
    }
    // 0x802CBED4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802CBED8: bnel        $v0, $at, L_802CBFA8
    if (ctx->r2 != ctx->r1) {
        // 0x802CBEDC: addiu       $t1, $zero, 0xCC
        ctx->r9 = ADD32(0, 0XCC);
            goto L_802CBFA8;
    }
    goto skip_1;
    // 0x802CBEDC: addiu       $t1, $zero, 0xCC
    ctx->r9 = ADD32(0, 0XCC);
    skip_1:
L_802CBEE0:
    // 0x802CBEE0: lh          $t9, 0x160($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X160);
    // 0x802CBEE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CBEE8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802CBEEC: bne         $t9, $zero, L_802CBF10
    if (ctx->r25 != 0) {
        // 0x802CBEF0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802CBF10;
    }
    // 0x802CBEF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CBEF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CBEF8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CBEFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CBF00: jal         0x8021E708
    // 0x802CBF04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_22;
    // 0x802CBF04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_22:
    // 0x802CBF08: b           L_802CBF18
    // 0x802CBF0C: nop

        goto L_802CBF18;
    // 0x802CBF0C: nop

L_802CBF10:
    // 0x802CBF10: jal         0x8021E708
    // 0x802CBF14: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_23;
    // 0x802CBF14: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_23:
L_802CBF18:
    // 0x802CBF18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CBF1C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802CBF20: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x802CBF24: jal         0x802CE360
    // 0x802CBF28: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    static_3_802CE360(rdram, ctx);
        goto after_24;
    // 0x802CBF28: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    after_24:
    // 0x802CBF2C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CBF30: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CBF34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CBF38: jal         0x8021E87C
    // 0x802CBF3C: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    static_3_8021E87C(rdram, ctx);
        goto after_25;
    // 0x802CBF3C: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    after_25:
    // 0x802CBF40: lh          $t0, 0x160($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X160);
    // 0x802CBF44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CBF48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CBF4C: bne         $t0, $at, L_802CBF70
    if (ctx->r8 != ctx->r1) {
        // 0x802CBF50: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_802CBF70;
    }
    // 0x802CBF50: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802CBF54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CBF58: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CBF5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CBF60: jal         0x8021E708
    // 0x802CBF64: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_26;
    // 0x802CBF64: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_26:
    // 0x802CBF68: b           L_802CBF7C
    // 0x802CBF6C: nop

        goto L_802CBF7C;
    // 0x802CBF6C: nop

L_802CBF70:
    // 0x802CBF70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CBF74: jal         0x8021E708
    // 0x802CBF78: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_27;
    // 0x802CBF78: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_27:
L_802CBF7C:
    // 0x802CBF7C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CBF80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802CBF84: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x802CBF88: jal         0x802CE360
    // 0x802CBF8C: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    static_3_802CE360(rdram, ctx);
        goto after_28;
    // 0x802CBF8C: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    after_28:
    // 0x802CBF90: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CBF94: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CBF98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CBF9C: jal         0x8021E87C
    // 0x802CBFA0: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    static_3_8021E87C(rdram, ctx);
        goto after_29;
    // 0x802CBFA0: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    after_29:
    // 0x802CBFA4: addiu       $t1, $zero, 0xCC
    ctx->r9 = ADD32(0, 0XCC);
L_802CBFA8:
    // 0x802CBFA8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802CBFAC: addiu       $a0, $zero, 0xB9
    ctx->r4 = ADD32(0, 0XB9);
    // 0x802CBFB0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802CBFB4: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    // 0x802CBFB8: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    // 0x802CBFBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CBFC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CBFC4: jal         0x802CEEB4
    // 0x802CBFC8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    static_3_802CEEB4(rdram, ctx);
        goto after_30;
    // 0x802CBFC8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_30:
    // 0x802CBFCC: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x802CBFD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CBFD4: bnel        $v0, $at, L_802CC0F4
    if (ctx->r2 != ctx->r1) {
        // 0x802CBFD8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802CC0F4;
    }
    goto skip_2;
    // 0x802CBFD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_2:
    // 0x802CBFDC: jal         0x8023413C
    // 0x802CBFE0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_8023413C(rdram, ctx);
        goto after_31;
    // 0x802CBFE0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_31:
    // 0x802CBFE4: lw          $t2, 0xB4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XB4);
    // 0x802CBFE8: lh          $t3, 0xB0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XB0);
    // 0x802CBFEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CBFF0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802CBFF4: beq         $t2, $t3, L_802CC03C
    if (ctx->r10 == ctx->r11) {
        // 0x802CBFF8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802CC03C;
    }
    // 0x802CBFF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CBFFC: jal         0x8021E708
    // 0x802CC000: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_32;
    // 0x802CC000: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_32:
    // 0x802CC004: lh          $t4, 0xB0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XB0);
    // 0x802CC008: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x802CC00C: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    // 0x802CC010: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802CC014: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x802CC018: jal         0x802CE360
    // 0x802CC01C: lw          $a0, 0xB8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XB8);
    static_3_802CE360(rdram, ctx);
        goto after_33;
    // 0x802CC01C: lw          $a0, 0xB8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XB8);
    after_33:
    // 0x802CC020: lh          $t7, 0xB0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XB0);
    // 0x802CC024: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CC028: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x802CC02C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802CC030: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x802CC034: jal         0x8021E87C
    // 0x802CC038: lw          $a2, 0xB8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0XB8);
    static_3_8021E87C(rdram, ctx);
        goto after_34;
    // 0x802CC038: lw          $a2, 0xB8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0XB8);
    after_34:
L_802CC03C:
    // 0x802CC03C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CC040: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CC044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC048: jal         0x8021E708
    // 0x802CC04C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_35;
    // 0x802CC04C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_35:
    // 0x802CC050: lh          $t0, 0xAE($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XAE);
    // 0x802CC054: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x802CC058: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    // 0x802CC05C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802CC060: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x802CC064: jal         0x802CE360
    // 0x802CC068: lw          $a0, 0xB8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XB8);
    static_3_802CE360(rdram, ctx);
        goto after_36;
    // 0x802CC068: lw          $a0, 0xB8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XB8);
    after_36:
    // 0x802CC06C: lh          $t3, 0xAE($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XAE);
    // 0x802CC070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CC074: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    // 0x802CC078: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802CC07C: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x802CC080: jal         0x8021E87C
    // 0x802CC084: lw          $a2, 0xB8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0XB8);
    static_3_8021E87C(rdram, ctx);
        goto after_37;
    // 0x802CC084: lw          $a2, 0xB8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0XB8);
    after_37:
    // 0x802CC088: lh          $t6, 0xAC($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XAC);
    // 0x802CC08C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802CC090: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CC094: beq         $t6, $at, L_802CC0E0
    if (ctx->r14 == ctx->r1) {
        // 0x802CC098: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_802CC0E0;
    }
    // 0x802CC098: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802CC09C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC0A0: jal         0x8021E708
    // 0x802CC0A4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_38;
    // 0x802CC0A4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_38:
    // 0x802CC0A8: lh          $t7, 0xAC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XAC);
    // 0x802CC0AC: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x802CC0B0: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    // 0x802CC0B4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802CC0B8: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x802CC0BC: jal         0x802CE360
    // 0x802CC0C0: lw          $a0, 0xB8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XB8);
    static_3_802CE360(rdram, ctx);
        goto after_39;
    // 0x802CC0C0: lw          $a0, 0xB8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XB8);
    after_39:
    // 0x802CC0C4: lh          $t0, 0xAC($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XAC);
    // 0x802CC0C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CC0CC: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x802CC0D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802CC0D4: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x802CC0D8: jal         0x8021E87C
    // 0x802CC0DC: lw          $a2, 0xB8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0XB8);
    static_3_8021E87C(rdram, ctx);
        goto after_40;
    // 0x802CC0DC: lw          $a2, 0xB8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0XB8);
    after_40:
L_802CC0E0:
    // 0x802CC0E0: jal         0x8023413C
    // 0x802CC0E4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    static_3_8023413C(rdram, ctx);
        goto after_41;
    // 0x802CC0E4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_41:
    // 0x802CC0E8: b           L_802CC1C8
    // 0x802CC0EC: nop

        goto L_802CC1C8;
    // 0x802CC0EC: nop

    // 0x802CC0F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802CC0F4:
    // 0x802CC0F4: beq         $v0, $at, L_802CC104
    if (ctx->r2 == ctx->r1) {
        // 0x802CC0F8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802CC104;
    }
    // 0x802CC0F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802CC0FC: bne         $v0, $at, L_802CC1C8
    if (ctx->r2 != ctx->r1) {
        // 0x802CC100: nop
    
            goto L_802CC1C8;
    }
    // 0x802CC100: nop

L_802CC104:
    // 0x802CC104: lh          $t3, 0x162($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X162);
    // 0x802CC108: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CC10C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802CC110: bne         $t3, $zero, L_802CC134
    if (ctx->r11 != 0) {
        // 0x802CC114: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802CC134;
    }
    // 0x802CC114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC118: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CC11C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CC120: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC124: jal         0x8021E708
    // 0x802CC128: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_42;
    // 0x802CC128: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_42:
    // 0x802CC12C: b           L_802CC13C
    // 0x802CC130: nop

        goto L_802CC13C;
    // 0x802CC130: nop

L_802CC134:
    // 0x802CC134: jal         0x8021E708
    // 0x802CC138: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_43;
    // 0x802CC138: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_43:
L_802CC13C:
    // 0x802CC13C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CC140: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802CC144: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x802CC148: jal         0x802CE360
    // 0x802CC14C: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    static_3_802CE360(rdram, ctx);
        goto after_44;
    // 0x802CC14C: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    after_44:
    // 0x802CC150: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CC154: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CC158: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CC15C: jal         0x8021E87C
    // 0x802CC160: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    static_3_8021E87C(rdram, ctx);
        goto after_45;
    // 0x802CC160: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_45:
    // 0x802CC164: lh          $t4, 0x162($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X162);
    // 0x802CC168: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CC16C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CC170: bne         $t4, $at, L_802CC194
    if (ctx->r12 != ctx->r1) {
        // 0x802CC174: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_802CC194;
    }
    // 0x802CC174: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802CC178: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CC17C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CC180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC184: jal         0x8021E708
    // 0x802CC188: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_46;
    // 0x802CC188: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_46:
    // 0x802CC18C: b           L_802CC1A0
    // 0x802CC190: nop

        goto L_802CC1A0;
    // 0x802CC190: nop

L_802CC194:
    // 0x802CC194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC198: jal         0x8021E708
    // 0x802CC19C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_47;
    // 0x802CC19C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_47:
L_802CC1A0:
    // 0x802CC1A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CC1A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802CC1A8: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x802CC1AC: jal         0x802CE360
    // 0x802CC1B0: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    static_3_802CE360(rdram, ctx);
        goto after_48;
    // 0x802CC1B0: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    after_48:
    // 0x802CC1B4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CC1B8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CC1BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CC1C0: jal         0x8021E87C
    // 0x802CC1C4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    static_3_8021E87C(rdram, ctx);
        goto after_49;
    // 0x802CC1C4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_49:
L_802CC1C8:
    // 0x802CC1C8: jal         0x8022337C
    // 0x802CC1CC: nop

    static_3_8022337C(rdram, ctx);
        goto after_50;
    // 0x802CC1CC: nop

    after_50:
    // 0x802CC1D0: jal         0x8021EC9C
    // 0x802CC1D4: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_51;
    // 0x802CC1D4: nop

    after_51:
    // 0x802CC1D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802CC1DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802CC1E0: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x802CC1E4: jr          $ra
    // 0x802CC1E8: nop

    return;
    // 0x802CC1E8: nop

;}
RECOMP_FUNC void D_8023164C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023164C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231650: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80231654: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80231658: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023165C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80231660: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80231664: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80231668: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x8023166C: jal         0x8023E6B0
    // 0x80231670: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    static_3_8023E6B0(rdram, ctx);
        goto after_0;
    // 0x80231670: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x80231674: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231678: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023167C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80231680: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80231684: jal         0x802371E0
    // 0x80231688: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802371E0(rdram, ctx);
        goto after_1;
    // 0x80231688: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8023168C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80231690: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80231694: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231698: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8023169C: addiu       $t7, $zero, 0xFA
    ctx->r15 = ADD32(0, 0XFA);
    // 0x802316A0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802316A4: addiu       $a2, $a2, 0x1584
    ctx->r6 = ADD32(ctx->r6, 0X1584);
    // 0x802316A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802316AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802316B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802316B4: jal         0x80237210
    // 0x802316B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_80237210(rdram, ctx);
        goto after_2;
    // 0x802316B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x802316BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802316C0: jal         0x80237360
    // 0x802316C4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80237360(rdram, ctx);
        goto after_3;
    // 0x802316C4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x802316C8: jal         0x80230FF8
    // 0x802316CC: nop

    static_3_80230FF8(rdram, ctx);
        goto after_4;
    // 0x802316CC: nop

    after_4:
    // 0x802316D0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802316D4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802316D8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802316DC: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x802316E0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802316E4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802316E8: addiu       $a2, $a2, 0x1630
    ctx->r6 = ADD32(ctx->r6, 0X1630);
    // 0x802316EC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802316F0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802316F4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802316F8: jal         0x80237210
    // 0x802316FC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    static_3_80237210(rdram, ctx);
        goto after_5;
    // 0x802316FC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x80231700: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80231704: lw          $t0, 0xC84($t0)
    ctx->r8 = MEM_W(ctx->r8, 0XC84);
    // 0x80231708: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023170C: bnel        $t0, $zero, L_80231720
    if (ctx->r8 != 0) {
        // 0x80231710: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80231720;
    }
    goto skip_0;
    // 0x80231710: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_0:
    // 0x80231714: jal         0x80237360
    // 0x80231718: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80237360(rdram, ctx);
        goto after_6;
    // 0x80231718: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x8023171C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80231720:
    // 0x80231720: jal         0x8023E840
    // 0x80231724: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8023E840(rdram, ctx);
        goto after_7;
    // 0x80231724: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_80231728:
    // 0x80231728: b           L_80231728
    pause_self(rdram);
    // 0x8023172C: nop

    // 0x80231730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231734: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80231738: jr          $ra
    // 0x8023173C: nop

    return;
    // 0x8023173C: nop

;}
RECOMP_FUNC void D_802EC3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC478: bne         $a0, $zero, L_802EC490
    if (ctx->r4 != 0) {
        // 0x802EC47C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EC490;
    }
    // 0x802EC47C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC480: jal         0x802C67EC
    // 0x802EC484: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EC484: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EC488: beq         $v0, $zero, L_802EC4E4
    if (ctx->r2 == 0) {
        // 0x802EC48C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EC4E4;
    }
    // 0x802EC48C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EC490:
    // 0x802EC490: jal         0x8031C47C
    // 0x802EC494: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EC494: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EC498: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC49C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802EC4A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC4A4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802EC4A8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802EC4AC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802EC4B0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802EC4B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EC4B8: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EC4BC: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802EC4C0: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802EC4C4: sh          $v1, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r3;
    // 0x802EC4C8: sh          $v1, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r3;
    // 0x802EC4CC: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802EC4D0: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EC4D4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EC4D8: jal         0x8031CC50
    // 0x802EC4DC: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031CC50(rdram, ctx);
        goto after_2;
    // 0x802EC4DC: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802EC4E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802EC4E4:
    // 0x802EC4E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EC4E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC4EC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EC4F0: jr          $ra
    // 0x802EC4F4: nop

    return;
    // 0x802EC4F4: nop

;}
RECOMP_FUNC void D_802350F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802350F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802350F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802350F8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802350FC: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80235100: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80235104: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x80235108: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x8023510C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80235110: sb          $t0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r8;
    // 0x80235114: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80235118: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8023511C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80235120: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80235124: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80235128: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023512C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80235130: jal         0x8023F37C
    // 0x80235134: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80235134: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80235138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023513C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80235140: jr          $ra
    // 0x80235144: nop

    return;
    // 0x80235144: nop

;}
RECOMP_FUNC void D_802F27D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2850: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802F2854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F2858: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x802F285C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x802F2860: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x802F2864: jal         0x80228DE0
    // 0x802F2868: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802F2868: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x802F286C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x802F2870: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F2874: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F2878: lwc1        $f0, 0x20($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X20);
    // 0x802F287C: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802F2880: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802F2884: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802F2888: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802F288C: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    // 0x802F2890: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802F2894: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x802F2898: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802F289C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802F28A0: jal         0x8022A0D0
    // 0x802F28A4: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802F28A4: nop

    after_1:
    // 0x802F28A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F28AC: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802F28B0: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F28B4: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802F28B8: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802F28BC: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x802F28C0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802F28C4: jal         0x802D01D4
    // 0x802F28C8: nop

    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802F28C8: nop

    after_2:
    // 0x802F28CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F28D0: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802F28D4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F28D8: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x802F28DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F28E0: mul.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802F28E4: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802F28E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802F28EC: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802F28F0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802F28F4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802F28F8: jal         0x8022A0D0
    // 0x802F28FC: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_3;
    // 0x802F28FC: nop

    after_3:
    // 0x802F2900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802F2904: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802F2908: jr          $ra
    // 0x802F290C: nop

    return;
    // 0x802F290C: nop

;}
RECOMP_FUNC void D_8027E778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E7F0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8027E7F4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8027E7F8: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x8027E7FC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8027E800: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x8027E804: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x8027E808: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8027E80C: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x8027E810: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8027E814: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8027E818: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x8027E81C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8027E820: lw          $a1, 0x65FC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X65FC);
    // 0x8027E824: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x8027E828: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8027E82C: bne         $a1, $zero, L_8027E848
    if (ctx->r5 != 0) {
        // 0x8027E830: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8027E848;
    }
    // 0x8027E830: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027E834: jal         0x80231A24
    // 0x8027E838: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8027E838: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8027E83C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027E840: b           L_8027E8E4
    // 0x8027E844: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8027E8E4;
    // 0x8027E844: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8027E848:
    // 0x8027E848: jal         0x803087A8
    // 0x8027E84C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_803087A8(rdram, ctx);
        goto after_1;
    // 0x8027E84C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x8027E850: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027E854: beq         $v0, $at, L_8027E8DC
    if (ctx->r2 == ctx->r1) {
        // 0x8027E858: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_8027E8DC;
    }
    // 0x8027E858: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8027E85C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x8027E860: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x8027E864: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027E868: jal         0x80211B08
    // 0x8027E86C: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    static_3_80211B08(rdram, ctx);
        goto after_2;
    // 0x8027E86C: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    after_2:
    // 0x8027E870: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8027E874: beq         $v1, $zero, L_8027E8DC
    if (ctx->r3 == 0) {
        // 0x8027E878: andi        $a0, $v0, 0xFF
        ctx->r4 = ctx->r2 & 0XFF;
            goto L_8027E8DC;
    }
    // 0x8027E878: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x8027E87C: blez        $v1, L_8027E8DC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8027E880: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8027E8DC;
    }
    // 0x8027E880: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027E884: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8027E888: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027E88C: addiu       $s4, $sp, 0x5C
    ctx->r20 = ADD32(ctx->r29, 0X5C);
    // 0x8027E890: addiu       $s3, $sp, 0x74
    ctx->r19 = ADD32(ctx->r29, 0X74);
L_8027E894:
    // 0x8027E894: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8027E898: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8027E89C: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x8027E8A0: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8027E8A4: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x8027E8A8: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8027E8AC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8027E8B0: jal         0x802129F4
    // 0x8027E8B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    static_3_802129F4(rdram, ctx);
        goto after_3;
    // 0x8027E8B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x8027E8B8: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8027E8BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027E8C0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E8C4: nop

    // 0x8027E8C8: bc1f        L_8027E8D4
    if (!c1cs) {
        // 0x8027E8CC: nop
    
            goto L_8027E8D4;
    }
    // 0x8027E8CC: nop

    // 0x8027E8D0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8027E8D4:
    // 0x8027E8D4: bne         $s1, $s2, L_8027E894
    if (ctx->r17 != ctx->r18) {
        // 0x8027E8D8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027E894;
    }
    // 0x8027E8D8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027E8DC:
    // 0x8027E8DC: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x8027E8E0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8027E8E4:
    // 0x8027E8E4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8027E8E8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8027E8EC: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x8027E8F0: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8027E8F4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8027E8F8: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x8027E8FC: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x8027E900: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x8027E904: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x8027E908: jr          $ra
    // 0x8027E90C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8027E90C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_8022C41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C41C: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8022C420: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022C424: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8022C428: jr          $ra
    // 0x8022C42C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    return;
    // 0x8022C42C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_80236CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236CF0: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x80236CF4: bne         $t6, $zero, L_80236DD4
    if (ctx->r14 != 0) {
        // 0x80236CF8: nop
    
            goto L_80236DD4;
    }
    // 0x80236CF8: nop

    // 0x80236CFC: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x80236D00: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80236D04: sb          $t1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r9;
    // 0x80236D08: blez        $t7, L_80236DD4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80236D0C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80236DD4;
    }
    // 0x80236D0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80236D10: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80236D14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80236D18: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
L_80236D1C:
    // 0x80236D1C: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80236D20: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x80236D24: lbu         $t6, 0xE($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XE);
    // 0x80236D28: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80236D2C: bnel        $t6, $zero, L_80236DC0
    if (ctx->r14 != 0) {
        // 0x80236D30: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_80236DC0;
    }
    goto skip_0;
    // 0x80236D30: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_0:
    // 0x80236D34: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80236D38: sb          $t1, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r9;
    // 0x80236D3C: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80236D40: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80236D44: lw          $t9, 0x4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4);
    // 0x80236D48: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x80236D4C: addu        $t6, $t9, $a1
    ctx->r14 = ADD32(ctx->r25, ctx->r5);
    // 0x80236D50: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80236D54: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x80236D58: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80236D5C: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x80236D60: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x80236D64: bnel        $t9, $zero, L_80236DC0
    if (ctx->r25 != 0) {
        // 0x80236D68: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_80236DC0;
    }
    goto skip_1;
    // 0x80236D68: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_1:
    // 0x80236D6C: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x80236D70: lbu         $a2, 0x8($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X8);
    // 0x80236D74: sb          $t1, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r9;
    // 0x80236D78: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x80236D7C: bne         $a2, $zero, L_80236DA4
    if (ctx->r6 != 0) {
        // 0x80236D80: sw          $t7, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r15;
            goto L_80236DA4;
    }
    // 0x80236D80: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80236D84: lw          $t8, 0x10($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X10);
    // 0x80236D88: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x80236D8C: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80236D90: beq         $a2, $zero, L_80236DBC
    if (ctx->r6 == 0) {
        // 0x80236D94: sw          $t9, 0x10($t0)
        MEM_W(0X10, ctx->r8) = ctx->r25;
            goto L_80236DBC;
    }
    // 0x80236D94: sw          $t9, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r25;
    // 0x80236D98: addu        $t6, $a2, $a1
    ctx->r14 = ADD32(ctx->r6, ctx->r5);
    // 0x80236D9C: b           L_80236DBC
    // 0x80236DA0: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
        goto L_80236DBC;
    // 0x80236DA0: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
L_80236DA4:
    // 0x80236DA4: bnel        $t2, $a2, L_80236DC0
    if (ctx->r10 != ctx->r6) {
        // 0x80236DA8: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_80236DC0;
    }
    goto skip_2;
    // 0x80236DA8: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_2:
    // 0x80236DAC: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x80236DB0: beq         $a2, $zero, L_80236DBC
    if (ctx->r6 == 0) {
        // 0x80236DB4: addu        $t7, $a2, $a1
        ctx->r15 = ADD32(ctx->r6, ctx->r5);
            goto L_80236DBC;
    }
    // 0x80236DB4: addu        $t7, $a2, $a1
    ctx->r15 = ADD32(ctx->r6, ctx->r5);
    // 0x80236DB8: sw          $t7, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r15;
L_80236DBC:
    // 0x80236DBC: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
L_80236DC0:
    // 0x80236DC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236DC4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80236DC8: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80236DCC: bnel        $at, $zero, L_80236D1C
    if (ctx->r1 != 0) {
        // 0x80236DD0: lw          $t8, 0x10($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X10);
            goto L_80236D1C;
    }
    goto skip_3;
    // 0x80236DD0: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    skip_3:
L_80236DD4:
    // 0x80236DD4: jr          $ra
    // 0x80236DD8: nop

    return;
    // 0x80236DD8: nop

    // 0x80236DDC: jr          $ra
    // 0x80236DE0: nop

    return;
    // 0x80236DE0: nop

;}
RECOMP_FUNC void D_80221968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80221968: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8022196C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80221970: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80221974: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80221978: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022197C: slti        $at, $t6, 0x1E
    ctx->r1 = SIGNED(ctx->r14) < 0X1E ? 1 : 0;
    // 0x80221980: bne         $at, $zero, L_8022199C
    if (ctx->r1 != 0) {
        // 0x80221984: sw          $a0, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r4;
            goto L_8022199C;
    }
    // 0x80221984: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x80221988: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022198C: jal         0x80231A24
    // 0x80221990: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80221990: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80221994: b           L_80221AD0
    // 0x80221998: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80221AD0;
    // 0x80221998: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8022199C:
    // 0x8022199C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802219A0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802219A4: jal         0x8022A2F0
    // 0x802219A8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    static_3_8022A2F0(rdram, ctx);
        goto after_1;
    // 0x802219A8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x802219AC: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x802219B0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802219B4: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x802219B8: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x802219BC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802219C0: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802219C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802219C8: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x802219CC: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x802219D0: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x802219D4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802219D8: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x802219DC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802219E0: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802219E4: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802219E8: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802219EC: sll         $t8, $t8, 6
    ctx->r24 = S32(ctx->r24 << 6);
    // 0x802219F0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802219F4: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x802219F8: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x802219FC: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x80221A00: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x80221A04: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80221A08: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80221A0C: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x80221A10: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80221A14: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80221A18: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80221A1C: jal         0x802215C8
    // 0x80221A20: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    static_3_802215C8(rdram, ctx);
        goto after_2;
    // 0x80221A20: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80221A24: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80221A28: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80221A2C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80221A30: lui         $t5, 0x384
    ctx->r13 = S32(0X384 << 16);
    // 0x80221A34: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80221A38: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80221A3C: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x80221A40: ori         $t5, $t5, 0x10
    ctx->r13 = ctx->r13 | 0X10;
    // 0x80221A44: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80221A48: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80221A4C: lhu         $t6, 0x0($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X0);
    // 0x80221A50: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80221A54: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80221A58: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80221A5C: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80221A60: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80221A64: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80221A68: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80221A6C: sll         $t7, $t7, 6
    ctx->r15 = S32(ctx->r15 << 6);
    // 0x80221A70: addu        $t9, $a2, $t7
    ctx->r25 = ADD32(ctx->r6, ctx->r15);
    // 0x80221A74: sll         $t1, $t8, 5
    ctx->r9 = S32(ctx->r24 << 5);
    // 0x80221A78: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80221A7C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80221A80: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80221A84: lui         $t4, 0x382
    ctx->r12 = S32(0X382 << 16);
    // 0x80221A88: ori         $t4, $t4, 0x10
    ctx->r12 = ctx->r12 | 0X10;
    // 0x80221A8C: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80221A90: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x80221A94: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80221A98: lhu         $t5, 0x0($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X0);
    // 0x80221A9C: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80221AA0: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x80221AA4: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80221AA8: sll         $t6, $t6, 6
    ctx->r14 = S32(ctx->r14 << 6);
    // 0x80221AAC: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x80221AB0: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x80221AB4: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x80221AB8: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x80221ABC: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80221AC0: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80221AC4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80221AC8: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80221ACC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80221AD0:
    // 0x80221AD0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80221AD4: jr          $ra
    // 0x80221AD8: nop

    return;
    // 0x80221AD8: nop

;}
RECOMP_FUNC void D_8029C844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029C8C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8029C8C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029C8CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029C8D0: lbu         $v0, 0x89($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X89);
    // 0x8029C8D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029C8D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029C8DC: bne         $v0, $at, L_8029C8EC
    if (ctx->r2 != ctx->r1) {
        // 0x8029C8E0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8029C8EC;
    }
    // 0x8029C8E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8029C8E4: b           L_8029C8F0
    // 0x8029C8E8: lbu         $a3, 0x1B($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X1B);
        goto L_8029C8F0;
    // 0x8029C8E8: lbu         $a3, 0x1B($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X1B);
L_8029C8EC:
    // 0x8029C8EC: lbu         $a3, 0x1C($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1C);
L_8029C8F0:
    // 0x8029C8F0: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x8029C8F4: jal         0x80223FC4
    // 0x8029C8F8: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    static_3_80223FC4(rdram, ctx);
        goto after_0;
    // 0x8029C8F8: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8029C8FC: beq         $v0, $zero, L_8029C90C
    if (ctx->r2 == 0) {
        // 0x8029C900: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029C90C;
    }
    // 0x8029C900: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029C904: b           L_8029CAC4
    // 0x8029C908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8029CAC4;
    // 0x8029C908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8029C90C:
    // 0x8029C90C: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029C910: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029C914: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8029C918: jal         0x80223FC4
    // 0x8029C91C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_1;
    // 0x8029C91C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_1:
    // 0x8029C920: beq         $v0, $zero, L_8029C930
    if (ctx->r2 == 0) {
        // 0x8029C924: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029C930;
    }
    // 0x8029C924: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029C928: b           L_8029CAC4
    // 0x8029C92C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8029CAC4;
    // 0x8029C92C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8029C930:
    // 0x8029C930: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029C934: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029C938: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8029C93C: jal         0x80223FC4
    // 0x8029C940: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_2;
    // 0x8029C940: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_2:
    // 0x8029C944: beq         $v0, $zero, L_8029C954
    if (ctx->r2 == 0) {
        // 0x8029C948: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029C954;
    }
    // 0x8029C948: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029C94C: b           L_8029CAC4
    // 0x8029C950: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8029CAC4;
    // 0x8029C950: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8029C954:
    // 0x8029C954: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029C958: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029C95C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8029C960: jal         0x80223FC4
    // 0x8029C964: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_3;
    // 0x8029C964: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_3:
    // 0x8029C968: beq         $v0, $zero, L_8029C978
    if (ctx->r2 == 0) {
        // 0x8029C96C: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029C978;
    }
    // 0x8029C96C: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029C970: b           L_8029CAC4
    // 0x8029C974: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8029CAC4;
    // 0x8029C974: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8029C978:
    // 0x8029C978: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029C97C: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029C980: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029C984: jal         0x80223FC4
    // 0x8029C988: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_4;
    // 0x8029C988: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_4:
    // 0x8029C98C: beq         $v0, $zero, L_8029C99C
    if (ctx->r2 == 0) {
        // 0x8029C990: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029C99C;
    }
    // 0x8029C990: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029C994: b           L_8029CAC4
    // 0x8029C998: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8029CAC4;
    // 0x8029C998: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8029C99C:
    // 0x8029C99C: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029C9A0: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029C9A4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8029C9A8: jal         0x80223FC4
    // 0x8029C9AC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_5;
    // 0x8029C9AC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_5:
    // 0x8029C9B0: beq         $v0, $zero, L_8029C9C0
    if (ctx->r2 == 0) {
        // 0x8029C9B4: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029C9C0;
    }
    // 0x8029C9B4: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029C9B8: b           L_8029CAC4
    // 0x8029C9BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8029CAC4;
    // 0x8029C9BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8029C9C0:
    // 0x8029C9C0: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029C9C4: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029C9C8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8029C9CC: jal         0x80223FC4
    // 0x8029C9D0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_6;
    // 0x8029C9D0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_6:
    // 0x8029C9D4: beq         $v0, $zero, L_8029C9E4
    if (ctx->r2 == 0) {
        // 0x8029C9D8: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029C9E4;
    }
    // 0x8029C9D8: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029C9DC: b           L_8029CAC4
    // 0x8029C9E0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8029CAC4;
    // 0x8029C9E0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8029C9E4:
    // 0x8029C9E4: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029C9E8: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029C9EC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8029C9F0: jal         0x80223FC4
    // 0x8029C9F4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_7;
    // 0x8029C9F4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_7:
    // 0x8029C9F8: beq         $v0, $zero, L_8029CA08
    if (ctx->r2 == 0) {
        // 0x8029C9FC: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029CA08;
    }
    // 0x8029C9FC: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029CA00: b           L_8029CAC4
    // 0x8029CA04: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8029CAC4;
    // 0x8029CA04: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8029CA08:
    // 0x8029CA08: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029CA0C: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029CA10: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8029CA14: jal         0x80223FC4
    // 0x8029CA18: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_8;
    // 0x8029CA18: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_8:
    // 0x8029CA1C: beq         $v0, $zero, L_8029CA2C
    if (ctx->r2 == 0) {
        // 0x8029CA20: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029CA2C;
    }
    // 0x8029CA20: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029CA24: b           L_8029CAC4
    // 0x8029CA28: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8029CAC4;
    // 0x8029CA28: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8029CA2C:
    // 0x8029CA2C: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029CA30: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029CA34: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x8029CA38: jal         0x80223FC4
    // 0x8029CA3C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_9;
    // 0x8029CA3C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_9:
    // 0x8029CA40: beq         $v0, $zero, L_8029CA50
    if (ctx->r2 == 0) {
        // 0x8029CA44: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029CA50;
    }
    // 0x8029CA44: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029CA48: b           L_8029CAC4
    // 0x8029CA4C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8029CAC4;
    // 0x8029CA4C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8029CA50:
    // 0x8029CA50: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029CA54: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029CA58: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x8029CA5C: jal         0x80223FC4
    // 0x8029CA60: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_10;
    // 0x8029CA60: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_10:
    // 0x8029CA64: beq         $v0, $zero, L_8029CA74
    if (ctx->r2 == 0) {
        // 0x8029CA68: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029CA74;
    }
    // 0x8029CA68: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029CA6C: b           L_8029CAC4
    // 0x8029CA70: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8029CAC4;
    // 0x8029CA70: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8029CA74:
    // 0x8029CA74: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029CA78: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029CA7C: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    // 0x8029CA80: jal         0x80223FC4
    // 0x8029CA84: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_11;
    // 0x8029CA84: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_11:
    // 0x8029CA88: beq         $v0, $zero, L_8029CA98
    if (ctx->r2 == 0) {
        // 0x8029CA8C: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029CA98;
    }
    // 0x8029CA8C: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029CA90: b           L_8029CAC4
    // 0x8029CA94: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8029CAC4;
    // 0x8029CA94: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8029CA98:
    // 0x8029CA98: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029CA9C: sb          $a3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r7;
    // 0x8029CAA0: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x8029CAA4: jal         0x80223FC4
    // 0x8029CAA8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_12;
    // 0x8029CAA8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_12:
    // 0x8029CAAC: beq         $v0, $zero, L_8029CABC
    if (ctx->r2 == 0) {
        // 0x8029CAB0: lbu         $a3, 0x24($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X24);
            goto L_8029CABC;
    }
    // 0x8029CAB0: lbu         $a3, 0x24($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X24);
    // 0x8029CAB4: b           L_8029CAC4
    // 0x8029CAB8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8029CAC4;
    // 0x8029CAB8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_8029CABC:
    // 0x8029CABC: b           L_8029CB50
    // 0x8029CAC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8029CB50;
    // 0x8029CAC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8029CAC4:
    // 0x8029CAC4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8029CAC8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029CACC: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x8029CAD0: addu        $a2, $s0, $t7
    ctx->r6 = ADD32(ctx->r16, ctx->r15);
    // 0x8029CAD4: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x8029CAD8: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8029CADC: lw          $t0, 0x38($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X38);
    // 0x8029CAE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8029CAE4: bne         $a1, $t0, L_8029CAF4
    if (ctx->r5 != ctx->r8) {
        // 0x8029CAE8: nop
    
            goto L_8029CAF4;
    }
    // 0x8029CAE8: nop

    // 0x8029CAEC: b           L_8029CB50
    // 0x8029CAF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8029CB50;
    // 0x8029CAF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8029CAF4:
    // 0x8029CAF4: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8029CAF8: addu        $v1, $s0, $t8
    ctx->r3 = ADD32(ctx->r16, ctx->r24);
    // 0x8029CAFC: lw          $a0, 0x38($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X38);
    // 0x8029CB00: bnel        $a1, $a0, L_8029CB34
    if (ctx->r5 != ctx->r4) {
        // 0x8029CB04: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8029CB34;
    }
    goto skip_0;
    // 0x8029CB04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x8029CB08: beq         $v0, $a3, L_8029CB30
    if (ctx->r2 == ctx->r7) {
        // 0x8029CB0C: xor         $t9, $a0, $t0
        ctx->r25 = ctx->r4 ^ ctx->r8;
            goto L_8029CB30;
    }
    // 0x8029CB0C: xor         $t9, $a0, $t0
    ctx->r25 = ctx->r4 ^ ctx->r8;
    // 0x8029CB10: sw          $t9, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r25;
    // 0x8029CB14: lw          $t1, 0x38($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X38);
    // 0x8029CB18: xor         $t3, $t1, $t9
    ctx->r11 = ctx->r9 ^ ctx->r25;
    // 0x8029CB1C: sw          $t3, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r11;
    // 0x8029CB20: lw          $t4, 0x38($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X38);
    // 0x8029CB24: xor         $t6, $t4, $t3
    ctx->r14 = ctx->r12 ^ ctx->r11;
    // 0x8029CB28: b           L_8029CB44
    // 0x8029CB2C: sw          $t6, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r14;
        goto L_8029CB44;
    // 0x8029CB2C: sw          $t6, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r14;
L_8029CB30:
    // 0x8029CB30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8029CB34:
    // 0x8029CB34: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x8029CB38: slti        $at, $t7, 0xD
    ctx->r1 = SIGNED(ctx->r15) < 0XD ? 1 : 0;
    // 0x8029CB3C: bne         $at, $zero, L_8029CAF4
    if (ctx->r1 != 0) {
        // 0x8029CB40: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8029CAF4;
    }
    // 0x8029CB40: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8029CB44:
    // 0x8029CB44: jal         0x802B18BC
    // 0x8029CB48: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_13;
    // 0x8029CB48: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_13:
    // 0x8029CB4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8029CB50:
    // 0x8029CB50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029CB54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029CB58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8029CB5C: jr          $ra
    // 0x8029CB60: nop

    return;
    // 0x8029CB60: nop

;}
RECOMP_FUNC void D_802CB778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CB7F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CB7FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CB800: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802CB804: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802CB808: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802CB80C: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x802CB810: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x802CB814: sh          $t8, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r24;
    // 0x802CB818: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x802CB81C: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x802CB820: sh          $t0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r8;
    // 0x802CB824: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x802CB828: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x802CB82C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802CB830: sh          $t3, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r11;
    // 0x802CB834: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x802CB838: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x802CB83C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802CB840: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x802CB844: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802CB848: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x802CB84C: jal         0x8021ACB0
    // 0x802CB850: lw          $a1, 0x100($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X100);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802CB850: lw          $a1, 0x100($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X100);
    after_0:
    // 0x802CB854: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802CB858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CB85C: jal         0x8021B4B0
    // 0x802CB860: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    static_3_8021B4B0(rdram, ctx);
        goto after_1;
    // 0x802CB860: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x802CB864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CB868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CB86C: jr          $ra
    // 0x802CB870: nop

    return;
    // 0x802CB870: nop

;}
RECOMP_FUNC void D_802A2258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A22D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A22DC: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x802A22E0: beq         $t7, $zero, L_802A22EC
    if (ctx->r15 == 0) {
        // 0x802A22E4: sb          $a1, 0xC9($a0)
        MEM_B(0XC9, ctx->r4) = ctx->r5;
            goto L_802A22EC;
    }
    // 0x802A22E4: sb          $a1, 0xC9($a0)
    MEM_B(0XC9, ctx->r4) = ctx->r5;
    // 0x802A22E8: sh          $zero, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = 0;
L_802A22EC:
    // 0x802A22EC: jr          $ra
    // 0x802A22F0: nop

    return;
    // 0x802A22F0: nop

;}
RECOMP_FUNC void D_80283D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283DB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80283DB4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80283DB8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80283DBC: jal         0x802D50F4
    // 0x80283DC0: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    static_3_802D50F4(rdram, ctx);
        goto after_0;
    // 0x80283DC0: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x80283DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283DCC: jr          $ra
    // 0x80283DD0: nop

    return;
    // 0x80283DD0: nop

;}
RECOMP_FUNC void D_802C6A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C6B10: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802C6B14: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802C6B18: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802C6B1C: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x802C6B20: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C6B24: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802C6B28: sb          $a1, 0xBE($a0)
    MEM_B(0XBE, ctx->r4) = ctx->r5;
    // 0x802C6B2C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x802C6B30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802C6B34: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802C6B38: bne         $a2, $zero, L_802C6B48
    if (ctx->r6 != 0) {
        // 0x802C6B3C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802C6B48;
    }
    // 0x802C6B3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802C6B40: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x802C6B44: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_802C6B48:
    // 0x802C6B48: jal         0x802AEE54
    // 0x802C6B4C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802AEE54(rdram, ctx);
        goto after_0;
    // 0x802C6B4C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x802C6B50: addiu       $t8, $s0, 0x70
    ctx->r24 = ADD32(ctx->r16, 0X70);
    // 0x802C6B54: addiu       $t9, $s0, 0x74
    ctx->r25 = ADD32(ctx->r16, 0X74);
    // 0x802C6B58: addiu       $t0, $s0, 0x1D4
    ctx->r8 = ADD32(ctx->r16, 0X1D4);
    // 0x802C6B5C: addiu       $t1, $s0, 0x1D0
    ctx->r9 = ADD32(ctx->r16, 0X1D0);
    // 0x802C6B60: addiu       $v1, $s0, 0xB8
    ctx->r3 = ADD32(ctx->r16, 0XB8);
    // 0x802C6B64: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x802C6B68: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x802C6B6C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802C6B70: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802C6B74: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x802C6B78: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802C6B7C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802C6B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802C6B84: addiu       $a1, $s0, 0x64
    ctx->r5 = ADD32(ctx->r16, 0X64);
    // 0x802C6B88: addiu       $a2, $s0, 0x68
    ctx->r6 = ADD32(ctx->r16, 0X68);
    // 0x802C6B8C: addiu       $a3, $s0, 0x6C
    ctx->r7 = ADD32(ctx->r16, 0X6C);
    // 0x802C6B90: jal         0x802EA0F8
    // 0x802C6B94: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_802EA0F8(rdram, ctx);
        goto after_1;
    // 0x802C6B94: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x802C6B98: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x802C6B9C: lw          $t3, 0x68($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X68);
    // 0x802C6BA0: lw          $t5, 0x6C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X6C);
    // 0x802C6BA4: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x802C6BA8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x802C6BAC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x802C6BB0: sw          $t6, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r14;
    // 0x802C6BB4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C6BB8: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x802C6BBC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802C6BC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802C6BC4: bne         $v1, $at, L_802C6BD4
    if (ctx->r3 != ctx->r1) {
        // 0x802C6BC8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802C6BD4;
    }
    // 0x802C6BC8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C6BCC: b           L_802C6BD4
    // 0x802C6BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802C6BD4;
    // 0x802C6BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802C6BD4:
    // 0x802C6BD4: beq         $v0, $zero, L_802C6C88
    if (ctx->r2 == 0) {
        // 0x802C6BD8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_802C6C88;
    }
    // 0x802C6BD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802C6BDC: jal         0x802AEE54
    // 0x802C6BE0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_2;
    // 0x802C6BE0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_2:
    // 0x802C6BE4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802C6BE8: addiu       $t7, $s0, 0x94
    ctx->r15 = ADD32(ctx->r16, 0X94);
    // 0x802C6BEC: addiu       $t8, $s0, 0x98
    ctx->r24 = ADD32(ctx->r16, 0X98);
    // 0x802C6BF0: addiu       $v1, $s0, 0x9C
    ctx->r3 = ADD32(ctx->r16, 0X9C);
    // 0x802C6BF4: addiu       $t9, $sp, 0x68
    ctx->r25 = ADD32(ctx->r29, 0X68);
    // 0x802C6BF8: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x802C6BFC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802C6C00: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802C6C04: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x802C6C08: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802C6C0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802C6C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802C6C14: addiu       $a1, $s0, 0x88
    ctx->r5 = ADD32(ctx->r16, 0X88);
    // 0x802C6C18: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    // 0x802C6C1C: addiu       $a3, $s0, 0x90
    ctx->r7 = ADD32(ctx->r16, 0X90);
    // 0x802C6C20: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x802C6C24: jal         0x802EA0F8
    // 0x802C6C28: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    static_3_802EA0F8(rdram, ctx);
        goto after_3;
    // 0x802C6C28: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_3:
    // 0x802C6C2C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x802C6C30: sw          $v0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r2;
    // 0x802C6C34: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x802C6C38: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802C6C3C: addiu       $t2, $sp, 0x5C
    ctx->r10 = ADD32(ctx->r29, 0X5C);
    // 0x802C6C40: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x802C6C44: addiu       $t4, $s0, 0xB4
    ctx->r12 = ADD32(ctx->r16, 0XB4);
    // 0x802C6C48: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802C6C4C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802C6C50: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802C6C54: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x802C6C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802C6C5C: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x802C6C60: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x802C6C64: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802C6C68: jal         0x802EA0F8
    // 0x802C6C6C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    static_3_802EA0F8(rdram, ctx);
        goto after_4;
    // 0x802C6C6C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    after_4:
    // 0x802C6C70: lw          $t6, 0x88($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X88);
    // 0x802C6C74: lw          $t7, 0x8C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8C);
    // 0x802C6C78: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x802C6C7C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802C6C80: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x802C6C84: sw          $t1, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r9;
L_802C6C88:
    // 0x802C6C88: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C6C8C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802C6C90: jal         0x802AEE54
    // 0x802C6C94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_5;
    // 0x802C6C94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x802C6C98: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x802C6C9C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x802C6CA0: addiu       $t2, $sp, 0x5C
    ctx->r10 = ADD32(ctx->r29, 0X5C);
    // 0x802C6CA4: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x802C6CA8: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
    // 0x802C6CAC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802C6CB0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802C6CB4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802C6CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802C6CBC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802C6CC0: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x802C6CC4: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x802C6CC8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x802C6CCC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802C6CD0: jal         0x802EA0F8
    // 0x802C6CD4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    static_3_802EA0F8(rdram, ctx);
        goto after_6;
    // 0x802C6CD4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_6:
    // 0x802C6CD8: lbu         $t7, 0xBE($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XBE);
    // 0x802C6CDC: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802C6CE0: bnel        $t7, $zero, L_802C6D1C
    if (ctx->r15 != 0) {
        // 0x802C6CE4: lbu         $t9, 0xBE($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XBE);
            goto L_802C6D1C;
    }
    goto skip_0;
    // 0x802C6CE4: lbu         $t9, 0xBE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XBE);
    skip_0:
    // 0x802C6CE8: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802C6CEC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802C6CF0: beql        $t8, $at, L_802C6D1C
    if (ctx->r24 == ctx->r1) {
        // 0x802C6CF4: lbu         $t9, 0xBE($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XBE);
            goto L_802C6D1C;
    }
    goto skip_1;
    // 0x802C6CF4: lbu         $t9, 0xBE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XBE);
    skip_1:
    // 0x802C6CF8: jal         0x8030A328
    // 0x802C6CFC: nop

    static_3_8030A328(rdram, ctx);
        goto after_7;
    // 0x802C6CFC: nop

    after_7:
    // 0x802C6D00: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802C6D04: beql        $v0, $at, L_802C6D1C
    if (ctx->r2 == ctx->r1) {
        // 0x802C6D08: lbu         $t9, 0xBE($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XBE);
            goto L_802C6D1C;
    }
    goto skip_2;
    // 0x802C6D08: lbu         $t9, 0xBE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XBE);
    skip_2:
    // 0x802C6D0C: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
    // 0x802C6D10: sw          $zero, 0x1D0($s0)
    MEM_W(0X1D0, ctx->r16) = 0;
    // 0x802C6D14: sw          $zero, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = 0;
    // 0x802C6D18: lbu         $t9, 0xBE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XBE);
L_802C6D1C:
    // 0x802C6D1C: bne         $t9, $zero, L_802C6D44
    if (ctx->r25 != 0) {
        // 0x802C6D20: nop
    
            goto L_802C6D44;
    }
    // 0x802C6D20: nop

    // 0x802C6D24: jal         0x8030A328
    // 0x802C6D28: nop

    static_3_8030A328(rdram, ctx);
        goto after_8;
    // 0x802C6D28: nop

    after_8:
    // 0x802C6D2C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802C6D30: beq         $v0, $at, L_802C6D44
    if (ctx->r2 == ctx->r1) {
        // 0x802C6D34: nop
    
            goto L_802C6D44;
    }
    // 0x802C6D34: nop

    // 0x802C6D38: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
    // 0x802C6D3C: sw          $zero, 0x1D0($s0)
    MEM_W(0X1D0, ctx->r16) = 0;
    // 0x802C6D40: sw          $zero, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = 0;
L_802C6D44:
    // 0x802C6D44: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C6D48: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802C6D4C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x802C6D50: lw          $t2, 0xA0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XA0);
    // 0x802C6D54: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802C6D58: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x802C6D5C: addu        $t4, $t2, $t1
    ctx->r12 = ADD32(ctx->r10, ctx->r9);
    // 0x802C6D60: sw          $t4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r12;
    // 0x802C6D64: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802C6D68: slti        $at, $t5, 0xC
    ctx->r1 = SIGNED(ctx->r13) < 0XC ? 1 : 0;
    // 0x802C6D6C: beql        $at, $zero, L_802C6DA4
    if (ctx->r1 == 0) {
        // 0x802C6D70: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802C6DA4;
    }
    goto skip_3;
    // 0x802C6D70: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x802C6D74: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x802C6D78: lw          $t7, 0x1D4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1D4);
    // 0x802C6D7C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802C6D80: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802C6D84: sw          $t8, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->r24;
    // 0x802C6D88: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x802C6D8C: lw          $t2, 0x1D0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1D0);
    // 0x802C6D90: lw          $t4, 0x1CC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1CC);
    // 0x802C6D94: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x802C6D98: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802C6D9C: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x802C6DA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802C6DA4:
    // 0x802C6DA4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802C6DA8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802C6DAC: jr          $ra
    // 0x802C6DB0: nop

    return;
    // 0x802C6DB0: nop

;}
RECOMP_FUNC void D_802EDB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDBC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EDBCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EDBD0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802EDBD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EDBD8: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x802EDBDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EDBE0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802EDBE4: addiu       $t6, $zero, 0x18D
    ctx->r14 = ADD32(0, 0X18D);
    // 0x802EDBE8: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x802EDBEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802EDBF0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EDBF4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x802EDBF8: sh          $t8, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r24;
    // 0x802EDBFC: sh          $t7, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r15;
    // 0x802EDC00: sh          $t6, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r14;
    // 0x802EDC04: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EDC08: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EDC0C: sb          $t9, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r25;
    // 0x802EDC10: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EDC14: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EDC18: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EDC1C: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802EDC20: jr          $ra
    // 0x802EDC24: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802EDC24: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_802EDF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDFF8: jr          $ra
    // 0x802EDFFC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EDFFC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_80290B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80290C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80290C20: beq         $a0, $zero, L_80290C5C
    if (ctx->r4 == 0) {
        // 0x80290C24: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80290C5C;
    }
    // 0x80290C24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80290C28: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80290C2C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80290C30: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x80290C34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80290C38: jal         0x802E8C7C
    // 0x80290C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802E8C7C(rdram, ctx);
        goto after_0;
    // 0x80290C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80290C40: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80290C44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80290C48: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80290C4C: beql        $t8, $zero, L_80290C60
    if (ctx->r24 == 0) {
        // 0x80290C50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80290C60;
    }
    goto skip_0;
    // 0x80290C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80290C54: jal         0x802C681C
    // 0x80290C58: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x80290C58: nop

    after_1:
L_80290C5C:
    // 0x80290C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80290C60:
    // 0x80290C60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80290C64: jr          $ra
    // 0x80290C68: nop

    return;
    // 0x80290C68: nop

;}
RECOMP_FUNC void D_802EC2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC338: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802EC33C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802EC340: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EC344: bne         $a0, $zero, L_802EC35C
    if (ctx->r4 != 0) {
        // 0x802EC348: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802EC35C;
    }
    // 0x802EC348: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802EC34C: jal         0x802C67EC
    // 0x802EC350: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EC350: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    after_0:
    // 0x802EC354: beq         $v0, $zero, L_802EC3D0
    if (ctx->r2 == 0) {
        // 0x802EC358: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802EC3D0;
    }
    // 0x802EC358: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802EC35C:
    // 0x802EC35C: jal         0x8031C47C
    // 0x802EC360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EC360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802EC364: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x802EC368: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802EC36C: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802EC370: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802EC374: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802EC378: jal         0x802C6930
    // 0x802EC37C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802EC37C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802EC380: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802EC384: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802EC388: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC38C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802EC390: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EC394: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802EC398: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x802EC39C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802EC3A0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EC3A4: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x802EC3A8: sh          $t7, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r15;
    // 0x802EC3AC: sw          $t8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r24;
    // 0x802EC3B0: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
    // 0x802EC3B4: sh          $t0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r8;
    // 0x802EC3B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802EC3BC: sw          $t6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r14;
    // 0x802EC3C0: swc1        $f0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f0.u32l;
    // 0x802EC3C4: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x802EC3C8: jal         0x8031CB3C
    // 0x802EC3CC: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    static_3_8031CB3C(rdram, ctx);
        goto after_3;
    // 0x802EC3CC: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    after_3:
L_802EC3D0:
    // 0x802EC3D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802EC3D4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802EC3D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802EC3DC: jr          $ra
    // 0x802EC3E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802EC3E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80223F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223F58: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223F5C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223F60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223F64: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80223F68: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80223F6C: jr          $ra
    // 0x80223F70: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x80223F70: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_802AAEAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AAF2C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802AAF30: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802AAF34: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AAF38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AAF3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AAF40: bne         $t6, $zero, L_802AAF50
    if (ctx->r14 != 0) {
        // 0x802AAF44: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_802AAF50;
    }
    // 0x802AAF44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AAF48: b           L_802AAF54
    // 0x802AAF4C: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
        goto L_802AAF54;
    // 0x802AAF4C: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
L_802AAF50:
    // 0x802AAF50: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
L_802AAF54:
    // 0x802AAF54: jal         0x8021ACB0
    // 0x802AAF58: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AAF58: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x802AAF5C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AAF60: jal         0x8021B838
    // 0x802AAF64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AAF64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AAF68: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802AAF6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AAF70: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AAF74: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802AAF78: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x802AAF7C: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AAF80: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AAF84: lh          $t8, 0xB8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XB8);
    // 0x802AAF88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802AAF8C: jalr        $t9
    // 0x802AAF90: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AAF90: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_2:
    // 0x802AAF94: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802AAF98: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AAF9C: jal         0x802FD4B0
    // 0x802AAFA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802AAFA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x802AAFA4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAFA8: jal         0x802FD498
    // 0x802AAFAC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802AAFAC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802AAFB0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAFB4: jal         0x802FD4A4
    // 0x802AAFB8: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802AAFB8: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    after_5:
    // 0x802AAFBC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAFC0: jal         0x802FD480
    // 0x802AAFC4: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802AAFC4: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    after_6:
    // 0x802AAFC8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAFCC: jal         0x802FD48C
    // 0x802AAFD0: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802AAFD0: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    after_7:
    // 0x802AAFD4: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x802AAFD8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802AAFDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AAFE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AAFE4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AAFE8: jal         0x80317194
    // 0x802AAFEC: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802AAFEC: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802AAFF0: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x802AAFF4: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x802AAFF8: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x802AAFFC: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x802AB000: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802AB004: sw          $t1, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r9;
    // 0x802AB008: sw          $t2, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r10;
    // 0x802AB00C: sw          $t3, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r11;
    // 0x802AB010: sw          $t4, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r12;
    // 0x802AB014: sb          $t5, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = ctx->r13;
    // 0x802AB018: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AB01C: lui         $a1, 0x4190
    ctx->r5 = S32(0X4190 << 16);
    // 0x802AB020: jal         0x802D51DC
    // 0x802AB024: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802AB024: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_9:
    // 0x802AB028: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AB02C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AB030: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AB034: jal         0x802C4A20
    // 0x802AB038: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802AB038: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802AB03C: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AB040: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802AB044: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AB048: jal         0x802C4A20
    // 0x802AB04C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_11;
    // 0x802AB04C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_11:
    // 0x802AB050: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AB054: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x802AB058: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802AB05C: jal         0x802C4A20
    // 0x802AB060: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802AB060: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802AB064: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AB068: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802AB06C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AB070: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x802AB074: jal         0x802C4A20
    // 0x802AB078: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    static_3_802C4A20(rdram, ctx);
        goto after_13;
    // 0x802AB078: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    after_13:
    // 0x802AB07C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB080: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AB084: jal         0x802C5858
    // 0x802AB088: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    static_3_802C5858(rdram, ctx);
        goto after_14;
    // 0x802AB088: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_14:
    // 0x802AB08C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802AB090: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AB094: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802AB098: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AB09C: lui         $at, 0x4507
    ctx->r1 = S32(0X4507 << 16);
    // 0x802AB0A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AB0A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AB0A8: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AB0AC: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802AB0B0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AB0B4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AB0B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AB0BC: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802AB0C0: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x802AB0C4: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x802AB0C8: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802AB0CC: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
    // 0x802AB0D0: jal         0x8022970C
    // 0x802AB0D4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x802AB0D4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_15:
    // 0x802AB0D8: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802AB0DC: jal         0x8022970C
    // 0x802AB0E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x802AB0E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_16:
    // 0x802AB0E4: lui         $a1, 0xC11B
    ctx->r5 = S32(0XC11B << 16);
    // 0x802AB0E8: lui         $a2, 0xC086
    ctx->r6 = S32(0XC086 << 16);
    // 0x802AB0EC: lui         $a3, 0xBE8A
    ctx->r7 = S32(0XBE8A << 16);
    // 0x802AB0F0: ori         $a3, $a3, 0xC083
    ctx->r7 = ctx->r7 | 0XC083;
    // 0x802AB0F4: ori         $a2, $a2, 0x9FBE
    ctx->r6 = ctx->r6 | 0X9FBE;
    // 0x802AB0F8: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    // 0x802AB0FC: jal         0x8022A0D0
    // 0x802AB100: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802AB100: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_17:
    // 0x802AB104: lui         $a1, 0x411B
    ctx->r5 = S32(0X411B << 16);
    // 0x802AB108: lui         $a2, 0xC086
    ctx->r6 = S32(0XC086 << 16);
    // 0x802AB10C: lui         $a3, 0xBE8A
    ctx->r7 = S32(0XBE8A << 16);
    // 0x802AB110: ori         $a3, $a3, 0xC083
    ctx->r7 = ctx->r7 | 0XC083;
    // 0x802AB114: ori         $a2, $a2, 0x9FBE
    ctx->r6 = ctx->r6 | 0X9FBE;
    // 0x802AB118: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    // 0x802AB11C: jal         0x8022A0D0
    // 0x802AB120: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_8022A0D0(rdram, ctx);
        goto after_18;
    // 0x802AB120: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_18:
    // 0x802AB124: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802AB128: jal         0x803169A0
    // 0x802AB12C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_19;
    // 0x802AB12C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x802AB130: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802AB134: jal         0x803169A0
    // 0x802AB138: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    static_3_803169A0(rdram, ctx);
        goto after_20;
    // 0x802AB138: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_20:
    // 0x802AB13C: jal         0x803169C0
    // 0x802AB140: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    static_3_803169C0(rdram, ctx);
        goto after_21;
    // 0x802AB140: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    after_21:
    // 0x802AB144: jal         0x803169C0
    // 0x802AB148: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    static_3_803169C0(rdram, ctx);
        goto after_22;
    // 0x802AB148: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    after_22:
    // 0x802AB14C: sb          $zero, 0x7D0($s0)
    MEM_B(0X7D0, ctx->r16) = 0;
    // 0x802AB150: sb          $zero, 0x7D1($s0)
    MEM_B(0X7D1, ctx->r16) = 0;
    // 0x802AB154: sb          $zero, 0x7D2($s0)
    MEM_B(0X7D2, ctx->r16) = 0;
    // 0x802AB158: sb          $zero, 0x7D3($s0)
    MEM_B(0X7D3, ctx->r16) = 0;
    // 0x802AB15C: jal         0x802DD1FC
    // 0x802AB160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802DD1FC(rdram, ctx);
        goto after_23;
    // 0x802AB160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x802AB164: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AB168: sb          $t6, 0x968($s0)
    MEM_B(0X968, ctx->r16) = ctx->r14;
    // 0x802AB16C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AB170: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AB174: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802AB178: jr          $ra
    // 0x802AB17C: nop

    return;
    // 0x802AB17C: nop

;}
RECOMP_FUNC void D_802D41E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D4260: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D4264: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D4268: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D426C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D4270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D4274:
    // 0x802D4274: addiu       $v1, $v1, 0x354
    ctx->r3 = ADD32(ctx->r3, 0X354);
    // 0x802D4278: sb          $zero, -0x8($v1)
    MEM_B(-0X8, ctx->r3) = 0;
    // 0x802D427C: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x802D4280: bne         $v1, $a0, L_802D4274
    if (ctx->r3 != ctx->r4) {
        // 0x802D4284: sw          $zero, -0xC($v1)
        MEM_W(-0XC, ctx->r3) = 0;
            goto L_802D4274;
    }
    // 0x802D4284: sw          $zero, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = 0;
    // 0x802D4288: jr          $ra
    // 0x802D428C: nop

    return;
    // 0x802D428C: nop

;}
RECOMP_FUNC void D_80234C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234C28: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234C2C: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80234C30: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234C34: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80234C38: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x80234C3C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234C40: lwc1        $f14, 0x0($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80234C44: mul.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80234C48: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80234C4C: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80234C50: nop

    // 0x80234C54: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80234C58: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80234C5C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80234C60: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80234C64: nop

    // 0x80234C68: mul.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80234C6C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80234C70: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x80234C74: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80234C78: jr          $ra
    // 0x80234C7C: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x80234C7C: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_8022339C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022339C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802233A0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802233A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802233A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802233AC: or          $v1, $a0, $v0
    ctx->r3 = ctx->r4 | ctx->r2;
    // 0x802233B0: beq         $v1, $v0, L_802233CC
    if (ctx->r3 == ctx->r2) {
        // 0x802233B4: ori         $t6, $zero, 0xFFFF
        ctx->r14 = 0 | 0XFFFF;
            goto L_802233CC;
    }
    // 0x802233B4: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x802233B8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802233BC: sh          $t6, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r14;
    // 0x802233C0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x802233C4: jal         0x80220C44
    // 0x802233C8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    static_3_80220C44(rdram, ctx);
        goto after_0;
    // 0x802233C8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
L_802233CC:
    // 0x802233CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802233D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802233D4: jr          $ra
    // 0x802233D8: nop

    return;
    // 0x802233D8: nop

;}
RECOMP_FUNC void D_80249A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249A50: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80249A54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80249A58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80249A5C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80249A60: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80249A64: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80249A68: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80249A6C: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80249A70: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80249A74: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x80249A78: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x80249A7C: beq         $at, $zero, L_80249A88
    if (ctx->r1 == 0) {
        // 0x80249A80: addu        $t1, $v0, $t6
        ctx->r9 = ADD32(ctx->r2, ctx->r14);
            goto L_80249A88;
    }
    // 0x80249A80: addu        $t1, $v0, $t6
    ctx->r9 = ADD32(ctx->r2, ctx->r14);
    // 0x80249A84: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_80249A88:
    // 0x80249A88: sll         $a2, $t3, 1
    ctx->r6 = S32(ctx->r11 << 1);
    // 0x80249A8C: addu        $a3, $a2, $a1
    ctx->r7 = ADD32(ctx->r6, ctx->r5);
    // 0x80249A90: sltu        $at, $t1, $a3
    ctx->r1 = ctx->r9 < ctx->r7 ? 1 : 0;
    // 0x80249A94: beq         $at, $zero, L_80249B88
    if (ctx->r1 == 0) {
        // 0x80249A98: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_80249B88;
    }
    // 0x80249A98: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80249A9C: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x80249AA0: sra         $t8, $t3, 1
    ctx->r24 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80249AA4: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80249AA8: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80249AAC: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x80249AB0: andi        $t8, $t3, 0xFFFF
    ctx->r24 = ctx->r11 & 0XFFFF;
    // 0x80249AB4: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x80249AB8: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80249ABC: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80249AC0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80249AC4: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x80249AC8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80249ACC: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x80249AD0: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x80249AD4: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80249AD8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80249ADC: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x80249AE0: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80249AE4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80249AE8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80249AEC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249AF0: jal         0x802375F0
    // 0x80249AF4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x80249AF4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80249AF8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80249AFC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80249B00: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80249B04: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80249B08: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x80249B0C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80249B10: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249B14: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80249B18: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x80249B1C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80249B20: subu        $t7, $a3, $t1
    ctx->r15 = SUB32(ctx->r7, ctx->r9);
    // 0x80249B24: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x80249B28: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x80249B2C: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80249B30: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80249B34: andi        $t7, $t9, 0xFFFF
    ctx->r15 = ctx->r25 & 0XFFFF;
    // 0x80249B38: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80249B3C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249B40: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80249B44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80249B48: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80249B4C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80249B50: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x80249B54: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80249B58: jal         0x802375F0
    // 0x80249B5C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x80249B5C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x80249B60: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80249B64: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80249B68: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249B6C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80249B70: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80249B74: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80249B78: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80249B7C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80249B80: b           L_80249BC4
    // 0x80249B84: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_80249BC4;
    // 0x80249B84: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80249B88:
    // 0x80249B88: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80249B8C: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80249B90: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80249B94: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80249B98: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80249B9C: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x80249BA0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249BA4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80249BA8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80249BAC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80249BB0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249BB4: jal         0x802375F0
    // 0x80249BB8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x80249BB8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80249BBC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80249BC0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80249BC4:
    // 0x80249BC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80249BC8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80249BCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80249BD0: jr          $ra
    // 0x80249BD4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80249BD4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_802D3F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D400C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802D4010: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802D4014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D4018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D401C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802D4020: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802D4024: jal         0x8028DA48
    // 0x802D4028: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028DA48(rdram, ctx);
        goto after_0;
    // 0x802D4028: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802D402C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D4030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D4034: jr          $ra
    // 0x802D4038: nop

    return;
    // 0x802D4038: nop

;}
RECOMP_FUNC void D_802B9960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B99E0: jr          $ra
    // 0x802B99E4: sb          $a1, 0x1CA($a0)
    MEM_B(0X1CA, ctx->r4) = ctx->r5;
    return;
    // 0x802B99E4: sb          $a1, 0x1CA($a0)
    MEM_B(0X1CA, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802B4CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B4D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B4D28: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802B4D2C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802B4D30: jal         0x802D537C
    // 0x802B4D34: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    static_3_802D537C(rdram, ctx);
        goto after_0;
    // 0x802B4D34: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x802B4D38: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802B4D3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B4D40: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B4D44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B4D48: lwc1        $f6, 0x48($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X48);
    // 0x802B4D4C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802B4D50: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x802B4D54: sw          $zero, 0x5DC($a1)
    MEM_W(0X5DC, ctx->r5) = 0;
    // 0x802B4D58: sw          $t6, 0x664($a1)
    MEM_W(0X664, ctx->r5) = ctx->r14;
    // 0x802B4D5C: sb          $zero, 0x24($a1)
    MEM_B(0X24, ctx->r5) = 0;
    // 0x802B4D60: sw          $t7, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r15;
    // 0x802B4D64: sb          $zero, 0x77C($a1)
    MEM_B(0X77C, ctx->r5) = 0;
    // 0x802B4D68: sb          $zero, 0x941($a1)
    MEM_B(0X941, ctx->r5) = 0;
    // 0x802B4D6C: sb          $zero, 0x198($a1)
    MEM_B(0X198, ctx->r5) = 0;
    // 0x802B4D70: sb          $zero, 0x199($a1)
    MEM_B(0X199, ctx->r5) = 0;
    // 0x802B4D74: sb          $zero, 0x791($a1)
    MEM_B(0X791, ctx->r5) = 0;
    // 0x802B4D78: sb          $zero, 0x792($a1)
    MEM_B(0X792, ctx->r5) = 0;
    // 0x802B4D7C: sb          $zero, 0x793($a1)
    MEM_B(0X793, ctx->r5) = 0;
    // 0x802B4D80: sb          $zero, 0x794($a1)
    MEM_B(0X794, ctx->r5) = 0;
    // 0x802B4D84: sw          $zero, 0xDC($a1)
    MEM_W(0XDC, ctx->r5) = 0;
    // 0x802B4D88: sb          $zero, 0xF8($a1)
    MEM_B(0XF8, ctx->r5) = 0;
    // 0x802B4D8C: sb          $zero, 0xF9($a1)
    MEM_B(0XF9, ctx->r5) = 0;
    // 0x802B4D90: sb          $zero, 0x19B($a1)
    MEM_B(0X19B, ctx->r5) = 0;
    // 0x802B4D94: sb          $zero, 0x19C($a1)
    MEM_B(0X19C, ctx->r5) = 0;
    // 0x802B4D98: sb          $zero, 0xEC($a1)
    MEM_B(0XEC, ctx->r5) = 0;
    // 0x802B4D9C: sw          $zero, 0xE8($a1)
    MEM_W(0XE8, ctx->r5) = 0;
    // 0x802B4DA0: sb          $zero, 0x790($a1)
    MEM_B(0X790, ctx->r5) = 0;
    // 0x802B4DA4: swc1        $f0, 0x5D4($a1)
    MEM_W(0X5D4, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DA8: swc1        $f0, 0x5D8($a1)
    MEM_W(0X5D8, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DAC: swc1        $f0, 0x5E0($a1)
    MEM_W(0X5E0, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DB0: swc1        $f0, 0x5E4($a1)
    MEM_W(0X5E4, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DB4: swc1        $f0, 0x2B4($a1)
    MEM_W(0X2B4, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DB8: swc1        $f0, 0x7BC($a1)
    MEM_W(0X7BC, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DBC: swc1        $f0, 0x7C0($a1)
    MEM_W(0X7C0, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DC0: swc1        $f0, 0x5EC($a1)
    MEM_W(0X5EC, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DC4: swc1        $f0, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DC8: swc1        $f0, 0x644($a1)
    MEM_W(0X644, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DCC: swc1        $f0, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DD0: swc1        $f0, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DD4: swc1        $f0, 0x58($a1)
    MEM_W(0X58, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DD8: swc1        $f0, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DDC: swc1        $f0, 0x7C4($a1)
    MEM_W(0X7C4, ctx->r5) = ctx->f0.u32l;
    // 0x802B4DE0: swc1        $f4, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f4.u32l;
    // 0x802B4DE4: swc1        $f6, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->f6.u32l;
    // 0x802B4DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B4DF0: jr          $ra
    // 0x802B4DF4: nop

    return;
    // 0x802B4DF4: nop

;}
RECOMP_FUNC void D_80286FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287064: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x80287068: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8028706C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80287070: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80287074: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80287078: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x8028707C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80287080: sw          $a1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r5;
    // 0x80287084: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x80287088: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028708C: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x80287090: beql        $t7, $zero, L_802874D4
    if (ctx->r15 == 0) {
        // 0x80287094: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_802874D4;
    }
    goto skip_0;
    // 0x80287094: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x80287098: jal         0x8022331C
    // 0x8028709C: nop

    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x8028709C: nop

    after_0:
    // 0x802870A0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802870A4: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x802870A8: jal         0x80228DE0
    // 0x802870AC: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802870AC: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    after_1:
    // 0x802870B0: lwc1        $f4, 0xF4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x802870B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802870B8: ldc1        $f8, 0x0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X0);
    // 0x802870BC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802870C0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802870C4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802870C8: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802870CC: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
    // 0x802870D0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802870D4: bne         $s1, $t8, L_802870E4
    if (ctx->r17 != ctx->r24) {
        // 0x802870D8: swc1        $f16, 0xF4($sp)
        MEM_W(0XF4, ctx->r29) = ctx->f16.u32l;
            goto L_802870E4;
    }
    // 0x802870D8: swc1        $f16, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f16.u32l;
    // 0x802870DC: b           L_802870E8
    // 0x802870E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802870E8;
    // 0x802870E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802870E4:
    // 0x802870E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802870E8:
    // 0x802870E8: beql        $v0, $zero, L_80287134
    if (ctx->r2 == 0) {
        // 0x802870EC: lui         $at, 0x4288
        ctx->r1 = S32(0X4288 << 16);
            goto L_80287134;
    }
    goto skip_1;
    // 0x802870EC: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
    skip_1:
    // 0x802870F0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x802870F4: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x802870F8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802870FC: bne         $t9, $zero, L_8028711C
    if (ctx->r25 != 0) {
        // 0x80287100: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_8028711C;
    }
    // 0x80287100: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80287104: lui         $at, 0x431A
    ctx->r1 = S32(0X431A << 16);
    // 0x80287108: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8028710C: lui         $at, 0x4342
    ctx->r1 = S32(0X4342 << 16);
    // 0x80287110: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80287114: b           L_80287154
    // 0x80287118: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
        goto L_80287154;
    // 0x80287118: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
L_8028711C:
    // 0x8028711C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80287120: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80287124: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80287128: b           L_80287154
    // 0x8028712C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
        goto L_80287154;
    // 0x8028712C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x80287130: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
L_80287134:
    // 0x80287134: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80287138: lui         $at, 0x42A8
    ctx->r1 = S32(0X42A8 << 16);
    // 0x8028713C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80287140: lui         $at, 0x4324
    ctx->r1 = S32(0X4324 << 16);
    // 0x80287144: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80287148: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    // 0x8028714C: jal         0x8022342C
    // 0x80287150: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    static_3_8022342C(rdram, ctx);
        goto after_2;
    // 0x80287150: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    after_2:
L_80287154:
    // 0x80287154: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80287158: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028715C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80287160: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80287164: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x80287168: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028716C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80287170: mfc1        $s2, $f10
    ctx->r18 = (int32_t)ctx->f10.u32l;
    // 0x80287174: addiu       $a0, $zero, 0x7B
    ctx->r4 = ADD32(0, 0X7B);
    // 0x80287178: mtc1        $s2, $f16
    ctx->f16.u32l = ctx->r18;
    // 0x8028717C: nop

    // 0x80287180: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80287184: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80287188: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8028718C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80287190: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x80287194: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80287198: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8028719C: nop

    // 0x802871A0: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x802871A4: nop

    // 0x802871A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802871AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802871B0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802871B4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802871B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802871BC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802871C0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x802871C4: nop

    // 0x802871C8: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x802871CC: nop

    // 0x802871D0: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802871D4: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x802871D8: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x802871DC: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x802871E0: jal         0x80223468
    // 0x802871E4: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    static_3_80223468(rdram, ctx);
        goto after_3;
    // 0x802871E4: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x802871E8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802871EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802871F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802871F4: lui         $a3, 0x3F11
    ctx->r7 = S32(0X3F11 << 16);
    // 0x802871F8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802871FC: jal         0x80221F44
    // 0x80287200: ori         $a3, $a3, 0x6873
    ctx->r7 = ctx->r7 | 0X6873;
    static_3_80221F44(rdram, ctx);
        goto after_4;
    // 0x80287200: ori         $a3, $a3, 0x6873
    ctx->r7 = ctx->r7 | 0X6873;
    after_4:
    // 0x80287204: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x80287208: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028720C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80287210: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80287214: trunc.w.s   $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    ctx->f10.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x80287218: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028721C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80287220: add.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f16.fl;
    // 0x80287224: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80287228: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8028722C: trunc.w.s   $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    ctx->f6.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80287230: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80287234: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80287238: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8028723C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80287240: lwc1        $f16, 0xC0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80287244: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80287248: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028724C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80287250: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80287254: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80287258: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8028725C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80287260: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80287264: nop

    // 0x80287268: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8028726C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80287270: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80287274: jal         0x8021F6F8
    // 0x80287278: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    static_3_8021F6F8(rdram, ctx);
        goto after_5;
    // 0x80287278: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x8028727C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80287280: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80287284: beql        $s1, $v0, L_802872B0
    if (ctx->r17 == ctx->r2) {
        // 0x80287288: lui         $at, 0x4224
        ctx->r1 = S32(0X4224 << 16);
            goto L_802872B0;
    }
    goto skip_2;
    // 0x80287288: lui         $at, 0x4224
    ctx->r1 = S32(0X4224 << 16);
    skip_2:
    // 0x8028728C: lw          $t9, 0x78($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X78);
    // 0x80287290: andi        $t0, $t9, 0x100
    ctx->r8 = ctx->r25 & 0X100;
    // 0x80287294: beql        $t0, $zero, L_802872B0
    if (ctx->r8 == 0) {
        // 0x80287298: lui         $at, 0x4224
        ctx->r1 = S32(0X4224 << 16);
            goto L_802872B0;
    }
    goto skip_3;
    // 0x80287298: lui         $at, 0x4224
    ctx->r1 = S32(0X4224 << 16);
    skip_3:
    // 0x8028729C: jal         0x8023413C
    // 0x802872A0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_8023413C(rdram, ctx);
        goto after_6;
    // 0x802872A0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_6:
    // 0x802872A4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802872A8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802872AC: lui         $at, 0x4224
    ctx->r1 = S32(0X4224 << 16);
L_802872B0:
    // 0x802872B0: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802872B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802872B8: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802872BC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802872C0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802872C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802872C8: lui         $at, 0x42FC
    ctx->r1 = S32(0X42FC << 16);
    // 0x802872CC: lwc1        $f22, 0x90($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802872D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802872D4: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x802872D8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802872DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802872E0: nop

    // 0x802872E4: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x802872E8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802872EC: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802872F0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802872F4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802872F8: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x802872FC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80287300: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80287304: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80287308: bnel        $s1, $v0, L_8028731C
    if (ctx->r17 != ctx->r2) {
        // 0x8028730C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8028731C;
    }
    goto skip_4;
    // 0x8028730C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x80287310: b           L_8028731C
    // 0x80287314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8028731C;
    // 0x80287314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80287318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8028731C:
    // 0x8028731C: beql        $v0, $zero, L_8028732C
    if (ctx->r2 == 0) {
        // 0x80287320: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_8028732C;
    }
    goto skip_5;
    // 0x80287320: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_5:
    // 0x80287324: addiu       $a2, $v1, -0xA
    ctx->r6 = ADD32(ctx->r3, -0XA);
    // 0x80287328: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
L_8028732C:
    // 0x8028732C: jal         0x802344F4
    // 0x80287330: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_802344F4(rdram, ctx);
        goto after_7;
    // 0x80287330: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80287334: jal         0x8023413C
    // 0x80287338: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    static_3_8023413C(rdram, ctx);
        goto after_8;
    // 0x80287338: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_8:
    // 0x8028733C: jal         0x802233EC
    // 0x80287340: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_9;
    // 0x80287340: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_9:
    // 0x80287344: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80287348: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x8028734C: bne         $s1, $t3, L_8028735C
    if (ctx->r17 != ctx->r11) {
        // 0x80287350: nop
    
            goto L_8028735C;
    }
    // 0x80287350: nop

    // 0x80287354: b           L_8028735C
    // 0x80287358: nop

        goto L_8028735C;
    // 0x80287358: nop

L_8028735C:
    // 0x8028735C: jal         0x80234B48
    // 0x80287360: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    static_3_80234B48(rdram, ctx);
        goto after_10;
    // 0x80287360: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_10:
    // 0x80287364: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80287368: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028736C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80287370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80287374: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80287378: nop

    // 0x8028737C: bc1f        L_80287388
    if (!c1cs) {
        // 0x80287380: nop
    
            goto L_80287388;
    }
    // 0x80287380: nop

    // 0x80287384: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
L_80287388:
    // 0x80287388: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x8028738C: bne         $s1, $t4, L_8028739C
    if (ctx->r17 != ctx->r12) {
        // 0x80287390: nop
    
            goto L_8028739C;
    }
    // 0x80287390: nop

    // 0x80287394: b           L_8028739C
    // 0x80287398: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8028739C;
    // 0x80287398: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028739C:
    // 0x8028739C: beq         $v0, $zero, L_802873B4
    if (ctx->r2 == 0) {
        // 0x802873A0: nop
    
            goto L_802873B4;
    }
    // 0x802873A0: nop

    // 0x802873A4: jal         0x8021E66C
    // 0x802873A8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    static_3_8021E66C(rdram, ctx);
        goto after_11;
    // 0x802873A8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_11:
    // 0x802873AC: b           L_802873C0
    // 0x802873B0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
        goto L_802873C0;
    // 0x802873B0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
L_802873B4:
    // 0x802873B4: jal         0x8021E66C
    // 0x802873B8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    static_3_8021E66C(rdram, ctx);
        goto after_12;
    // 0x802873B8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_12:
    // 0x802873BC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
L_802873C0:
    // 0x802873C0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802873C4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802873C8: jal         0x8021E708
    // 0x802873CC: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    static_3_8021E708(rdram, ctx);
        goto after_13;
    // 0x802873CC: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_13:
    // 0x802873D0: addiu       $t5, $s2, -0xD5
    ctx->r13 = ADD32(ctx->r18, -0XD5);
    // 0x802873D4: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x802873D8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802873DC: addiu       $s1, $sp, 0xCC
    ctx->r17 = ADD32(ctx->r29, 0XCC);
    // 0x802873E0: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
L_802873E4:
    // 0x802873E4: addiu       $t7, $s2, 0xE1
    ctx->r15 = ADD32(ctx->r18, 0XE1);
    // 0x802873E8: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802873EC: bne         $at, $zero, L_802874B8
    if (ctx->r1 != 0) {
        // 0x802873F0: slt         $at, $t7, $s0
        ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_802874B8;
    }
    // 0x802873F0: slt         $at, $t7, $s0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x802873F4: bne         $at, $zero, L_802874B8
    if (ctx->r1 != 0) {
        // 0x802873F8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802874B8;
    }
    // 0x802873F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802873FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80287400: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80287404: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80287408: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8028740C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80287410: jal         0x8023072C
    // 0x80287414: div.s       $f20, $f4, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = DIV_S(ctx->f4.fl, ctx->f22.fl);
    static_3_8023072C(rdram, ctx);
        goto after_14;
    // 0x80287414: div.s       $f20, $f4, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = DIV_S(ctx->f4.fl, ctx->f22.fl);
    after_14:
    // 0x80287418: jal         0x8021E83C
    // 0x8028741C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8021E83C(rdram, ctx);
        goto after_15;
    // 0x8028741C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80287420: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80287424: addiu       $t0, $zero, 0x43
    ctx->r8 = ADD32(0, 0X43);
    // 0x80287428: subu        $t3, $s0, $s2
    ctx->r11 = SUB32(ctx->r16, ctx->r18);
    // 0x8028742C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80287430: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80287434: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80287438: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8028743C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80287440: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80287444: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80287448: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8028744C: nop

    // 0x80287450: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x80287454: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80287458: nop

    // 0x8028745C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80287460: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80287464: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80287468: nop

    // 0x8028746C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80287470: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80287474: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80287478: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028747C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80287480: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80287484: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80287488: lui         $at, 0x42EE
    ctx->r1 = S32(0X42EE << 16);
    // 0x8028748C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80287490: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80287494: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80287498: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8028749C: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x802874A0: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x802874A4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802874A8: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802874AC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802874B0: jal         0x8021E87C
    // 0x802874B4: nop

    static_3_8021E87C(rdram, ctx);
        goto after_16;
    // 0x802874B4: nop

    after_16:
L_802874B8:
    // 0x802874B8: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    // 0x802874BC: addiu       $at, $zero, 0xBB8
    ctx->r1 = ADD32(0, 0XBB8);
    // 0x802874C0: bnel        $s0, $at, L_802873E4
    if (ctx->r16 != ctx->r1) {
        // 0x802874C4: lw          $t6, 0x4C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X4C);
            goto L_802873E4;
    }
    goto skip_6;
    // 0x802874C4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    skip_6:
    // 0x802874C8: jal         0x8022337C
    // 0x802874CC: nop

    static_3_8022337C(rdram, ctx);
        goto after_17;
    // 0x802874CC: nop

    after_17:
    // 0x802874D0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802874D4:
    // 0x802874D4: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x802874D8: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x802874DC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802874E0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802874E4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802874E8: jr          $ra
    // 0x802874EC: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x802874EC: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void D_80246C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246C20: beq         $a2, $zero, L_80246C8C
    if (ctx->r6 == 0) {
        // 0x80246C24: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80246C8C;
    }
    // 0x80246C24: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80246C28: beq         $a0, $a1, L_80246C8C
    if (ctx->r4 == ctx->r5) {
        // 0x80246C2C: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80246C8C;
    }
    // 0x80246C2C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80246C30: bnel        $at, $zero, L_80246C54
    if (ctx->r1 != 0) {
        // 0x80246C34: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80246C54;
    }
    goto skip_0;
    // 0x80246C34: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_0:
    // 0x80246C38: add         $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x80246C3C: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80246C40: beql        $at, $zero, L_80246C54
    if (ctx->r1 == 0) {
        // 0x80246C44: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80246C54;
    }
    goto skip_1;
    // 0x80246C44: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_1:
    // 0x80246C48: b           L_80246DB8
    // 0x80246C4C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
        goto L_80246DB8;
    // 0x80246C4C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80246C50: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80246C54:
    // 0x80246C54: bne         $at, $zero, L_80246C6C
    if (ctx->r1 != 0) {
        // 0x80246C58: nop
    
            goto L_80246C6C;
    }
    // 0x80246C58: nop

    // 0x80246C5C: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80246C60: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x80246C64: beq         $v0, $v1, L_80246C94
    if (ctx->r2 == ctx->r3) {
        // 0x80246C68: nop
    
            goto L_80246C94;
    }
    // 0x80246C68: nop

L_80246C6C:
    // 0x80246C6C: beq         $a2, $zero, L_80246C8C
    if (ctx->r6 == 0) {
        // 0x80246C70: nop
    
            goto L_80246C8C;
    }
    // 0x80246C70: nop

    // 0x80246C74: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
L_80246C78:
    // 0x80246C78: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80246C7C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80246C80: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80246C84: bne         $a0, $v1, L_80246C78
    if (ctx->r4 != ctx->r3) {
        // 0x80246C88: sb          $v0, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r2;
            goto L_80246C78;
    }
    // 0x80246C88: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
L_80246C8C:
    // 0x80246C8C: jr          $ra
    // 0x80246C90: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x80246C90: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_80246C94:
    // 0x80246C94: beq         $v0, $zero, L_80246CF8
    if (ctx->r2 == 0) {
        // 0x80246C98: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80246CF8;
    }
    // 0x80246C98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80246C9C: beq         $v0, $at, L_80246CDC
    if (ctx->r2 == ctx->r1) {
        // 0x80246CA0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80246CDC;
    }
    // 0x80246CA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80246CA4: beql        $v0, $at, L_80246CC8
    if (ctx->r2 == ctx->r1) {
        // 0x80246CA8: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_80246CC8;
    }
    goto skip_2;
    // 0x80246CA8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    skip_2:
    // 0x80246CAC: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80246CB0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80246CB4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80246CB8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80246CBC: b           L_80246CF8
    // 0x80246CC0: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
        goto L_80246CF8;
    // 0x80246CC0: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
    // 0x80246CC4: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
L_80246CC8:
    // 0x80246CC8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80246CCC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80246CD0: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x80246CD4: b           L_80246CF8
    // 0x80246CD8: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
        goto L_80246CF8;
    // 0x80246CD8: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
L_80246CDC:
    // 0x80246CDC: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80246CE0: lh          $v1, 0x1($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1);
    // 0x80246CE4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80246CE8: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x80246CEC: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x80246CF0: sb          $v0, -0x3($a1)
    MEM_B(-0X3, ctx->r5) = ctx->r2;
    // 0x80246CF4: sh          $v1, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r3;
L_80246CF8:
    // 0x80246CF8: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x80246CFC: bnel        $at, $zero, L_80246D58
    if (ctx->r1 != 0) {
        // 0x80246D00: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80246D58;
    }
    goto skip_3;
    // 0x80246D00: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_3:
    // 0x80246D04: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80246D08: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80246D0C: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80246D10: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80246D14: lw          $t2, 0x10($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X10);
    // 0x80246D18: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x80246D1C: lw          $t4, 0x18($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X18);
    // 0x80246D20: lw          $t5, 0x1C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X1C);
    // 0x80246D24: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80246D28: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x80246D2C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x80246D30: sw          $v0, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r2;
    // 0x80246D34: sw          $v1, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r3;
    // 0x80246D38: sw          $t0, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->r8;
    // 0x80246D3C: sw          $t1, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->r9;
    // 0x80246D40: sw          $t2, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r10;
    // 0x80246D44: sw          $t3, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r11;
    // 0x80246D48: sw          $t4, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r12;
    // 0x80246D4C: b           L_80246CF8
    // 0x80246D50: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
        goto L_80246CF8;
    // 0x80246D50: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
L_80246D54:
    // 0x80246D54: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80246D58:
    // 0x80246D58: bnel        $at, $zero, L_80246D94
    if (ctx->r1 != 0) {
        // 0x80246D5C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_80246D94;
    }
    goto skip_4;
    // 0x80246D5C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_4:
    // 0x80246D60: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80246D64: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80246D68: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80246D6C: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80246D70: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80246D74: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80246D78: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80246D7C: sw          $v0, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r2;
    // 0x80246D80: sw          $v1, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r3;
    // 0x80246D84: sw          $t0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r8;
    // 0x80246D88: b           L_80246D54
    // 0x80246D8C: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
        goto L_80246D54;
    // 0x80246D8C: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
L_80246D90:
    // 0x80246D90: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_80246D94:
    // 0x80246D94: bne         $at, $zero, L_80246C6C
    if (ctx->r1 != 0) {
        // 0x80246D98: nop
    
            goto L_80246C6C;
    }
    // 0x80246D98: nop

    // 0x80246D9C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80246DA0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80246DA4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80246DA8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80246DAC: b           L_80246D90
    // 0x80246DB0: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
        goto L_80246D90;
    // 0x80246DB0: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x80246DB4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80246DB8:
    // 0x80246DB8: add         $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80246DBC: bne         $at, $zero, L_80246DD4
    if (ctx->r1 != 0) {
        // 0x80246DC0: add         $a1, $a1, $a2
        ctx->r5 = ADD32(ctx->r5, ctx->r6);
            goto L_80246DD4;
    }
    // 0x80246DC0: add         $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x80246DC4: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80246DC8: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x80246DCC: beq         $v0, $v1, L_80246E04
    if (ctx->r2 == ctx->r3) {
        // 0x80246DD0: nop
    
            goto L_80246E04;
    }
    // 0x80246DD0: nop

L_80246DD4:
    // 0x80246DD4: beq         $a2, $zero, L_80246C8C
    if (ctx->r6 == 0) {
        // 0x80246DD8: nop
    
            goto L_80246C8C;
    }
    // 0x80246DD8: nop

    // 0x80246DDC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80246DE0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80246DE4: subu        $v1, $a0, $a2
    ctx->r3 = SUB32(ctx->r4, ctx->r6);
L_80246DE8:
    // 0x80246DE8: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80246DEC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80246DF0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80246DF4: bne         $a0, $v1, L_80246DE8
    if (ctx->r4 != ctx->r3) {
        // 0x80246DF8: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_80246DE8;
    }
    // 0x80246DF8: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x80246DFC: jr          $ra
    // 0x80246E00: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x80246E00: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_80246E04:
    // 0x80246E04: beq         $v0, $zero, L_80246E68
    if (ctx->r2 == 0) {
        // 0x80246E08: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80246E68;
    }
    // 0x80246E08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80246E0C: beq         $v0, $at, L_80246E4C
    if (ctx->r2 == ctx->r1) {
        // 0x80246E10: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80246E4C;
    }
    // 0x80246E10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80246E14: beql        $v0, $at, L_80246E38
    if (ctx->r2 == ctx->r1) {
        // 0x80246E18: lh          $v0, -0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, -0X2);
            goto L_80246E38;
    }
    goto skip_5;
    // 0x80246E18: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
    skip_5:
    // 0x80246E1C: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x80246E20: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80246E24: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80246E28: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80246E2C: b           L_80246E68
    // 0x80246E30: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
        goto L_80246E68;
    // 0x80246E30: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80246E34: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
L_80246E38:
    // 0x80246E38: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x80246E3C: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x80246E40: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x80246E44: b           L_80246E68
    // 0x80246E48: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_80246E68;
    // 0x80246E48: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80246E4C:
    // 0x80246E4C: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x80246E50: lh          $v1, -0x3($a0)
    ctx->r3 = MEM_H(ctx->r4, -0X3);
    // 0x80246E54: addiu       $a0, $a0, -0x3
    ctx->r4 = ADD32(ctx->r4, -0X3);
    // 0x80246E58: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x80246E5C: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x80246E60: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80246E64: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_80246E68:
    // 0x80246E68: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x80246E6C: bnel        $at, $zero, L_80246EC8
    if (ctx->r1 != 0) {
        // 0x80246E70: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80246EC8;
    }
    goto skip_6;
    // 0x80246E70: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_6:
    // 0x80246E74: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80246E78: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x80246E7C: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x80246E80: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x80246E84: lw          $t2, -0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, -0X14);
    // 0x80246E88: lw          $t3, -0x18($a0)
    ctx->r11 = MEM_W(ctx->r4, -0X18);
    // 0x80246E8C: lw          $t4, -0x1C($a0)
    ctx->r12 = MEM_W(ctx->r4, -0X1C);
    // 0x80246E90: lw          $t5, -0x20($a0)
    ctx->r13 = MEM_W(ctx->r4, -0X20);
    // 0x80246E94: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x80246E98: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
    // 0x80246E9C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x80246EA0: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80246EA4: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80246EA8: sw          $t0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r8;
    // 0x80246EAC: sw          $t1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r9;
    // 0x80246EB0: sw          $t2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r10;
    // 0x80246EB4: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x80246EB8: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x80246EBC: b           L_80246E68
    // 0x80246EC0: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
        goto L_80246E68;
    // 0x80246EC0: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_80246EC4:
    // 0x80246EC4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80246EC8:
    // 0x80246EC8: bnel        $at, $zero, L_80246F04
    if (ctx->r1 != 0) {
        // 0x80246ECC: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_80246F04;
    }
    goto skip_7;
    // 0x80246ECC: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_7:
    // 0x80246ED0: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80246ED4: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x80246ED8: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x80246EDC: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x80246EE0: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x80246EE4: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x80246EE8: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80246EEC: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80246EF0: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x80246EF4: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x80246EF8: b           L_80246EC4
    // 0x80246EFC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
        goto L_80246EC4;
    // 0x80246EFC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_80246F00:
    // 0x80246F00: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_80246F04:
    // 0x80246F04: bne         $at, $zero, L_80246DD4
    if (ctx->r1 != 0) {
        // 0x80246F08: nop
    
            goto L_80246DD4;
    }
    // 0x80246F08: nop

    // 0x80246F0C: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80246F10: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80246F14: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x80246F18: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80246F1C: b           L_80246F00
    // 0x80246F20: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_80246F00;
    // 0x80246F20: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80246F24: nop

    // 0x80246F28: nop

    // 0x80246F2C: nop

    // 0x80246F30: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80246F34: jr          $ra
    // 0x80246F38: sw          $a0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r4;
    return;
    // 0x80246F38: sw          $a0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void D_80202E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80202E28: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x80202E2C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80202E30: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x80202E34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80202E38: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x80202E3C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80202E40: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80202E44: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80202E48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80202E4C: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x80202E50: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80202E54: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80202E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80202E5C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202E60: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80202E64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80202E68: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202E6C: jal         0x802011D0
    // 0x80202E70: sb          $a1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r5;
    static_3_802011D0(rdram, ctx);
        goto after_0;
    // 0x80202E70: sb          $a1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r5;
    after_0:
    // 0x80202E74: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80202E78: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x80202E7C: lw          $t8, 0x98($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X98);
    // 0x80202E80: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x80202E84: beql        $t9, $zero, L_80202EA0
    if (ctx->r25 == 0) {
        // 0x80202E88: lbu         $a0, 0xAD($v0)
        ctx->r4 = MEM_BU(ctx->r2, 0XAD);
            goto L_80202EA0;
    }
    goto skip_0;
    // 0x80202E88: lbu         $a0, 0xAD($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XAD);
    skip_0:
    // 0x80202E8C: jal         0x80201FB8
    // 0x80202E90: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    static_3_80201FB8(rdram, ctx);
        goto after_1;
    // 0x80202E90: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_1:
    // 0x80202E94: b           L_80202EDC
    // 0x80202E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80202EDC;
    // 0x80202E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80202E9C: lbu         $a0, 0xAD($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XAD);
L_80202EA0:
    // 0x80202EA0: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80202EA4: beq         $a0, $at, L_80202ED0
    if (ctx->r4 == ctx->r1) {
        // 0x80202EA8: nop
    
            goto L_80202ED0;
    }
    // 0x80202EA8: nop

    // 0x80202EAC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80202EB0: jal         0x80203654
    // 0x80202EB4: sb          $a2, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r6;
    static_3_80203654(rdram, ctx);
        goto after_2;
    // 0x80202EB4: sb          $a2, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r6;
    after_2:
    // 0x80202EB8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80202EBC: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x80202EC0: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x80202EC4: sb          $t0, 0xAD($v0)
    MEM_B(0XAD, ctx->r2) = ctx->r8;
    // 0x80202EC8: sw          $zero, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = 0;
    // 0x80202ECC: sb          $zero, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = 0;
L_80202ED0:
    // 0x80202ED0: jal         0x80201F14
    // 0x80202ED4: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    static_3_80201F14(rdram, ctx);
        goto after_3;
    // 0x80202ED4: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_3:
    // 0x80202ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80202EDC:
    // 0x80202EDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80202EE0: jr          $ra
    // 0x80202EE4: nop

    return;
    // 0x80202EE4: nop

;}
RECOMP_FUNC void D_8027B844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B8BC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x8027B8C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027B8C4: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x8027B8C8: jal         0x8022331C
    // 0x8027B8CC: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x8027B8CC: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027B8D0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8027B8D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027B8D8: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x8027B8DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027B8E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8027B8E4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027B8E8: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x8027B8EC: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x8027B8F0: jal         0x8022A848
    // 0x8027B8F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_1;
    // 0x8027B8F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8027B8F8: jal         0x80221B2C
    // 0x8027B8FC: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    static_3_80221B2C(rdram, ctx);
        goto after_2;
    // 0x8027B8FC: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_2:
    // 0x8027B900: jal         0x8022970C
    // 0x8027B904: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x8027B904: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x8027B908: jal         0x8022149C
    // 0x8027B90C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_8022149C(rdram, ctx);
        goto after_4;
    // 0x8027B90C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x8027B910: jal         0x802233EC
    // 0x8027B914: lui         $a0, 0x4C2
    ctx->r4 = S32(0X4C2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_5;
    // 0x8027B914: lui         $a0, 0x4C2
    ctx->r4 = S32(0X4C2 << 16);
    after_5:
    // 0x8027B918: jal         0x8021E66C
    // 0x8027B91C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_6;
    // 0x8027B91C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x8027B920: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x8027B924: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8027B928: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x8027B92C: lbu         $t7, 0x8DD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8DD);
    // 0x8027B930: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x8027B934: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8027B938: bne         $t7, $zero, L_8027B94C
    if (ctx->r15 != 0) {
        // 0x8027B93C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8027B94C;
    }
    // 0x8027B93C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B940: sw          $t8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r24;
    // 0x8027B944: b           L_8027B954
    // 0x8027B948: sw          $t9, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r25;
        goto L_8027B954;
    // 0x8027B948: sw          $t9, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r25;
L_8027B94C:
    // 0x8027B94C: sw          $t0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r8;
    // 0x8027B950: sw          $t1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r9;
L_8027B954:
    // 0x8027B954: lbu         $v0, 0xC7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XC7);
    // 0x8027B958: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027B95C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8027B960: beq         $v0, $zero, L_8027BD9C
    if (ctx->r2 == 0) {
        // 0x8027B964: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_8027BD9C;
    }
    // 0x8027B964: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8027B968: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B96C: bne         $v0, $at, L_8027BB9C
    if (ctx->r2 != ctx->r1) {
        // 0x8027B970: nop
    
            goto L_8027BB9C;
    }
    // 0x8027B970: nop

    // 0x8027B974: jal         0x8021F4E4
    // 0x8027B978: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_7;
    // 0x8027B978: nop

    after_7:
    // 0x8027B97C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8027B980: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8027B984: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8027B988: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8027B98C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027B990: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027B994: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027B998: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027B99C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027B9A0: jal         0x8021F35C
    // 0x8027B9A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x8027B9A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_8:
    // 0x8027B9A8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8027B9AC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8027B9B0: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8027B9B4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8027B9B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027B9BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027B9C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027B9C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027B9C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027B9CC: jal         0x8021F35C
    // 0x8027B9D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x8027B9D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_9:
    // 0x8027B9D4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8027B9D8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8027B9DC: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8027B9E0: addiu       $a1, $zero, 0xC5
    ctx->r5 = ADD32(0, 0XC5);
    // 0x8027B9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027B9E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027B9EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027B9F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027B9F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027B9F8: jal         0x8021F35C
    // 0x8027B9FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x8027B9FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_10:
    // 0x8027BA00: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8027BA04: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8027BA08: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8027BA0C: addiu       $a1, $zero, 0xC5
    ctx->r5 = ADD32(0, 0XC5);
    // 0x8027BA10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BA14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BA18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BA1C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BA20: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BA24: jal         0x8021F35C
    // 0x8027BA28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x8027BA28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_11:
    // 0x8027BA2C: jal         0x8021FCD0
    // 0x8027BA30: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_12;
    // 0x8027BA30: nop

    after_12:
    // 0x8027BA34: jal         0x8021F4E4
    // 0x8027BA38: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_13;
    // 0x8027BA38: nop

    after_13:
    // 0x8027BA3C: addiu       $t6, $zero, 0xCC
    ctx->r14 = ADD32(0, 0XCC);
    // 0x8027BA40: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8027BA44: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8027BA48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027BA4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BA50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BA54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BA58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BA5C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BA60: jal         0x8021F35C
    // 0x8027BA64: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x8027BA64: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_14:
    // 0x8027BA68: addiu       $t7, $zero, 0xCC
    ctx->r15 = ADD32(0, 0XCC);
    // 0x8027BA6C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8027BA70: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8027BA74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027BA78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BA7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BA80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BA84: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BA88: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BA8C: jal         0x8021F35C
    // 0x8027BA90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x8027BA90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_15:
    // 0x8027BA94: addiu       $t8, $zero, 0xCC
    ctx->r24 = ADD32(0, 0XCC);
    // 0x8027BA98: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8027BA9C: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8027BAA0: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    // 0x8027BAA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BAA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BAAC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BAB0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BAB4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BAB8: jal         0x8021F35C
    // 0x8027BABC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x8027BABC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_16:
    // 0x8027BAC0: addiu       $t9, $zero, 0xCC
    ctx->r25 = ADD32(0, 0XCC);
    // 0x8027BAC4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8027BAC8: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8027BACC: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    // 0x8027BAD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BAD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BAD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BADC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BAE0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BAE4: jal         0x8021F35C
    // 0x8027BAE8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x8027BAE8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_17:
    // 0x8027BAEC: jal         0x8021FCD0
    // 0x8027BAF0: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_18;
    // 0x8027BAF0: nop

    after_18:
    // 0x8027BAF4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8027BAF8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8027BAFC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8027BB00: jal         0x8021E708
    // 0x8027BB04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_19;
    // 0x8027BB04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_19:
    // 0x8027BB08: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BB0C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027BB10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027BB14: jal         0x802CE360
    // 0x8027BB18: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_20;
    // 0x8027BB18: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_20:
    // 0x8027BB1C: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x8027BB20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027BB24: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    // 0x8027BB28: lbu         $t1, 0x8DE($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X8DE);
    // 0x8027BB2C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027BB30: beq         $t1, $zero, L_8027BB50
    if (ctx->r9 == 0) {
        // 0x8027BB34: nop
    
            goto L_8027BB50;
    }
    // 0x8027BB34: nop

    // 0x8027BB38: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027BB3C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027BB40: jal         0x8021E87C
    // 0x8027BB44: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    static_3_8021E87C(rdram, ctx);
        goto after_21;
    // 0x8027BB44: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    after_21:
    // 0x8027BB48: b           L_8027BB5C
    // 0x8027BB4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_8027BB5C;
    // 0x8027BB4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8027BB50:
    // 0x8027BB50: jal         0x8021E87C
    // 0x8027BB54: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_8021E87C(rdram, ctx);
        goto after_22;
    // 0x8027BB54: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_22:
    // 0x8027BB58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8027BB5C:
    // 0x8027BB5C: lbu         $a1, 0xBF($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBF);
    // 0x8027BB60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BB64: jal         0x8021E708
    // 0x8027BB68: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_23;
    // 0x8027BB68: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_23:
    // 0x8027BB6C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BB70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027BB74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027BB78: jal         0x802CE360
    // 0x8027BB7C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_24;
    // 0x8027BB7C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_24:
    // 0x8027BB80: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027BB84: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027BB88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027BB8C: jal         0x8021E87C
    // 0x8027BB90: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    static_3_8021E87C(rdram, ctx);
        goto after_25;
    // 0x8027BB90: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    after_25:
    // 0x8027BB94: b           L_8027BE4C
    // 0x8027BB98: nop

        goto L_8027BE4C;
    // 0x8027BB98: nop

L_8027BB9C:
    // 0x8027BB9C: jal         0x8021F4E4
    // 0x8027BBA0: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_26;
    // 0x8027BBA0: nop

    after_26:
    // 0x8027BBA4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8027BBA8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8027BBAC: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8027BBB0: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x8027BBB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BBB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BBBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BBC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BBC4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BBC8: jal         0x8021F35C
    // 0x8027BBCC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_27;
    // 0x8027BBCC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_27:
    // 0x8027BBD0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8027BBD4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8027BBD8: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8027BBDC: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x8027BBE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BBE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BBE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BBEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BBF0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BBF4: jal         0x8021F35C
    // 0x8027BBF8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_28;
    // 0x8027BBF8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_28:
    // 0x8027BBFC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8027BC00: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8027BC04: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8027BC08: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8027BC0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BC10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BC14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BC18: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BC1C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BC20: jal         0x8021F35C
    // 0x8027BC24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_29;
    // 0x8027BC24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_29:
    // 0x8027BC28: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8027BC2C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8027BC30: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8027BC34: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8027BC38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BC3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BC40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BC44: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BC48: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BC4C: jal         0x8021F35C
    // 0x8027BC50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_30;
    // 0x8027BC50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_30:
    // 0x8027BC54: jal         0x8021FCD0
    // 0x8027BC58: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_31;
    // 0x8027BC58: nop

    after_31:
    // 0x8027BC5C: jal         0x8021F4E4
    // 0x8027BC60: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_32;
    // 0x8027BC60: nop

    after_32:
    // 0x8027BC64: addiu       $t6, $zero, 0xCC
    ctx->r14 = ADD32(0, 0XCC);
    // 0x8027BC68: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8027BC6C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8027BC70: addiu       $a1, $zero, 0x6B
    ctx->r5 = ADD32(0, 0X6B);
    // 0x8027BC74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BC78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BC7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BC80: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BC84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BC88: jal         0x8021F35C
    // 0x8027BC8C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_33;
    // 0x8027BC8C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_33:
    // 0x8027BC90: addiu       $t7, $zero, 0xCC
    ctx->r15 = ADD32(0, 0XCC);
    // 0x8027BC94: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8027BC98: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8027BC9C: addiu       $a1, $zero, 0x6B
    ctx->r5 = ADD32(0, 0X6B);
    // 0x8027BCA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BCA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BCA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BCAC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BCB0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BCB4: jal         0x8021F35C
    // 0x8027BCB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_34;
    // 0x8027BCB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_34:
    // 0x8027BCBC: addiu       $t8, $zero, 0xCC
    ctx->r24 = ADD32(0, 0XCC);
    // 0x8027BCC0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8027BCC4: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8027BCC8: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x8027BCCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BCD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BCD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BCD8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BCDC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BCE0: jal         0x8021F35C
    // 0x8027BCE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_35;
    // 0x8027BCE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_35:
    // 0x8027BCE8: addiu       $t9, $zero, 0xCC
    ctx->r25 = ADD32(0, 0XCC);
    // 0x8027BCEC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8027BCF0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8027BCF4: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x8027BCF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BCFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027BD00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027BD04: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027BD08: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027BD0C: jal         0x8021F35C
    // 0x8027BD10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_36;
    // 0x8027BD10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_36:
    // 0x8027BD14: jal         0x8021FCD0
    // 0x8027BD18: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_37;
    // 0x8027BD18: nop

    after_37:
    // 0x8027BD1C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8027BD20: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8027BD24: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8027BD28: jal         0x8021E708
    // 0x8027BD2C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_38;
    // 0x8027BD2C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_38:
    // 0x8027BD30: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BD34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027BD38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027BD3C: jal         0x802CE360
    // 0x8027BD40: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_39;
    // 0x8027BD40: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_39:
    // 0x8027BD44: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027BD48: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027BD4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027BD50: jal         0x8021E87C
    // 0x8027BD54: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    static_3_8021E87C(rdram, ctx);
        goto after_40;
    // 0x8027BD54: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_40:
    // 0x8027BD58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027BD5C: lbu         $a1, 0xBB($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBB);
    // 0x8027BD60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BD64: jal         0x8021E708
    // 0x8027BD68: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_41;
    // 0x8027BD68: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_41:
    // 0x8027BD6C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BD70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027BD74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027BD78: jal         0x802CE360
    // 0x8027BD7C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_42;
    // 0x8027BD7C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_42:
    // 0x8027BD80: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027BD84: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027BD88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027BD8C: jal         0x8021E87C
    // 0x8027BD90: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    static_3_8021E87C(rdram, ctx);
        goto after_43;
    // 0x8027BD90: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    after_43:
    // 0x8027BD94: b           L_8027BE4C
    // 0x8027BD98: nop

        goto L_8027BE4C;
    // 0x8027BD98: nop

L_8027BD9C:
    // 0x8027BD9C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8027BDA0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8027BDA4: jal         0x802CECBC
    // 0x8027BDA8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_802CECBC(rdram, ctx);
        goto after_44;
    // 0x8027BDA8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_44:
    // 0x8027BDAC: jal         0x802CEDDC
    // 0x8027BDB0: nop

    static_3_802CEDDC(rdram, ctx);
        goto after_45;
    // 0x8027BDB0: nop

    after_45:
    // 0x8027BDB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027BDB8: lbu         $a1, 0xBF($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBF);
    // 0x8027BDBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BDC0: jal         0x8021E708
    // 0x8027BDC4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_46;
    // 0x8027BDC4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_46:
    // 0x8027BDC8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BDCC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027BDD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027BDD4: jal         0x802CE360
    // 0x8027BDD8: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_47;
    // 0x8027BDD8: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_47:
    // 0x8027BDDC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027BDE0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027BDE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027BDE8: jal         0x8021E87C
    // 0x8027BDEC: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    static_3_8021E87C(rdram, ctx);
        goto after_48;
    // 0x8027BDEC: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    after_48:
    // 0x8027BDF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027BDF4: lbu         $a1, 0xBB($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBB);
    // 0x8027BDF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027BDFC: jal         0x8021E708
    // 0x8027BE00: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_49;
    // 0x8027BE00: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_49:
    // 0x8027BE04: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BE08: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027BE0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027BE10: jal         0x802CE360
    // 0x8027BE14: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_50;
    // 0x8027BE14: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_50:
    // 0x8027BE18: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027BE1C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x8027BE20: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027BE24: jal         0x8021E87C
    // 0x8027BE28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_51;
    // 0x8027BE28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_51:
    // 0x8027BE2C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BE30: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8027BE34: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8027BE38: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027BE3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027BE40: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8027BE44: jal         0x802CEB9C
    // 0x8027BE48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802CEB9C(rdram, ctx);
        goto after_52;
    // 0x8027BE48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_52:
L_8027BE4C:
    // 0x8027BE4C: jal         0x8021EC9C
    // 0x8027BE50: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_53;
    // 0x8027BE50: nop

    after_53:
    // 0x8027BE54: jal         0x8022337C
    // 0x8027BE58: nop

    static_3_8022337C(rdram, ctx);
        goto after_54;
    // 0x8027BE58: nop

    after_54:
    // 0x8027BE5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027BE60: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x8027BE64: jr          $ra
    // 0x8027BE68: nop

    return;
    // 0x8027BE68: nop

;}
RECOMP_FUNC void D_8029DBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DC44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8029DC48: jr          $ra
    // 0x8029DC4C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x8029DC4C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802ED7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED848: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802ED84C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802ED850: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ED854: bne         $a0, $zero, L_802ED86C
    if (ctx->r4 != 0) {
        // 0x802ED858: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802ED86C;
    }
    // 0x802ED858: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802ED85C: jal         0x802C67EC
    // 0x802ED860: addiu       $a0, $zero, 0x5A0
    ctx->r4 = ADD32(0, 0X5A0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ED860: addiu       $a0, $zero, 0x5A0
    ctx->r4 = ADD32(0, 0X5A0);
    after_0:
    // 0x802ED864: beq         $v0, $zero, L_802ED8E0
    if (ctx->r2 == 0) {
        // 0x802ED868: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802ED8E0;
    }
    // 0x802ED868: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802ED86C:
    // 0x802ED86C: jal         0x8031C47C
    // 0x802ED870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ED870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802ED874: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x802ED878: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802ED87C: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802ED880: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802ED884: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802ED888: jal         0x802C6930
    // 0x802ED88C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802ED88C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802ED890: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802ED894: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ED898: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED89C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802ED8A0: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x802ED8A4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802ED8A8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ED8AC: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x802ED8B0: sh          $t7, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r15;
    // 0x802ED8B4: sw          $t8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r24;
    // 0x802ED8B8: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
    // 0x802ED8BC: sh          $t0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r8;
    // 0x802ED8C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED8C4: sw          $t6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r14;
    // 0x802ED8C8: swc1        $f0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f0.u32l;
    // 0x802ED8CC: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x802ED8D0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED8D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802ED8D8: jal         0x8031E04C
    // 0x802ED8DC: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    static_3_8031E04C(rdram, ctx);
        goto after_3;
    // 0x802ED8DC: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    after_3:
L_802ED8E0:
    // 0x802ED8E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED8E4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802ED8E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802ED8EC: jr          $ra
    // 0x802ED8F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802ED8F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802EDC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDCA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EDCAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EDCB0: beq         $a0, $zero, L_802EDCE0
    if (ctx->r4 == 0) {
        // 0x802EDCB4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EDCE0;
    }
    // 0x802EDCB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EDCB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EDCBC: jal         0x8031C514
    // 0x802EDCC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EDCC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EDCC4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EDCC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EDCCC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EDCD0: beql        $t7, $zero, L_802EDCE4
    if (ctx->r15 == 0) {
        // 0x802EDCD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EDCE4;
    }
    goto skip_0;
    // 0x802EDCD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EDCD8: jal         0x802C681C
    // 0x802EDCDC: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EDCDC: nop

    after_1:
L_802EDCE0:
    // 0x802EDCE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EDCE4:
    // 0x802EDCE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EDCE8: jr          $ra
    // 0x802EDCEC: nop

    return;
    // 0x802EDCEC: nop

;}
RECOMP_FUNC void D_8029B020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029B0A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029B0A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8029B0A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8029B0AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8029B0B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029B0B4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029B0B8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8029B0BC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8029B0C0: jal         0x8022FFC8
    // 0x8029B0C4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_8022FFC8(rdram, ctx);
        goto after_0;
    // 0x8029B0C4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x8029B0C8: beq         $v0, $zero, L_8029B128
    if (ctx->r2 == 0) {
        // 0x8029B0CC: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_8029B128;
    }
    // 0x8029B0CC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8029B0D0: lw          $t8, 0x28($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X28);
    // 0x8029B0D4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8029B0D8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8029B0DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x8029B0E0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8029B0E4: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x8029B0E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029B0EC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8029B0F0: bne         $t6, $t1, L_8029B110
    if (ctx->r14 != ctx->r9) {
        // 0x8029B0F4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029B110;
    }
    // 0x8029B0F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029B0F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029B0FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029B100: jal         0x8021E708
    // 0x8029B104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8021E708(rdram, ctx);
        goto after_1;
    // 0x8029B104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8029B108: b           L_8029B11C
    // 0x8029B10C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_8029B11C;
    // 0x8029B10C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8029B110:
    // 0x8029B110: jal         0x8021E708
    // 0x8029B114: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_2;
    // 0x8029B114: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x8029B118: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8029B11C:
    // 0x8029B11C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8029B120: jal         0x8021E87C
    // 0x8029B124: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    static_3_8021E87C(rdram, ctx);
        goto after_3;
    // 0x8029B124: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_3:
L_8029B128:
    // 0x8029B128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029B12C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029B130: jr          $ra
    // 0x8029B134: nop

    return;
    // 0x8029B134: nop

;}
RECOMP_FUNC void D_802EEF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EEFF4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802EEFF8: sh          $a2, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r6;
    // 0x802EEFFC: jr          $ra
    // 0x802EF000: sw          $a1, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r5;
    return;
    // 0x802EF000: sw          $a1, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802317F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802317F8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802317FC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80231800: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80231804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231808: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8023180C: beq         $t6, $zero, L_8023181C
    if (ctx->r14 == 0) {
        // 0x80231810: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8023181C;
    }
    // 0x80231810: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80231814: b           L_802319C4
    // 0x80231818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802319C4;
    // 0x80231818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8023181C:
    // 0x8023181C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231820: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80231824: jal         0x8023EDC0
    // 0x80231828: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    static_3_8023EDC0(rdram, ctx);
        goto after_0;
    // 0x80231828: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x8023182C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80231830: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x80231834: beq         $t7, $zero, L_8023185C
    if (ctx->r15 == 0) {
        // 0x80231838: lw          $a3, 0x38($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X38);
            goto L_8023185C;
    }
    // 0x80231838: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8023183C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80231840: lw          $t8, 0x10($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X10);
    // 0x80231844: sw          $zero, 0x10($a3)
    MEM_W(0X10, ctx->r7) = 0;
    // 0x80231848: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023184C: swc1        $f0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f0.u32l;
    // 0x80231850: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x80231854: b           L_802319C4
    // 0x80231858: sw          $t8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r24;
        goto L_802319C4;
    // 0x80231858: sw          $t8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r24;
L_8023185C:
    // 0x8023185C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231860: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80231864: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80231868: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023186C: jal         0x802374B0
    // 0x80231870: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    static_3_802374B0(rdram, ctx);
        goto after_1;
    // 0x80231870: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x80231874: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231878: jal         0x8023EE84
    // 0x8023187C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023EE84(rdram, ctx);
        goto after_2;
    // 0x8023187C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x80231880: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80231884: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80231888: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8023188C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80231890: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80231894: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80231898: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x8023189C: lb          $v0, 0x2($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2);
    // 0x802318A0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x802318A4: lb          $v1, 0x3($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X3);
    // 0x802318A8: bgez        $v0, L_802318F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802318AC: slti        $at, $v0, 0x45
        ctx->r1 = SIGNED(ctx->r2) < 0X45 ? 1 : 0;
            goto L_802318F0;
    }
    // 0x802318AC: slti        $at, $v0, 0x45
    ctx->r1 = SIGNED(ctx->r2) < 0X45 ? 1 : 0;
    // 0x802318B0: slti        $at, $v0, -0x44
    ctx->r1 = SIGNED(ctx->r2) < -0X44 ? 1 : 0;
    // 0x802318B4: beql        $at, $zero, L_802318C8
    if (ctx->r1 == 0) {
        // 0x802318B8: slti        $at, $v0, -0x6
        ctx->r1 = SIGNED(ctx->r2) < -0X6 ? 1 : 0;
            goto L_802318C8;
    }
    goto skip_0;
    // 0x802318B8: slti        $at, $v0, -0x6
    ctx->r1 = SIGNED(ctx->r2) < -0X6 ? 1 : 0;
    skip_0:
    // 0x802318BC: b           L_802318D4
    // 0x802318C0: addiu       $v0, $zero, -0x44
    ctx->r2 = ADD32(0, -0X44);
        goto L_802318D4;
    // 0x802318C0: addiu       $v0, $zero, -0x44
    ctx->r2 = ADD32(0, -0X44);
    // 0x802318C4: slti        $at, $v0, -0x6
    ctx->r1 = SIGNED(ctx->r2) < -0X6 ? 1 : 0;
L_802318C8:
    // 0x802318C8: bnel        $at, $zero, L_802318D8
    if (ctx->r1 != 0) {
        // 0x802318CC: addiu       $t2, $v0, 0x7
        ctx->r10 = ADD32(ctx->r2, 0X7);
            goto L_802318D8;
    }
    goto skip_1;
    // 0x802318CC: addiu       $t2, $v0, 0x7
    ctx->r10 = ADD32(ctx->r2, 0X7);
    skip_1:
    // 0x802318D0: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
L_802318D4:
    // 0x802318D4: addiu       $t2, $v0, 0x7
    ctx->r10 = ADD32(ctx->r2, 0X7);
L_802318D8:
    // 0x802318D8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x802318DC: lui         $at, 0x4274
    ctx->r1 = S32(0X4274 << 16);
    // 0x802318E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802318E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802318E8: b           L_80231928
    // 0x802318EC: div.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
        goto L_80231928;
    // 0x802318EC: div.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
L_802318F0:
    // 0x802318F0: bnel        $at, $zero, L_80231904
    if (ctx->r1 != 0) {
        // 0x802318F4: slti        $at, $v0, 0x7
        ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
            goto L_80231904;
    }
    goto skip_2;
    // 0x802318F4: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    skip_2:
    // 0x802318F8: b           L_80231910
    // 0x802318FC: addiu       $v0, $zero, 0x44
    ctx->r2 = ADD32(0, 0X44);
        goto L_80231910;
    // 0x802318FC: addiu       $v0, $zero, 0x44
    ctx->r2 = ADD32(0, 0X44);
    // 0x80231900: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_80231904:
    // 0x80231904: beql        $at, $zero, L_80231914
    if (ctx->r1 == 0) {
        // 0x80231908: addiu       $t3, $v0, -0x7
        ctx->r11 = ADD32(ctx->r2, -0X7);
            goto L_80231914;
    }
    goto skip_3;
    // 0x80231908: addiu       $t3, $v0, -0x7
    ctx->r11 = ADD32(ctx->r2, -0X7);
    skip_3:
    // 0x8023190C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80231910:
    // 0x80231910: addiu       $t3, $v0, -0x7
    ctx->r11 = ADD32(ctx->r2, -0X7);
L_80231914:
    // 0x80231914: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80231918: lui         $at, 0x4274
    ctx->r1 = S32(0X4274 << 16);
    // 0x8023191C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80231920: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80231924: div.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
L_80231928:
    // 0x80231928: bgez        $v1, L_80231970
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023192C: slti        $at, $v1, 0x47
        ctx->r1 = SIGNED(ctx->r3) < 0X47 ? 1 : 0;
            goto L_80231970;
    }
    // 0x8023192C: slti        $at, $v1, 0x47
    ctx->r1 = SIGNED(ctx->r3) < 0X47 ? 1 : 0;
    // 0x80231930: slti        $at, $v1, -0x46
    ctx->r1 = SIGNED(ctx->r3) < -0X46 ? 1 : 0;
    // 0x80231934: beql        $at, $zero, L_80231948
    if (ctx->r1 == 0) {
        // 0x80231938: slti        $at, $v1, -0x6
        ctx->r1 = SIGNED(ctx->r3) < -0X6 ? 1 : 0;
            goto L_80231948;
    }
    goto skip_4;
    // 0x80231938: slti        $at, $v1, -0x6
    ctx->r1 = SIGNED(ctx->r3) < -0X6 ? 1 : 0;
    skip_4:
    // 0x8023193C: b           L_80231954
    // 0x80231940: addiu       $v1, $zero, -0x46
    ctx->r3 = ADD32(0, -0X46);
        goto L_80231954;
    // 0x80231940: addiu       $v1, $zero, -0x46
    ctx->r3 = ADD32(0, -0X46);
    // 0x80231944: slti        $at, $v1, -0x6
    ctx->r1 = SIGNED(ctx->r3) < -0X6 ? 1 : 0;
L_80231948:
    // 0x80231948: bnel        $at, $zero, L_80231958
    if (ctx->r1 != 0) {
        // 0x8023194C: addiu       $t4, $v1, 0x7
        ctx->r12 = ADD32(ctx->r3, 0X7);
            goto L_80231958;
    }
    goto skip_5;
    // 0x8023194C: addiu       $t4, $v1, 0x7
    ctx->r12 = ADD32(ctx->r3, 0X7);
    skip_5:
    // 0x80231950: addiu       $v1, $zero, -0x7
    ctx->r3 = ADD32(0, -0X7);
L_80231954:
    // 0x80231954: addiu       $t4, $v1, 0x7
    ctx->r12 = ADD32(ctx->r3, 0X7);
L_80231958:
    // 0x80231958: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8023195C: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x80231960: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80231964: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80231968: b           L_802319A8
    // 0x8023196C: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
        goto L_802319A8;
    // 0x8023196C: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
L_80231970:
    // 0x80231970: bnel        $at, $zero, L_80231984
    if (ctx->r1 != 0) {
        // 0x80231974: slti        $at, $v1, 0x7
        ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
            goto L_80231984;
    }
    goto skip_6;
    // 0x80231974: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    skip_6:
    // 0x80231978: b           L_80231990
    // 0x8023197C: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
        goto L_80231990;
    // 0x8023197C: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
    // 0x80231980: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
L_80231984:
    // 0x80231984: beql        $at, $zero, L_80231994
    if (ctx->r1 == 0) {
        // 0x80231988: addiu       $t5, $v1, -0x7
        ctx->r13 = ADD32(ctx->r3, -0X7);
            goto L_80231994;
    }
    goto skip_7;
    // 0x80231988: addiu       $t5, $v1, -0x7
    ctx->r13 = ADD32(ctx->r3, -0X7);
    skip_7:
    // 0x8023198C: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
L_80231990:
    // 0x80231990: addiu       $t5, $v1, -0x7
    ctx->r13 = ADD32(ctx->r3, -0X7);
L_80231994:
    // 0x80231994: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80231998: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x8023199C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802319A0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802319A4: div.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
L_802319A8:
    // 0x802319A8: lw          $t6, 0x10($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X10);
    // 0x802319AC: swc1        $f2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f2.u32l;
    // 0x802319B0: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x802319B4: sw          $t6, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r14;
    // 0x802319B8: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x802319BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802319C0: sw          $t7, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r15;
L_802319C4:
    // 0x802319C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802319C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802319CC: jr          $ra
    // 0x802319D0: nop

    return;
    // 0x802319D0: nop

;}
RECOMP_FUNC void D_802036DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802036DC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802036E0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x802036E4: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x802036E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802036EC: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x802036F0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802036F4: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802036F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802036FC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80203700: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203704: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80203708: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8020370C: lbu         $t0, 0xAC($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XAC);
    // 0x80203710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80203714: bne         $t0, $zero, L_80203724
    if (ctx->r8 != 0) {
        // 0x80203718: nop
    
            goto L_80203724;
    }
    // 0x80203718: nop

    // 0x8020371C: jr          $ra
    // 0x80203720: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80203720: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80203724:
    // 0x80203724: jr          $ra
    // 0x80203728: nop

    return;
    // 0x80203728: nop

;}
RECOMP_FUNC void D_8027F1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F240: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8027F244: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027F248: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027F24C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8027F250: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027F254: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027F258: jal         0x80223E48
    // 0x8027F25C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    static_3_80223E48(rdram, ctx);
        goto after_0;
    // 0x8027F25C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_0:
    // 0x8027F260: beq         $v0, $zero, L_8027F594
    if (ctx->r2 == 0) {
        // 0x8027F264: addiu       $a0, $s0, 0x362C
        ctx->r4 = ADD32(ctx->r16, 0X362C);
            goto L_8027F594;
    }
    // 0x8027F264: addiu       $a0, $s0, 0x362C
    ctx->r4 = ADD32(ctx->r16, 0X362C);
    // 0x8027F268: addiu       $t6, $s0, 0x8F4
    ctx->r14 = ADD32(ctx->r16, 0X8F4);
    // 0x8027F26C: addiu       $t7, $s0, 0x3228
    ctx->r15 = ADD32(ctx->r16, 0X3228);
    // 0x8027F270: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8027F274: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8027F278: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
L_8027F27C:
    // 0x8027F27C: jal         0x802E9BDC
    // 0x8027F280: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    static_3_802E9BDC(rdram, ctx);
        goto after_1;
    // 0x8027F280: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x8027F284: jal         0x802AFCC8
    // 0x8027F288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802AFCC8(rdram, ctx);
        goto after_2;
    // 0x8027F288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8027F28C: lbu         $t8, 0x4E38($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4E38);
    // 0x8027F290: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x8027F294: lbu         $s3, 0x0($s3)
    ctx->r19 = MEM_BU(ctx->r19, 0X0);
    // 0x8027F298: bne         $t8, $zero, L_8027F2B8
    if (ctx->r24 != 0) {
        // 0x8027F29C: nop
    
            goto L_8027F2B8;
    }
    // 0x8027F29C: nop

    // 0x8027F2A0: jal         0x80222E50
    // 0x8027F2A4: nop

    static_3_80222E50(rdram, ctx);
        goto after_3;
    // 0x8027F2A4: nop

    after_3:
    // 0x8027F2A8: lwc1        $f4, 0x32A8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X32A8);
    // 0x8027F2AC: swc1        $f0, 0x32B0($s0)
    MEM_W(0X32B0, ctx->r16) = ctx->f0.u32l;
    // 0x8027F2B0: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8027F2B4: swc1        $f6, 0x32A8($s0)
    MEM_W(0X32A8, ctx->r16) = ctx->f6.u32l;
L_8027F2B8:
    // 0x8027F2B8: jal         0x803024E0
    // 0x8027F2BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    static_3_803024E0(rdram, ctx);
        goto after_4;
    // 0x8027F2BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_4:
    // 0x8027F2C0: jal         0x80207130
    // 0x8027F2C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_5;
    // 0x8027F2C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x8027F2C8: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x8027F2CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8027F2D0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8027F2D4: jal         0x80302ED4
    // 0x8027F2D8: nop

    static_3_80302ED4(rdram, ctx);
        goto after_6;
    // 0x8027F2D8: nop

    after_6:
    // 0x8027F2DC: jal         0x802AFDD0
    // 0x8027F2E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802AFDD0(rdram, ctx);
        goto after_7;
    // 0x8027F2E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8027F2E4: beq         $v0, $zero, L_8027F31C
    if (ctx->r2 == 0) {
        // 0x8027F2E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027F31C;
    }
    // 0x8027F2E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027F2EC: jal         0x802A8A60
    // 0x8027F2F0: addiu       $s1, $s0, 0x365C
    ctx->r17 = ADD32(ctx->r16, 0X365C);
    static_3_802A8A60(rdram, ctx);
        goto after_8;
    // 0x8027F2F0: addiu       $s1, $s0, 0x365C
    ctx->r17 = ADD32(ctx->r16, 0X365C);
    after_8:
    // 0x8027F2F4: jal         0x803183C0
    // 0x8027F2F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_803183C0(rdram, ctx);
        goto after_9;
    // 0x8027F2F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x8027F2FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8027F300: nop

    // 0x8027F304: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8027F308: nop

    // 0x8027F30C: bc1fl       L_8027F320
    if (!c1cs) {
        // 0x8027F310: lbu         $t9, 0x3343($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X3343);
            goto L_8027F320;
    }
    goto skip_0;
    // 0x8027F310: lbu         $t9, 0x3343($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3343);
    skip_0:
    // 0x8027F314: jal         0x802A7364
    // 0x8027F318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A7364(rdram, ctx);
        goto after_10;
    // 0x8027F318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_8027F31C:
    // 0x8027F31C: lbu         $t9, 0x3343($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3343);
L_8027F320:
    // 0x8027F320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027F324: addiu       $s1, $s0, 0x4DD4
    ctx->r17 = ADD32(ctx->r16, 0X4DD4);
    // 0x8027F328: beq         $t9, $zero, L_8027F340
    if (ctx->r25 == 0) {
        // 0x8027F32C: nop
    
            goto L_8027F340;
    }
    // 0x8027F32C: nop

    // 0x8027F330: jal         0x802A724C
    // 0x8027F334: addiu       $s2, $s0, 0x4E3C
    ctx->r18 = ADD32(ctx->r16, 0X4E3C);
    static_3_802A724C(rdram, ctx);
        goto after_11;
    // 0x8027F334: addiu       $s2, $s0, 0x4E3C
    ctx->r18 = ADD32(ctx->r16, 0X4E3C);
    after_11:
    // 0x8027F338: b           L_8027F4AC
    // 0x8027F33C: nop

        goto L_8027F4AC;
    // 0x8027F33C: nop

L_8027F340:
    // 0x8027F340: jal         0x802A6780
    // 0x8027F344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A6780(rdram, ctx);
        goto after_12;
    // 0x8027F344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8027F348: jal         0x802A81C8
    // 0x8027F34C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A81C8(rdram, ctx);
        goto after_13;
    // 0x8027F34C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8027F350: lw          $t0, 0x65FC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X65FC);
    // 0x8027F354: beq         $t0, $zero, L_8027F584
    if (ctx->r8 == 0) {
        // 0x8027F358: nop
    
            goto L_8027F584;
    }
    // 0x8027F358: nop

    // 0x8027F35C: jal         0x802AFDA0
    // 0x8027F360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802AFDA0(rdram, ctx);
        goto after_14;
    // 0x8027F360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8027F364: bne         $v0, $zero, L_8027F3CC
    if (ctx->r2 != 0) {
        // 0x8027F368: nop
    
            goto L_8027F3CC;
    }
    // 0x8027F368: nop

    // 0x8027F36C: jal         0x802A615C
    // 0x8027F370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A615C(rdram, ctx);
        goto after_15;
    // 0x8027F370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8027F374: jal         0x802A6BAC
    // 0x8027F378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A6BAC(rdram, ctx);
        goto after_16;
    // 0x8027F378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8027F37C: jal         0x802A5F48
    // 0x8027F380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A5F48(rdram, ctx);
        goto after_17;
    // 0x8027F380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8027F384: jal         0x802A7A20
    // 0x8027F388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A7A20(rdram, ctx);
        goto after_18;
    // 0x8027F388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x8027F38C: jal         0x802A6634
    // 0x8027F390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A6634(rdram, ctx);
        goto after_19;
    // 0x8027F390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8027F394: jal         0x802A77AC
    // 0x8027F398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A77AC(rdram, ctx);
        goto after_20;
    // 0x8027F398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8027F39C: jal         0x802A7C88
    // 0x8027F3A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A7C88(rdram, ctx);
        goto after_21;
    // 0x8027F3A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x8027F3A4: lw          $t1, 0x65FC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X65FC);
    // 0x8027F3A8: beq         $t1, $zero, L_8027F584
    if (ctx->r9 == 0) {
        // 0x8027F3AC: nop
    
            goto L_8027F584;
    }
    // 0x8027F3AC: nop

    // 0x8027F3B0: jal         0x802A8410
    // 0x8027F3B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A8410(rdram, ctx);
        goto after_22;
    // 0x8027F3B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x8027F3B8: lw          $t2, 0x4E1C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4E1C);
    // 0x8027F3BC: beq         $t2, $zero, L_8027F3CC
    if (ctx->r10 == 0) {
        // 0x8027F3C0: nop
    
            goto L_8027F3CC;
    }
    // 0x8027F3C0: nop

    // 0x8027F3C4: jal         0x802A7930
    // 0x8027F3C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A7930(rdram, ctx);
        goto after_23;
    // 0x8027F3C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
L_8027F3CC:
    // 0x8027F3CC: jal         0x8031A724
    // 0x8027F3D0: nop

    static_3_8031A724(rdram, ctx);
        goto after_24;
    // 0x8027F3D0: nop

    after_24:
    // 0x8027F3D4: lw          $t3, 0x65FC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X65FC);
    // 0x8027F3D8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8027F3DC: beq         $t3, $zero, L_8027F584
    if (ctx->r11 == 0) {
        // 0x8027F3E0: nop
    
            goto L_8027F584;
    }
    // 0x8027F3E0: nop

    // 0x8027F3E4: beq         $s3, $at, L_8027F40C
    if (ctx->r19 == ctx->r1) {
        // 0x8027F3E8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8027F40C;
    }
    // 0x8027F3E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027F3EC: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8027F3F0: beq         $s3, $at, L_8027F40C
    if (ctx->r19 == ctx->r1) {
        // 0x8027F3F4: addiu       $at, $zero, 0x21
        ctx->r1 = ADD32(0, 0X21);
            goto L_8027F40C;
    }
    // 0x8027F3F4: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x8027F3F8: beq         $s3, $at, L_8027F40C
    if (ctx->r19 == ctx->r1) {
        // 0x8027F3FC: addiu       $s1, $s0, 0x4DD4
        ctx->r17 = ADD32(ctx->r16, 0X4DD4);
            goto L_8027F40C;
    }
    // 0x8027F3FC: addiu       $s1, $s0, 0x4DD4
    ctx->r17 = ADD32(ctx->r16, 0X4DD4);
    // 0x8027F400: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x8027F404: b           L_8027F494
    // 0x8027F408: addiu       $s2, $s0, 0x4E3C
    ctx->r18 = ADD32(ctx->r16, 0X4E3C);
        goto L_8027F494;
    // 0x8027F408: addiu       $s2, $s0, 0x4E3C
    ctx->r18 = ADD32(ctx->r16, 0X4E3C);
L_8027F40C:
    // 0x8027F40C: jal         0x80223FC4
    // 0x8027F410: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_25;
    // 0x8027F410: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_25:
    // 0x8027F414: bne         $v0, $zero, L_8027F42C
    if (ctx->r2 != 0) {
        // 0x8027F418: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8027F42C;
    }
    // 0x8027F418: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027F41C: jal         0x80223FC4
    // 0x8027F420: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    static_3_80223FC4(rdram, ctx);
        goto after_26;
    // 0x8027F420: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_26:
    // 0x8027F424: beq         $v0, $zero, L_8027F48C
    if (ctx->r2 == 0) {
        // 0x8027F428: addiu       $a0, $s0, 0x20
        ctx->r4 = ADD32(ctx->r16, 0X20);
            goto L_8027F48C;
    }
    // 0x8027F428: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_8027F42C:
    // 0x8027F42C: lw          $v0, 0x65FC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X65FC);
    // 0x8027F430: addiu       $t5, $s0, 0x3350
    ctx->r13 = ADD32(ctx->r16, 0X3350);
    // 0x8027F434: addiu       $t6, $s0, 0x340C
    ctx->r14 = ADD32(ctx->r16, 0X340C);
    // 0x8027F438: lw          $v1, 0x6C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X6C);
    // 0x8027F43C: addiu       $s1, $s0, 0x32BC
    ctx->r17 = ADD32(ctx->r16, 0X32BC);
    // 0x8027F440: lh          $t4, 0x50($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X50);
    // 0x8027F444: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8027F448: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8027F44C: lw          $t9, 0x54($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X54);
    // 0x8027F450: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    // 0x8027F454: jalr        $t9
    // 0x8027F458: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x8027F458: nop

    after_27:
    // 0x8027F45C: jal         0x802A91F0
    // 0x8027F460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A91F0(rdram, ctx);
        goto after_28;
    // 0x8027F460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x8027F464: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8027F468: sw          $t7, 0x32A4($s0)
    MEM_W(0X32A4, ctx->r16) = ctx->r15;
    // 0x8027F46C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8027F470: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8027F474: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8027F478: jal         0x802CD478
    // 0x8027F47C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802CD478(rdram, ctx);
        goto after_29;
    // 0x8027F47C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_29:
    // 0x8027F480: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027F484: b           L_8027F584
    // 0x8027F488: sb          $t8, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = ctx->r24;
        goto L_8027F584;
    // 0x8027F488: sb          $t8, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = ctx->r24;
L_8027F48C:
    // 0x8027F48C: addiu       $s1, $s0, 0x4DD4
    ctx->r17 = ADD32(ctx->r16, 0X4DD4);
    // 0x8027F490: addiu       $s2, $s0, 0x4E3C
    ctx->r18 = ADD32(ctx->r16, 0X4E3C);
L_8027F494:
    // 0x8027F494: jal         0x802916E4
    // 0x8027F498: nop

    static_3_802916E4(rdram, ctx);
        goto after_30;
    // 0x8027F498: nop

    after_30:
    // 0x8027F49C: beq         $v0, $zero, L_8027F4AC
    if (ctx->r2 == 0) {
        // 0x8027F4A0: addiu       $a0, $s0, 0x10
        ctx->r4 = ADD32(ctx->r16, 0X10);
            goto L_8027F4AC;
    }
    // 0x8027F4A0: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x8027F4A4: jal         0x802FA2F8
    // 0x8027F4A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_802FA2F8(rdram, ctx);
        goto after_31;
    // 0x8027F4A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_31:
L_8027F4AC:
    // 0x8027F4AC: jal         0x80220340
    // 0x8027F4B0: nop

    static_3_80220340(rdram, ctx);
        goto after_32;
    // 0x8027F4B0: nop

    after_32:
    // 0x8027F4B4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8027F4B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027F4BC: jal         0x80302498
    // 0x8027F4C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_80302498(rdram, ctx);
        goto after_33;
    // 0x8027F4C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_33:
    // 0x8027F4C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027F4C8: jal         0x80205BBC
    // 0x8027F4CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80205BBC(rdram, ctx);
        goto after_34;
    // 0x8027F4CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_34:
    // 0x8027F4D0: jal         0x80205F60
    // 0x8027F4D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80205F60(rdram, ctx);
        goto after_35;
    // 0x8027F4D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_35:
    // 0x8027F4D8: jal         0x80317E10
    // 0x8027F4DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_36;
    // 0x8027F4DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_36:
    // 0x8027F4E0: beq         $v0, $zero, L_8027F524
    if (ctx->r2 == 0) {
        // 0x8027F4E4: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_8027F524;
    }
    // 0x8027F4E4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8027F4E8: bnel        $s3, $at, L_8027F528
    if (ctx->r19 != ctx->r1) {
        // 0x8027F4EC: slti        $at, $s3, 0x11
        ctx->r1 = SIGNED(ctx->r19) < 0X11 ? 1 : 0;
            goto L_8027F528;
    }
    goto skip_1;
    // 0x8027F4EC: slti        $at, $s3, 0x11
    ctx->r1 = SIGNED(ctx->r19) < 0X11 ? 1 : 0;
    skip_1:
    // 0x8027F4F0: lw          $t0, 0x65B4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X65B4);
    // 0x8027F4F4: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8027F4F8: addiu       $s1, $s0, 0x65B8
    ctx->r17 = ADD32(ctx->r16, 0X65B8);
    // 0x8027F4FC: beq         $t0, $at, L_8027F510
    if (ctx->r8 == ctx->r1) {
        // 0x8027F500: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8027F510;
    }
    // 0x8027F500: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027F504: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8027F508: jal         0x803176AC
    // 0x8027F50C: addiu       $a2, $s0, 0x65B4
    ctx->r6 = ADD32(ctx->r16, 0X65B4);
    static_3_803176AC(rdram, ctx);
        goto after_37;
    // 0x8027F50C: addiu       $a2, $s0, 0x65B4
    ctx->r6 = ADD32(ctx->r16, 0X65B4);
    after_37:
L_8027F510:
    // 0x8027F510: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8027F514: jal         0x80205BBC
    // 0x8027F518: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80205BBC(rdram, ctx);
        goto after_38;
    // 0x8027F518: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_38:
    // 0x8027F51C: jal         0x80205F60
    // 0x8027F520: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_80205F60(rdram, ctx);
        goto after_39;
    // 0x8027F520: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_39:
L_8027F524:
    // 0x8027F524: slti        $at, $s3, 0x11
    ctx->r1 = SIGNED(ctx->r19) < 0X11 ? 1 : 0;
L_8027F528:
    // 0x8027F528: bne         $at, $zero, L_8027F570
    if (ctx->r1 != 0) {
        // 0x8027F52C: slti        $at, $s3, 0x1B
        ctx->r1 = SIGNED(ctx->r19) < 0X1B ? 1 : 0;
            goto L_8027F570;
    }
    // 0x8027F52C: slti        $at, $s3, 0x1B
    ctx->r1 = SIGNED(ctx->r19) < 0X1B ? 1 : 0;
    // 0x8027F530: beql        $at, $zero, L_8027F574
    if (ctx->r1 == 0) {
        // 0x8027F534: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027F574;
    }
    goto skip_2;
    // 0x8027F534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x8027F538: lw          $v0, 0x65FC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X65FC);
    // 0x8027F53C: beql        $v0, $zero, L_8027F574
    if (ctx->r2 == 0) {
        // 0x8027F540: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027F574;
    }
    goto skip_3;
    // 0x8027F540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x8027F544: lw          $v1, 0x6C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X6C);
    // 0x8027F548: lw          $t9, 0x74($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X74);
    // 0x8027F54C: lh          $t1, 0x70($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X70);
    // 0x8027F550: jalr        $t9
    // 0x8027F554: addu        $a0, $t1, $v0
    ctx->r4 = ADD32(ctx->r9, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x8027F554: addu        $a0, $t1, $v0
    ctx->r4 = ADD32(ctx->r9, ctx->r2);
    after_40:
    // 0x8027F558: beq         $v0, $zero, L_8027F570
    if (ctx->r2 == 0) {
        // 0x8027F55C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8027F570;
    }
    // 0x8027F55C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8027F560: jal         0x80205BBC
    // 0x8027F564: addiu       $a1, $s0, 0x65B8
    ctx->r5 = ADD32(ctx->r16, 0X65B8);
    static_3_80205BBC(rdram, ctx);
        goto after_41;
    // 0x8027F564: addiu       $a1, $s0, 0x65B8
    ctx->r5 = ADD32(ctx->r16, 0X65B8);
    after_41:
    // 0x8027F568: jal         0x80205F60
    // 0x8027F56C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_80205F60(rdram, ctx);
        goto after_42;
    // 0x8027F56C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_42:
L_8027F570:
    // 0x8027F570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8027F574:
    // 0x8027F574: jal         0x802AC6F8
    // 0x8027F578: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802AC6F8(rdram, ctx);
        goto after_43;
    // 0x8027F578: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_43:
    // 0x8027F57C: jal         0x80221BC4
    // 0x8027F580: nop

    static_3_80221BC4(rdram, ctx);
        goto after_44;
    // 0x8027F580: nop

    after_44:
L_8027F584:
    // 0x8027F584: jal         0x80223E48
    // 0x8027F588: nop

    static_3_80223E48(rdram, ctx);
        goto after_45;
    // 0x8027F588: nop

    after_45:
    // 0x8027F58C: bne         $v0, $zero, L_8027F27C
    if (ctx->r2 != 0) {
        // 0x8027F590: nop
    
            goto L_8027F27C;
    }
    // 0x8027F590: nop

L_8027F594:
    // 0x8027F594: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027F598: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027F59C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027F5A0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027F5A4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027F5A8: jr          $ra
    // 0x8027F5AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8027F5AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_802B6F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B6FC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B6FC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B6FC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B6FCC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B6FD0: jal         0x80318F24
    // 0x802B6FD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    static_3_80318F24(rdram, ctx);
        goto after_0;
    // 0x802B6FD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B6FD8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802B6FDC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B6FE0: bnel        $a1, $at, L_802B6FF4
    if (ctx->r5 != ctx->r1) {
        // 0x802B6FE4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802B6FF4;
    }
    goto skip_0;
    // 0x802B6FE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x802B6FE8: b           L_802B7004
    // 0x802B6FEC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_802B7004;
    // 0x802B6FEC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802B6FF0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802B6FF4:
    // 0x802B6FF4: bne         $a1, $at, L_802B7004
    if (ctx->r5 != ctx->r1) {
        // 0x802B6FF8: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_802B7004;
    }
    // 0x802B6FF8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802B6FFC: b           L_802B7004
    // 0x802B7000: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_802B7004;
    // 0x802B7000: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_802B7004:
    // 0x802B7004: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802B7008: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x802B700C: beql        $a0, $zero, L_802B7024
    if (ctx->r4 == 0) {
        // 0x802B7010: lw          $a0, 0x774($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X774);
            goto L_802B7024;
    }
    goto skip_1;
    // 0x802B7010: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    skip_1:
    // 0x802B7014: jal         0x803169CC
    // 0x802B7018: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    static_3_803169CC(rdram, ctx);
        goto after_1;
    // 0x802B7018: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x802B701C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802B7020: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
L_802B7024:
    // 0x802B7024: beql        $a0, $zero, L_802B7038
    if (ctx->r4 == 0) {
        // 0x802B7028: addiu       $a0, $s0, 0xEDC
        ctx->r4 = ADD32(ctx->r16, 0XEDC);
            goto L_802B7038;
    }
    goto skip_2;
    // 0x802B7028: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    skip_2:
    // 0x802B702C: jal         0x803169CC
    // 0x802B7030: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_803169CC(rdram, ctx);
        goto after_2;
    // 0x802B7030: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x802B7034: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
L_802B7038:
    // 0x802B7038: jal         0x802C53D0
    // 0x802B703C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    static_3_802C53D0(rdram, ctx);
        goto after_3;
    // 0x802B703C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_3:
    // 0x802B7040: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802B7044: jal         0x802C53D0
    // 0x802B7048: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    static_3_802C53D0(rdram, ctx);
        goto after_4;
    // 0x802B7048: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_4:
    // 0x802B704C: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802B7050: jal         0x802C53D0
    // 0x802B7054: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    static_3_802C53D0(rdram, ctx);
        goto after_5;
    // 0x802B7054: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_5:
    // 0x802B7058: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802B705C: jal         0x802C53D0
    // 0x802B7060: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    static_3_802C53D0(rdram, ctx);
        goto after_6;
    // 0x802B7060: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_6:
    // 0x802B7064: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x802B7068: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B706C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802B7070: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802B7074: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802B7078: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B707C: jal         0x80309758
    // 0x802B7080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309758(rdram, ctx);
        goto after_7;
    // 0x802B7080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x802B7084: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B7088: jal         0x80318E80
    // 0x802B708C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_8;
    // 0x802B708C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802B7090: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B7094: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B7098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B709C: jr          $ra
    // 0x802B70A0: nop

    return;
    // 0x802B70A0: nop

;}
RECOMP_FUNC void D_802254A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802254A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802254A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802254B0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802254B4: jal         0x8022B948
    // 0x802254B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_0;
    // 0x802254B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x802254BC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802254C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802254C4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802254C8: jal         0x80225424
    // 0x802254CC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_1;
    // 0x802254CC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x802254D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802254D4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802254D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802254DC: jr          $ra
    // 0x802254E0: nop

    return;
    // 0x802254E0: nop

;}
RECOMP_FUNC void D_8020169C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020169C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802016A0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802016A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802016A8: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x802016AC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802016B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802016B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802016B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802016BC: bne         $at, $zero, L_802016F4
    if (ctx->r1 != 0) {
        // 0x802016C0: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_802016F4;
    }
    // 0x802016C0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x802016C4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802016C8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802016CC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802016D0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802016D4: addiu       $a2, $zero, 0x14A
    ctx->r6 = ADD32(0, 0X14A);
    // 0x802016D8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802016DC: jal         0x80231C9C
    // 0x802016E0: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x802016E0: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    after_0:
    // 0x802016E4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802016E8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802016EC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802016F0: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
L_802016F4:
    // 0x802016F4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802016F8: beq         $at, $zero, L_8020172C
    if (ctx->r1 == 0) {
        // 0x802016FC: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_8020172C;
    }
    // 0x802016FC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80201700: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80201704: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80201708: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8020170C: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80201710: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201714: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80201718: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8020171C: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x80201720: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201724: jal         0x80228DE0
    // 0x80201728: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80201728: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    after_1:
L_8020172C:
    // 0x8020172C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201730: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201734: jr          $ra
    // 0x80201738: nop

    return;
    // 0x80201738: nop

;}
RECOMP_FUNC void D_8027A0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A168: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027A16C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A170: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A174: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027A178: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8027A17C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8027A180: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8027A184: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8027A188: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A18C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8027A190: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A194: addiu       $a3, $t6, 0x6EE9
    ctx->r7 = ADD32(ctx->r14, 0X6EE9);
    // 0x8027A198: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8027A19C: addiu       $a1, $t6, 0x6EE8
    ctx->r5 = ADD32(ctx->r14, 0X6EE8);
    // 0x8027A1A0: jal         0x802A2DF0
    // 0x8027A1A4: addiu       $a0, $a0, 0x6EE0
    ctx->r4 = ADD32(ctx->r4, 0X6EE0);
    static_3_802A2DF0(rdram, ctx);
        goto after_0;
    // 0x8027A1A4: addiu       $a0, $a0, 0x6EE0
    ctx->r4 = ADD32(ctx->r4, 0X6EE0);
    after_0:
    // 0x8027A1A8: beq         $v0, $zero, L_8027A1F8
    if (ctx->r2 == 0) {
        // 0x8027A1AC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8027A1F8;
    }
    // 0x8027A1AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027A1B0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8027A1B4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027A1B8: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8027A1BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A1C0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8027A1C4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x8027A1C8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A1CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8027A1D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8027A1D4: jal         0x8029E784
    // 0x8027A1D8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_8029E784(rdram, ctx);
        goto after_1;
    // 0x8027A1D8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_1:
    // 0x8027A1DC: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8027A1E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027A1E4: lh          $t9, 0x28($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X28);
    // 0x8027A1E8: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x8027A1EC: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x8027A1F0: jalr        $t9
    // 0x8027A1F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027A1F4: nop

    after_2:
L_8027A1F8:
    // 0x8027A1F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A1FC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8027A200: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8027A204: jr          $ra
    // 0x8027A208: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027A208: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_8020379C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020379C: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x802037A0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x802037A4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x802037A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802037AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802037B0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x802037B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802037B8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802037BC: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802037C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802037C4: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x802037C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802037CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802037D0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802037D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802037D8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802037DC: jal         0x802011D0
    // 0x802037E0: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    static_3_802011D0(rdram, ctx);
        goto after_0;
    // 0x802037E0: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x802037E4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802037E8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802037EC: jal         0x802011D0
    // 0x802037F0: lbu         $a1, 0xAD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAD);
    static_3_802011D0(rdram, ctx);
        goto after_1;
    // 0x802037F0: lbu         $a1, 0xAD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAD);
    after_1:
    // 0x802037F4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802037F8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802037FC: jal         0x802011D0
    // 0x80203800: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    static_3_802011D0(rdram, ctx);
        goto after_2;
    // 0x80203800: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    after_2:
    // 0x80203804: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203808: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020380C: jal         0x802011D0
    // 0x80203810: lbu         $a1, 0xB0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XB0);
    static_3_802011D0(rdram, ctx);
        goto after_3;
    // 0x80203810: lbu         $a1, 0xB0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XB0);
    after_3:
    // 0x80203814: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203818: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020381C: jal         0x802011D0
    // 0x80203820: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    static_3_802011D0(rdram, ctx);
        goto after_4;
    // 0x80203820: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    after_4:
    // 0x80203824: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x80203828: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020382C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203830: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80203834: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80203838: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x8020383C: jal         0x802011D0
    // 0x80203840: nop

    static_3_802011D0(rdram, ctx);
        goto after_5;
    // 0x80203840: nop

    after_5:
    // 0x80203844: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203848: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020384C: jal         0x802011D0
    // 0x80203850: lbu         $a1, 0xAE($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAE);
    static_3_802011D0(rdram, ctx);
        goto after_6;
    // 0x80203850: lbu         $a1, 0xAE($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAE);
    after_6:
    // 0x80203854: lwc1        $f8, 0x90($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X90);
    // 0x80203858: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020385C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203860: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80203864: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80203868: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x8020386C: jal         0x802011D0
    // 0x80203870: nop

    static_3_802011D0(rdram, ctx);
        goto after_7;
    // 0x80203870: nop

    after_7:
    // 0x80203874: lwc1        $f16, 0x94($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X94);
    // 0x80203878: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020387C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203880: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80203884: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80203888: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x8020388C: jal         0x802011D0
    // 0x80203890: nop

    static_3_802011D0(rdram, ctx);
        goto after_8;
    // 0x80203890: nop

    after_8:
    // 0x80203894: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203898: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020389C: jal         0x802011D0
    // 0x802038A0: lbu         $a1, 0x8C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8C);
    static_3_802011D0(rdram, ctx);
        goto after_9;
    // 0x802038A0: lbu         $a1, 0x8C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8C);
    after_9:
    // 0x802038A4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802038A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802038AC: jal         0x802011D0
    // 0x802038B0: lw          $a1, 0x88($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X88);
    static_3_802011D0(rdram, ctx);
        goto after_10;
    // 0x802038B0: lw          $a1, 0x88($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X88);
    after_10:
    // 0x802038B4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802038B8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802038BC: jal         0x802011D0
    // 0x802038C0: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    static_3_802011D0(rdram, ctx);
        goto after_11;
    // 0x802038C0: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    after_11:
    // 0x802038C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802038C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802038CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802038D0: jr          $ra
    // 0x802038D4: nop

    return;
    // 0x802038D4: nop

;}
RECOMP_FUNC void D_8022B590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B590: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022B594: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8022B598: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022B59C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022B5A0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8022B5A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8022B5A8: beq         $a1, $at, L_8022B5E8
    if (ctx->r5 == ctx->r1) {
        // 0x8022B5AC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8022B5E8;
    }
    // 0x8022B5AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B5B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8022B5B4: beq         $a1, $at, L_8022B5E8
    if (ctx->r5 == ctx->r1) {
        // 0x8022B5B8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8022B5E8;
    }
    // 0x8022B5B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8022B5BC: beq         $a1, $at, L_8022B5E8
    if (ctx->r5 == ctx->r1) {
        // 0x8022B5C0: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8022B5E8;
    }
    // 0x8022B5C0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8022B5C4: beq         $a1, $at, L_8022B5E8
    if (ctx->r5 == ctx->r1) {
        // 0x8022B5C8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8022B5E8;
    }
    // 0x8022B5C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022B5CC: jal         0x80231A24
    // 0x8022B5D0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022B5D0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022B5D4: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x8022B5D8: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8022B5DC: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x8022B5E0: b           L_8022B714
    // 0x8022B5E4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
        goto L_8022B714;
    // 0x8022B5E4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
L_8022B5E8:
    // 0x8022B5E8: sll         $t8, $s1, 0
    ctx->r24 = S32(ctx->r17 << 0);
    // 0x8022B5EC: bgez        $t8, L_8022B6F4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8022B5F0: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8022B6F4;
    }
    // 0x8022B5F0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022B5F4: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x8022B5F8: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x8022B5FC: sltiu       $at, $s0, 0x2
    ctx->r1 = ctx->r16 < 0X2 ? 1 : 0;
    // 0x8022B600: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x8022B604: bne         $at, $zero, L_8022B638
    if (ctx->r1 != 0) {
        // 0x8022B608: sw          $t9, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r25;
            goto L_8022B638;
    }
    // 0x8022B608: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8022B60C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8022B610: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8022B614: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022B618: jal         0x8023D164
    // 0x8022B61C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    static_3_8023D164(rdram, ctx);
        goto after_1;
    // 0x8022B61C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_1:
    // 0x8022B620: lbu         $t2, 0x1($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X1);
    // 0x8022B624: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x8022B628: or          $t6, $t4, $v0
    ctx->r14 = ctx->r12 | ctx->r2;
    // 0x8022B62C: or          $t7, $t2, $v1
    ctx->r15 = ctx->r10 | ctx->r3;
    // 0x8022B630: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x8022B634: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
L_8022B638:
    // 0x8022B638: sltiu       $at, $s0, 0x3
    ctx->r1 = ctx->r16 < 0X3 ? 1 : 0;
    // 0x8022B63C: bne         $at, $zero, L_8022B680
    if (ctx->r1 != 0) {
        // 0x8022B640: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_8022B680;
    }
    // 0x8022B640: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8022B644: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B648: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022B64C: jal         0x8023D164
    // 0x8022B650: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    static_3_8023D164(rdram, ctx);
        goto after_2;
    // 0x8022B650: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x8022B654: lbu         $t3, 0x3($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X3);
    // 0x8022B658: lbu         $t2, 0x2($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X2);
    // 0x8022B65C: sra         $t8, $t3, 31
    ctx->r24 = S32(SIGNED(ctx->r11) >> 31);
    // 0x8022B660: sll         $t4, $t2, 8
    ctx->r12 = S32(ctx->r10 << 8);
    // 0x8022B664: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x8022B668: or          $t0, $t8, $v0
    ctx->r8 = ctx->r24 | ctx->r2;
    // 0x8022B66C: or          $t1, $t3, $v1
    ctx->r9 = ctx->r11 | ctx->r3;
    // 0x8022B670: or          $t9, $t1, $t4
    ctx->r25 = ctx->r9 | ctx->r12;
    // 0x8022B674: or          $t8, $t0, $t6
    ctx->r24 = ctx->r8 | ctx->r14;
    // 0x8022B678: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8022B67C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
L_8022B680:
    // 0x8022B680: sltiu       $at, $s0, 0x5
    ctx->r1 = ctx->r16 < 0X5 ? 1 : 0;
    // 0x8022B684: bne         $at, $zero, L_8022B714
    if (ctx->r1 != 0) {
        // 0x8022B688: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_8022B714;
    }
    // 0x8022B688: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8022B68C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B690: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022B694: jal         0x8023D164
    // 0x8022B698: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8023D164(rdram, ctx);
        goto after_3;
    // 0x8022B698: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_3:
    // 0x8022B69C: lbu         $t5, 0x7($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X7);
    // 0x8022B6A0: lbu         $t0, 0x4($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X4);
    // 0x8022B6A4: sra         $t2, $t5, 31
    ctx->r10 = S32(SIGNED(ctx->r13) >> 31);
    // 0x8022B6A8: or          $t4, $t2, $v0
    ctx->r12 = ctx->r10 | ctx->r2;
    // 0x8022B6AC: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x8022B6B0: lbu         $t2, 0x5($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X5);
    // 0x8022B6B4: sra         $t6, $t1, 31
    ctx->r14 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8022B6B8: or          $t8, $t4, $t6
    ctx->r24 = ctx->r12 | ctx->r14;
    // 0x8022B6BC: lbu         $t6, 0x6($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X6);
    // 0x8022B6C0: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8022B6C4: or          $t5, $t5, $v1
    ctx->r13 = ctx->r13 | ctx->r3;
    // 0x8022B6C8: or          $t9, $t5, $t1
    ctx->r25 = ctx->r13 | ctx->r9;
    // 0x8022B6CC: sra         $t0, $t3, 31
    ctx->r8 = S32(SIGNED(ctx->r11) >> 31);
    // 0x8022B6D0: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8022B6D4: sra         $t2, $t7, 31
    ctx->r10 = S32(SIGNED(ctx->r15) >> 31);
    // 0x8022B6D8: or          $t4, $t8, $t0
    ctx->r12 = ctx->r24 | ctx->r8;
    // 0x8022B6DC: or          $t5, $t9, $t3
    ctx->r13 = ctx->r25 | ctx->r11;
    // 0x8022B6E0: or          $t9, $t5, $t7
    ctx->r25 = ctx->r13 | ctx->r15;
    // 0x8022B6E4: or          $t8, $t4, $t2
    ctx->r24 = ctx->r12 | ctx->r10;
    // 0x8022B6E8: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8022B6EC: b           L_8022B714
    // 0x8022B6F0: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
        goto L_8022B714;
    // 0x8022B6F0: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
L_8022B6F4:
    // 0x8022B6F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022B6F8: jal         0x8022B460
    // 0x8022B6FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8022B460(rdram, ctx);
        goto after_4;
    // 0x8022B6FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x8022B700: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022B704: jal         0x8022B5E0
    // 0x8022B708: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_8022B5E0(rdram, ctx);
        goto after_5;
    // 0x8022B708: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8022B70C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8022B710: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
L_8022B714:
    // 0x8022B714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B718: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8022B71C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B720: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022B724: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022B728: jr          $ra
    // 0x8022B72C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8022B72C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8029F058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F0D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029F0DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029F0E0: lwc1        $f10, 0x34($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8029F0E4: lwc1        $f8, 0x34($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8029F0E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029F0EC: lwc1        $f6, 0x30($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8029F0F0: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8029F0F4: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8029F0F8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x8029F0FC: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8029F100: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x8029F104: nop

    // 0x8029F108: bc1fl       L_8029F138
    if (!c1cs) {
        // 0x8029F10C: swc1        $f12, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
            goto L_8029F138;
    }
    goto skip_0;
    // 0x8029F10C: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    skip_0:
    // 0x8029F110: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x8029F114: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F118: bc1f        L_8029F128
    if (!c1cs) {
        // 0x8029F11C: nop
    
            goto L_8029F128;
    }
    // 0x8029F11C: nop

    // 0x8029F120: b           L_8029F168
    // 0x8029F124: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_8029F168;
    // 0x8029F124: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8029F128:
    // 0x8029F128: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F12C: b           L_8029F168
    // 0x8029F130: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_8029F168;
    // 0x8029F130: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8029F134: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
L_8029F138:
    // 0x8029F138: jal         0x8022ADA8
    // 0x8029F13C: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    static_3_8022ADA8(rdram, ctx);
        goto after_0;
    // 0x8029F13C: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8029F140: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029F144: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8029F148: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8029F14C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8029F150: div.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8029F154: mul.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8029F158: nop

    // 0x8029F15C: mul.s       $f14, $f4, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8029F160: jal         0x8022AE1C
    // 0x8029F164: nop

    static_3_8022AE1C(rdram, ctx);
        goto after_1;
    // 0x8029F164: nop

    after_1:
L_8029F168:
    // 0x8029F168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029F16C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029F170: jr          $ra
    // 0x8029F174: nop

    return;
    // 0x8029F174: nop

;}
RECOMP_FUNC void D_802E9F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9FB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802E9FBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E9FC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E9FC4: jal         0x8031A3E0
    // 0x802E9FC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    static_3_8031A3E0(rdram, ctx);
        goto after_0;
    // 0x802E9FC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x802E9FCC: blezl       $v0, L_802EA004
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802E9FD0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802EA004;
    }
    goto skip_0;
    // 0x802E9FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_802E9FD4:
    // 0x802E9FD4: jal         0x8031A3EC
    // 0x802E9FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031A3EC(rdram, ctx);
        goto after_1;
    // 0x802E9FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802E9FDC: jal         0x8031AA94
    // 0x802E9FE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_8031AA94(rdram, ctx);
        goto after_2;
    // 0x802E9FE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x802E9FE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802E9FE8: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x802E9FEC: jal         0x8031A3E0
    // 0x802E9FF0: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    static_3_8031A3E0(rdram, ctx);
        goto after_3;
    // 0x802E9FF0: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    after_3:
    // 0x802E9FF4: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802E9FF8: bne         $at, $zero, L_802E9FD4
    if (ctx->r1 != 0) {
        // 0x802E9FFC: nop
    
            goto L_802E9FD4;
    }
    // 0x802E9FFC: nop

    // 0x802EA000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802EA004:
    // 0x802EA004: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802EA008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802EA00C: jr          $ra
    // 0x802EA010: nop

    return;
    // 0x802EA010: nop

;}

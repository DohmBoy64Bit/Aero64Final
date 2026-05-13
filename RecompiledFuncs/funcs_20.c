#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802E1DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1E74: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x802E1E78: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x802E1E7C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802E1E80: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802E1E84: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x802E1E88: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x802E1E8C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x802E1E90: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802E1E94: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802E1E98: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802E1E9C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802E1EA0: jal         0x802AEDEC
    // 0x802E1EA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_0;
    // 0x802E1EA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802E1EA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802E1EAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E1EB0: jal         0x802BCF2C
    // 0x802E1EB4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    static_3_802BCF2C(rdram, ctx);
        goto after_1;
    // 0x802E1EB4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_1:
    // 0x802E1EB8: lw          $t6, 0x78($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X78);
    // 0x802E1EBC: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x802E1EC0: ori         $at, $at, 0x7FE7
    ctx->r1 = ctx->r1 | 0X7FE7;
    // 0x802E1EC4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x802E1EC8: sw          $t7, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r15;
    // 0x802E1ECC: jal         0x802BCF20
    // 0x802E1ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802BCF20(rdram, ctx);
        goto after_2;
    // 0x802E1ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802E1ED4: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x802E1ED8: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x802E1EDC: sh          $zero, 0x0($s4)
    MEM_H(0X0, ctx->r20) = 0;
    // 0x802E1EE0: sh          $zero, 0x400($s3)
    MEM_H(0X400, ctx->r19) = 0;
    // 0x802E1EE4: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x802E1EE8: jal         0x802AEE54
    // 0x802E1EEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_3;
    // 0x802E1EEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x802E1EF0: lhu         $v1, 0x10($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X10);
    // 0x802E1EF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E1EF8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802E1EFC: bne         $v1, $at, L_802E1F14
    if (ctx->r3 != ctx->r1) {
        // 0x802E1F00: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_802E1F14;
    }
    // 0x802E1F00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802E1F04: jal         0x80313E0C
    // 0x802E1F08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_80313E0C(rdram, ctx);
        goto after_4;
    // 0x802E1F08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x802E1F0C: b           L_802E1F1C
    // 0x802E1F10: nop

        goto L_802E1F1C;
    // 0x802E1F10: nop

L_802E1F14:
    // 0x802E1F14: jal         0x80313E0C
    // 0x802E1F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80313E0C(rdram, ctx);
        goto after_5;
    // 0x802E1F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_802E1F1C:
    // 0x802E1F1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E1F20: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E1F24: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802E1F28: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x802E1F2C: addiu       $s5, $zero, 0x32
    ctx->r21 = ADD32(0, 0X32);
    // 0x802E1F30: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
L_802E1F34:
    // 0x802E1F34: jal         0x8021BA90
    // 0x802E1F38: nop

    func_8021BA90(rdram, ctx);
        goto after_6;
    // 0x802E1F38: nop

    after_6:
    // 0x802E1F3C: lw          $t8, 0x550($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X550);
    // 0x802E1F40: addiu       $a1, $zero, 0xBE
    ctx->r5 = ADD32(0, 0XBE);
    // 0x802E1F44: sw          $v0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->r2;
    // 0x802E1F48: lw          $v1, 0x550($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X550);
    // 0x802E1F4C: lbu         $t9, 0x18($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X18);
    // 0x802E1F50: bne         $t9, $zero, L_802E1F80
    if (ctx->r25 != 0) {
        // 0x802E1F54: nop
    
            goto L_802E1F80;
    }
    // 0x802E1F54: nop

    // 0x802E1F58: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
    // 0x802E1F5C: jal         0x8021ACB0
    // 0x802E1F60: addiu       $a1, $zero, 0xBF
    ctx->r5 = ADD32(0, 0XBF);
    static_3_8021ACB0(rdram, ctx);
        goto after_7;
    // 0x802E1F60: addiu       $a1, $zero, 0xBF
    ctx->r5 = ADD32(0, 0XBF);
    after_7:
    // 0x802E1F64: lh          $v0, 0x0($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X0);
    // 0x802E1F68: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x802E1F6C: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x802E1F70: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x802E1F74: sh          $t0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r8;
    // 0x802E1F78: b           L_802E1F88
    // 0x802E1F7C: sh          $s2, 0x402($t2)
    MEM_H(0X402, ctx->r10) = ctx->r18;
        goto L_802E1F88;
    // 0x802E1F7C: sh          $s2, 0x402($t2)
    MEM_H(0X402, ctx->r10) = ctx->r18;
L_802E1F80:
    // 0x802E1F80: jal         0x8021ACB0
    // 0x802E1F84: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
    static_3_8021ACB0(rdram, ctx);
        goto after_8;
    // 0x802E1F84: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
    after_8:
L_802E1F88:
    // 0x802E1F88: jal         0x8022970C
    // 0x802E1F8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8022970C(rdram, ctx);
        goto after_9;
    // 0x802E1F8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x802E1F90: lw          $v1, 0x550($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X550);
    // 0x802E1F94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E1F98: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x802E1F9C: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x802E1FA0: jal         0x8022A0D0
    // 0x802E1FA4: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    static_3_8022A0D0(rdram, ctx);
        goto after_10;
    // 0x802E1FA4: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    after_10:
    // 0x802E1FA8: lw          $t3, 0x550($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X550);
    // 0x802E1FAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E1FB0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802E1FB4: lwc1        $f4, 0xC($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XC);
    // 0x802E1FB8: mul.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x802E1FBC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802E1FC0: jal         0x802D01D4
    // 0x802E1FC4: nop

    static_3_802D01D4(rdram, ctx);
        goto after_11;
    // 0x802E1FC4: nop

    after_11:
    // 0x802E1FC8: lw          $t4, 0x550($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X550);
    // 0x802E1FCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E1FD0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802E1FD4: lwc1        $f8, 0x10($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X10);
    // 0x802E1FD8: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x802E1FDC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802E1FE0: jal         0x802D01D4
    // 0x802E1FE4: nop

    static_3_802D01D4(rdram, ctx);
        goto after_12;
    // 0x802E1FE4: nop

    after_12:
    // 0x802E1FE8: lw          $t5, 0x550($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X550);
    // 0x802E1FEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E1FF0: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802E1FF4: lwc1        $f16, 0x14($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X14);
    // 0x802E1FF8: mul.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x802E1FFC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802E2000: jal         0x802D01D4
    // 0x802E2004: nop

    static_3_802D01D4(rdram, ctx);
        goto after_13;
    // 0x802E2004: nop

    after_13:
    // 0x802E2008: lw          $t6, 0x550($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X550);
    // 0x802E200C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E2010: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802E2014: jal         0x8021B4B0
    // 0x802E2018: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    static_3_8021B4B0(rdram, ctx);
        goto after_14;
    // 0x802E2018: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    after_14:
    // 0x802E201C: lw          $t7, 0x550($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X550);
    // 0x802E2020: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802E2024: jal         0x8021B838
    // 0x802E2028: lw          $a0, 0x1C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C);
    static_3_8021B838(rdram, ctx);
        goto after_15;
    // 0x802E2028: lw          $a0, 0x1C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C);
    after_15:
    // 0x802E202C: lh          $t8, 0x400($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X400);
    // 0x802E2030: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802E2034: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E2038: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802E203C: bne         $s2, $s5, L_802E1F34
    if (ctx->r18 != ctx->r21) {
        // 0x802E2040: sh          $t9, 0x400($s3)
        MEM_H(0X400, ctx->r19) = ctx->r25;
            goto L_802E1F34;
    }
    // 0x802E2040: sh          $t9, 0x400($s3)
    MEM_H(0X400, ctx->r19) = ctx->r25;
    // 0x802E2044: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x802E2048: jal         0x802AEE54
    // 0x802E204C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_16;
    // 0x802E204C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x802E2050: sb          $zero, 0x968($v0)
    MEM_B(0X968, ctx->r2) = 0;
    // 0x802E2054: lw          $t0, 0x14($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X14);
    // 0x802E2058: sb          $zero, 0x898($t0)
    MEM_B(0X898, ctx->r8) = 0;
    // 0x802E205C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802E2060: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x802E2064: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x802E2068: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x802E206C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x802E2070: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802E2074: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802E2078: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802E207C: jr          $ra
    // 0x802E2080: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x802E2080: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void D_802E9BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9C64: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E9C68: jr          $ra
    // 0x802E9C6C: sb          $a1, 0x198($a0)
    MEM_B(0X198, ctx->r4) = ctx->r5;
    return;
    // 0x802E9C6C: sb          $a1, 0x198($a0)
    MEM_B(0X198, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802E860C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E868C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E8690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E8694: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E8698: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E869C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E86A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E86A4: bne         $v1, $zero, L_802E86CC
    if (ctx->r3 != 0) {
        // 0x802E86A8: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E86CC;
    }
    // 0x802E86A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E86AC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E86B0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E86B4: jal         0x80231A24
    // 0x802E86B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E86B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E86BC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E86C0: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E86C4: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E86C8: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E86CC:
    // 0x802E86CC: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E86D0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802E86D4: lw          $t9, 0x8C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8C);
    // 0x802E86D8: lh          $t7, 0x88($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X88);
    // 0x802E86DC: jalr        $t9
    // 0x802E86E0: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E86E0: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E86E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E86E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E86EC: jr          $ra
    // 0x802E86F0: nop

    return;
    // 0x802E86F0: nop

;}
RECOMP_FUNC void D_802423CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802423CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802423D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802423D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802423D8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802423DC: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802423E0: addiu       $a2, $a2, 0x3810
    ctx->r6 = ADD32(ctx->r6, 0X3810);
    // 0x802423E4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802423E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802423EC: jal         0x80249920
    // 0x802423F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80249920(rdram, ctx);
        goto after_0;
    // 0x802423F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802423F4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x802423F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802423FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80242400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80242404: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80242408: jal         0x80236CD0
    // 0x8024240C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_1;
    // 0x8024240C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80242410: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80242414: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80242418: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8024241C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80242420: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80242424: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x80242428: sw          $t7, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r15;
    // 0x8024242C: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x80242430: sw          $zero, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = 0;
    // 0x80242434: sw          $zero, 0x28($t0)
    MEM_W(0X28, ctx->r8) = 0;
    // 0x80242438: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x8024243C: swc1        $f4, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f4.u32l;
    // 0x80242440: swc1        $f6, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f6.u32l;
    // 0x80242444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80242448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024244C: jr          $ra
    // 0x80242450: nop

    return;
    // 0x80242450: nop

;}
RECOMP_FUNC void D_802AA9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AAA6C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AAA70: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802AAA74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AAA78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AAA7C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802AAA80: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x802AAA84: jal         0x8021ACB0
    // 0x802AAA88: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AAA88: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    after_0:
    // 0x802AAA8C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AAA90: jal         0x8021B838
    // 0x802AAA94: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AAA94: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AAA98: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AAA9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AAAA0: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AAAA4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AAAA8: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x802AAAAC: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AAAB0: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AAAB4: lh          $t7, 0xB8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB8);
    // 0x802AAAB8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x802AAABC: jalr        $t9
    // 0x802AAAC0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AAAC0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_2:
    // 0x802AAAC4: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AAAC8: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x802AAACC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802AAAD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AAAD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AAAD8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AAADC: jal         0x80317194
    // 0x802AAAE0: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_3;
    // 0x802AAAE0: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_3:
    // 0x802AAAE4: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AAAE8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x802AAAEC: jal         0x802D51DC
    // 0x802AAAF0: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_4;
    // 0x802AAAF0: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    after_4:
    // 0x802AAAF4: addiu       $s1, $s0, 0x1070
    ctx->r17 = ADD32(ctx->r16, 0X1070);
    // 0x802AAAF8: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AAAFC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802AAB00: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x802AAB04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802AAB08: jal         0x802C4A20
    // 0x802AAB0C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    static_3_802C4A20(rdram, ctx);
        goto after_5;
    // 0x802AAB0C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_5:
    // 0x802AAB10: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x802AAB14: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802AAB18: jal         0x802C5824
    // 0x802AAB1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802C5824(rdram, ctx);
        goto after_6;
    // 0x802AAB1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x802AAB20: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x802AAB24: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802AAB28: jal         0x802C5818
    // 0x802AAB2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802C5818(rdram, ctx);
        goto after_7;
    // 0x802AAB2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x802AAB30: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x802AAB34: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802AAB38: jal         0x802C580C
    // 0x802AAB3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802C580C(rdram, ctx);
        goto after_8;
    // 0x802AAB3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x802AAB40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802AAB44: jal         0x802C5830
    // 0x802AAB48: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    static_3_802C5830(rdram, ctx);
        goto after_9;
    // 0x802AAB48: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    after_9:
    // 0x802AAB4C: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AAB50: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x802AAB54: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAB58: jal         0x802C4A20
    // 0x802AAB5C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802AAB5C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802AAB60: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802AAB64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AAB68: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802AAB6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AAB70: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802AAB74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AAB78: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AAB7C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AAB80: sw          $zero, 0x664($s0)
    MEM_W(0X664, ctx->r16) = 0;
    // 0x802AAB84: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AAB88: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x802AAB8C: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x802AAB90: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    // 0x802AAB94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AAB98: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802AAB9C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802AABA0: jr          $ra
    // 0x802AABA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802AABA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802E5054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E50D4: addiu       $sp, $sp, -0x230
    ctx->r29 = ADD32(ctx->r29, -0X230);
    // 0x802E50D8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802E50DC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x802E50E0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x802E50E4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x802E50E8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802E50EC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802E50F0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x802E50F4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x802E50F8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802E50FC: lbu         $t6, 0xDBB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDBB);
    // 0x802E5100: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x802E5104: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x802E5108: bne         $t6, $zero, L_802E53C8
    if (ctx->r14 != 0) {
        // 0x802E510C: or          $s4, $a0, $zero
        ctx->r20 = ctx->r4 | 0;
            goto L_802E53C8;
    }
    // 0x802E510C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802E5110: lbu         $v0, 0xDB8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDB8);
    // 0x802E5114: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E5118: bnel        $v0, $at, L_802E512C
    if (ctx->r2 != ctx->r1) {
        // 0x802E511C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802E512C;
    }
    goto skip_0;
    // 0x802E511C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x802E5120: lbu         $t7, 0xDB9($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XDB9);
    // 0x802E5124: beq         $t7, $zero, L_802E5144
    if (ctx->r15 == 0) {
        // 0x802E5128: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802E5144;
    }
    // 0x802E5128: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802E512C:
    // 0x802E512C: bnel        $v0, $at, L_802E519C
    if (ctx->r2 != ctx->r1) {
        // 0x802E5130: mtc1        $zero, $f24
        ctx->f24.u32l = 0;
            goto L_802E519C;
    }
    goto skip_1;
    // 0x802E5130: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    skip_1:
    // 0x802E5134: lbu         $t8, 0xDB9($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0XDB9);
    // 0x802E5138: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E513C: bnel        $t8, $at, L_802E519C
    if (ctx->r24 != ctx->r1) {
        // 0x802E5140: mtc1        $zero, $f24
        ctx->f24.u32l = 0;
            goto L_802E519C;
    }
    goto skip_2;
    // 0x802E5140: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    skip_2:
L_802E5144:
    // 0x802E5144: lw          $v0, 0x1A0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X1A0);
    // 0x802E5148: addiu       $s1, $sp, 0x1EC
    ctx->r17 = ADD32(ctx->r29, 0X1EC);
    // 0x802E514C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802E5150: lh          $t9, 0x60($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X60);
    // 0x802E5154: addu        $a0, $t9, $s4
    ctx->r4 = ADD32(ctx->r25, ctx->r20);
    // 0x802E5158: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802E515C: jalr        $t9
    // 0x802E5160: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802E5160: nop

    after_0:
    // 0x802E5164: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x802E5168: addiu       $s0, $s4, 0x2AC
    ctx->r16 = ADD32(ctx->r20, 0X2AC);
    // 0x802E516C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E5170: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E5174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E5178: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x802E517C: jal         0x802C53E4
    // 0x802E5180: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_1;
    // 0x802E5180: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_1:
    // 0x802E5184: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E5188: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E518C: jal         0x802C5468
    // 0x802E5190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5468(rdram, ctx);
        goto after_2;
    // 0x802E5190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802E5194: lbu         $v0, 0xDB8($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XDB8);
    // 0x802E5198: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
L_802E519C:
    // 0x802E519C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E51A0: bnel        $v0, $at, L_802E5208
    if (ctx->r2 != ctx->r1) {
        // 0x802E51A4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802E5208;
    }
    goto skip_3;
    // 0x802E51A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_3:
    // 0x802E51A8: lbu         $t0, 0xDB9($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0XDB9);
    // 0x802E51AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802E51B0: bnel        $t0, $at, L_802E5208
    if (ctx->r8 != ctx->r1) {
        // 0x802E51B4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802E5208;
    }
    goto skip_4;
    // 0x802E51B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_4:
    // 0x802E51B8: lw          $v0, 0x1A0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X1A0);
    // 0x802E51BC: addiu       $s1, $sp, 0x1A8
    ctx->r17 = ADD32(ctx->r29, 0X1A8);
    // 0x802E51C0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802E51C4: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802E51C8: lh          $t1, 0x60($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X60);
    // 0x802E51CC: jalr        $t9
    // 0x802E51D0: addu        $a0, $t1, $s4
    ctx->r4 = ADD32(ctx->r9, ctx->r20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802E51D0: addu        $a0, $t1, $s4
    ctx->r4 = ADD32(ctx->r9, ctx->r20);
    after_3:
    // 0x802E51D4: addiu       $s0, $s4, 0x768
    ctx->r16 = ADD32(ctx->r20, 0X768);
    // 0x802E51D8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E51DC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E51E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E51E4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x802E51E8: jal         0x802C53E4
    // 0x802E51EC: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_4;
    // 0x802E51EC: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_4:
    // 0x802E51F0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E51F4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E51F8: jal         0x802C5468
    // 0x802E51FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5468(rdram, ctx);
        goto after_5;
    // 0x802E51FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802E5200: lbu         $v0, 0xDB8($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XDB8);
    // 0x802E5204: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802E5208:
    // 0x802E5208: bnel        $v0, $at, L_802E52AC
    if (ctx->r2 != ctx->r1) {
        // 0x802E520C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802E52AC;
    }
    goto skip_5;
    // 0x802E520C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_5:
    // 0x802E5210: lbu         $t2, 0xDB9($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0XDB9);
    // 0x802E5214: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802E5218: bnel        $t2, $at, L_802E52AC
    if (ctx->r10 != ctx->r1) {
        // 0x802E521C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802E52AC;
    }
    goto skip_6;
    // 0x802E521C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_6:
    // 0x802E5220: lw          $v0, 0x1A0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X1A0);
    // 0x802E5224: addiu       $a1, $sp, 0x168
    ctx->r5 = ADD32(ctx->r29, 0X168);
    // 0x802E5228: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802E522C: lh          $t3, 0x60($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X60);
    // 0x802E5230: jalr        $t9
    // 0x802E5234: addu        $a0, $t3, $s4
    ctx->r4 = ADD32(ctx->r11, ctx->r20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802E5234: addu        $a0, $t3, $s4
    ctx->r4 = ADD32(ctx->r11, ctx->r20);
    after_6:
    // 0x802E5238: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x802E523C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802E5240: addiu       $s0, $s4, 0x768
    ctx->r16 = ADD32(ctx->r20, 0X768);
    // 0x802E5244: addiu       $s3, $sp, 0x128
    ctx->r19 = ADD32(ctx->r29, 0X128);
L_802E5248:
    // 0x802E5248: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802E524C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802E5250: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802E5254: jal         0x803146C0
    // 0x802E5258: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_803146C0(rdram, ctx);
        goto after_7;
    // 0x802E5258: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_7:
    // 0x802E525C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E5260: jal         0x802C57AC
    // 0x802E5264: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_802C57AC(rdram, ctx);
        goto after_8;
    // 0x802E5264: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_8:
    // 0x802E5268: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E526C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E5270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E5274: addiu       $a3, $sp, 0x168
    ctx->r7 = ADD32(ctx->r29, 0X168);
    // 0x802E5278: jal         0x802C53E4
    // 0x802E527C: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_9;
    // 0x802E527C: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_9:
    // 0x802E5280: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E5284: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E5288: jal         0x802C5468
    // 0x802E528C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5468(rdram, ctx);
        goto after_10;
    // 0x802E528C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x802E5290: addiu       $s2, $s2, 0x194
    ctx->r18 = ADD32(ctx->r18, 0X194);
    // 0x802E5294: addiu       $at, $zero, 0x4BC
    ctx->r1 = ADD32(0, 0X4BC);
    // 0x802E5298: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x802E529C: bne         $s2, $at, L_802E5248
    if (ctx->r18 != ctx->r1) {
        // 0x802E52A0: addiu       $s0, $s0, 0x194
        ctx->r16 = ADD32(ctx->r16, 0X194);
            goto L_802E5248;
    }
    // 0x802E52A0: addiu       $s0, $s0, 0x194
    ctx->r16 = ADD32(ctx->r16, 0X194);
    // 0x802E52A4: lbu         $v0, 0xDB8($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XDB8);
    // 0x802E52A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802E52AC:
    // 0x802E52AC: bnel        $v0, $at, L_802E5368
    if (ctx->r2 != ctx->r1) {
        // 0x802E52B0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802E5368;
    }
    goto skip_7;
    // 0x802E52B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_7:
    // 0x802E52B4: lbu         $t4, 0xDB9($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0XDB9);
    // 0x802E52B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E52BC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E52C0: bne         $t4, $at, L_802E5364
    if (ctx->r12 != ctx->r1) {
        // 0x802E52C4: addiu       $t6, $t6, 0x0
        ctx->r14 = ADD32(ctx->r14, 0X0);
            goto L_802E5364;
    }
    // 0x802E52C4: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E52C8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802E52CC: addiu       $t5, $sp, 0x9C
    ctx->r13 = ADD32(ctx->r29, 0X9C);
    // 0x802E52D0: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x802E52D4: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x802E52D8: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x802E52DC: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x802E52E0: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x802E52E4: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x802E52E8: lw          $v0, 0x1A0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X1A0);
    // 0x802E52EC: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802E52F0: lh          $t0, 0x60($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X60);
    // 0x802E52F4: jalr        $t9
    // 0x802E52F8: addu        $a0, $t0, $s4
    ctx->r4 = ADD32(ctx->r8, ctx->r20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x802E52F8: addu        $a0, $t0, $s4
    ctx->r4 = ADD32(ctx->r8, ctx->r20);
    after_11:
    // 0x802E52FC: addiu       $s1, $sp, 0x9C
    ctx->r17 = ADD32(ctx->r29, 0X9C);
    // 0x802E5300: addiu       $s0, $s4, 0x2AC
    ctx->r16 = ADD32(ctx->r20, 0X2AC);
    // 0x802E5304: addiu       $s3, $sp, 0xA8
    ctx->r19 = ADD32(ctx->r29, 0XA8);
    // 0x802E5308: addiu       $s2, $sp, 0xE8
    ctx->r18 = ADD32(ctx->r29, 0XE8);
L_802E530C:
    // 0x802E530C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802E5310: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802E5314: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x802E5318: jal         0x803146C0
    // 0x802E531C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    static_3_803146C0(rdram, ctx);
        goto after_12;
    // 0x802E531C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_12:
    // 0x802E5320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E5324: jal         0x802C57AC
    // 0x802E5328: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802C57AC(rdram, ctx);
        goto after_13;
    // 0x802E5328: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_13:
    // 0x802E532C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E5330: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E5334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E5338: addiu       $a3, $sp, 0xA8
    ctx->r7 = ADD32(ctx->r29, 0XA8);
    // 0x802E533C: jal         0x802C53E4
    // 0x802E5340: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_14;
    // 0x802E5340: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_14:
    // 0x802E5344: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E5348: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E534C: jal         0x802C5468
    // 0x802E5350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5468(rdram, ctx);
        goto after_15;
    // 0x802E5350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x802E5354: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802E5358: bne         $s1, $s3, L_802E530C
    if (ctx->r17 != ctx->r19) {
        // 0x802E535C: addiu       $s0, $s0, 0x194
        ctx->r16 = ADD32(ctx->r16, 0X194);
            goto L_802E530C;
    }
    // 0x802E535C: addiu       $s0, $s0, 0x194
    ctx->r16 = ADD32(ctx->r16, 0X194);
    // 0x802E5360: lbu         $v0, 0xDB8($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XDB8);
L_802E5364:
    // 0x802E5364: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_802E5368:
    // 0x802E5368: bnel        $v0, $at, L_802E53CC
    if (ctx->r2 != ctx->r1) {
        // 0x802E536C: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_802E53CC;
    }
    goto skip_8;
    // 0x802E536C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_8:
    // 0x802E5370: lbu         $t1, 0xDB9($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0XDB9);
    // 0x802E5374: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802E5378: bnel        $t1, $at, L_802E53CC
    if (ctx->r9 != ctx->r1) {
        // 0x802E537C: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_802E53CC;
    }
    goto skip_9;
    // 0x802E537C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_9:
    // 0x802E5380: lw          $v0, 0x1A0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X1A0);
    // 0x802E5384: addiu       $s1, $sp, 0x5C
    ctx->r17 = ADD32(ctx->r29, 0X5C);
    // 0x802E5388: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802E538C: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802E5390: lh          $t2, 0x60($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X60);
    // 0x802E5394: jalr        $t9
    // 0x802E5398: addu        $a0, $t2, $s4
    ctx->r4 = ADD32(ctx->r10, ctx->r20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x802E5398: addu        $a0, $t2, $s4
    ctx->r4 = ADD32(ctx->r10, ctx->r20);
    after_16:
    // 0x802E539C: addiu       $s0, $s4, 0xC24
    ctx->r16 = ADD32(ctx->r20, 0XC24);
    // 0x802E53A0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E53A4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E53A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E53AC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x802E53B0: jal         0x802C53E4
    // 0x802E53B4: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_17;
    // 0x802E53B4: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_17:
    // 0x802E53B8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E53BC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E53C0: jal         0x802C5468
    // 0x802E53C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5468(rdram, ctx);
        goto after_18;
    // 0x802E53C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
L_802E53C8:
    // 0x802E53C8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_802E53CC:
    // 0x802E53CC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802E53D0: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x802E53D4: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x802E53D8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802E53DC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802E53E0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802E53E4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x802E53E8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x802E53EC: jr          $ra
    // 0x802E53F0: addiu       $sp, $sp, 0x230
    ctx->r29 = ADD32(ctx->r29, 0X230);
    return;
    // 0x802E53F0: addiu       $sp, $sp, 0x230
    ctx->r29 = ADD32(ctx->r29, 0X230);
;}
RECOMP_FUNC void D_80282384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282404: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028240C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80282410: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80282414: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80282418: jal         0x802B2390
    // 0x8028241C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802B2390(rdram, ctx);
        goto after_0;
    // 0x8028241C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80282420: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80282424: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80282428: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x8028242C: sb          $zero, 0x6DAD($at)
    MEM_B(0X6DAD, ctx->r1) = 0;
    // 0x80282430: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80282434: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80282438: jal         0x802B2448
    // 0x8028243C: swc1        $f4, -0x1250($at)
    MEM_W(-0X1250, ctx->r1) = ctx->f4.u32l;
    static_3_802B2448(rdram, ctx);
        goto after_1;
    // 0x8028243C: swc1        $f4, -0x1250($at)
    MEM_W(-0X1250, ctx->r1) = ctx->f4.u32l;
    after_1:
    // 0x80282440: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80282444: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80282448: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x8028244C: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80282450: lh          $t6, 0xB0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XB0);
    // 0x80282454: jalr        $t9
    // 0x80282458: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80282458: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_2:
    // 0x8028245C: lui         $a1, 0x452B
    ctx->r5 = S32(0X452B << 16);
    // 0x80282460: lui         $a2, 0xC52B
    ctx->r6 = S32(0XC52B << 16);
    // 0x80282464: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x80282468: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x8028246C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80282470: jal         0x80318E04
    // 0x80282474: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_3;
    // 0x80282474: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_3:
    // 0x80282478: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028247C: jal         0x80318C9C
    // 0x80282480: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_4;
    // 0x80282480: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_4:
    // 0x80282484: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80282488: jal         0x802AEDEC
    // 0x8028248C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_5;
    // 0x8028248C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80282490: lw          $t7, 0x78($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X78);
    // 0x80282494: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x80282498: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028249C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802824A0: jal         0x802BCF20
    // 0x802824A4: sw          $t8, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r24;
    static_3_802BCF20(rdram, ctx);
        goto after_6;
    // 0x802824A4: sw          $t8, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r24;
    after_6:
    // 0x802824A8: jal         0x80309B18
    // 0x802824AC: nop

    static_3_80309B18(rdram, ctx);
        goto after_7;
    // 0x802824AC: nop

    after_7:
    // 0x802824B0: jal         0x803099E4
    // 0x802824B4: nop

    static_3_803099E4(rdram, ctx);
        goto after_8;
    // 0x802824B4: nop

    after_8:
    // 0x802824B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802824BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802824C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802824C4: jr          $ra
    // 0x802824C8: nop

    return;
    // 0x802824C8: nop

;}
RECOMP_FUNC void D_802D8600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8680: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802D8684: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D8688: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D868C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802D8690: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x802D8694: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802D8698: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D869C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x802D86A0: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D86A4: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x802D86A8: jalr        $t9
    // 0x802D86AC: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D86AC: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x802D86B0: jal         0x802D25C4
    // 0x802D86B4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D25C4(rdram, ctx);
        goto after_1;
    // 0x802D86B4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_1:
    // 0x802D86B8: bnel        $v0, $zero, L_802D86F8
    if (ctx->r2 != 0) {
        // 0x802D86BC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802D86F8;
    }
    goto skip_0;
    // 0x802D86BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802D86C0: jal         0x80318214
    // 0x802D86C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318214(rdram, ctx);
        goto after_2;
    // 0x802D86C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802D86C8: addiu       $a0, $s0, 0x2F0
    ctx->r4 = ADD32(ctx->r16, 0X2F0);
    // 0x802D86CC: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802D86D0: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802D86D4: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x802D86D8: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x802D86DC: jal         0x802C53E4
    // 0x802D86E0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_3;
    // 0x802D86E0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x802D86E4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802D86E8: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802D86EC: jal         0x802C5468
    // 0x802D86F0: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    static_3_802C5468(rdram, ctx);
        goto after_4;
    // 0x802D86F0: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    after_4:
    // 0x802D86F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802D86F8:
    // 0x802D86F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D86FC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802D8700: jr          $ra
    // 0x802D8704: nop

    return;
    // 0x802D8704: nop

;}
RECOMP_FUNC void D_80232064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80232064: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x80232068: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023206C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80232070: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80232074: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x80232078: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x8023207C: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x80232080: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x80232084: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x80232088: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x8023208C: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x80232090: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80232094: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80232098: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x8023209C: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x802320A0: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x802320A4: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x802320A8: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x802320AC: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x802320B0: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x802320B4: sw          $a1, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r5;
    // 0x802320B8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802320BC: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x802320C0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802320C4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x802320C8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x802320CC: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x802320D0: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x802320D4: addiu       $a1, $fp, 0x2AC
    ctx->r5 = ADD32(ctx->r30, 0X2AC);
    // 0x802320D8: beql        $v0, $zero, L_8023263C
    if (ctx->r2 == 0) {
        // 0x802320DC: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_8023263C;
    }
    goto skip_0;
    // 0x802320DC: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_0:
    // 0x802320E0: jal         0x80208128
    // 0x802320E4: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    static_3_80208128(rdram, ctx);
        goto after_0;
    // 0x802320E4: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    after_0:
    // 0x802320E8: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x802320EC: or          $v1, $fp, $zero
    ctx->r3 = ctx->r30 | 0;
    // 0x802320F0: addiu       $s3, $sp, 0x110
    ctx->r19 = ADD32(ctx->r29, 0X110);
    // 0x802320F4: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802320F8: addiu       $s4, $sp, 0xE8
    ctx->r20 = ADD32(ctx->r29, 0XE8);
    // 0x802320FC: addiu       $s5, $sp, 0xFC
    ctx->r21 = ADD32(ctx->r29, 0XFC);
    // 0x80232100: swc1        $f4, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f4.u32l;
    // 0x80232104: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80232108: lwc1        $f4, 0x168($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X168);
    // 0x8023210C: addiu       $s1, $sp, 0xE0
    ctx->r17 = ADD32(ctx->r29, 0XE0);
    // 0x80232110: swc1        $f6, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f6.u32l;
    // 0x80232114: lwc1        $f8, 0x2AC($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X2AC);
    // 0x80232118: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8023211C: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80232120: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232124: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80232128: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8023212C: lwc1        $f10, 0x2B8($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X2B8);
    // 0x80232130: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80232134: sub.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80232138: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8023213C: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80232140: lwc1        $f6, 0x2B0($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X2B0);
    // 0x80232144: sub.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80232148: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8023214C: lwc1        $f8, 0x164($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X164);
    // 0x80232150: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80232154: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80232158: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8023215C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80232160: nop

    // 0x80232164: sw          $t4, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r12;
    // 0x80232168: lwc1        $f4, 0x2BC($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X2BC);
    // 0x8023216C: lw          $t7, 0x170($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X170);
    // 0x80232170: sub.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x80232174: div.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80232178: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8023217C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80232180: bgez        $a2, L_8023218C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80232184: sw          $t6, 0x16C($sp)
        MEM_W(0X16C, ctx->r29) = ctx->r14;
            goto L_8023218C;
    }
    // 0x80232184: sw          $t6, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r14;
    // 0x80232188: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8023218C:
    // 0x8023218C: lbu         $v0, 0x18($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X18);
    // 0x80232190: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80232194: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80232198: beq         $at, $zero, L_802321A4
    if (ctx->r1 == 0) {
        // 0x8023219C: nop
    
            goto L_802321A4;
    }
    // 0x8023219C: nop

    // 0x802321A0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_802321A4:
    // 0x802321A4: bgez        $t7, L_802321B0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802321A8: addiu       $t0, $a3, 0x1
        ctx->r8 = ADD32(ctx->r7, 0X1);
            goto L_802321B0;
    }
    // 0x802321A8: addiu       $t0, $a3, 0x1
    ctx->r8 = ADD32(ctx->r7, 0X1);
    // 0x802321AC: sw          $zero, 0x170($sp)
    MEM_W(0X170, ctx->r29) = 0;
L_802321B0:
    // 0x802321B0: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
    // 0x802321B4: lw          $t8, 0x16C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X16C);
    // 0x802321B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802321BC: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802321C0: beql        $at, $zero, L_802321D0
    if (ctx->r1 == 0) {
        // 0x802321C4: lbu         $v0, 0x2A8($fp)
        ctx->r2 = MEM_BU(ctx->r30, 0X2A8);
            goto L_802321D0;
    }
    goto skip_1;
    // 0x802321C4: lbu         $v0, 0x2A8($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X2A8);
    skip_1:
    // 0x802321C8: sw          $v0, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r2;
    // 0x802321CC: lbu         $v0, 0x2A8($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X2A8);
L_802321D0:
    // 0x802321D0: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x802321D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802321D8: blezl       $v0, L_802322B8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802321DC: slt         $at, $a3, $a2
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_802322B8;
    }
    goto skip_2;
    // 0x802321DC: slt         $at, $a3, $a2
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    skip_2:
    // 0x802321E0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802321E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802321E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802321EC: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
L_802321F0:
    // 0x802321F0: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x802321F4: slt         $at, $s7, $t9
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802321F8: lwc1        $f2, 0x260($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X260);
    // 0x802321FC: beq         $at, $zero, L_80232210
    if (ctx->r1 == 0) {
        // 0x80232200: lwc1        $f14, 0x264($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X264);
            goto L_80232210;
    }
    // 0x80232200: lwc1        $f14, 0x264($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X264);
    // 0x80232204: lwc1        $f0, 0x26C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X26C);
    // 0x80232208: b           L_80232218
    // 0x8023220C: lwc1        $f16, 0x270($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X270);
        goto L_80232218;
    // 0x8023220C: lwc1        $f16, 0x270($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X270);
L_80232210:
    // 0x80232210: lwc1        $f0, 0x260($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X260);
    // 0x80232214: lwc1        $f16, 0x264($fp)
    ctx->f16.u32l = MEM_W(ctx->r30, 0X264);
L_80232218:
    // 0x80232218: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8023221C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80232220: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x80232224: bc1fl       L_80232260
    if (!c1cs) {
        // 0x80232228: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_80232260;
    }
    goto skip_3;
    // 0x80232228: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_3:
    // 0x8023222C: sub.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x80232230: swc1        $f20, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f20.u32l;
    // 0x80232234: swc1        $f18, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f18.u32l;
    // 0x80232238: swc1        $f2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f2.u32l;
    // 0x8023223C: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x80232240: nop

    // 0x80232244: bc1f        L_80232254
    if (!c1cs) {
        // 0x80232248: nop
    
            goto L_80232254;
    }
    // 0x80232248: nop

    // 0x8023224C: b           L_80232298
    // 0x80232250: sb          $a1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r5;
        goto L_80232298;
    // 0x80232250: sb          $a1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r5;
L_80232254:
    // 0x80232254: b           L_80232298
    // 0x80232258: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
        goto L_80232298;
    // 0x80232258: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8023225C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_80232260:
    // 0x80232260: sub.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x80232264: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x80232268: div.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8023226C: bc1fl       L_80232280
    if (!c1cs) {
        // 0x80232270: sb          $zero, 0x0($s1)
        MEM_B(0X0, ctx->r17) = 0;
            goto L_80232280;
    }
    goto skip_4;
    // 0x80232270: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    skip_4:
    // 0x80232274: b           L_80232280
    // 0x80232278: sb          $a1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r5;
        goto L_80232280;
    // 0x80232278: sb          $a1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r5;
    // 0x8023227C: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_80232280:
    // 0x80232280: div.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f22.fl, ctx->f0.fl);
    // 0x80232284: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
    // 0x80232288: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8023228C: sub.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x80232290: swc1        $f6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f6.u32l;
    // 0x80232294: swc1        $f10, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f10.u32l;
L_80232298:
    // 0x80232298: lbu         $v0, 0x2A8($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X2A8);
    // 0x8023229C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802322A0: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x802322A4: slt         $at, $s7, $v0
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802322A8: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x802322AC: bne         $at, $zero, L_802321F0
    if (ctx->r1 != 0) {
        // 0x802322B0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802321F0;
    }
    // 0x802322B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802322B4: slt         $at, $a3, $a2
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
L_802322B8:
    // 0x802322B8: bne         $at, $zero, L_80232638
    if (ctx->r1 != 0) {
        // 0x802322BC: sw          $a2, 0x188($sp)
        MEM_W(0X188, ctx->r29) = ctx->r6;
            goto L_80232638;
    }
    // 0x802322BC: sw          $a2, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r6;
    // 0x802322C0: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
L_802322C4:
    // 0x802322C4: lw          $t1, 0x170($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X170);
    // 0x802322C8: lw          $t2, 0x16C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X16C);
    // 0x802322CC: sw          $t1, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r9;
    // 0x802322D0: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802322D4: bne         $at, $zero, L_80232624
    if (ctx->r1 != 0) {
        // 0x802322D8: addiu       $t3, $t2, 0x1
        ctx->r11 = ADD32(ctx->r10, 0X1);
            goto L_80232624;
    }
    // 0x802322D8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802322DC: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
L_802322E0:
    // 0x802322E0: lbu         $t4, 0x18($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X18);
    // 0x802322E4: lw          $t5, 0x184($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X184);
    // 0x802322E8: lw          $t7, 0x188($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X188);
    // 0x802322EC: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802322F0: mflo        $t6
    ctx->r14 = lo;
    // 0x802322F4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802322F8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802322FC: sw          $t8, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r24;
    // 0x80232300: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80232304: lw          $t0, 0x28($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X28);
    // 0x80232308: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8023230C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80232310: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80232314: addu        $s2, $t0, $t9
    ctx->r18 = ADD32(ctx->r8, ctx->r25);
    // 0x80232318: beql        $s2, $zero, L_80232614
    if (ctx->r18 == 0) {
        // 0x8023231C: lw          $t7, 0x184($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X184);
            goto L_80232614;
    }
    goto skip_5;
    // 0x8023231C: lw          $t7, 0x184($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X184);
    skip_5:
    // 0x80232320: lw          $s0, 0x40($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X40);
    // 0x80232324: bnel        $s0, $zero, L_80232338
    if (ctx->r16 != 0) {
        // 0x80232328: lwc1        $f8, 0x18($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
            goto L_80232338;
    }
    goto skip_6;
    // 0x80232328: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    skip_6:
    // 0x8023232C: b           L_80232610
    // 0x80232330: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
        goto L_80232610;
    // 0x80232330: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x80232334: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
L_80232338:
    // 0x80232338: addiu       $s1, $fp, 0x188
    ctx->r17 = ADD32(ctx->r30, 0X188);
    // 0x8023233C: addiu       $s3, $fp, 0x218
    ctx->r19 = ADD32(ctx->r30, 0X218);
    // 0x80232340: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    // 0x80232344: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80232348: addiu       $a1, $sp, 0x14C
    ctx->r5 = ADD32(ctx->r29, 0X14C);
    // 0x8023234C: addiu       $a2, $sp, 0x148
    ctx->r6 = ADD32(ctx->r29, 0X148);
    // 0x80232350: swc1        $f6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f6.u32l;
    // 0x80232354: lbu         $v0, 0x48($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X48);
    // 0x80232358: beq         $v0, $zero, L_8023236C
    if (ctx->r2 == 0) {
        // 0x8023235C: negu        $a0, $v0
        ctx->r4 = SUB32(0, ctx->r2);
            goto L_8023236C;
    }
    // 0x8023235C: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
    // 0x80232360: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x80232364: jal         0x80218C74
    // 0x80232368: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    static_3_80218C74(rdram, ctx);
        goto after_1;
    // 0x80232368: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    after_1:
L_8023236C:
    // 0x8023236C: lwc1        $f4, 0x30($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X30);
    // 0x80232370: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80232374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80232378: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8023237C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80232380: lwc1        $f4, 0x148($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X148);
    // 0x80232384: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    // 0x80232388: lwc1        $f6, 0x34($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X34);
    // 0x8023238C: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80232390: lwc1        $f4, 0x14C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80232394: swc1        $f10, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f10.u32l;
    // 0x80232398: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8023239C: lwc1        $f8, 0x38($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X38);
    // 0x802323A0: lwc1        $f10, 0x108($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X108);
    // 0x802323A4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802323A8: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802323AC: lwc1        $f6, 0x10C($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X10C);
    // 0x802323B0: lwc1        $f8, 0x148($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X148);
    // 0x802323B4: sub.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x802323B8: lwc1        $f10, 0x110($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X110);
    // 0x802323BC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802323C0: sub.s       $f22, $f8, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802323C4: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802323C8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802323CC: sub.s       $f24, $f0, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802323D0: jal         0x802080BC
    // 0x802323D4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    static_3_802080BC(rdram, ctx);
        goto after_2;
    // 0x802323D4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x802323D8: bne         $v0, $zero, L_802323E8
    if (ctx->r2 != 0) {
        // 0x802323DC: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_802323E8;
    }
    // 0x802323DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802323E0: b           L_80232610
    // 0x802323E4: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
        goto L_80232610;
    // 0x802323E4: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
L_802323E8:
    // 0x802323E8: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802323EC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802323F0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802323F4: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x802323F8: jal         0x8020802C
    // 0x802323FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_8020802C(rdram, ctx);
        goto after_3;
    // 0x802323FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80232400: bne         $v0, $zero, L_80232410
    if (ctx->r2 != 0) {
        // 0x80232404: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_80232410;
    }
    // 0x80232404: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232408: b           L_80232610
    // 0x8023240C: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
        goto L_80232610;
    // 0x8023240C: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
L_80232410:
    // 0x80232410: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80232414: lwc1        $f4, 0x168($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X168);
    // 0x80232418: lwc1        $f8, 0x164($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X164);
    // 0x8023241C: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x80232420: mul.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80232424: lwc1        $f2, 0x34($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X34);
    // 0x80232428: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
    // 0x8023242C: mul.s       $f14, $f16, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80232430: sh          $t3, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r11;
    // 0x80232434: lbu         $t4, 0x2A8($fp)
    ctx->r12 = MEM_BU(ctx->r30, 0X2A8);
    // 0x80232438: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8023243C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80232440: sub.s       $f24, $f0, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80232444: add.s       $f26, $f0, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f26.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x80232448: add.s       $f28, $f2, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f28.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x8023244C: blez        $t4, L_80232558
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80232450: sub.s       $f30, $f2, $f14
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f30.fl = ctx->f2.fl - ctx->f14.fl;
            goto L_80232558;
    }
    // 0x80232450: sub.s       $f30, $f2, $f14
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f30.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80232454: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80232458: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8023245C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80232460: addiu       $s3, $sp, 0x110
    ctx->r19 = ADD32(ctx->r29, 0X110);
    // 0x80232464: addiu       $s4, $sp, 0xE8
    ctx->r20 = ADD32(ctx->r29, 0XE8);
    // 0x80232468: addiu       $s5, $sp, 0xFC
    ctx->r21 = ADD32(ctx->r29, 0XFC);
    // 0x8023246C: addiu       $s1, $sp, 0xE0
    ctx->r17 = ADD32(ctx->r29, 0XE0);
    // 0x80232470: div.s       $f20, $f6, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80232474: div.s       $f22, $f10, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
L_80232478:
    // 0x80232478: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x8023247C: swc1        $f28, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f28.u32l;
    // 0x80232480: swc1        $f30, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f30.u32l;
    // 0x80232484: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80232488: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x8023248C: addiu       $a0, $sp, 0xCE
    ctx->r4 = ADD32(ctx->r29, 0XCE);
    // 0x80232490: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80232494: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80232498: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x8023249C: addiu       $a2, $sp, 0xDE
    ctx->r6 = ADD32(ctx->r29, 0XDE);
    // 0x802324A0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x802324A4: lwc1        $f10, 0x0($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X0);
    // 0x802324A8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x802324AC: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x802324B0: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    // 0x802324B4: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x802324B8: jal         0x8023288C
    // 0x802324BC: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    static_3_8023288C(rdram, ctx);
        goto after_4;
    // 0x802324BC: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    after_4:
    // 0x802324C0: lh          $t6, 0xCE($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XCE);
    // 0x802324C4: lh          $a2, 0xCC($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XCC);
    // 0x802324C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802324CC: bltz        $t6, L_8023252C
    if (SIGNED(ctx->r14) < 0) {
        // 0x802324D0: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_8023252C;
    }
    // 0x802324D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802324D4: jal         0x802326D0
    // 0x802324D8: lbu         $a0, 0x48($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X48);
    static_3_802326D0(rdram, ctx);
        goto after_5;
    // 0x802324D8: lbu         $a0, 0x48($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X48);
    after_5:
    // 0x802324DC: andi        $s0, $v0, 0xFFFF
    ctx->r16 = ctx->r2 & 0XFFFF;
    // 0x802324E0: lbu         $a0, 0x48($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X48);
    // 0x802324E4: lh          $a1, 0xCE($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XCE);
    // 0x802324E8: lh          $a2, 0xCC($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XCC);
    // 0x802324EC: jal         0x802326D0
    // 0x802324F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802326D0(rdram, ctx);
        goto after_6;
    // 0x802324F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x802324F4: lbu         $t0, 0x0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X0);
    // 0x802324F8: and         $t7, $s0, $v0
    ctx->r15 = ctx->r16 & ctx->r2;
    // 0x802324FC: or          $s6, $s6, $t7
    ctx->r22 = ctx->r22 | ctx->r15;
    // 0x80232500: andi        $t8, $s6, 0xFFFF
    ctx->r24 = ctx->r22 & 0XFFFF;
    // 0x80232504: or          $s6, $t8, $zero
    ctx->r22 = ctx->r24 | 0;
    // 0x80232508: beq         $t0, $zero, L_80232520
    if (ctx->r8 == 0) {
        // 0x8023250C: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_80232520;
    }
    // 0x8023250C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80232510: lhu         $t9, 0xDE($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0XDE);
    // 0x80232514: and         $t1, $t9, $v0
    ctx->r9 = ctx->r25 & ctx->r2;
    // 0x80232518: b           L_8023252C
    // 0x8023251C: sh          $t1, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r9;
        goto L_8023252C;
    // 0x8023251C: sh          $t1, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r9;
L_80232520:
    // 0x80232520: lhu         $t2, 0xDE($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0XDE);
    // 0x80232524: and         $t3, $t2, $v1
    ctx->r11 = ctx->r10 & ctx->r3;
    // 0x80232528: sh          $t3, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r11;
L_8023252C:
    // 0x8023252C: lhu         $t4, 0xDE($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0XDE);
    // 0x80232530: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80232534: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80232538: beql        $t4, $zero, L_8023255C
    if (ctx->r12 == 0) {
        // 0x8023253C: lhu         $t6, 0xDE($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0XDE);
            goto L_8023255C;
    }
    goto skip_7;
    // 0x8023253C: lhu         $t6, 0xDE($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XDE);
    skip_7:
    // 0x80232540: lbu         $t5, 0x2A8($fp)
    ctx->r13 = MEM_BU(ctx->r30, 0X2A8);
    // 0x80232544: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80232548: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8023254C: slt         $at, $s7, $t5
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80232550: bne         $at, $zero, L_80232478
    if (ctx->r1 != 0) {
        // 0x80232554: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80232478;
    }
    // 0x80232554: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80232558:
    // 0x80232558: lhu         $t6, 0xDE($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XDE);
L_8023255C:
    // 0x8023255C: nor         $t7, $s6, $zero
    ctx->r15 = ~(ctx->r22 | 0);
    // 0x80232560: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80232564: and         $v0, $t6, $t7
    ctx->r2 = ctx->r14 & ctx->r15;
    // 0x80232568: beq         $t6, $zero, L_8023260C
    if (ctx->r14 == 0) {
        // 0x8023256C: andi        $t8, $v0, 0xFFFF
        ctx->r24 = ctx->r2 & 0XFFFF;
            goto L_8023260C;
    }
    // 0x8023256C: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x80232570: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80232574: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80232578: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8023257C: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x80232580: addu        $s0, $t9, $t1
    ctx->r16 = ADD32(ctx->r25, ctx->r9);
    // 0x80232584: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x80232588: lhu         $t2, 0xDE($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0XDE);
    // 0x8023258C: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x80232590: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
    // 0x80232594: lw          $t3, 0x17C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X17C);
    // 0x80232598: sb          $t3, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r11;
    // 0x8023259C: lwc1        $f6, 0x38($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X38);
    // 0x802325A0: lwc1        $f8, 0x110($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X110);
    // 0x802325A4: lwc1        $f10, 0x30($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X30);
    // 0x802325A8: lwc1        $f4, 0x108($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X108);
    // 0x802325AC: sub.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802325B0: lwc1        $f6, 0x34($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X34);
    // 0x802325B4: lwc1        $f8, 0x10C($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X10C);
    // 0x802325B8: sub.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x802325BC: sub.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802325C0: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802325C4: nop

    // 0x802325C8: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802325CC: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802325D0: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802325D4: jal         0x8022AA40
    // 0x802325D8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_7;
    // 0x802325D8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_7:
    // 0x802325DC: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x802325E0: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802325E4: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x802325E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802325EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802325F0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802325F4: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802325F8: slti        $at, $t5, 0x40
    ctx->r1 = SIGNED(ctx->r13) < 0X40 ? 1 : 0;
    // 0x802325FC: bne         $at, $zero, L_8023260C
    if (ctx->r1 != 0) {
        // 0x80232600: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_8023260C;
    }
    // 0x80232600: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80232604: jal         0x80231A24
    // 0x80232608: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    static_3_80231A24(rdram, ctx);
        goto after_8;
    // 0x80232608: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_8:
L_8023260C:
    // 0x8023260C: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
L_80232610:
    // 0x80232610: lw          $t7, 0x184($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X184);
L_80232614:
    // 0x80232614: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x80232618: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8023261C: bne         $t6, $t8, L_802322E0
    if (ctx->r14 != ctx->r24) {
        // 0x80232620: sw          $t8, 0x184($sp)
        MEM_W(0X184, ctx->r29) = ctx->r24;
            goto L_802322E0;
    }
    // 0x80232620: sw          $t8, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r24;
L_80232624:
    // 0x80232624: lw          $t0, 0x188($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X188);
    // 0x80232628: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x8023262C: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x80232630: bne         $t1, $t9, L_802322C4
    if (ctx->r9 != ctx->r25) {
        // 0x80232634: sw          $t9, 0x188($sp)
        MEM_W(0X188, ctx->r29) = ctx->r25;
            goto L_802322C4;
    }
    // 0x80232634: sw          $t9, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r25;
L_80232638:
    // 0x80232638: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
L_8023263C:
    // 0x8023263C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x80232640: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x80232644: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x80232648: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x8023264C: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x80232650: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x80232654: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80232658: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x8023265C: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80232660: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80232664: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x80232668: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x8023266C: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x80232670: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x80232674: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x80232678: jr          $ra
    // 0x8023267C: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    return;
    // 0x8023267C: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
;}
RECOMP_FUNC void D_802EC068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC0E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC0EC: bne         $a0, $zero, L_802EC104
    if (ctx->r4 != 0) {
        // 0x802EC0F0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EC104;
    }
    // 0x802EC0F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC0F4: jal         0x802C67EC
    // 0x802EC0F8: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EC0F8: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EC0FC: beq         $v0, $zero, L_802EC158
    if (ctx->r2 == 0) {
        // 0x802EC100: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EC158;
    }
    // 0x802EC100: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EC104:
    // 0x802EC104: jal         0x8031C47C
    // 0x802EC108: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EC108: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EC10C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC110: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EC114: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC118: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x802EC11C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EC120: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802EC124: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802EC128: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802EC12C: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x802EC130: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EC134: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802EC138: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802EC13C: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x802EC140: sh          $t8, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r24;
    // 0x802EC144: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802EC148: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EC14C: jal         0x8031C8C4
    // 0x802EC150: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031C8C4(rdram, ctx);
        goto after_2;
    // 0x802EC150: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802EC154: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802EC158:
    // 0x802EC158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EC15C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC160: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EC164: jr          $ra
    // 0x802EC168: nop

    return;
    // 0x802EC168: nop

;}
RECOMP_FUNC void D_802CF568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF5E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802CF5EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802CF5F0: jr          $ra
    // 0x802CF5F4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802CF5F4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8020126C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020126C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80201270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201274: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80201278: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8020127C: jal         0x8022970C
    // 0x80201280: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x80201280: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80201284: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80201288: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020128C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80201290: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80201294: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x80201298: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x8020129C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x802012A0: sb          $t6, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r14;
    // 0x802012A4: sw          $zero, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = 0;
    // 0x802012A8: sw          $t7, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r15;
    // 0x802012AC: sb          $t8, 0xAE($a0)
    MEM_B(0XAE, ctx->r4) = ctx->r24;
    // 0x802012B0: sb          $zero, 0xAF($a0)
    MEM_B(0XAF, ctx->r4) = 0;
    // 0x802012B4: sb          $zero, 0xB0($a0)
    MEM_B(0XB0, ctx->r4) = 0;
    // 0x802012B8: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x802012BC: jal         0x80228DE0
    // 0x802012C0: swc1        $f4, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f4.u32l;
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802012C0: swc1        $f4, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f4.u32l;
    after_1:
    // 0x802012C4: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x802012C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802012CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802012D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802012D4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802012D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802012DC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802012E0: sb          $t9, 0x8C($a2)
    MEM_B(0X8C, ctx->r6) = ctx->r25;
    // 0x802012E4: sw          $zero, 0x88($a2)
    MEM_W(0X88, ctx->r6) = 0;
    // 0x802012E8: sw          $zero, 0x98($a2)
    MEM_W(0X98, ctx->r6) = 0;
    // 0x802012EC: sw          $zero, 0xA8($a2)
    MEM_W(0XA8, ctx->r6) = 0;
    // 0x802012F0: swc1        $f0, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f0.u32l;
    // 0x802012F4: swc1        $f0, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->f0.u32l;
    // 0x802012F8: swc1        $f0, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->f0.u32l;
    // 0x802012FC: swc1        $f0, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->f0.u32l;
    // 0x80201300: swc1        $f0, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->f0.u32l;
    // 0x80201304: swc1        $f0, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->f0.u32l;
    // 0x80201308: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    // 0x8020130C: swc1        $f0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f0.u32l;
    // 0x80201310: swc1        $f0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f0.u32l;
    // 0x80201314: swc1        $f0, 0x84($a2)
    MEM_W(0X84, ctx->r6) = ctx->f0.u32l;
    // 0x80201318: swc1        $f0, 0x90($a2)
    MEM_W(0X90, ctx->r6) = ctx->f0.u32l;
    // 0x8020131C: swc1        $f2, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f2.u32l;
    // 0x80201320: swc1        $f2, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f2.u32l;
    // 0x80201324: swc1        $f6, 0x94($a2)
    MEM_W(0X94, ctx->r6) = ctx->f6.u32l;
    // 0x80201328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020132C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80201330: jr          $ra
    // 0x80201334: nop

    return;
    // 0x80201334: nop

;}
RECOMP_FUNC void D_802EF92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF9AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EF9B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EF9B4: beq         $a0, $zero, L_802EF9E4
    if (ctx->r4 == 0) {
        // 0x802EF9B8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EF9E4;
    }
    // 0x802EF9B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EF9BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EF9C0: jal         0x8031F6B0
    // 0x802EF9C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031F6B0(rdram, ctx);
        goto after_0;
    // 0x802EF9C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EF9C8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EF9CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EF9D0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EF9D4: beql        $t7, $zero, L_802EF9E8
    if (ctx->r15 == 0) {
        // 0x802EF9D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EF9E8;
    }
    goto skip_0;
    // 0x802EF9D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EF9DC: jal         0x802C681C
    // 0x802EF9E0: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EF9E0: nop

    after_1:
L_802EF9E4:
    // 0x802EF9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EF9E8:
    // 0x802EF9E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EF9EC: jr          $ra
    // 0x802EF9F0: nop

    return;
    // 0x802EF9F0: nop

;}
RECOMP_FUNC void D_8027B090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B108: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8027B10C: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x8027B110: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027B114: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027B118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027B11C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B120: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027B124: sb          $a1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r5;
    // 0x8027B128: jal         0x80231A24
    // 0x8027B12C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8027B12C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027B130: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8027B134: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x8027B138: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027B13C: blez        $a1, L_8027B154
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8027B140: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_8027B154;
    }
    // 0x8027B140: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8027B144: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027B148: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x8027B14C: b           L_8027B154
    // 0x8027B150: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8027B154;
    // 0x8027B150: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8027B154:
    // 0x8027B154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027B158: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027B15C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8027B160: jr          $ra
    // 0x8027B164: nop

    return;
    // 0x8027B164: nop

;}
RECOMP_FUNC void D_80291344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802913C4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x802913C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802913CC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802913D0: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x802913D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802913D8: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x802913DC: jal         0x802C51D0
    // 0x802913E0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x802913E0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x802913E4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x802913E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802913EC: lui         $a2, 0xC190
    ctx->r6 = S32(0XC190 << 16);
    // 0x802913F0: jal         0x8022A0D0
    // 0x802913F4: lui         $a3, 0xBF00
    ctx->r7 = S32(0XBF00 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802913F4: lui         $a3, 0xBF00
    ctx->r7 = S32(0XBF00 << 16);
    after_1:
    // 0x802913F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802913FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80291400: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80291404: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80291408: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8029140C: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    // 0x80291410: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80291414: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80291418: lw          $t6, 0x8C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8C);
    // 0x8029141C: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x80291420: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80291424: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80291428: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8029142C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80291430: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80291434: jal         0x802AA6F4
    // 0x80291438: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    static_3_802AA6F4(rdram, ctx);
        goto after_2;
    // 0x80291438: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_2:
    // 0x8029143C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80291440: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80291444: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80291448: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8029144C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80291450: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80291454: jal         0x8022A0D0
    // 0x80291458: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_3;
    // 0x80291458: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x8029145C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80291460: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80291464: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80291468: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8029146C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80291470: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    // 0x80291474: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80291478: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8029147C: lw          $t9, 0x8C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8C);
    // 0x80291480: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x80291484: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80291488: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8029148C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80291490: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80291494: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80291498: jal         0x802AA6F4
    // 0x8029149C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    static_3_802AA6F4(rdram, ctx);
        goto after_4;
    // 0x8029149C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_4:
    // 0x802914A0: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x802914A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802914A8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x802914AC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x802914B0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802914B4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802914B8: jal         0x8022A0D0
    // 0x802914BC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_5;
    // 0x802914BC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_5:
    // 0x802914C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802914C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802914C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802914CC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802914D0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802914D4: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    // 0x802914D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802914DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x802914E0: lw          $t2, 0x8C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8C);
    // 0x802914E4: addiu       $t3, $zero, 0xD
    ctx->r11 = ADD32(0, 0XD);
    // 0x802914E8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802914EC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802914F0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802914F4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802914F8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x802914FC: jal         0x802AA6F4
    // 0x80291500: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    static_3_802AA6F4(rdram, ctx);
        goto after_6;
    // 0x80291500: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_6:
    // 0x80291504: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80291508: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8029150C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80291510: beql        $a0, $zero, L_8029159C
    if (ctx->r4 == 0) {
        // 0x80291514: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_8029159C;
    }
    goto skip_0;
    // 0x80291514: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80291518: beql        $t5, $zero, L_8029159C
    if (ctx->r13 == 0) {
        // 0x8029151C: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_8029159C;
    }
    goto skip_1;
    // 0x8029151C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x80291520: beq         $v0, $zero, L_80291598
    if (ctx->r2 == 0) {
        // 0x80291524: addiu       $a1, $zero, 0x1A7
        ctx->r5 = ADD32(0, 0X1A7);
            goto L_80291598;
    }
    // 0x80291524: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    // 0x80291528: jal         0x802958BC
    // 0x8029152C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802958BC(rdram, ctx);
        goto after_7;
    // 0x8029152C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80291530: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80291534: addiu       $a1, $zero, 0x1CC
    ctx->r5 = ADD32(0, 0X1CC);
    // 0x80291538: jal         0x802958BC
    // 0x8029153C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802958BC(rdram, ctx);
        goto after_8;
    // 0x8029153C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x80291540: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80291544: addiu       $a1, $zero, 0x1CC
    ctx->r5 = ADD32(0, 0X1CC);
    // 0x80291548: jal         0x802958BC
    // 0x8029154C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802958BC(rdram, ctx);
        goto after_9;
    // 0x8029154C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80291550: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80291554: jal         0x80295884
    // 0x80291558: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80295884(rdram, ctx);
        goto after_10;
    // 0x80291558: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x8029155C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80291560: jal         0x80295884
    // 0x80291564: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80295884(rdram, ctx);
        goto after_11;
    // 0x80291564: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x80291568: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8029156C: jal         0x80295884
    // 0x80291570: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80295884(rdram, ctx);
        goto after_12;
    // 0x80291570: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x80291574: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80291578: jal         0x80295878
    // 0x8029157C: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    static_3_80295878(rdram, ctx);
        goto after_13;
    // 0x8029157C: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    after_13:
    // 0x80291580: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80291584: jal         0x80295878
    // 0x80291588: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    static_3_80295878(rdram, ctx);
        goto after_14;
    // 0x80291588: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_14:
    // 0x8029158C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80291590: jal         0x80295878
    // 0x80291594: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_80295878(rdram, ctx);
        goto after_15;
    // 0x80291594: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_15:
L_80291598:
    // 0x80291598: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_8029159C:
    // 0x8029159C: jal         0x802AB6E8
    // 0x802915A0: lw          $a1, 0x8C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8C);
    static_3_802AB6E8(rdram, ctx);
        goto after_16;
    // 0x802915A0: lw          $a1, 0x8C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8C);
    after_16:
    // 0x802915A4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802915A8: jal         0x802AEE54
    // 0x802915AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_17;
    // 0x802915AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x802915B0: beq         $v0, $zero, L_802915E8
    if (ctx->r2 == 0) {
        // 0x802915B4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802915E8;
    }
    // 0x802915B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802915B8: jal         0x802AEE54
    // 0x802915BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_18;
    // 0x802915BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_18:
    // 0x802915C0: jal         0x803187FC
    // 0x802915C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803187FC(rdram, ctx);
        goto after_19;
    // 0x802915C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_19:
    // 0x802915C8: lw          $t6, 0x8C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8C);
    // 0x802915CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802915D0: bnel        $v0, $t6, L_802915EC
    if (ctx->r2 != ctx->r14) {
        // 0x802915D4: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_802915EC;
    }
    goto skip_2;
    // 0x802915D4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x802915D8: jal         0x802AEE54
    // 0x802915DC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_20;
    // 0x802915DC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_20:
    // 0x802915E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802915E4: sb          $t7, 0xF9($v0)
    MEM_B(0XF9, ctx->r2) = ctx->r15;
L_802915E8:
    // 0x802915E8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_802915EC:
    // 0x802915EC: jal         0x802AEE54
    // 0x802915F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802AEE54(rdram, ctx);
        goto after_21;
    // 0x802915F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x802915F4: beq         $v0, $zero, L_8029162C
    if (ctx->r2 == 0) {
        // 0x802915F8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8029162C;
    }
    // 0x802915F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802915FC: jal         0x802AEE54
    // 0x80291600: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_22;
    // 0x80291600: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_22:
    // 0x80291604: jal         0x803187FC
    // 0x80291608: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803187FC(rdram, ctx);
        goto after_23;
    // 0x80291608: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_23:
    // 0x8029160C: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80291610: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80291614: bnel        $v0, $t8, L_80291630
    if (ctx->r2 != ctx->r24) {
        // 0x80291618: lw          $t0, 0x18C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X18C);
            goto L_80291630;
    }
    goto skip_3;
    // 0x80291618: lw          $t0, 0x18C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18C);
    skip_3:
    // 0x8029161C: jal         0x802AEE54
    // 0x80291620: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_24;
    // 0x80291620: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_24:
    // 0x80291624: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80291628: sb          $t9, 0xF9($v0)
    MEM_B(0XF9, ctx->r2) = ctx->r25;
L_8029162C:
    // 0x8029162C: lw          $t0, 0x18C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18C);
L_80291630:
    // 0x80291630: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80291634: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80291638: sw          $t1, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = ctx->r9;
    // 0x8029163C: swc1        $f10, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f10.u32l;
    // 0x80291640: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80291644: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80291648: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x8029164C: jr          $ra
    // 0x80291650: nop

    return;
    // 0x80291650: nop

;}
RECOMP_FUNC void D_802EDC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDCF0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802EDCF4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EDCF8: addiu       $t6, $zero, 0x1F
    ctx->r14 = ADD32(0, 0X1F);
    // 0x802EDCFC: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EDD00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EDD04: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EDD08: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802EDD0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EDD10: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802EDD14: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802EDD18: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802EDD1C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EDD20: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802EDD24: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EDD28: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EDD2C: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EDD30: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EDD34: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EDD38: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EDD3C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EDD40: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802EDD44: jr          $ra
    // 0x802EDD48: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802EDD48: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_80283C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283CD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283CE0: jal         0x80317DA0
    // 0x80283CE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80317DA0(rdram, ctx);
        goto after_0;
    // 0x80283CE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80283CE8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80283CEC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80283CF0: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x80283CF4: beql        $a0, $at, L_80283D14
    if (ctx->r4 == ctx->r1) {
        // 0x80283CF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80283D14;
    }
    goto skip_0;
    // 0x80283CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80283CFC: jal         0x8021BAE0
    // 0x80283D00: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x80283D00: nop

    after_1:
    // 0x80283D04: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80283D08: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x80283D0C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80283D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80283D14:
    // 0x80283D14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283D18: jr          $ra
    // 0x80283D1C: nop

    return;
    // 0x80283D1C: nop

;}
RECOMP_FUNC void D_802415D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802415D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802415D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802415D8: bltz        $a0, L_802415EC
    if (SIGNED(ctx->r4) < 0) {
        // 0x802415DC: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802415EC;
    }
    // 0x802415DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802415E0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802415E4: b           L_802415F4
    // 0x802415E8: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
        goto L_802415F4;
    // 0x802415E8: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
L_802415EC:
    // 0x802415EC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802415F0: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_802415F4:
    // 0x802415F4: beq         $a0, $zero, L_80241618
    if (ctx->r4 == 0) {
        // 0x802415F8: andi        $t6, $a0, 0x1
        ctx->r14 = ctx->r4 & 0X1;
            goto L_80241618;
    }
L_802415F8:
    // 0x802415F8: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x802415FC: beq         $t6, $zero, L_8024160C
    if (ctx->r14 == 0) {
        // 0x80241600: sra         $t7, $a0, 1
        ctx->r15 = S32(SIGNED(ctx->r4) >> 1);
            goto L_8024160C;
    }
    // 0x80241600: sra         $t7, $a0, 1
    ctx->r15 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80241604: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80241608: nop

L_8024160C:
    // 0x8024160C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80241610: bne         $t7, $zero, L_802415F8
    if (ctx->r15 != 0) {
        // 0x80241614: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_802415F8;
    }
    // 0x80241614: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_80241618:
    // 0x80241618: jr          $ra
    // 0x8024161C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8024161C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void D_80298F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298F94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80298F98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298F9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80298FA0: beq         $a0, $zero, L_80298FEC
    if (ctx->r4 == 0) {
        // 0x80298FA4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80298FEC;
    }
    // 0x80298FA4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80298FA8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80298FAC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80298FB0: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x80298FB4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80298FB8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80298FBC: jal         0x8028D2B8
    // 0x80298FC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028D2B8(rdram, ctx);
        goto after_0;
    // 0x80298FC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80298FC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80298FC8: jal         0x803086D4
    // 0x80298FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_1;
    // 0x80298FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80298FD0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80298FD4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80298FD8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80298FDC: beql        $t8, $zero, L_80298FF0
    if (ctx->r24 == 0) {
        // 0x80298FE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80298FF0;
    }
    goto skip_0;
    // 0x80298FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80298FE4: jal         0x802C681C
    // 0x80298FE8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x80298FE8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_80298FEC:
    // 0x80298FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80298FF0:
    // 0x80298FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298FF4: jr          $ra
    // 0x80298FF8: nop

    return;
    // 0x80298FF8: nop

;}
RECOMP_FUNC void D_802A6798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6818: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A681C: jr          $ra
    // 0x802A6820: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A6820: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802DB7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DB858: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DB85C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802DB860: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802DB864: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802DB868: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802DB86C: sb          $t6, 0x4A($v1)
    MEM_B(0X4A, ctx->r3) = ctx->r14;
    // 0x802DB870: sb          $t7, 0x4B($v1)
    MEM_B(0X4B, ctx->r3) = ctx->r15;
    // 0x802DB874: sb          $zero, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = 0;
    // 0x802DB878: sb          $a0, 0x4F($v1)
    MEM_B(0X4F, ctx->r3) = ctx->r4;
    // 0x802DB87C: sb          $a0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r4;
    // 0x802DB880: jr          $ra
    // 0x802DB884: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802DB884: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802E0CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0D3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E0D40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E0D44: jal         0x8028D750
    // 0x802E0D48: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D750(rdram, ctx);
        goto after_0;
    // 0x802E0D48: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802E0D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E0D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E0D54: jr          $ra
    // 0x802E0D58: nop

    return;
    // 0x802E0D58: nop

;}
RECOMP_FUNC void D_802B7024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B70A4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802B70A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B70AC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x802B70B0: lw          $t6, 0x7E0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7E0);
    // 0x802B70B4: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x802B70B8: addiu       $a3, $a1, 0x1
    ctx->r7 = ADD32(ctx->r5, 0X1);
    // 0x802B70BC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802B70C0: slt         $at, $t6, $a3
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x802B70C4: beq         $at, $zero, L_802B70D0
    if (ctx->r1 == 0) {
        // 0x802B70C8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802B70D0;
    }
    // 0x802B70C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802B70CC: sw          $a3, 0x7E0($a0)
    MEM_W(0X7E0, ctx->r4) = ctx->r7;
L_802B70D0:
    // 0x802B70D0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802B70D4: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x802B70D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802B70DC: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x802B70E0: swc1        $f12, 0x7E8($v0)
    MEM_W(0X7E8, ctx->r2) = ctx->f12.u32l;
    // 0x802B70E4: swc1        $f14, 0x7EC($v0)
    MEM_W(0X7EC, ctx->r2) = ctx->f14.u32l;
    // 0x802B70E8: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802B70EC: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x802B70F0: addu        $v1, $a2, $t0
    ctx->r3 = ADD32(ctx->r6, ctx->r8);
    // 0x802B70F4: swc1        $f4, 0x7F0($v0)
    MEM_W(0X7F0, ctx->r2) = ctx->f4.u32l;
    // 0x802B70F8: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802B70FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B7100: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x802B7104: swc1        $f6, 0x878($v1)
    MEM_W(0X878, ctx->r3) = ctx->f6.u32l;
    // 0x802B7108: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802B710C: bne         $a3, $at, L_802B7160
    if (ctx->r7 != ctx->r1) {
        // 0x802B7110: swc1        $f8, 0x8A8($v1)
        MEM_W(0X8A8, ctx->r3) = ctx->f8.u32l;
            goto L_802B7160;
    }
    // 0x802B7110: swc1        $f8, 0x8A8($v1)
    MEM_W(0X8A8, ctx->r3) = ctx->f8.u32l;
    // 0x802B7114: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x802B7118: jal         0x8022970C
    // 0x802B711C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802B711C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x802B7120: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x802B7124: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802B7128: lwc1        $f10, 0x7E8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X7E8);
    // 0x802B712C: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x802B7130: lwc1        $f16, 0x7EC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X7EC);
    // 0x802B7134: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x802B7138: lwc1        $f18, 0x7F0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X7F0);
    // 0x802B713C: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x802B7140: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
    // 0x802B7144: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802B7148: lw          $t9, 0xAC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XAC);
    // 0x802B714C: lh          $t8, 0xA8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XA8);
    // 0x802B7150: jalr        $t9
    // 0x802B7154: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802B7154: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    after_1:
    // 0x802B7158: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x802B715C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
L_802B7160:
    // 0x802B7160: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B7164: bne         $t0, $at, L_802B7198
    if (ctx->r8 != ctx->r1) {
        // 0x802B7168: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_802B7198;
    }
    // 0x802B7168: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B716C: lwc1        $f4, 0x7F4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X7F4);
    // 0x802B7170: lwc1        $f6, 0x7F8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X7F8);
    // 0x802B7174: lwc1        $f8, 0x7FC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X7FC);
    // 0x802B7178: lwc1        $f10, 0x87C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X87C);
    // 0x802B717C: lwc1        $f16, 0x8AC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8AC);
    // 0x802B7180: sw          $t1, 0x7E4($a2)
    MEM_W(0X7E4, ctx->r6) = ctx->r9;
    // 0x802B7184: swc1        $f4, 0x8D8($a2)
    MEM_W(0X8D8, ctx->r6) = ctx->f4.u32l;
    // 0x802B7188: swc1        $f6, 0x8DC($a2)
    MEM_W(0X8DC, ctx->r6) = ctx->f6.u32l;
    // 0x802B718C: swc1        $f8, 0x8E0($a2)
    MEM_W(0X8E0, ctx->r6) = ctx->f8.u32l;
    // 0x802B7190: swc1        $f10, 0x8E4($a2)
    MEM_W(0X8E4, ctx->r6) = ctx->f10.u32l;
    // 0x802B7194: swc1        $f16, 0x8E8($a2)
    MEM_W(0X8E8, ctx->r6) = ctx->f16.u32l;
L_802B7198:
    // 0x802B7198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B719C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x802B71A0: jr          $ra
    // 0x802B71A4: nop

    return;
    // 0x802B71A4: nop

;}
RECOMP_FUNC void D_80218E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80218E5C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80218E60: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80218E64: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80218E68: lwc1        $f22, 0xA0($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80218E6C: lwc1        $f24, 0xA8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80218E70: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80218E74: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80218E78: c.lt.s      $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f22.fl < ctx->f24.fl;
    // 0x80218E7C: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    // 0x80218E80: swc1        $f14, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f14.u32l;
    // 0x80218E84: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x80218E88: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x80218E8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80218E90: bc1f        L_80218EA4
    if (!c1cs) {
        // 0x80218E94: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80218EA4;
    }
    // 0x80218E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80218E98: mov.s       $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.fl = ctx->f22.fl;
    // 0x80218E9C: b           L_80218EAC
    // 0x80218EA0: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
        goto L_80218EAC;
    // 0x80218EA0: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
L_80218EA4:
    // 0x80218EA4: mov.s       $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    ctx->f18.fl = ctx->f24.fl;
    // 0x80218EA8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
L_80218EAC:
    // 0x80218EAC: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80218EB0: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80218EB4: lwc1        $f0, 0xA4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80218EB8: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80218EBC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80218EC0: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80218EC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218EC8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80218ECC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80218ED0: mul.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80218ED4: bc1fl       L_80218EEC
    if (!c1cs) {
        // 0x80218ED8: mov.s       $f22, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
            goto L_80218EEC;
    }
    goto skip_0;
    // 0x80218ED8: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
    skip_0:
    // 0x80218EDC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80218EE0: b           L_80218EF0
    // 0x80218EE4: mov.s       $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
        goto L_80218EF0;
    // 0x80218EE4: mov.s       $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
    // 0x80218EE8: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
L_80218EEC:
    // 0x80218EEC: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
L_80218EF0:
    // 0x80218EF0: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x80218EF4: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80218EF8: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80218EFC: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    // 0x80218F00: add.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x80218F04: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80218F08: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80218F0C: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80218F10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218F18: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80218F1C: mul.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80218F20: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80218F24: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80218F28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80218F2C: lw          $a2, 0xC0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC0);
    // 0x80218F30: neg.s       $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = -ctx->f14.fl;
    // 0x80218F34: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80218F38: bc1f        L_80218F98
    if (!c1cs) {
        // 0x80218F3C: lwc1        $f2, 0x40($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80218F98;
    }
    // 0x80218F3C: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80218F40: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
L_80218F44:
    // 0x80218F44: nop

    // 0x80218F48: bc1fl       L_80218F7C
    if (!c1cs) {
        // 0x80218F4C: add.s       $f0, $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_80218F7C;
    }
    goto skip_1;
    // 0x80218F4C: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
    skip_1:
    // 0x80218F50: sub.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80218F54: ori         $t6, $zero, 0x8888
    ctx->r14 = 0 | 0X8888;
    // 0x80218F58: srav        $t7, $t6, $v0
    ctx->r15 = S32(SIGNED(ctx->r14) >> (ctx->r2 & 31));
    // 0x80218F5C: c.le.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl <= ctx->f20.fl;
    // 0x80218F60: nop

    // 0x80218F64: bc1fl       L_80218F7C
    if (!c1cs) {
        // 0x80218F68: add.s       $f0, $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_80218F7C;
    }
    goto skip_2;
    // 0x80218F68: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
    skip_2:
    // 0x80218F6C: or          $a1, $a1, $t7
    ctx->r5 = ctx->r5 | ctx->r15;
    // 0x80218F70: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80218F74: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80218F78: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
L_80218F7C:
    // 0x80218F7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80218F80: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80218F84: nop

    // 0x80218F88: bc1fl       L_80218F9C
    if (!c1cs) {
        // 0x80218F8C: add.s       $f0, $f14, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f14.fl;
            goto L_80218F9C;
    }
    goto skip_3;
    // 0x80218F8C: add.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f14.fl;
    skip_3:
    // 0x80218F90: bnel        $v0, $v1, L_80218F44
    if (ctx->r2 != ctx->r3) {
        // 0x80218F94: c.le.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
            goto L_80218F44;
    }
    goto skip_4;
    // 0x80218F94: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    skip_4:
L_80218F98:
    // 0x80218F98: add.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f14.fl;
L_80218F9C:
    // 0x80218F9C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80218FA0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80218FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218FA8: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80218FAC: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80218FB0: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80218FB4: bc1fl       L_8021901C
    if (!c1cs) {
        // 0x80218FB8: lwc1        $f14, 0x90($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8021901C;
    }
    goto skip_5;
    // 0x80218FB8: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    skip_5:
    // 0x80218FBC: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
L_80218FC0:
    // 0x80218FC0: nop

    // 0x80218FC4: bc1fl       L_80218FFC
    if (!c1cs) {
        // 0x80218FC8: add.s       $f2, $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80218FFC;
    }
    goto skip_6;
    // 0x80218FC8: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
    skip_6:
    // 0x80218FCC: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80218FD0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80218FD4: ori         $t0, $zero, 0xF000
    ctx->r8 = 0 | 0XF000;
    // 0x80218FD8: srav        $t1, $t0, $t9
    ctx->r9 = S32(SIGNED(ctx->r8) >> (ctx->r25 & 31));
    // 0x80218FDC: c.le.s      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.fl <= ctx->f24.fl;
    // 0x80218FE0: nop

    // 0x80218FE4: bc1fl       L_80218FFC
    if (!c1cs) {
        // 0x80218FE8: add.s       $f2, $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80218FFC;
    }
    goto skip_7;
    // 0x80218FE8: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x80218FEC: or          $a0, $a0, $t1
    ctx->r4 = ctx->r4 | ctx->r9;
    // 0x80218FF0: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x80218FF4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80218FF8: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
L_80218FFC:
    // 0x80218FFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80219000: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80219004: nop

    // 0x80219008: bc1fl       L_8021901C
    if (!c1cs) {
        // 0x8021900C: lwc1        $f14, 0x90($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8021901C;
    }
    goto skip_8;
    // 0x8021900C: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    skip_8:
    // 0x80219010: bnel        $v0, $v1, L_80218FC0
    if (ctx->r2 != ctx->r3) {
        // 0x80219014: c.le.s      $f22, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
            goto L_80218FC0;
    }
    goto skip_9;
    // 0x80219014: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
    skip_9:
    // 0x80219018: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
L_8021901C:
    // 0x8021901C: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    // 0x80219020: nop

    // 0x80219024: bc1t        L_80219044
    if (c1cs) {
        // 0x80219028: nop
    
            goto L_80219044;
    }
    // 0x80219028: nop

    // 0x8021902C: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80219030: sub.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80219034: div.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80219038: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8021903C: b           L_8021904C
    // 0x80219040: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
        goto L_8021904C;
    // 0x80219040: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
L_80219044:
    // 0x80219044: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80219048: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
L_8021904C:
    // 0x8021904C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80219050: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80219054: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80219058: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8021905C: sh          $a0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r4;
    // 0x80219060: jal         0x802190E8
    // 0x80219064: sh          $a1, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r5;
    static_3_802190E8(rdram, ctx);
        goto after_0;
    // 0x80219064: sh          $a1, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r5;
    after_0:
    // 0x80219068: lhu         $a0, 0x5A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5A);
    // 0x8021906C: lhu         $a1, 0x58($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X58);
    // 0x80219070: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80219074: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80219078: and         $t4, $a0, $a1
    ctx->r12 = ctx->r4 & ctx->r5;
    // 0x8021907C: and         $v0, $t4, $v0
    ctx->r2 = ctx->r12 & ctx->r2;
    // 0x80219080: andi        $t5, $v0, 0xFFFF
    ctx->r13 = ctx->r2 & 0XFFFF;
    // 0x80219084: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80219088: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x8021908C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x80219090: jr          $ra
    // 0x80219094: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    return;
    // 0x80219094: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
;}
RECOMP_FUNC void D_802E7CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E7D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7D28: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E7D2C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E7D30: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7D34: bne         $v1, $zero, L_802E7D5C
    if (ctx->r3 != 0) {
        // 0x802E7D38: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E7D5C;
    }
    // 0x802E7D38: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7D3C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7D40: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E7D44: jal         0x80231A24
    // 0x802E7D48: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7D48: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E7D4C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E7D50: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E7D54: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E7D58: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E7D5C:
    // 0x802E7D5C: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E7D60: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x802E7D64: lh          $t7, 0x48($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X48);
    // 0x802E7D68: jalr        $t9
    // 0x802E7D6C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E7D6C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E7D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E7D78: jr          $ra
    // 0x802E7D7C: nop

    return;
    // 0x802E7D7C: nop

;}
RECOMP_FUNC void D_802D5700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D5780: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802D5784: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x802D5788: addiu       $a2, $zero, -0x4
    ctx->r6 = ADD32(0, -0X4);
    // 0x802D578C: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x802D5790: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x802D5794: addiu       $t7, $sp, 0xF
    ctx->r15 = ADD32(ctx->r29, 0XF);
    // 0x802D5798: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x802D579C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802D57A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802D57A4: and         $a1, $t7, $a2
    ctx->r5 = ctx->r15 & ctx->r6;
    // 0x802D57A8: beq         $a0, $zero, L_802D57D4
    if (ctx->r4 == 0) {
        // 0x802D57AC: sw          $a0, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r4;
            goto L_802D57D4;
    }
    // 0x802D57AC: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x802D57B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_802D57B4:
    // 0x802D57B4: beq         $v0, $a0, L_802D57CC
    if (ctx->r2 == ctx->r4) {
        // 0x802D57B8: lw          $t8, 0x8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X8);
            goto L_802D57CC;
    }
    // 0x802D57B8: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x802D57BC: addiu       $t9, $a1, 0x7
    ctx->r25 = ADD32(ctx->r5, 0X7);
    // 0x802D57C0: and         $a1, $t9, $a2
    ctx->r5 = ctx->r25 & ctx->r6;
    // 0x802D57C4: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x802D57C8: lw          $v0, -0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, -0X4);
L_802D57CC:
    // 0x802D57CC: bne         $v0, $zero, L_802D57B4
    if (ctx->r2 != 0) {
        // 0x802D57D0: nop
    
            goto L_802D57B4;
    }
    // 0x802D57D0: nop

L_802D57D4:
    // 0x802D57D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802D57D8: jr          $ra
    // 0x802D57DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802D57DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_8023D070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D070: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D074: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D078: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D07C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D080: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D084: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D088: dsrlv       $v0, $t6, $t7
    ctx->r2 = ctx->r14 >> (ctx->r15 & 63);
    // 0x8023D08C: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D090: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D094: jr          $ra
    // 0x8023D098: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D098: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void D_802D4BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D4C3C: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x802D4C40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D4C44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D4C48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D4C4C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D4C50: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x802D4C54: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x802D4C58: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x802D4C5C: jal         0x802AED90
    // 0x802D4C60: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AED90(rdram, ctx);
        goto after_0;
    // 0x802D4C60: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x802D4C64: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D4C68: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x802D4C6C: jal         0x802AEDDC
    // 0x802D4C70: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEDDC(rdram, ctx);
        goto after_1;
    // 0x802D4C70: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_1:
    // 0x802D4C74: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x802D4C78: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D4C7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D4C80: jal         0x8021B4B0
    // 0x802D4C84: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    static_3_8021B4B0(rdram, ctx);
        goto after_2;
    // 0x802D4C84: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    after_2:
    // 0x802D4C88: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802D4C8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802D4C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4C94: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x802D4C98: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802D4C9C: jal         0x80317194
    // 0x802D4CA0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_80317194(rdram, ctx);
        goto after_3;
    // 0x802D4CA0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x802D4CA4: lbu         $t7, 0xC55($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC55);
    // 0x802D4CA8: lwc1        $f2, 0x84($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802D4CAC: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x802D4CB0: bne         $t7, $zero, L_802D4D40
    if (ctx->r15 != 0) {
        // 0x802D4CB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802D4D40;
    }
    // 0x802D4CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4CB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D4CBC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x802D4CC0: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x802D4CC4: nop

    // 0x802D4CC8: bc1fl       L_802D4D44
    if (!c1cs) {
        // 0x802D4CCC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802D4D44;
    }
    goto skip_0;
    // 0x802D4CCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    skip_0:
    // 0x802D4CD0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D4CD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D4CD8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802D4CDC: nop

    // 0x802D4CE0: bc1fl       L_802D4D44
    if (!c1cs) {
        // 0x802D4CE4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802D4D44;
    }
    goto skip_1;
    // 0x802D4CE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    skip_1:
    // 0x802D4CE8: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802D4CEC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D4CF0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D4CF4: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x802D4CF8: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802D4CFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D4D00: jal         0x80200B20
    // 0x802D4D04: swc1        $f0, 0xC3C($s0)
    MEM_W(0XC3C, ctx->r16) = ctx->f0.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_4;
    // 0x802D4D04: swc1        $f0, 0xC3C($s0)
    MEM_W(0XC3C, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x802D4D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4D0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D4D10: jal         0x803059EC
    // 0x802D4D14: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    static_3_803059EC(rdram, ctx);
        goto after_5;
    // 0x802D4D14: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    after_5:
    // 0x802D4D18: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D4D1C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D4D20: lwc1        $f10, 0xC3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC3C);
    // 0x802D4D24: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802D4D28: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802D4D2C: nop

    // 0x802D4D30: bc1fl       L_802D4D50
    if (!c1cs) {
        // 0x802D4D34: lbu         $t9, 0xC56($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XC56);
            goto L_802D4D50;
    }
    goto skip_2;
    // 0x802D4D34: lbu         $t9, 0xC56($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC56);
    skip_2:
    // 0x802D4D38: b           L_802D4D4C
    // 0x802D4D3C: sb          $t8, 0xC55($s0)
    MEM_B(0XC55, ctx->r16) = ctx->r24;
        goto L_802D4D4C;
    // 0x802D4D3C: sb          $t8, 0xC55($s0)
    MEM_B(0XC55, ctx->r16) = ctx->r24;
L_802D4D40:
    // 0x802D4D40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_802D4D44:
    // 0x802D4D44: jal         0x803059EC
    // 0x802D4D48: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    static_3_803059EC(rdram, ctx);
        goto after_6;
    // 0x802D4D48: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    after_6:
L_802D4D4C:
    // 0x802D4D4C: lbu         $t9, 0xC56($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC56);
L_802D4D50:
    // 0x802D4D50: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802D4D54: beql        $t9, $zero, L_802D4E48
    if (ctx->r25 == 0) {
        // 0x802D4D58: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802D4E48;
    }
    goto skip_3;
    // 0x802D4D58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x802D4D5C: lwc1        $f18, 0xC58($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC58);
    // 0x802D4D60: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802D4D64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D4D68: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802D4D6C: swc1        $f6, 0xC58($s0)
    MEM_W(0XC58, ctx->r16) = ctx->f6.u32l;
    // 0x802D4D70: lwc1        $f10, 0xC58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC58);
    // 0x802D4D74: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802D4D78: nop

    // 0x802D4D7C: bc1fl       L_802D4E48
    if (!c1cs) {
        // 0x802D4D80: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802D4E48;
    }
    goto skip_4;
    // 0x802D4D80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x802D4D84: jal         0x8023499C
    // 0x802D4D88: nop

    static_3_8023499C(rdram, ctx);
        goto after_7;
    // 0x802D4D88: nop

    after_7:
    // 0x802D4D8C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D4D90: ldc1        $f18, 0x0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X0);
    // 0x802D4D94: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x802D4D98: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x802D4D9C: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x802D4DA0: nop

    // 0x802D4DA4: bc1fl       L_802D4E48
    if (!c1cs) {
        // 0x802D4DA8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802D4E48;
    }
    goto skip_5;
    // 0x802D4DA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x802D4DAC: jal         0x80228DE0
    // 0x802D4DB0: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    func_80228DE0(rdram, ctx);
        goto after_8;
    // 0x802D4DB0: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    after_8:
    // 0x802D4DB4: jal         0x8023499C
    // 0x802D4DB8: nop

    static_3_8023499C(rdram, ctx);
        goto after_9;
    // 0x802D4DB8: nop

    after_9:
    // 0x802D4DBC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802D4DC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D4DC4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802D4DC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D4DCC: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802D4DD0: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x802D4DD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D4DD8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802D4DDC: nop

    // 0x802D4DE0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802D4DE4: jal         0x8023499C
    // 0x802D4DE8: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_10;
    // 0x802D4DE8: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x802D4DEC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802D4DF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D4DF4: nop

    // 0x802D4DF8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802D4DFC: jal         0x8023499C
    // 0x802D4E00: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_11;
    // 0x802D4E00: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x802D4E04: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802D4E08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D4E0C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x802D4E10: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x802D4E14: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802D4E18: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x802D4E1C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802D4E20: jal         0x8022A0D0
    // 0x802D4E24: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_12;
    // 0x802D4E24: nop

    after_12:
    // 0x802D4E28: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D4E2C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D4E30: jal         0x802AAB00
    // 0x802D4E34: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    static_3_802AAB00(rdram, ctx);
        goto after_13;
    // 0x802D4E34: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_13:
    // 0x802D4E38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802D4E3C: nop

    // 0x802D4E40: swc1        $f16, 0xC58($s0)
    MEM_W(0XC58, ctx->r16) = ctx->f16.u32l;
    // 0x802D4E44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802D4E48:
    // 0x802D4E48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D4E4C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x802D4E50: jr          $ra
    // 0x802D4E54: nop

    return;
    // 0x802D4E54: nop

;}
RECOMP_FUNC void D_802CE31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CE39C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CE3A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CE3A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802CE3A8: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802CE3AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CE3B0: jal         0x802902DC
    // 0x802CE3B4: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_802902DC(rdram, ctx);
        goto after_0;
    // 0x802CE3B4: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_0:
    // 0x802CE3B8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802CE3BC: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x802CE3C0: jal         0x802FA254
    // 0x802CE3C4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA254(rdram, ctx);
        goto after_1;
    // 0x802CE3C4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_1:
    // 0x802CE3C8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x802CE3CC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802CE3D0: lw          $v0, 0x14($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X14);
    // 0x802CE3D4: sw          $t9, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r25;
    // 0x802CE3D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CE3DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CE3E0: jr          $ra
    // 0x802CE3E4: nop

    return;
    // 0x802CE3E4: nop

;}
RECOMP_FUNC void D_80221578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80221578: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022157C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80221580: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x80221584: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80221588: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x8022158C: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80221590: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80221594: sub.s       $f18, $f8, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x80221598: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8022159C: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802215A0: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802215A4: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x802215A8: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802215AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802215B0: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802215B4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x802215B8: sub.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x802215BC: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x802215C0: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x802215C4: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802215C8: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802215CC: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x802215D0: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x802215D4: jal         0x8023CE00
    // 0x802215D8: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    static_3_8023CE00(rdram, ctx);
        goto after_0;
    // 0x802215D8: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_0:
    // 0x802215DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802215E0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x802215E4: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802215E8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x802215EC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802215F0: bc1t        L_80221604
    if (c1cs) {
        // 0x802215F4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80221604;
    }
    // 0x802215F4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802215F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802215FC: b           L_80221610
    // 0x80221600: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
        goto L_80221610;
    // 0x80221600: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_80221604:
    // 0x80221604: lui         $at, 0xC37F
    ctx->r1 = S32(0XC37F << 16);
    // 0x80221608: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8022160C: nop

L_80221610:
    // 0x80221610: mul.s       $f20, $f18, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80221614: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80221618: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8022161C: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80221620: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80221624: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80221628: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8022162C: swc1        $f20, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f20.u32l;
    // 0x80221630: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80221634: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x80221638: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8022163C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80221640: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80221644: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x80221648: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8022164C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80221650: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80221654: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80221658: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8022165C: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x80221660: mul.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80221664: nop

    // 0x80221668: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8022166C: sub.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80221670: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80221674: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80221678: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    // 0x8022167C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80221680: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80221684: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80221688: nop

    // 0x8022168C: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80221690: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x80221694: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80221698: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8022169C: jal         0x8023CE00
    // 0x802216A0: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    static_3_8023CE00(rdram, ctx);
        goto after_1;
    // 0x802216A0: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    after_1:
    // 0x802216A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802216A8: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x802216AC: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802216B0: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x802216B4: lwc1        $f20, 0x48($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802216B8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802216BC: bc1tl       L_802216D8
    if (c1cs) {
        // 0x802216C0: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_802216D8;
    }
    goto skip_0;
    // 0x802216C0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x802216C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802216C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802216CC: b           L_802216DC
    // 0x802216D0: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
        goto L_802216DC;
    // 0x802216D0: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802216D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_802216D8:
    // 0x802216D8: nop

L_802216DC:
    // 0x802216DC: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x802216E0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802216E4: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802216E8: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x802216EC: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x802216F0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x802216F4: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802216F8: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802216FC: swc1        $f14, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f14.u32l;
    // 0x80221700: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
    // 0x80221704: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80221708: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8022170C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80221710: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80221714: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80221718: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8022171C: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80221720: mul.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80221724: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80221728: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8022172C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80221730: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80221734: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x80221738: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022173C: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80221740: nop

    // 0x80221744: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80221748: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8022174C: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80221750: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80221754: jal         0x8023CE00
    // 0x80221758: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    static_3_8023CE00(rdram, ctx);
        goto after_2;
    // 0x80221758: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_2:
    // 0x8022175C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80221760: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80221764: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80221768: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8022176C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80221770: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80221774: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80221778: bc1tl       L_80221794
    if (c1cs) {
        // 0x8022177C: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_80221794;
    }
    goto skip_1;
    // 0x8022177C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_1:
    // 0x80221780: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80221784: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80221788: b           L_80221798
    // 0x8022178C: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
        goto L_80221798;
    // 0x8022178C: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80221790: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_80221794:
    // 0x80221794: nop

L_80221798:
    // 0x80221798: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8022179C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802217A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802217A4: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x802217A8: ldc1        $f12, 0x0($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, 0X0);
    // 0x802217AC: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x802217B0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802217B4: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x802217B8: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802217BC: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x802217C0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802217C4: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x802217C8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802217CC: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x802217D0: mul.d       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f14.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x802217D4: c.lt.d      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.d < ctx->f12.d;
    // 0x802217D8: nop

    // 0x802217DC: bc1fl       L_802217F0
    if (!c1cs) {
        // 0x802217E0: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_802217F0;
    }
    goto skip_2;
    // 0x802217E0: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_2:
    // 0x802217E4: b           L_802217F0
    // 0x802217E8: mov.d       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.d = ctx->f14.d;
        goto L_802217F0;
    // 0x802217E8: mov.d       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.d = ctx->f14.d;
    // 0x802217EC: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_802217F0:
    // 0x802217F0: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x802217F4: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x802217F8: nop

    // 0x802217FC: sb          $t6, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r14;
    // 0x80221800: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80221804: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80221808: mul.d       $f2, $f8, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x8022180C: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x80221810: nop

    // 0x80221814: bc1fl       L_80221828
    if (!c1cs) {
        // 0x80221818: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_80221828;
    }
    goto skip_3;
    // 0x80221818: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_3:
    // 0x8022181C: b           L_80221828
    // 0x80221820: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
        goto L_80221828;
    // 0x80221820: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x80221824: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_80221828:
    // 0x80221828: trunc.w.d   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8022182C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80221830: nop

    // 0x80221834: sb          $t9, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r25;
    // 0x80221838: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8022183C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80221840: mul.d       $f2, $f6, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x80221844: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x80221848: nop

    // 0x8022184C: bc1fl       L_80221860
    if (!c1cs) {
        // 0x80221850: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_80221860;
    }
    goto skip_4;
    // 0x80221850: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_4:
    // 0x80221854: b           L_80221860
    // 0x80221858: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
        goto L_80221860;
    // 0x80221858: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x8022185C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_80221860:
    // 0x80221860: trunc.w.d   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80221864: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80221868: nop

    // 0x8022186C: sb          $t2, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r10;
    // 0x80221870: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80221874: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80221878: mul.d       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x8022187C: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x80221880: nop

    // 0x80221884: bc1fl       L_80221898
    if (!c1cs) {
        // 0x80221888: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_80221898;
    }
    goto skip_5;
    // 0x80221888: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_5:
    // 0x8022188C: b           L_80221898
    // 0x80221890: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
        goto L_80221898;
    // 0x80221890: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x80221894: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_80221898:
    // 0x80221898: trunc.w.d   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8022189C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x802218A0: nop

    // 0x802218A4: sb          $t5, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r13;
    // 0x802218A8: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802218AC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802218B0: mul.d       $f2, $f10, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x802218B4: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x802218B8: nop

    // 0x802218BC: bc1fl       L_802218D0
    if (!c1cs) {
        // 0x802218C0: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_802218D0;
    }
    goto skip_6;
    // 0x802218C0: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_6:
    // 0x802218C4: b           L_802218D0
    // 0x802218C8: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
        goto L_802218D0;
    // 0x802218C8: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x802218CC: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_802218D0:
    // 0x802218D0: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x802218D4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x802218D8: nop

    // 0x802218DC: sb          $t8, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r24;
    // 0x802218E0: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802218E4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802218E8: mul.d       $f2, $f8, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x802218EC: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x802218F0: nop

    // 0x802218F4: bc1fl       L_80221908
    if (!c1cs) {
        // 0x802218F8: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_80221908;
    }
    goto skip_7;
    // 0x802218F8: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_7:
    // 0x802218FC: b           L_80221908
    // 0x80221900: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
        goto L_80221908;
    // 0x80221900: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x80221904: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_80221908:
    // 0x80221908: trunc.w.d   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8022190C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80221910: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x80221914: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x80221918: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8022191C: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x80221920: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x80221924: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x80221928: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
    // 0x8022192C: sb          $zero, 0x7($a0)
    MEM_B(0X7, ctx->r4) = 0;
    // 0x80221930: sb          $zero, 0x10($a0)
    MEM_B(0X10, ctx->r4) = 0;
    // 0x80221934: sb          $v0, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r2;
    // 0x80221938: sb          $zero, 0x12($a0)
    MEM_B(0X12, ctx->r4) = 0;
    // 0x8022193C: sb          $zero, 0x13($a0)
    MEM_B(0X13, ctx->r4) = 0;
    // 0x80221940: sb          $zero, 0x14($a0)
    MEM_B(0X14, ctx->r4) = 0;
    // 0x80221944: sb          $v0, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r2;
    // 0x80221948: sb          $zero, 0x16($a0)
    MEM_B(0X16, ctx->r4) = 0;
    // 0x8022194C: sb          $zero, 0x17($a0)
    MEM_B(0X17, ctx->r4) = 0;
    // 0x80221950: sb          $t1, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r9;
    // 0x80221954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80221958: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8022195C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80221960: jr          $ra
    // 0x80221964: nop

    return;
    // 0x80221964: nop

;}
RECOMP_FUNC void D_802EDFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EE054: lbu         $t6, 0xAC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XAC);
    // 0x802EE058: beq         $t6, $zero, L_802EE254
    if (ctx->r14 == 0) {
        // 0x802EE05C: nop
    
            goto L_802EE254;
    }
    // 0x802EE05C: nop

    // 0x802EE060: lh          $t7, 0x68($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X68);
    // 0x802EE064: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802EE068: bnel        $v1, $t7, L_802EE09C
    if (ctx->r3 != ctx->r15) {
        // 0x802EE06C: lh          $v0, 0xD4($a0)
        ctx->r2 = MEM_H(ctx->r4, 0XD4);
            goto L_802EE09C;
    }
    goto skip_0;
    // 0x802EE06C: lh          $v0, 0xD4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XD4);
    skip_0:
    // 0x802EE070: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802EE074: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x802EE078: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x802EE07C: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x802EE080: sh          $zero, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = 0;
    // 0x802EE084: swc1        $f0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f0.u32l;
    // 0x802EE088: swc1        $f4, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f4.u32l;
    // 0x802EE08C: swc1        $f6, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->f6.u32l;
    // 0x802EE090: jr          $ra
    // 0x802EE094: swc1        $f8, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802EE094: swc1        $f8, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f8.u32l;
    // 0x802EE098: lh          $v0, 0xD4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XD4);
L_802EE09C:
    // 0x802EE09C: bnel        $v0, $zero, L_802EE0B4
    if (ctx->r2 != 0) {
        // 0x802EE0A0: lh          $t8, 0xB4($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XB4);
            goto L_802EE0B4;
    }
    goto skip_1;
    // 0x802EE0A0: lh          $t8, 0xB4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XB4);
    skip_1:
    // 0x802EE0A4: sh          $v1, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r3;
    // 0x802EE0A8: b           L_802EE0D4
    // 0x802EE0AC: sh          $zero, 0xC2($a0)
    MEM_H(0XC2, ctx->r4) = 0;
        goto L_802EE0D4;
    // 0x802EE0AC: sh          $zero, 0xC2($a0)
    MEM_H(0XC2, ctx->r4) = 0;
    // 0x802EE0B0: lh          $t8, 0xB4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XB4);
L_802EE0B4:
    // 0x802EE0B4: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802EE0B8: beql        $at, $zero, L_802EE0D8
    if (ctx->r1 == 0) {
        // 0x802EE0BC: lh          $v0, 0xC2($a0)
        ctx->r2 = MEM_H(ctx->r4, 0XC2);
            goto L_802EE0D8;
    }
    goto skip_2;
    // 0x802EE0BC: lh          $v0, 0xC2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC2);
    skip_2:
    // 0x802EE0C0: lh          $t9, 0xC2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XC2);
    // 0x802EE0C4: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x802EE0C8: bnel        $t9, $zero, L_802EE0D8
    if (ctx->r25 != 0) {
        // 0x802EE0CC: lh          $v0, 0xC2($a0)
        ctx->r2 = MEM_H(ctx->r4, 0XC2);
            goto L_802EE0D8;
    }
    goto skip_3;
    // 0x802EE0CC: lh          $v0, 0xC2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC2);
    skip_3:
    // 0x802EE0D0: sh          $t1, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r9;
L_802EE0D4:
    // 0x802EE0D4: lh          $v0, 0xC2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC2);
L_802EE0D8:
    // 0x802EE0D8: bnel        $v0, $zero, L_802EE1D8
    if (ctx->r2 != 0) {
        // 0x802EE0DC: lh          $t2, 0xC0($a0)
        ctx->r10 = MEM_H(ctx->r4, 0XC0);
            goto L_802EE1D8;
    }
    goto skip_4;
    // 0x802EE0DC: lh          $t2, 0xC0($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XC0);
    skip_4:
    // 0x802EE0E0: lwc1        $f10, 0xC8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC8);
    // 0x802EE0E4: lwc1        $f16, 0x34($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X34);
    // 0x802EE0E8: lwc1        $f4, 0xCC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XCC);
    // 0x802EE0EC: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x802EE0F0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802EE0F4: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x802EE0F8: lwc1        $f10, 0xD0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x802EE0FC: lh          $v0, 0xD4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XD4);
    // 0x802EE100: swc1        $f18, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f18.u32l;
    // 0x802EE104: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802EE108: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802EE10C: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x802EE110: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802EE114: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802EE118: swc1        $f8, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->f8.u32l;
    // 0x802EE11C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x802EE120: blez        $t3, L_802EE1A4
    if (SIGNED(ctx->r11) <= 0) {
        // 0x802EE124: swc1        $f18, 0xD0($a0)
        MEM_W(0XD0, ctx->r4) = ctx->f18.u32l;
            goto L_802EE1A4;
    }
    // 0x802EE124: swc1        $f18, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f18.u32l;
    // 0x802EE128: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
L_802EE12C:
    // 0x802EE12C: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802EE130: lw          $t4, 0xDC($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XDC);
    // 0x802EE134: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802EE138: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x802EE13C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802EE140: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x802EE144: mflo        $a2
    ctx->r6 = lo;
    // 0x802EE148: addu        $a3, $t4, $a2
    ctx->r7 = ADD32(ctx->r12, ctx->r6);
    // 0x802EE14C: lw          $at, -0xC($a3)
    ctx->r1 = MEM_W(ctx->r7, -0XC);
    // 0x802EE150: lw          $t6, -0x8($a3)
    ctx->r14 = MEM_W(ctx->r7, -0X8);
    // 0x802EE154: sw          $at, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r1;
    // 0x802EE158: lw          $at, -0x4($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X4);
    // 0x802EE15C: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x802EE160: sw          $at, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r1;
    // 0x802EE164: lw          $t7, 0xDC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XDC);
    // 0x802EE168: lwc1        $f6, 0xC8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC8);
    // 0x802EE16C: addu        $a3, $t7, $a2
    ctx->r7 = ADD32(ctx->r15, ctx->r6);
    // 0x802EE170: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x802EE174: lwc1        $f10, 0x4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X4);
    // 0x802EE178: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x802EE17C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802EE180: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x802EE184: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x802EE188: lwc1        $f16, 0xCC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XCC);
    // 0x802EE18C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802EE190: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
    // 0x802EE194: lwc1        $f6, 0xD0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x802EE198: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802EE19C: bgtz        $t9, L_802EE12C
    if (SIGNED(ctx->r25) > 0) {
        // 0x802EE1A0: swc1        $f8, 0x8($a3)
        MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
            goto L_802EE12C;
    }
    // 0x802EE1A0: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
L_802EE1A4:
    // 0x802EE1A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802EE1A8: lw          $v1, 0xDC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XDC);
    // 0x802EE1AC: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x802EE1B0: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x802EE1B4: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x802EE1B8: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x802EE1BC: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x802EE1C0: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x802EE1C4: lh          $v0, 0xC2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC2);
    // 0x802EE1C8: swc1        $f10, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f10.u32l;
    // 0x802EE1CC: swc1        $f16, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->f16.u32l;
    // 0x802EE1D0: swc1        $f18, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f18.u32l;
    // 0x802EE1D4: lh          $t2, 0xC0($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XC0);
L_802EE1D8:
    // 0x802EE1D8: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x802EE1DC: lh          $a1, 0xB4($a0)
    ctx->r5 = MEM_H(ctx->r4, 0XB4);
    // 0x802EE1E0: div         $zero, $t1, $t2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r10)));
    // 0x802EE1E4: lh          $t4, 0xBE($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XBE);
    // 0x802EE1E8: lh          $t5, 0xC4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0XC4);
    // 0x802EE1EC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802EE1F0: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x802EE1F4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x802EE1F8: bne         $t2, $zero, L_802EE204
    if (ctx->r10 != 0) {
        // 0x802EE1FC: nop
    
            goto L_802EE204;
    }
    // 0x802EE1FC: nop

    // 0x802EE200: break       7
    do_break(2150556160);
L_802EE204:
    // 0x802EE204: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802EE208: bne         $t2, $at, L_802EE21C
    if (ctx->r10 != ctx->r1) {
        // 0x802EE20C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802EE21C;
    }
    // 0x802EE20C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802EE210: bne         $t1, $at, L_802EE21C
    if (ctx->r9 != ctx->r1) {
        // 0x802EE214: nop
    
            goto L_802EE21C;
    }
    // 0x802EE214: nop

    // 0x802EE218: break       6
    do_break(2150556184);
L_802EE21C:
    // 0x802EE21C: sh          $t6, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r14;
    // 0x802EE220: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802EE224: lh          $v1, 0xBE($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XBE);
    // 0x802EE228: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x802EE22C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802EE230: addiu       $t8, $t7, -0x64
    ctx->r24 = ADD32(ctx->r15, -0X64);
    // 0x802EE234: mfhi        $t3
    ctx->r11 = hi;
    // 0x802EE238: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802EE23C: sh          $t3, 0xC2($a0)
    MEM_H(0XC2, ctx->r4) = ctx->r11;
    // 0x802EE240: bne         $at, $zero, L_802EE254
    if (ctx->r1 != 0) {
        // 0x802EE244: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_802EE254;
    }
    // 0x802EE244: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x802EE248: subu        $t9, $v1, $t7
    ctx->r25 = SUB32(ctx->r3, ctx->r15);
    // 0x802EE24C: addiu       $t1, $t9, 0x64
    ctx->r9 = ADD32(ctx->r25, 0X64);
    // 0x802EE250: sh          $t1, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r9;
L_802EE254:
    // 0x802EE254: jr          $ra
    // 0x802EE258: nop

    return;
    // 0x802EE258: nop

;}
RECOMP_FUNC void D_802A21F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2274: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A2278: jr          $ra
    // 0x802A227C: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802A227C: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_80282168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802821E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802821EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802821F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802821F4: bne         $a0, $zero, L_8028220C
    if (ctx->r4 != 0) {
        // 0x802821F8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8028220C;
    }
    // 0x802821F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802821FC: jal         0x802C67EC
    // 0x80282200: ori         $a0, $zero, 0xEDBC
    ctx->r4 = 0 | 0XEDBC;
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80282200: ori         $a0, $zero, 0xEDBC
    ctx->r4 = 0 | 0XEDBC;
    after_0:
    // 0x80282204: beq         $v0, $zero, L_80282240
    if (ctx->r2 == 0) {
        // 0x80282208: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80282240;
    }
    // 0x80282208: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8028220C:
    // 0x8028220C: jal         0x80308668
    // 0x80282210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x80282210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80282214: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80282218: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8028221C: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x80282220: jal         0x802B1D80
    // 0x80282224: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    static_3_802B1D80(rdram, ctx);
        goto after_2;
    // 0x80282224: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    after_2:
    // 0x80282228: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8028222C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80282230: addiu       $a0, $s0, 0x5C8
    ctx->r4 = ADD32(ctx->r16, 0X5C8);
    // 0x80282234: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x80282238: jal         0x802C6930
    // 0x8028223C: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    static_3_802C6930(rdram, ctx);
        goto after_3;
    // 0x8028223C: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    after_3:
L_80282240:
    // 0x80282240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282244: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80282248: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028224C: jr          $ra
    // 0x80282250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80282250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80205F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205F50: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80205F54: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205F58: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205F5C: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205F60: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80205F64: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80205F68: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80205F6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80205F70: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205F74: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80205F78: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205F7C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80205F80: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x80205F84: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80205F88: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80205F8C: beql        $t9, $zero, L_802065EC
    if (ctx->r25 == 0) {
        // 0x80205F90: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802065EC;
    }
    goto skip_0;
    // 0x80205F90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80205F94: jal         0x802073D8
    // 0x80205F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802073D8(rdram, ctx);
        goto after_0;
    // 0x80205F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80205F9C: lw          $v0, 0x2D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2D0);
    // 0x80205FA0: beql        $v0, $zero, L_80205FB4
    if (ctx->r2 == 0) {
        // 0x80205FA4: addiu       $a0, $s0, 0x8
        ctx->r4 = ADD32(ctx->r16, 0X8);
            goto L_80205FB4;
    }
    goto skip_1;
    // 0x80205FA4: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    skip_1:
    // 0x80205FA8: jalr        $v0
    // 0x80205FAC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80205FAC: nop

    after_1:
    // 0x80205FB0: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
L_80205FB4:
    // 0x80205FB4: jal         0x80221B2C
    // 0x80205FB8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    static_3_80221B2C(rdram, ctx);
        goto after_2;
    // 0x80205FB8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_2:
    // 0x80205FBC: jal         0x8022149C
    // 0x80205FC0: addiu       $a0, $s0, 0xC8
    ctx->r4 = ADD32(ctx->r16, 0XC8);
    static_3_8022149C(rdram, ctx);
        goto after_3;
    // 0x80205FC0: addiu       $a0, $s0, 0xC8
    ctx->r4 = ADD32(ctx->r16, 0XC8);
    after_3:
    // 0x80205FC4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80205FC8: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80205FCC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80205FD0: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x80205FD4: ori         $t5, $t5, 0xE
    ctx->r13 = ctx->r13 | 0XE;
    // 0x80205FD8: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80205FDC: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80205FE0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80205FE4: lwc1        $f6, 0x130($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X130);
    // 0x80205FE8: lwc1        $f4, 0x134($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X134);
    // 0x80205FEC: lui         $at, 0x4800
    ctx->r1 = S32(0X4800 << 16);
    // 0x80205FF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80205FF4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80205FF8: div.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80205FFC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80206000: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80206004: nop

    // 0x80206008: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8020600C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80206010: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80206014: jal         0x80222B90
    // 0x80206018: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    static_3_80222B90(rdram, ctx);
        goto after_4;
    // 0x80206018: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_4:
    // 0x8020601C: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x80206020: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80206024: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80206028: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x8020602C: bnel        $t5, $zero, L_80206048
    if (ctx->r13 != 0) {
        // 0x80206030: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_80206048;
    }
    goto skip_2;
    // 0x80206030: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x80206034: jal         0x802223E0
    // 0x80206038: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    static_3_802223E0(rdram, ctx);
        goto after_5;
    // 0x80206038: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_5:
    // 0x8020603C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80206040: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80206044: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_80206048:
    // 0x80206048: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8020604C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80206050: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80206054: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80206058: ori         $t7, $t7, 0x404
    ctx->r15 = ctx->r15 | 0X404;
    // 0x8020605C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80206060: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80206064: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206068: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x8020606C: ori         $t9, $t9, 0xC04
    ctx->r25 = ctx->r25 | 0XC04;
    // 0x80206070: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80206074: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80206078: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8020607C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80206080: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206084: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x80206088: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
    // 0x8020608C: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80206090: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80206094: ori         $t5, $t5, 0x1404
    ctx->r13 = ctx->r13 | 0X1404;
    // 0x80206098: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8020609C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x802060A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802060A4: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x802060A8: ori         $t7, $t7, 0x1C04
    ctx->r15 = ctx->r15 | 0X1C04;
    // 0x802060AC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802060B0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802060B4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x802060B8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802060BC: lhu         $a1, 0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2);
    // 0x802060C0: jal         0x8021D9E0
    // 0x802060C4: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    static_3_8021D9E0(rdram, ctx);
        goto after_6;
    // 0x802060C4: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_6:
    // 0x802060C8: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x802060CC: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x802060D0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802060D4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802060D8: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x802060DC: bne         $t9, $zero, L_8020615C
    if (ctx->r25 != 0) {
        // 0x802060E0: addiu       $v1, $v1, 0x0
        ctx->r3 = ADD32(ctx->r3, 0X0);
            goto L_8020615C;
    }
    // 0x802060E0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802060E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802060E8: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x802060EC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802060F0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x802060F4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802060F8: ori         $t5, $t5, 0x404
    ctx->r13 = ctx->r13 | 0X404;
    // 0x802060FC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80206100: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80206104: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206108: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8020610C: ori         $t7, $t7, 0xC04
    ctx->r15 = ctx->r15 | 0XC04;
    // 0x80206110: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80206114: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80206118: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8020611C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80206120: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206124: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x80206128: ori         $t1, $zero, 0xFFFE
    ctx->r9 = 0 | 0XFFFE;
    // 0x8020612C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80206130: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80206134: ori         $t9, $t9, 0x1404
    ctx->r25 = ctx->r25 | 0X1404;
    // 0x80206138: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8020613C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80206140: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206144: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x80206148: ori         $t5, $t5, 0x1C04
    ctx->r13 = ctx->r13 | 0X1C04;
    // 0x8020614C: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80206150: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80206154: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80206158: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_8020615C:
    // 0x8020615C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206160: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80206164: lui         $t0, 0xB700
    ctx->r8 = S32(0XB700 << 16);
    // 0x80206168: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8020616C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80206170: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80206174: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80206178: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8020617C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80206180: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80206184: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80206188: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8020618C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80206190: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80206194: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206198: lui         $t8, 0xFFFE
    ctx->r24 = S32(0XFFFE << 16);
    // 0x8020619C: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x802061A0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x802061A4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802061A8: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x802061AC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x802061B0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802061B4: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x802061B8: ori         $t8, $t8, 0x7838
    ctx->r24 = ctx->r24 | 0X7838;
    // 0x802061BC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802061C0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802061C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802061C8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802061CC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802061D0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802061D4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802061D8: nop

    // 0x802061DC: bc1fl       L_80206210
    if (!c1cs) {
        // 0x802061E0: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_80206210;
    }
    goto skip_3;
    // 0x802061E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x802061E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802061E8: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x802061EC: lui         $t5, 0xC811
    ctx->r13 = S32(0XC811 << 16);
    // 0x802061F0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802061F4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802061F8: ori         $t5, $t5, 0x2078
    ctx->r13 = ctx->r13 | 0X2078;
    // 0x802061FC: ori         $t4, $t4, 0x31D
    ctx->r12 = ctx->r12 | 0X31D;
    // 0x80206200: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80206204: b           L_80206230
    // 0x80206208: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
        goto L_80206230;
    // 0x80206208: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8020620C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_80206210:
    // 0x80206210: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80206214: lui         $t8, 0xC19
    ctx->r24 = S32(0XC19 << 16);
    // 0x80206218: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8020621C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80206220: ori         $t8, $t8, 0x2078
    ctx->r24 = ctx->r24 | 0X2078;
    // 0x80206224: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80206228: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8020622C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_80206230:
    // 0x80206230: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80206234: andi        $t4, $t9, 0x2
    ctx->r12 = ctx->r25 & 0X2;
    // 0x80206238: beq         $t4, $zero, L_80206298
    if (ctx->r12 == 0) {
        // 0x8020623C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80206298;
    }
    // 0x8020623C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206240: jal         0x802320B4
    // 0x80206244: lbu         $a1, 0x5($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X5);
    static_3_802320B4(rdram, ctx);
        goto after_7;
    // 0x80206244: lbu         $a1, 0x5($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X5);
    after_7:
    // 0x80206248: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8020624C: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x80206250: lhu         $t7, 0x4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X4);
    // 0x80206254: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x80206258: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8020625C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80206260: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x80206264: beq         $t4, $zero, L_8020629C
    if (ctx->r12 == 0) {
        // 0x80206268: sw          $t4, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r12;
            goto L_8020629C;
    }
    // 0x80206268: sw          $t4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r12;
    // 0x8020626C: lbu         $t7, 0x18($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X18);
    // 0x80206270: lbu         $t6, 0x19($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X19);
    // 0x80206274: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80206278: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020627C: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80206280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80206284: mflo        $a2
    ctx->r6 = lo;
    // 0x80206288: jal         0x8022B780
    // 0x8020628C: nop

    static_3_8022B780(rdram, ctx);
        goto after_8;
    // 0x8020628C: nop

    after_8:
    // 0x80206290: b           L_8020629C
    // 0x80206294: nop

        goto L_8020629C;
    // 0x80206294: nop

L_80206298:
    // 0x80206298: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
L_8020629C:
    // 0x8020629C: jal         0x8022E044
    // 0x802062A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022E044(rdram, ctx);
        goto after_9;
    // 0x802062A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802062A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802062A8: jal         0x8021BE28
    // 0x802062AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8021BE28(rdram, ctx);
        goto after_10;
    // 0x802062AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x802062B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802062B4: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802062B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802062BC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802062C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802062C4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802062C8: nop

    // 0x802062CC: bc1fl       L_802062E0
    if (!c1cs) {
        // 0x802062D0: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_802062E0;
    }
    goto skip_4;
    // 0x802062D0: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_4:
    // 0x802062D4: b           L_802062E4
    // 0x802062D8: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
        goto L_802062E4;
    // 0x802062D8: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x802062DC: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_802062E0:
    // 0x802062E0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_802062E4:
    // 0x802062E4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802062E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802062EC: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x802062F0: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x802062F4: nop

    // 0x802062F8: bc1f        L_80206308
    if (!c1cs) {
        // 0x802062FC: nop
    
            goto L_80206308;
    }
    // 0x802062FC: nop

    // 0x80206300: b           L_80206308
    // 0x80206304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80206308;
    // 0x80206304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80206308:
    // 0x80206308: beql        $v0, $zero, L_8020653C
    if (ctx->r2 == 0) {
        // 0x8020630C: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_8020653C;
    }
    goto skip_5;
    // 0x8020630C: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_5:
    // 0x80206310: beq         $t8, $zero, L_80206538
    if (ctx->r24 == 0) {
        // 0x80206314: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_80206538;
    }
    // 0x80206314: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80206318: lwc1        $f6, 0x128($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X128);
    // 0x8020631C: lwc1        $f16, 0x120($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X120);
    // 0x80206320: lwc1        $f18, 0x124($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X124);
    // 0x80206324: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x80206328: lwc1        $f10, 0x12C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X12C);
    // 0x8020632C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80206330: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80206334: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x80206338: lwc1        $f12, 0x130($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X130);
    // 0x8020633C: lwc1        $f0, 0x134($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X134);
    // 0x80206340: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80206344: mul.s       $f4, $f12, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80206348: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x8020634C: lwc1        $f10, 0x24($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X24);
    // 0x80206350: mul.s       $f14, $f0, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80206354: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80206358: div.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8020635C: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x80206360: nop

    // 0x80206364: bc1f        L_80206370
    if (!c1cs) {
        // 0x80206368: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_80206370;
    }
    // 0x80206368: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8020636C: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
L_80206370:
    // 0x80206370: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80206374: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x80206378: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8020637C: subu        $a0, $s0, $t9
    ctx->r4 = SUB32(ctx->r16, ctx->r25);
    // 0x80206380: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x80206384: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80206388: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8020638C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80206390: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80206394: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80206398: mflo        $a0
    ctx->r4 = lo;
    // 0x8020639C: swc1        $f12, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f12.u32l;
    // 0x802063A0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802063A4: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802063A8: swc1        $f14, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f14.u32l;
    // 0x802063AC: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x802063B0: mul.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802063B4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802063B8: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802063BC: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x802063C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802063C4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x802063C8: jal         0x80205C7C
    // 0x802063CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    static_3_80205C7C(rdram, ctx);
        goto after_11;
    // 0x802063CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x802063D0: jal         0x80221B2C
    // 0x802063D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_80221B2C(rdram, ctx);
        goto after_12;
    // 0x802063D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_12:
    // 0x802063D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802063DC: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x802063E0: jal         0x80231EE0
    // 0x802063E4: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    static_3_80231EE0(rdram, ctx);
        goto after_13;
    // 0x802063E4: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    after_13:
    // 0x802063E8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802063EC: jal         0x80220534
    // 0x802063F0: nop

    static_3_80220534(rdram, ctx);
        goto after_14;
    // 0x802063F0: nop

    after_14:
    // 0x802063F4: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802063F8: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802063FC: jal         0x80206BE4
    // 0x80206400: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    static_3_80206BE4(rdram, ctx);
        goto after_15;
    // 0x80206400: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    after_15:
    // 0x80206404: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x80206408: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8020640C: lui         $a3, 0x5368
    ctx->r7 = S32(0X5368 << 16);
    // 0x80206410: lwc1        $f4, 0x24($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80206414: ori         $a3, $a3, 0xD4A5
    ctx->r7 = ctx->r7 | 0XD4A5;
    // 0x80206418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020641C: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80206420: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80206424: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80206428: jal         0x80206D04
    // 0x8020642C: nop

    static_3_80206D04(rdram, ctx);
        goto after_16;
    // 0x8020642C: nop

    after_16:
    // 0x80206430: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x80206434: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80206438: lui         $a3, 0x5368
    ctx->r7 = S32(0X5368 << 16);
    // 0x8020643C: lwc1        $f8, 0x24($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80206440: ori         $a3, $a3, 0xD4A5
    ctx->r7 = ctx->r7 | 0XD4A5;
    // 0x80206444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206448: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8020644C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80206450: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80206454: jal         0x80206D04
    // 0x80206458: nop

    static_3_80206D04(rdram, ctx);
        goto after_17;
    // 0x80206458: nop

    after_17:
    // 0x8020645C: jal         0x802206A0
    // 0x80206460: nop

    static_3_802206A0(rdram, ctx);
        goto after_18;
    // 0x80206460: nop

    after_18:
    // 0x80206464: jal         0x802223E0
    // 0x80206468: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    static_3_802223E0(rdram, ctx);
        goto after_19;
    // 0x80206468: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_19:
    // 0x8020646C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80206470: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80206474: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x80206478: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8020647C: subu        $a0, $s0, $t8
    ctx->r4 = SUB32(ctx->r16, ctx->r24);
    // 0x80206480: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x80206484: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80206488: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8020648C: mflo        $a0
    ctx->r4 = lo;
    // 0x80206490: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x80206494: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x80206498: lw          $a3, 0x8C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8C);
    // 0x8020649C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x802064A0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x802064A4: jal         0x80205C7C
    // 0x802064A8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    static_3_80205C7C(rdram, ctx);
        goto after_20;
    // 0x802064A8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_20:
    // 0x802064AC: jal         0x80221B2C
    // 0x802064B0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_80221B2C(rdram, ctx);
        goto after_21;
    // 0x802064B0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_21:
    // 0x802064B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802064B8: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x802064BC: jal         0x80232004
    // 0x802064C0: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    static_3_80232004(rdram, ctx);
        goto after_22;
    // 0x802064C0: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    after_22:
    // 0x802064C4: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802064C8: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802064CC: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x802064D0: beql        $t4, $t5, L_802064E4
    if (ctx->r12 == ctx->r13) {
        // 0x802064D4: lw          $t7, 0xA0($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XA0);
            goto L_802064E4;
    }
    goto skip_6;
    // 0x802064D4: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    skip_6:
    // 0x802064D8: jal         0x80206BE4
    // 0x802064DC: nop

    static_3_80206BE4(rdram, ctx);
        goto after_23;
    // 0x802064DC: nop

    after_23:
    // 0x802064E0: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
L_802064E4:
    // 0x802064E4: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802064E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802064EC: lwc1        $f6, 0x24($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X24);
    // 0x802064F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802064F4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802064F8: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802064FC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80206500: jal         0x80206D04
    // 0x80206504: nop

    static_3_80206D04(rdram, ctx);
        goto after_24;
    // 0x80206504: nop

    after_24:
    // 0x80206508: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8020650C: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80206510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206514: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80206518: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8020651C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80206520: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80206524: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80206528: jal         0x80206D04
    // 0x8020652C: nop

    static_3_80206D04(rdram, ctx);
        goto after_25;
    // 0x8020652C: nop

    after_25:
    // 0x80206530: b           L_8020658C
    // 0x80206534: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
        goto L_8020658C;
    // 0x80206534: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
L_80206538:
    // 0x80206538: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
L_8020653C:
    // 0x8020653C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206540: beq         $t8, $zero, L_80206550
    if (ctx->r24 == 0) {
        // 0x80206544: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_80206550;
    }
    // 0x80206544: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80206548: jal         0x80231EE0
    // 0x8020654C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_80231EE0(rdram, ctx);
        goto after_26;
    // 0x8020654C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_26:
L_80206550:
    // 0x80206550: jal         0x80206BE4
    // 0x80206554: nop

    static_3_80206BE4(rdram, ctx);
        goto after_27;
    // 0x80206554: nop

    after_27:
    // 0x80206558: lui         $a3, 0x5368
    ctx->r7 = S32(0X5368 << 16);
    // 0x8020655C: ori         $a3, $a3, 0xD4A5
    ctx->r7 = ctx->r7 | 0XD4A5;
    // 0x80206560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80206568: jal         0x80206D04
    // 0x8020656C: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    static_3_80206D04(rdram, ctx);
        goto after_28;
    // 0x8020656C: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    after_28:
    // 0x80206570: lui         $a3, 0x5368
    ctx->r7 = S32(0X5368 << 16);
    // 0x80206574: ori         $a3, $a3, 0xD4A5
    ctx->r7 = ctx->r7 | 0XD4A5;
    // 0x80206578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020657C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80206580: jal         0x80206D04
    // 0x80206584: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    static_3_80206D04(rdram, ctx);
        goto after_29;
    // 0x80206584: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    after_29:
    // 0x80206588: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
L_8020658C:
    // 0x8020658C: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x80206590: beql        $t9, $zero, L_802065A4
    if (ctx->r25 == 0) {
        // 0x80206594: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802065A4;
    }
    goto skip_7;
    // 0x80206594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_7:
    // 0x80206598: jal         0x8021D44C
    // 0x8020659C: lhu         $a1, 0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2);
    static_3_8021D44C(rdram, ctx);
        goto after_30;
    // 0x8020659C: lhu         $a1, 0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2);
    after_30:
    // 0x802065A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802065A4:
    // 0x802065A4: jal         0x8021BE28
    // 0x802065A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8021BE28(rdram, ctx);
        goto after_31;
    // 0x802065A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_31:
    // 0x802065AC: jal         0x8023403C
    // 0x802065B0: nop

    static_3_8023403C(rdram, ctx);
        goto after_32;
    // 0x802065B0: nop

    after_32:
    // 0x802065B4: jal         0x8021C1F0
    // 0x802065B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8021C1F0(rdram, ctx);
        goto after_33;
    // 0x802065B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x802065BC: jal         0x802206A0
    // 0x802065C0: nop

    static_3_802206A0(rdram, ctx);
        goto after_34;
    // 0x802065C0: nop

    after_34:
    // 0x802065C4: lw          $v0, 0x2D4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2D4);
    // 0x802065C8: beq         $v0, $zero, L_802065D8
    if (ctx->r2 == 0) {
        // 0x802065CC: nop
    
            goto L_802065D8;
    }
    // 0x802065CC: nop

    // 0x802065D0: jalr        $v0
    // 0x802065D4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_35;
    // 0x802065D4: nop

    after_35:
L_802065D8:
    // 0x802065D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802065DC: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802065E0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802065E4: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802065E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802065EC:
    // 0x802065EC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802065F0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802065F4: jr          $ra
    // 0x802065F8: nop

    return;
    // 0x802065F8: nop

;}
RECOMP_FUNC void func_80246BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246BB0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80246BB4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80246BB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80246BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246BC0: bne         $t6, $zero, L_80246BD0
    if (ctx->r14 != 0) {
        // 0x80246BC4: nop
    
            goto L_80246BD0;
    }
    // 0x80246BC4: nop

    // 0x80246BC8: jal         0x80246BB0
    // 0x80246BCC: nop

    func_80246BB0(rdram, ctx);
        goto after_0;
    // 0x80246BCC: nop

    after_0:
L_80246BD0:
    // 0x80246BD0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80246BD4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80246BD8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80246BDC: jal         0x802374B0
    // 0x80246BE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_1;
    // 0x80246BE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80246BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80246BEC: jr          $ra
    // 0x80246BF0: nop

    return;
    // 0x80246BF0: nop

;}
RECOMP_FUNC void D_802A3704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3784: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A3788: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A378C: jr          $ra
    // 0x802A3790: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802A3790: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8029D254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D2D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029D2D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029D2DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029D2E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029D2E4: beq         $a0, $zero, L_8029D350
    if (ctx->r4 == 0) {
        // 0x8029D2E8: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_8029D350;
    }
    // 0x8029D2E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8029D2EC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8029D2F0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8029D2F4: jal         0x802CDCD8
    // 0x8029D2F8: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    static_3_802CDCD8(rdram, ctx);
        goto after_0;
    // 0x8029D2F8: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    after_0:
    // 0x8029D2FC: addiu       $a0, $s0, 0x5BC
    ctx->r4 = ADD32(ctx->r16, 0X5BC);
    // 0x8029D300: jal         0x8031CC08
    // 0x8029D304: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031CC08(rdram, ctx);
        goto after_1;
    // 0x8029D304: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8029D308: addiu       $a0, $s0, 0x428
    ctx->r4 = ADD32(ctx->r16, 0X428);
    // 0x8029D30C: jal         0x802C49D0
    // 0x8029D310: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_2;
    // 0x8029D310: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8029D314: addiu       $a0, $s0, 0x294
    ctx->r4 = ADD32(ctx->r16, 0X294);
    // 0x8029D318: jal         0x802C49D0
    // 0x8029D31C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_3;
    // 0x8029D31C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x8029D320: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x8029D324: jal         0x802D3D78
    // 0x8029D328: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D3D78(rdram, ctx);
        goto after_4;
    // 0x8029D328: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x8029D32C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029D330: jal         0x8031739C
    // 0x8029D334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_5;
    // 0x8029D334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8029D338: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8029D33C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8029D340: beql        $t8, $zero, L_8029D354
    if (ctx->r24 == 0) {
        // 0x8029D344: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8029D354;
    }
    goto skip_0;
    // 0x8029D344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8029D348: jal         0x802C681C
    // 0x8029D34C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_6;
    // 0x8029D34C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8029D350:
    // 0x8029D350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029D354:
    // 0x8029D354: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029D358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029D35C: jr          $ra
    // 0x8029D360: nop

    return;
    // 0x8029D360: nop

;}
RECOMP_FUNC void D_80228900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228900: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80228904: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80228908: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022890C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80228910: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80228914: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80228918: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022891C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80228920: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80228924: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80228928: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8022892C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80228930: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80228934: bltz        $a0, L_80228958
    if (SIGNED(ctx->r4) < 0) {
        // 0x80228938: sw          $a3, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r7;
            goto L_80228958;
    }
    // 0x80228938: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8022893C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80228940: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x80228944: sll         $t7, $a1, 5
    ctx->r15 = S32(ctx->r5 << 5);
    // 0x80228948: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022894C: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80228950: beq         $at, $zero, L_80228970
    if (ctx->r1 == 0) {
        // 0x80228954: addiu       $s0, $sp, 0x4C
        ctx->r16 = ADD32(ctx->r29, 0X4C);
            goto L_80228970;
    }
    // 0x80228954: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
L_80228958:
    // 0x80228958: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022895C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80228960: jal         0x80231A24
    // 0x80228964: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80228964: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_0:
    // 0x80228968: b           L_80228C68
    // 0x8022896C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80228C68;
    // 0x8022896C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80228970:
    // 0x80228970: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80228974: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80228978: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x8022897C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80228980: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80228984: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80228988: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x8022898C: addiu       $s4, $zero, -0x4
    ctx->r20 = ADD32(0, -0X4);
    // 0x80228990: addiu       $s2, $zero, -0x8
    ctx->r18 = ADD32(0, -0X8);
    // 0x80228994: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
L_80228998:
    // 0x80228998: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8022899C:
    // 0x8022899C: and         $s0, $t9, $s4
    ctx->r16 = ctx->r25 & ctx->r20;
    // 0x802289A0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802289A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802289A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802289AC: beq         $a1, $zero, L_80228C64
    if (ctx->r5 == 0) {
        // 0x802289B0: addiu       $t0, $s0, 0x3
        ctx->r8 = ADD32(ctx->r16, 0X3);
            goto L_80228C64;
    }
    // 0x802289B0: addiu       $t0, $s0, 0x3
    ctx->r8 = ADD32(ctx->r16, 0X3);
    // 0x802289B4: beq         $a1, $at, L_802289D8
    if (ctx->r5 == ctx->r1) {
        // 0x802289B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802289D8;
    }
    // 0x802289B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802289BC: beq         $a1, $at, L_80228A18
    if (ctx->r5 == ctx->r1) {
        // 0x802289C0: andi        $t6, $s0, 0x1
        ctx->r14 = ctx->r16 & 0X1;
            goto L_80228A18;
    }
    // 0x802289C0: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x802289C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802289C8: beq         $a1, $at, L_80228B00
    if (ctx->r5 == ctx->r1) {
        // 0x802289CC: andi        $t5, $s0, 0x1
        ctx->r13 = ctx->r16 & 0X1;
            goto L_80228B00;
    }
    // 0x802289CC: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x802289D0: b           L_80228C54
    // 0x802289D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
        goto L_80228C54;
    // 0x802289D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
L_802289D8:
    // 0x802289D8: and         $s0, $t0, $s4
    ctx->r16 = ctx->r8 & ctx->r20;
    // 0x802289DC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802289E0: lbu         $t1, 0x0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X0);
    // 0x802289E4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802289E8: beql        $v0, $t1, L_8022899C
    if (ctx->r2 == ctx->r9) {
        // 0x802289EC: addiu       $t9, $s0, 0x3
        ctx->r25 = ADD32(ctx->r16, 0X3);
            goto L_8022899C;
    }
    goto skip_0;
    // 0x802289EC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    skip_0:
    // 0x802289F0: beq         $v0, $zero, L_80228A08
    if (ctx->r2 == 0) {
        // 0x802289F4: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_80228A08;
    }
    // 0x802289F4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802289F8: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x802289FC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80228A00: b           L_80228998
    // 0x80228A04: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
        goto L_80228998;
    // 0x80228A04: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
L_80228A08:
    // 0x80228A08: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80228A0C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80228A10: b           L_80228998
    // 0x80228A14: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
        goto L_80228998;
    // 0x80228A14: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
L_80228A18:
    // 0x80228A18: beq         $t6, $zero, L_80228A2C
    if (ctx->r14 == 0) {
        // 0x80228A1C: addiu       $a0, $s1, 0x10
        ctx->r4 = ADD32(ctx->r17, 0X10);
            goto L_80228A2C;
    }
    // 0x80228A1C: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    // 0x80228A20: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228A24: b           L_80228A54
    // 0x80228A28: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228A54;
    // 0x80228A28: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228A2C:
    // 0x80228A2C: andi        $t7, $s0, 0x2
    ctx->r15 = ctx->r16 & 0X2;
    // 0x80228A30: beq         $t7, $zero, L_80228A44
    if (ctx->r15 == 0) {
        // 0x80228A34: addiu       $t8, $s0, 0x7
        ctx->r24 = ADD32(ctx->r16, 0X7);
            goto L_80228A44;
    }
    // 0x80228A34: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x80228A38: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228A3C: b           L_80228A50
    // 0x80228A40: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228A50;
    // 0x80228A40: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228A44:
    // 0x80228A44: and         $s0, $t8, $s2
    ctx->r16 = ctx->r24 & ctx->r18;
    // 0x80228A48: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228A4C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228A50:
    // 0x80228A50: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228A54:
    // 0x80228A54: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x80228A58: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x80228A5C: andi        $t0, $s0, 0x2
    ctx->r8 = ctx->r16 & 0X2;
    // 0x80228A60: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80228A64: beq         $t9, $zero, L_80228A78
    if (ctx->r25 == 0) {
        // 0x80228A68: swc1        $f6, 0x10($s1)
        MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
            goto L_80228A78;
    }
    // 0x80228A68: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x80228A6C: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228A70: b           L_80228A9C
    // 0x80228A74: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228A9C;
    // 0x80228A74: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228A78:
    // 0x80228A78: beq         $t0, $zero, L_80228A8C
    if (ctx->r8 == 0) {
        // 0x80228A7C: addiu       $t1, $s0, 0x7
        ctx->r9 = ADD32(ctx->r16, 0X7);
            goto L_80228A8C;
    }
    // 0x80228A7C: addiu       $t1, $s0, 0x7
    ctx->r9 = ADD32(ctx->r16, 0X7);
    // 0x80228A80: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228A84: b           L_80228A98
    // 0x80228A88: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228A98;
    // 0x80228A88: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228A8C:
    // 0x80228A8C: and         $s0, $t1, $s2
    ctx->r16 = ctx->r9 & ctx->r18;
    // 0x80228A90: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228A94: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228A98:
    // 0x80228A98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228A9C:
    // 0x80228A9C: ldc1        $f8, -0x8($v0)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r2, -0X8);
    // 0x80228AA0: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x80228AA4: andi        $t3, $s0, 0x2
    ctx->r11 = ctx->r16 & 0X2;
    // 0x80228AA8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80228AAC: beq         $t2, $zero, L_80228AC0
    if (ctx->r10 == 0) {
        // 0x80228AB0: swc1        $f10, 0x14($s1)
        MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
            goto L_80228AC0;
    }
    // 0x80228AB0: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
    // 0x80228AB4: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228AB8: b           L_80228AE4
    // 0x80228ABC: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228AE4;
    // 0x80228ABC: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228AC0:
    // 0x80228AC0: beq         $t3, $zero, L_80228AD4
    if (ctx->r11 == 0) {
        // 0x80228AC4: addiu       $t4, $s0, 0x7
        ctx->r12 = ADD32(ctx->r16, 0X7);
            goto L_80228AD4;
    }
    // 0x80228AC4: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x80228AC8: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228ACC: b           L_80228AE0
    // 0x80228AD0: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228AE0;
    // 0x80228AD0: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228AD4:
    // 0x80228AD4: and         $s0, $t4, $s2
    ctx->r16 = ctx->r12 & ctx->r18;
    // 0x80228AD8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228ADC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228AE0:
    // 0x80228AE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228AE4:
    // 0x80228AE4: ldc1        $f16, -0x8($v0)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r2, -0X8);
    // 0x80228AE8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80228AEC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80228AF0: jal         0x80234D30
    // 0x80228AF4: swc1        $f18, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
    static_3_80234D30(rdram, ctx);
        goto after_1;
    // 0x80228AF4: swc1        $f18, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
    after_1:
    // 0x80228AF8: b           L_8022899C
    // 0x80228AFC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8022899C;
    // 0x80228AFC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_80228B00:
    // 0x80228B00: beq         $t5, $zero, L_80228B14
    if (ctx->r13 == 0) {
        // 0x80228B04: andi        $t6, $s0, 0x2
        ctx->r14 = ctx->r16 & 0X2;
            goto L_80228B14;
    }
    // 0x80228B04: andi        $t6, $s0, 0x2
    ctx->r14 = ctx->r16 & 0X2;
    // 0x80228B08: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228B0C: b           L_80228B38
    // 0x80228B10: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228B38;
    // 0x80228B10: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228B14:
    // 0x80228B14: beq         $t6, $zero, L_80228B28
    if (ctx->r14 == 0) {
        // 0x80228B18: addiu       $t7, $s0, 0x7
        ctx->r15 = ADD32(ctx->r16, 0X7);
            goto L_80228B28;
    }
    // 0x80228B18: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x80228B1C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228B20: b           L_80228B34
    // 0x80228B24: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228B34;
    // 0x80228B24: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228B28:
    // 0x80228B28: and         $s0, $t7, $s2
    ctx->r16 = ctx->r15 & ctx->r18;
    // 0x80228B2C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228B30: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228B34:
    // 0x80228B34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228B38:
    // 0x80228B38: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x80228B3C: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x80228B40: andi        $t9, $s0, 0x2
    ctx->r25 = ctx->r16 & 0X2;
    // 0x80228B44: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80228B48: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80228B4C: beq         $t8, $zero, L_80228B60
    if (ctx->r24 == 0) {
        // 0x80228B50: swc1        $f6, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
            goto L_80228B60;
    }
    // 0x80228B50: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x80228B54: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228B58: b           L_80228B84
    // 0x80228B5C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228B84;
    // 0x80228B5C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228B60:
    // 0x80228B60: beq         $t9, $zero, L_80228B74
    if (ctx->r25 == 0) {
        // 0x80228B64: addiu       $t0, $s0, 0x7
        ctx->r8 = ADD32(ctx->r16, 0X7);
            goto L_80228B74;
    }
    // 0x80228B64: addiu       $t0, $s0, 0x7
    ctx->r8 = ADD32(ctx->r16, 0X7);
    // 0x80228B68: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228B6C: b           L_80228B80
    // 0x80228B70: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228B80;
    // 0x80228B70: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228B74:
    // 0x80228B74: and         $s0, $t0, $s2
    ctx->r16 = ctx->r8 & ctx->r18;
    // 0x80228B78: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228B7C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228B80:
    // 0x80228B80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228B84:
    // 0x80228B84: ldc1        $f8, -0x8($v0)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r2, -0X8);
    // 0x80228B88: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x80228B8C: andi        $t2, $s0, 0x2
    ctx->r10 = ctx->r16 & 0X2;
    // 0x80228B90: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80228B94: beq         $t1, $zero, L_80228BA8
    if (ctx->r9 == 0) {
        // 0x80228B98: swc1        $f10, 0x8($s1)
        MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
            goto L_80228BA8;
    }
    // 0x80228B98: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x80228B9C: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228BA0: b           L_80228BCC
    // 0x80228BA4: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228BCC;
    // 0x80228BA4: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228BA8:
    // 0x80228BA8: beq         $t2, $zero, L_80228BBC
    if (ctx->r10 == 0) {
        // 0x80228BAC: addiu       $t3, $s0, 0x7
        ctx->r11 = ADD32(ctx->r16, 0X7);
            goto L_80228BBC;
    }
    // 0x80228BAC: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x80228BB0: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228BB4: b           L_80228BC8
    // 0x80228BB8: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228BC8;
    // 0x80228BB8: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228BBC:
    // 0x80228BBC: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x80228BC0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228BC4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228BC8:
    // 0x80228BC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228BCC:
    // 0x80228BCC: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80228BD0: ldc1        $f16, -0x8($v0)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r2, -0X8);
    // 0x80228BD4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80228BD8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80228BDC: bc1t        L_80228C3C
    if (c1cs) {
        // 0x80228BE0: swc1        $f18, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
            goto L_80228C3C;
    }
    // 0x80228BE0: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x80228BE4: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x80228BE8: nop

    // 0x80228BEC: bc1t        L_80228C3C
    if (c1cs) {
        // 0x80228BF0: nop
    
            goto L_80228C3C;
    }
    // 0x80228BF0: nop

    // 0x80228BF4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80228BF8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80228BFC: nop

    // 0x80228C00: bc1t        L_80228C3C
    if (c1cs) {
        // 0x80228C04: nop
    
            goto L_80228C3C;
    }
    // 0x80228C04: nop

    // 0x80228C08: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x80228C0C: nop

    // 0x80228C10: bc1t        L_80228C3C
    if (c1cs) {
        // 0x80228C14: nop
    
            goto L_80228C3C;
    }
    // 0x80228C14: nop

    // 0x80228C18: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80228C1C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80228C20: nop

    // 0x80228C24: bc1t        L_80228C3C
    if (c1cs) {
        // 0x80228C28: nop
    
            goto L_80228C3C;
    }
    // 0x80228C28: nop

    // 0x80228C2C: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x80228C30: nop

    // 0x80228C34: bc1f        L_80228C44
    if (!c1cs) {
        // 0x80228C38: nop
    
            goto L_80228C44;
    }
    // 0x80228C38: nop

L_80228C3C:
    // 0x80228C3C: jal         0x80231A24
    // 0x80228C40: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80228C40: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
L_80228C44:
    // 0x80228C44: jal         0x80228894
    // 0x80228C48: nop

    static_3_80228894(rdram, ctx);
        goto after_3;
    // 0x80228C48: nop

    after_3:
    // 0x80228C4C: b           L_8022899C
    // 0x80228C50: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8022899C;
    // 0x80228C50: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_80228C54:
    // 0x80228C54: jal         0x80231A24
    // 0x80228C58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80228C58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x80228C5C: b           L_8022899C
    // 0x80228C60: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8022899C;
    // 0x80228C60: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_80228C64:
    // 0x80228C64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80228C68:
    // 0x80228C68: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80228C6C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80228C70: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228C74: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80228C78: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80228C7C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80228C80: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80228C84: jr          $ra
    // 0x80228C88: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80228C88: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802E7D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7D88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E7D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7D90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802E7D94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E7D98: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802E7D9C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802E7DA0: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E7DA4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7DA8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7DAC: bne         $v1, $zero, L_802E7DCC
    if (ctx->r3 != 0) {
        // 0x802E7DB0: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802E7DCC;
    }
    // 0x802E7DB0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7DB4: jal         0x80231A24
    // 0x802E7DB8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7DB8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x802E7DBC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x802E7DC0: addiu       $t7, $zero, 0x29A
    ctx->r15 = ADD32(0, 0X29A);
    // 0x802E7DC4: sw          $t7, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r15;
    // 0x802E7DC8: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
L_802E7DCC:
    // 0x802E7DCC: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E7DD0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802E7DD4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802E7DD8: lh          $t9, 0x50($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X50);
    // 0x802E7DDC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802E7DE0: addu        $a0, $t9, $v1
    ctx->r4 = ADD32(ctx->r25, ctx->r3);
    // 0x802E7DE4: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802E7DE8: jalr        $t9
    // 0x802E7DEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E7DEC: nop

    after_1:
    // 0x802E7DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E7DF8: jr          $ra
    // 0x802E7DFC: nop

    return;
    // 0x802E7DFC: nop

;}
RECOMP_FUNC void D_8021BA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021BA40: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021BA44: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021BA48: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021BA4C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021BA50: blez        $v0, L_8021BA84
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BA54: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8021BA84;
    }
    // 0x8021BA54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021BA58: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
L_8021BA5C:
    // 0x8021BA5C: lbu         $t6, 0x9($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9);
    // 0x8021BA60: bnel        $t6, $zero, L_8021BA78
    if (ctx->r14 != 0) {
        // 0x8021BA64: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8021BA78;
    }
    goto skip_0;
    // 0x8021BA64: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x8021BA68: sb          $t7, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r15;
    // 0x8021BA6C: jr          $ra
    // 0x8021BA70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8021BA70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8021BA74: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8021BA78:
    // 0x8021BA78: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021BA7C: bne         $at, $zero, L_8021BA5C
    if (ctx->r1 != 0) {
        // 0x8021BA80: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_8021BA5C;
    }
    // 0x8021BA80: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_8021BA84:
    // 0x8021BA84: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8021BA88: jr          $ra
    // 0x8021BA8C: nop

    return;
    // 0x8021BA8C: nop

;}
RECOMP_FUNC void D_802ECCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECD24: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802ECD28: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ECD2C: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x802ECD30: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ECD34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ECD38: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ECD3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802ECD40: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802ECD44: addiu       $t7, $zero, 0x1E9
    ctx->r15 = ADD32(0, 0X1E9);
    // 0x802ECD48: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ECD4C: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ECD50: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ECD54: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ECD58: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ECD5C: sh          $zero, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = 0;
    // 0x802ECD60: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802ECD64: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ECD68: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ECD6C: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802ECD70: jr          $ra
    // 0x802ECD74: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802ECD74: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_8027E8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E950: jr          $ra
    // 0x8027E954: lw          $v0, 0x70F4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70F4);
    return;
    // 0x8027E954: lw          $v0, 0x70F4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70F4);
;}
RECOMP_FUNC void D_802A1FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2068: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A206C: jr          $ra
    // 0x802A2070: sb          $a1, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r5;
    return;
    // 0x802A2070: sb          $a1, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802A8B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8BA4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A8BA8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A8BAC: jr          $ra
    // 0x802A8BB0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802A8BB0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80227B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227B64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227B68: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80227B6C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80227B70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227B74: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227B78: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227B7C: jal         0x80223840
    // 0x80227B80: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227B80: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227B84: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227B88: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227B8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227B90: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227B94: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227B98: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227B9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227BA0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227BA4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227BA8: jal         0x80223B30
    // 0x80227BAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    static_3_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227BAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80227BB0: beq         $v0, $zero, L_80227BC4
    if (ctx->r2 == 0) {
        // 0x80227BB4: nop
    
            goto L_80227BC4;
    }
    // 0x80227BB4: nop

    // 0x80227BB8: jal         0x802271C4
    // 0x80227BBC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_802271C4(rdram, ctx);
        goto after_2;
    // 0x80227BBC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80227BC0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80227BC4:
    // 0x80227BC4: jal         0x802238F0
    // 0x80227BC8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802238F0(rdram, ctx);
        goto after_3;
    // 0x80227BC8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80227BCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227BD0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80227BD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227BD8: jr          $ra
    // 0x80227BDC: nop

    return;
    // 0x80227BDC: nop

;}
RECOMP_FUNC void D_802B7CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7D24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B7D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7D2C: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7D30: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B7D34: beq         $t6, $zero, L_802B7D48
    if (ctx->r14 == 0) {
        // 0x802B7D38: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B7D48;
    }
    // 0x802B7D38: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B7D3C: jal         0x80303578
    // 0x802B7D40: addiu       $a0, $a0, 0xE68
    ctx->r4 = ADD32(ctx->r4, 0XE68);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B7D40: addiu       $a0, $a0, 0xE68
    ctx->r4 = ADD32(ctx->r4, 0XE68);
    after_0:
    // 0x802B7D44: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B7D48:
    // 0x802B7D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B7D50: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B7D54: jr          $ra
    // 0x802B7D58: nop

    return;
    // 0x802B7D58: nop

;}
RECOMP_FUNC void D_802E56CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E574C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x802E5750: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802E5754: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x802E5758: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802E575C: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x802E5760: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x802E5764: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x802E5768: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x802E576C: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x802E5770: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802E5774: jal         0x8021BA90
    // 0x802E5778: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x802E5778: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x802E577C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802E5780: bne         $v0, $at, L_802E57A8
    if (ctx->r2 != ctx->r1) {
        // 0x802E5784: sw          $v0, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->r2;
            goto L_802E57A8;
    }
    // 0x802E5784: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x802E5788: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E578C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E5790: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802E5794: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802E5798: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E579C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E57A0: jal         0x80231A24
    // 0x802E57A4: addiu       $a3, $zero, 0x97
    ctx->r7 = ADD32(0, 0X97);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802E57A4: addiu       $a3, $zero, 0x97
    ctx->r7 = ADD32(0, 0X97);
    after_1:
L_802E57A8:
    // 0x802E57A8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802E57AC: jal         0x8021ACB0
    // 0x802E57B0: addiu       $a1, $zero, 0x12E
    ctx->r5 = ADD32(0, 0X12E);
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x802E57B0: addiu       $a1, $zero, 0x12E
    ctx->r5 = ADD32(0, 0X12E);
    after_2:
    // 0x802E57B4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802E57B8: jal         0x8021B838
    // 0x802E57BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_3;
    // 0x802E57BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x802E57C0: lw          $s0, 0x27C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X27C);
    // 0x802E57C4: addiu       $s1, $s2, 0x1A4
    ctx->r17 = ADD32(ctx->r18, 0X1A4);
    // 0x802E57C8: sw          $s1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r17;
    // 0x802E57CC: lh          $t6, 0xA0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA0);
    // 0x802E57D0: lw          $t9, 0xA4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA4);
    // 0x802E57D4: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x802E57D8: addu        $a0, $t6, $s2
    ctx->r4 = ADD32(ctx->r14, ctx->r18);
    // 0x802E57DC: jalr        $t9
    // 0x802E57E0: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802E57E0: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_4:
    // 0x802E57E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E57E8: jal         0x802D27F4
    // 0x802E57EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D27F4(rdram, ctx);
        goto after_5;
    // 0x802E57EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x802E57F0: lw          $s0, 0x27C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X27C);
    // 0x802E57F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E57F8: lh          $t7, 0x20($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X20);
    // 0x802E57FC: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x802E5800: addu        $a0, $t7, $s2
    ctx->r4 = ADD32(ctx->r15, ctx->r18);
    // 0x802E5804: jalr        $t9
    // 0x802E5808: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802E5808: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_6:
    // 0x802E580C: lw          $s0, 0x27C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X27C);
    // 0x802E5810: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802E5814: lh          $t8, 0x98($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X98);
    // 0x802E5818: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x802E581C: addu        $a0, $t8, $s2
    ctx->r4 = ADD32(ctx->r24, ctx->r18);
    // 0x802E5820: jalr        $t9
    // 0x802E5824: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802E5824: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_7:
    // 0x802E5828: lw          $s0, 0x1A0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1A0);
    // 0x802E582C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E5830: lw          $t9, 0xB4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB4);
    // 0x802E5834: lh          $t0, 0xB0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XB0);
    // 0x802E5838: jalr        $t9
    // 0x802E583C: addu        $a0, $t0, $s2
    ctx->r4 = ADD32(ctx->r8, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x802E583C: addu        $a0, $t0, $s2
    ctx->r4 = ADD32(ctx->r8, ctx->r18);
    after_8:
    // 0x802E5840: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x802E5844: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802E5848: lui         $at, 0x4548
    ctx->r1 = S32(0X4548 << 16);
    // 0x802E584C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802E5850: lw          $a1, 0x14($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X14);
    // 0x802E5854: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802E5858: jal         0x80309758
    // 0x802E585C: swc1        $f4, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->f4.u32l;
    static_3_80309758(rdram, ctx);
        goto after_9;
    // 0x802E585C: swc1        $f4, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->f4.u32l;
    after_9:
    // 0x802E5860: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802E5864: jal         0x80318E80
    // 0x802E5868: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_10;
    // 0x802E5868: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_10:
    // 0x802E586C: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802E5870: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x802E5874: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802E5878: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x802E587C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802E5880: jal         0x802AA4A4
    // 0x802E5884: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_11;
    // 0x802E5884: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    after_11:
    // 0x802E5888: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802E588C: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x802E5890: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802E5894: jal         0x802AA4A4
    // 0x802E5898: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_12;
    // 0x802E5898: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    after_12:
    // 0x802E589C: addiu       $s3, $sp, 0x5C
    ctx->r19 = ADD32(ctx->r29, 0X5C);
    // 0x802E58A0: jal         0x8022970C
    // 0x802E58A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8022970C(rdram, ctx);
        goto after_13;
    // 0x802E58A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_13:
    // 0x802E58A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E58AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802E58B0: lui         $a3, 0x420C
    ctx->r7 = S32(0X420C << 16);
    // 0x802E58B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802E58B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802E58BC: jal         0x8022A0D0
    // 0x802E58C0: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_14;
    // 0x802E58C0: nop

    after_14:
    // 0x802E58C4: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x802E58C8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x802E58CC: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x802E58D0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x802E58D4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802E58D8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802E58DC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802E58E0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802E58E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802E58E8: addiu       $s0, $s2, 0x2AC
    ctx->r16 = ADD32(ctx->r18, 0X2AC);
L_802E58EC:
    // 0x802E58EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E58F0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802E58F4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x802E58F8: jal         0x802C4A20
    // 0x802E58FC: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_15;
    // 0x802E58FC: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    after_15:
    // 0x802E5900: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x802E5904: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x802E5908: jal         0x802C584C
    // 0x802E590C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C584C(rdram, ctx);
        goto after_16;
    // 0x802E590C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x802E5910: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E5914: jal         0x802C580C
    // 0x802E5918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C580C(rdram, ctx);
        goto after_17;
    // 0x802E5918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x802E591C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802E5920: jal         0x802C5818
    // 0x802E5924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5818(rdram, ctx);
        goto after_18;
    // 0x802E5924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x802E5928: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x802E592C: jal         0x802C5824
    // 0x802E5930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5824(rdram, ctx);
        goto after_19;
    // 0x802E5930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x802E5934: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x802E5938: jal         0x802C5830
    // 0x802E593C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5830(rdram, ctx);
        goto after_20;
    // 0x802E593C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x802E5940: addiu       $s1, $s1, 0x194
    ctx->r17 = ADD32(ctx->r17, 0X194);
    // 0x802E5944: slti        $at, $s1, 0x4BC
    ctx->r1 = SIGNED(ctx->r17) < 0X4BC ? 1 : 0;
    // 0x802E5948: bne         $at, $zero, L_802E58EC
    if (ctx->r1 != 0) {
        // 0x802E594C: addiu       $s0, $s0, 0x194
        ctx->r16 = ADD32(ctx->r16, 0X194);
            goto L_802E58EC;
    }
    // 0x802E594C: addiu       $s0, $s0, 0x194
    ctx->r16 = ADD32(ctx->r16, 0X194);
    // 0x802E5950: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802E5954: addiu       $s0, $s2, 0x768
    ctx->r16 = ADD32(ctx->r18, 0X768);
L_802E5958:
    // 0x802E5958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E595C: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x802E5960: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x802E5964: jal         0x802C4A20
    // 0x802E5968: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_21;
    // 0x802E5968: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    after_21:
    // 0x802E596C: lui         $a1, 0x3EA8
    ctx->r5 = S32(0X3EA8 << 16);
    // 0x802E5970: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    // 0x802E5974: jal         0x802C584C
    // 0x802E5978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C584C(rdram, ctx);
        goto after_22;
    // 0x802E5978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x802E597C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E5980: jal         0x802C580C
    // 0x802E5984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C580C(rdram, ctx);
        goto after_23;
    // 0x802E5984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x802E5988: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802E598C: jal         0x802C5818
    // 0x802E5990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5818(rdram, ctx);
        goto after_24;
    // 0x802E5990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x802E5994: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x802E5998: jal         0x802C5824
    // 0x802E599C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5824(rdram, ctx);
        goto after_25;
    // 0x802E599C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x802E59A0: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x802E59A4: jal         0x802C5830
    // 0x802E59A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5830(rdram, ctx);
        goto after_26;
    // 0x802E59A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x802E59AC: addiu       $s1, $s1, 0x194
    ctx->r17 = ADD32(ctx->r17, 0X194);
    // 0x802E59B0: addiu       $at, $zero, 0x4BC
    ctx->r1 = ADD32(0, 0X4BC);
    // 0x802E59B4: bne         $s1, $at, L_802E5958
    if (ctx->r17 != ctx->r1) {
        // 0x802E59B8: addiu       $s0, $s0, 0x194
        ctx->r16 = ADD32(ctx->r16, 0X194);
            goto L_802E5958;
    }
    // 0x802E59B8: addiu       $s0, $s0, 0x194
    ctx->r16 = ADD32(ctx->r16, 0X194);
    // 0x802E59BC: addiu       $s0, $s2, 0xC24
    ctx->r16 = ADD32(ctx->r18, 0XC24);
    // 0x802E59C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E59C4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x802E59C8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x802E59CC: jal         0x802C4A20
    // 0x802E59D0: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_27;
    // 0x802E59D0: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    after_27:
    // 0x802E59D4: lui         $a1, 0x3F8C
    ctx->r5 = S32(0X3F8C << 16);
    // 0x802E59D8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x802E59DC: jal         0x802C584C
    // 0x802E59E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C584C(rdram, ctx);
        goto after_28;
    // 0x802E59E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x802E59E4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802E59E8: jal         0x802C580C
    // 0x802E59EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C580C(rdram, ctx);
        goto after_29;
    // 0x802E59EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x802E59F0: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802E59F4: jal         0x802C5818
    // 0x802E59F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5818(rdram, ctx);
        goto after_30;
    // 0x802E59F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x802E59FC: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x802E5A00: jal         0x802C5824
    // 0x802E5A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5824(rdram, ctx);
        goto after_31;
    // 0x802E5A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x802E5A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E5A0C: jal         0x802C5788
    // 0x802E5A10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C5788(rdram, ctx);
        goto after_32;
    // 0x802E5A10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_32:
    // 0x802E5A14: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x802E5A18: jal         0x802C5830
    // 0x802E5A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5830(rdram, ctx);
        goto after_33;
    // 0x802E5A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x802E5A20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802E5A24: andi        $t2, $zero, 0xFF
    ctx->r10 = 0 & 0XFF;
    // 0x802E5A28: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802E5A2C: sb          $t1, 0xDB8($s2)
    MEM_B(0XDB8, ctx->r18) = ctx->r9;
    // 0x802E5A30: sb          $zero, 0xDBA($s2)
    MEM_B(0XDBA, ctx->r18) = 0;
    // 0x802E5A34: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802E5A38: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802E5A3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802E5A40: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802E5A44: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x802E5A48: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802E5A4C: sb          $t3, 0xDB9($s2)
    MEM_B(0XDB9, ctx->r18) = ctx->r11;
    // 0x802E5A50: swc1        $f6, 0xDBC($s2)
    MEM_W(0XDBC, ctx->r18) = ctx->f6.u32l;
    // 0x802E5A54: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802E5A58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802E5A5C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802E5A60: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802E5A64: bgez        $t5, L_802E5A78
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802E5A68: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802E5A78;
    }
    // 0x802E5A68: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802E5A6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802E5A70: nop

    // 0x802E5A74: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_802E5A78:
    // 0x802E5A78: swc1        $f10, 0xDC0($s2)
    MEM_W(0XDC0, ctx->r18) = ctx->f10.u32l;
    // 0x802E5A7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E5A80: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E5A84: lw          $s0, 0x1A0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1A0);
    // 0x802E5A88: swc1        $f4, 0xDC8($s2)
    MEM_W(0XDC8, ctx->r18) = ctx->f4.u32l;
    // 0x802E5A8C: swc1        $f18, 0xDC4($s2)
    MEM_W(0XDC4, ctx->r18) = ctx->f18.u32l;
    // 0x802E5A90: lw          $t9, 0xBC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XBC);
    // 0x802E5A94: lh          $t6, 0xB8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XB8);
    // 0x802E5A98: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802E5A9C: jalr        $t9
    // 0x802E5AA0: addu        $a0, $t6, $s2
    ctx->r4 = ADD32(ctx->r14, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x802E5AA0: addu        $a0, $t6, $s2
    ctx->r4 = ADD32(ctx->r14, ctx->r18);
    after_34:
    // 0x802E5AA4: addiu       $t7, $zero, 0x37
    ctx->r15 = ADD32(0, 0X37);
    // 0x802E5AA8: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x802E5AAC: addiu       $t0, $zero, 0x1F
    ctx->r8 = ADD32(0, 0X1F);
    // 0x802E5AB0: sb          $t7, 0xDD4($s2)
    MEM_B(0XDD4, ctx->r18) = ctx->r15;
    // 0x802E5AB4: sb          $t8, 0xDD5($s2)
    MEM_B(0XDD5, ctx->r18) = ctx->r24;
    // 0x802E5AB8: sb          $t0, 0xDD6($s2)
    MEM_B(0XDD6, ctx->r18) = ctx->r8;
    // 0x802E5ABC: sb          $zero, 0xDF0($s2)
    MEM_B(0XDF0, ctx->r18) = 0;
    // 0x802E5AC0: sb          $zero, 0xDF1($s2)
    MEM_B(0XDF1, ctx->r18) = 0;
    // 0x802E5AC4: sb          $zero, 0xDBB($s2)
    MEM_B(0XDBB, ctx->r18) = 0;
    // 0x802E5AC8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802E5ACC: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x802E5AD0: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x802E5AD4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x802E5AD8: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x802E5ADC: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x802E5AE0: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x802E5AE4: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x802E5AE8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802E5AEC: jr          $ra
    // 0x802E5AF0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x802E5AF0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void D_802CEE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CEEFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802CEF00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802CEF04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CEF08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802CEF0C: beq         $a0, $zero, L_802CEFB0
    if (ctx->r4 == 0) {
        // 0x802CEF10: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_802CEFB0;
    }
    // 0x802CEF10: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802CEF14: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CEF18: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802CEF1C: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802CEF20: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802CEF24: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802CEF28: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x802CEF2C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CEF30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CEF34: addiu       $a0, $a0, 0x5FF8
    ctx->r4 = ADD32(ctx->r4, 0X5FF8);
    // 0x802CEF38: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CEF3C: jal         0x802C6A00
    // 0x802CEF40: addiu       $a2, $zero, 0x68C
    ctx->r6 = ADD32(0, 0X68C);
    static_3_802C6A00(rdram, ctx);
        goto after_0;
    // 0x802CEF40: addiu       $a2, $zero, 0x68C
    ctx->r6 = ADD32(0, 0X68C);
    after_0:
    // 0x802CEF44: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x802CEF48: addiu       $a0, $s0, 0x17F4
    ctx->r4 = ADD32(ctx->r16, 0X17F4);
    // 0x802CEF4C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802CEF50: addiu       $a2, $zero, 0x68C
    ctx->r6 = ADD32(0, 0X68C);
    // 0x802CEF54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CEF58: jal         0x802C6A00
    // 0x802CEF5C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_1;
    // 0x802CEF5C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x802CEF60: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802CEF64: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802CEF68: addiu       $a0, $s0, 0x414
    ctx->r4 = ADD32(ctx->r16, 0X414);
    // 0x802CEF6C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CEF70: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    // 0x802CEF74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CEF78: jal         0x802C6A00
    // 0x802CEF7C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_2;
    // 0x802CEF7C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x802CEF80: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    // 0x802CEF84: jal         0x802FFD64
    // 0x802CEF88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802FFD64(rdram, ctx);
        goto after_3;
    // 0x802CEF88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802CEF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CEF90: jal         0x803086D4
    // 0x802CEF94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_4;
    // 0x802CEF94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802CEF98: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x802CEF9C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802CEFA0: beql        $t8, $zero, L_802CEFB4
    if (ctx->r24 == 0) {
        // 0x802CEFA4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802CEFB4;
    }
    goto skip_0;
    // 0x802CEFA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802CEFA8: jal         0x802C681C
    // 0x802CEFAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_5;
    // 0x802CEFAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_802CEFB0:
    // 0x802CEFB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802CEFB4:
    // 0x802CEFB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802CEFB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802CEFBC: jr          $ra
    // 0x802CEFC0: nop

    return;
    // 0x802CEFC0: nop

;}
RECOMP_FUNC void D_802D87DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D885C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8860: jr          $ra
    // 0x802D8864: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802D8864: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802A1E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1EC4: jr          $ra
    // 0x802A1EC8: lwc1        $f0, 0xA0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA0);
    return;
    // 0x802A1EC8: lwc1        $f0, 0xA0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA0);
;}

#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802D2CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2D54: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x802D2D58: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802D2D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2D60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D2D64: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802D2D68: sb          $zero, 0x48($a0)
    MEM_B(0X48, ctx->r4) = 0;
    // 0x802D2D6C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802D2D70: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x802D2D74: jal         0x8030301C
    // 0x802D2D78: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    static_3_8030301C(rdram, ctx);
        goto after_0;
    // 0x802D2D78: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    after_0:
    // 0x802D2D7C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802D2D80: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802D2D84: sw          $t6, 0x4C($a3)
    MEM_W(0X4C, ctx->r7) = ctx->r14;
    // 0x802D2D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2D90: jr          $ra
    // 0x802D2D94: nop

    return;
    // 0x802D2D94: nop

;}
RECOMP_FUNC void D_80281BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281C68: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80281C6C: jr          $ra
    // 0x80281C70: sb          $a1, 0x555($a0)
    MEM_B(0X555, ctx->r4) = ctx->r5;
    return;
    // 0x80281C70: sb          $a1, 0x555($a0)
    MEM_B(0X555, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802A6858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A68D8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802A68DC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A68E0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802A68E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802A68E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A68EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A68F0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x802A68F4: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802A68F8: jal         0x8022970C
    // 0x802A68FC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802A68FC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_0:
    // 0x802A6900: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x802A6904: lui         $a1, 0xBECC
    ctx->r5 = S32(0XBECC << 16);
    // 0x802A6908: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x802A690C: lwc1        $f4, 0x30($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X30);
    // 0x802A6910: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x802A6914: lwc1        $f6, 0x34($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X34);
    // 0x802A6918: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x802A691C: lwc1        $f8, 0x38($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X38);
    // 0x802A6920: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x802A6924: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x802A6928: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802A692C: lh          $t7, 0x18($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X18);
    // 0x802A6930: jalr        $t9
    // 0x802A6934: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802A6934: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_1:
    // 0x802A6938: lw          $v0, 0x308($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X308);
    // 0x802A693C: lui         $a1, 0xBF4C
    ctx->r5 = S32(0XBF4C << 16);
    // 0x802A6940: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x802A6944: lh          $t8, 0x18($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X18);
    // 0x802A6948: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802A694C: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802A6950: jalr        $t9
    // 0x802A6954: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802A6954: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_2:
    // 0x802A6958: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x802A695C: jal         0x80228DE0
    // 0x802A6960: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x802A6960: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x802A6964: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802A6968: jal         0x8023499C
    // 0x802A696C: sb          $t0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r8;
    static_3_8023499C(rdram, ctx);
        goto after_4;
    // 0x802A696C: sb          $t0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r8;
    after_4:
    // 0x802A6970: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6974: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6978: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x802A697C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A6980: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A6984: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802A6988: jal         0x802D01D4
    // 0x802A698C: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802A698C: nop

    after_5:
    // 0x802A6990: addiu       $a0, $s0, 0x25C
    ctx->r4 = ADD32(ctx->r16, 0X25C);
    // 0x802A6994: jal         0x80228DE0
    // 0x802A6998: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80228DE0(rdram, ctx);
        goto after_6;
    // 0x802A6998: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x802A699C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802A69A0: sb          $t1, 0x304($s0)
    MEM_B(0X304, ctx->r16) = ctx->r9;
    // 0x802A69A4: addiu       $a0, $zero, 0x2710
    ctx->r4 = ADD32(0, 0X2710);
    // 0x802A69A8: jal         0x80305E90
    // 0x802A69AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_7;
    // 0x802A69AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x802A69B0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802A69B4: addiu       $t2, $zero, 0x38
    ctx->r10 = ADD32(0, 0X38);
    // 0x802A69B8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802A69BC: addiu       $a1, $s0, 0x34C
    ctx->r5 = ADD32(ctx->r16, 0X34C);
    // 0x802A69C0: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802A69C4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802A69C8: jal         0x80302238
    // 0x802A69CC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_8;
    // 0x802A69CC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802A69D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802A69D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802A69D8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802A69DC: jr          $ra
    // 0x802A69E0: nop

    return;
    // 0x802A69E0: nop

;}
RECOMP_FUNC void D_8028CEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CF5C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8028CF60: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8028CF64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028CF68: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8028CF6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028CF70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8028CF74: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8028CF78: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8028CF7C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x8028CF80: jal         0x802D5010
    // 0x8028CF84: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802D5010(rdram, ctx);
        goto after_0;
    // 0x8028CF84: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8028CF88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028CF8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028CF90: jr          $ra
    // 0x8028CF94: nop

    return;
    // 0x8028CF94: nop

;}
RECOMP_FUNC void D_802926E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292768: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8029276C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80292770: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80292774: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x80292778: lw          $t6, 0x18C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18C);
    // 0x8029277C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80292780: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80292784: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80292788: sw          $t7, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->r15;
    // 0x8029278C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80292790: jal         0x802C51D0
    // 0x80292794: swc1        $f12, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->f12.u32l;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80292794: swc1        $f12, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->f12.u32l;
    after_0:
    // 0x80292798: jal         0x802CF9C8
    // 0x8029279C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    static_3_802CF9C8(rdram, ctx);
        goto after_1;
    // 0x8029279C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x802927A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802927A4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802927A8: lui         $a3, 0xBF80
    ctx->r7 = S32(0XBF80 << 16);
    // 0x802927AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802927B0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802927B4: jal         0x8022A0D0
    // 0x802927B8: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x802927B8: nop

    after_2:
    // 0x802927BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802927C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802927C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802927C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802927CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802927D0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802927D4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802927D8: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x802927DC: lui         $a2, 0x4409
    ctx->r6 = S32(0X4409 << 16);
    // 0x802927E0: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x802927E4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x802927E8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802927EC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x802927F0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802927F4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802927F8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x802927FC: jal         0x802AAEC0
    // 0x80292800: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_802AAEC0(rdram, ctx);
        goto after_3;
    // 0x80292800: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_3:
    // 0x80292804: beq         $v0, $zero, L_80292814
    if (ctx->r2 == 0) {
        // 0x80292808: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80292814;
    }
    // 0x80292808: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029280C: jal         0x802E9790
    // 0x80292810: addiu       $a1, $zero, 0x65
    ctx->r5 = ADD32(0, 0X65);
    static_3_802E9790(rdram, ctx);
        goto after_4;
    // 0x80292810: addiu       $a1, $zero, 0x65
    ctx->r5 = ADD32(0, 0X65);
    after_4:
L_80292814:
    // 0x80292814: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80292818: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8029281C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80292820: jr          $ra
    // 0x80292824: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80292824: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8027A2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A318: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A31C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A320: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027A328: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027A32C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027A330: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A334: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A338: addiu       $a1, $t6, 0x680C
    ctx->r5 = ADD32(ctx->r14, 0X680C);
    // 0x8027A33C: addiu       $a0, $a0, 0x6800
    ctx->r4 = ADD32(ctx->r4, 0X6800);
    // 0x8027A340: addiu       $a3, $t6, 0x680D
    ctx->r7 = ADD32(ctx->r14, 0X680D);
    // 0x8027A344: jal         0x802A1D20
    // 0x8027A348: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    static_3_802A1D20(rdram, ctx);
        goto after_0;
    // 0x8027A348: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x8027A34C: beq         $v0, $zero, L_8027A36C
    if (ctx->r2 == 0) {
        // 0x8027A350: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027A36C;
    }
    // 0x8027A350: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A354: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A358: jal         0x802898FC
    // 0x8027A35C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_802898FC(rdram, ctx);
        goto after_1;
    // 0x8027A35C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027A360: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027A364: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027A368: sh          $t8, 0x1890($a0)
    MEM_H(0X1890, ctx->r4) = ctx->r24;
L_8027A36C:
    // 0x8027A36C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027A374: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8027A378: jr          $ra
    // 0x8027A37C: nop

    return;
    // 0x8027A37C: nop

;}
RECOMP_FUNC void D_802B9318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B9398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B939C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B93A0: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x802B93A4: sh          $zero, 0x274($a0)
    MEM_H(0X274, ctx->r4) = 0;
    // 0x802B93A8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B93AC: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x802B93B0: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802B93B4: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802B93B8: jalr        $t9
    // 0x802B93BC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802B93BC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x802B93C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B93C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B93C8: jr          $ra
    // 0x802B93CC: nop

    return;
    // 0x802B93CC: nop

;}
RECOMP_FUNC void D_802E31A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3224: lh          $t6, 0x402($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X402);
    // 0x802E3228: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802E322C: bnel        $a1, $t6, L_802E3240
    if (ctx->r5 != ctx->r14) {
        // 0x802E3230: lh          $t7, 0x404($v0)
        ctx->r15 = MEM_H(ctx->r2, 0X404);
            goto L_802E3240;
    }
    goto skip_0;
    // 0x802E3230: lh          $t7, 0x404($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X404);
    skip_0:
    // 0x802E3234: jr          $ra
    // 0x802E3238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E3238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802E323C: lh          $t7, 0x404($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X404);
L_802E3240:
    // 0x802E3240: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802E3244: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x802E3248: bne         $a1, $t7, L_802E3258
    if (ctx->r5 != ctx->r15) {
        // 0x802E324C: addiu       $a2, $a0, 0x4
        ctx->r6 = ADD32(ctx->r4, 0X4);
            goto L_802E3258;
    }
    // 0x802E324C: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
    // 0x802E3250: jr          $ra
    // 0x802E3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E3254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802E3258:
    // 0x802E3258: lh          $t8, 0x402($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X402);
    // 0x802E325C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x802E3260: bnel        $a1, $t8, L_802E3274
    if (ctx->r5 != ctx->r24) {
        // 0x802E3264: lh          $t9, 0x404($a2)
        ctx->r25 = MEM_H(ctx->r6, 0X404);
            goto L_802E3274;
    }
    goto skip_1;
    // 0x802E3264: lh          $t9, 0x404($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X404);
    skip_1:
    // 0x802E3268: jr          $ra
    // 0x802E326C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E326C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802E3270: lh          $t9, 0x404($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X404);
L_802E3274:
    // 0x802E3274: bnel        $a1, $t9, L_802E3288
    if (ctx->r5 != ctx->r25) {
        // 0x802E3278: lh          $t0, 0x406($a2)
        ctx->r8 = MEM_H(ctx->r6, 0X406);
            goto L_802E3288;
    }
    goto skip_2;
    // 0x802E3278: lh          $t0, 0x406($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X406);
    skip_2:
    // 0x802E327C: jr          $ra
    // 0x802E3280: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E3280: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802E3284: lh          $t0, 0x406($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X406);
L_802E3288:
    // 0x802E3288: bnel        $a1, $t0, L_802E329C
    if (ctx->r5 != ctx->r8) {
        // 0x802E328C: lh          $t1, 0x408($a2)
        ctx->r9 = MEM_H(ctx->r6, 0X408);
            goto L_802E329C;
    }
    goto skip_3;
    // 0x802E328C: lh          $t1, 0x408($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X408);
    skip_3:
    // 0x802E3290: jr          $ra
    // 0x802E3294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E3294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802E3298: lh          $t1, 0x408($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X408);
L_802E329C:
    // 0x802E329C: bne         $a1, $t1, L_802E32AC
    if (ctx->r5 != ctx->r9) {
        // 0x802E32A0: nop
    
            goto L_802E32AC;
    }
    // 0x802E32A0: nop

    // 0x802E32A4: jr          $ra
    // 0x802E32A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E32A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802E32AC:
    // 0x802E32AC: bne         $v1, $v0, L_802E3258
    if (ctx->r3 != ctx->r2) {
        // 0x802E32B0: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_802E3258;
    }
    // 0x802E32B0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x802E32B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802E32B8: jr          $ra
    // 0x802E32BC: nop

    return;
    // 0x802E32BC: nop

;}
RECOMP_FUNC void D_8023CDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CDB0: jr          $ra
    // 0x8023CDB4: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    return;
    // 0x8023CDB4: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
;}
RECOMP_FUNC void D_80249998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249998: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024999C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802499A0: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x802499A4: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x802499A8: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x802499AC: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x802499B0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x802499B4: lui         $t2, 0xB00
    ctx->r10 = S32(0XB00 << 16);
    // 0x802499B8: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x802499BC: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x802499C0: ori         $t2, $t2, 0x20
    ctx->r10 = ctx->r10 | 0X20;
    // 0x802499C4: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x802499C8: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x802499CC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x802499D0: sw          $t2, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r10;
    // 0x802499D4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x802499D8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802499DC: jal         0x802375F0
    // 0x802499E0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x802499E0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x802499E4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x802499E8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x802499EC: lui         $at, 0xE00
    ctx->r1 = S32(0XE00 << 16);
    // 0x802499F0: addiu       $v1, $a3, 0x10
    ctx->r3 = ADD32(ctx->r7, 0X10);
    // 0x802499F4: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x802499F8: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
    // 0x802499FC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80249A00: lw          $t4, 0x2C($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X2C);
    // 0x80249A04: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x80249A08: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80249A0C: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80249A10: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80249A14: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80249A18: or          $t1, $t8, $t9
    ctx->r9 = ctx->r24 | ctx->r25;
    // 0x80249A1C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80249A20: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    // 0x80249A24: jal         0x802375F0
    // 0x80249A28: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x80249A28: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80249A2C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80249A30: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80249A34: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80249A38: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x80249A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249A40: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80249A44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80249A48: jr          $ra
    // 0x80249A4C: nop

    return;
    // 0x80249A4C: nop

;}
RECOMP_FUNC void D_802E9DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9E4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E9E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E9E54: bne         $a0, $zero, L_802E9E6C
    if (ctx->r4 != 0) {
        // 0x802E9E58: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802E9E6C;
    }
    // 0x802E9E58: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802E9E5C: jal         0x802C67EC
    // 0x802E9E60: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802E9E60: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    after_0:
    // 0x802E9E64: beq         $v0, $zero, L_802E9F60
    if (ctx->r2 == 0) {
        // 0x802E9E68: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802E9F60;
    }
    // 0x802E9E68: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802E9E6C:
    // 0x802E9E6C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E9E70: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E9E74: addiu       $at, $zero, -0x44
    ctx->r1 = ADD32(0, -0X44);
    // 0x802E9E78: bne         $a1, $at, L_802E9E90
    if (ctx->r5 != ctx->r1) {
        // 0x802E9E7C: sw          $t6, 0xB0($a1)
        MEM_W(0XB0, ctx->r5) = ctx->r14;
            goto L_802E9E90;
    }
    // 0x802E9E7C: sw          $t6, 0xB0($a1)
    MEM_W(0XB0, ctx->r5) = ctx->r14;
    // 0x802E9E80: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x802E9E84: jal         0x802C67EC
    // 0x802E9E88: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_802C67EC(rdram, ctx);
        goto after_1;
    // 0x802E9E88: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802E9E8C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802E9E90:
    // 0x802E9E90: addiu       $at, $zero, -0x50
    ctx->r1 = ADD32(0, -0X50);
    // 0x802E9E94: bne         $a1, $at, L_802E9EA8
    if (ctx->r5 != ctx->r1) {
        // 0x802E9E98: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_802E9EA8;
    }
    // 0x802E9E98: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x802E9E9C: jal         0x802C67EC
    // 0x802E9EA0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_802C67EC(rdram, ctx);
        goto after_2;
    // 0x802E9EA0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x802E9EA4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802E9EA8:
    // 0x802E9EA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E9EAC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802E9EB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E9EB4: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E9EB8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802E9EBC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802E9EC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E9EC4: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802E9EC8: mul.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x802E9ECC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802E9ED0: addiu       $t7, $zero, -0x2
    ctx->r15 = ADD32(0, -0X2);
    // 0x802E9ED4: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802E9ED8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802E9EDC: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x802E9EE0: sh          $t8, 0x88($a1)
    MEM_H(0X88, ctx->r5) = ctx->r24;
    // 0x802E9EE4: sh          $t7, 0x68($a1)
    MEM_H(0X68, ctx->r5) = ctx->r15;
    // 0x802E9EE8: sb          $zero, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = 0;
    // 0x802E9EEC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802E9EF0: sh          $zero, 0x86($a1)
    MEM_H(0X86, ctx->r5) = 0;
    // 0x802E9EF4: sh          $t9, 0x70($a1)
    MEM_H(0X70, ctx->r5) = ctx->r25;
    // 0x802E9EF8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802E9EFC: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x802E9F00: sb          $zero, 0x74($a1)
    MEM_B(0X74, ctx->r5) = 0;
    // 0x802E9F04: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    // 0x802E9F08: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x802E9F0C: swc1        $f2, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->f2.u32l;
    // 0x802E9F10: swc1        $f2, 0x48($a1)
    MEM_W(0X48, ctx->r5) = ctx->f2.u32l;
    // 0x802E9F14: swc1        $f2, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->f2.u32l;
    // 0x802E9F18: swc1        $f12, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->f12.u32l;
    // 0x802E9F1C: swc1        $f12, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f12.u32l;
    // 0x802E9F20: swc1        $f0, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = ctx->f0.u32l;
    // 0x802E9F24: swc1        $f0, 0xA8($a1)
    MEM_W(0XA8, ctx->r5) = ctx->f0.u32l;
    // 0x802E9F28: swc1        $f0, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f0.u32l;
    // 0x802E9F2C: swc1        $f0, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->f0.u32l;
    // 0x802E9F30: swc1        $f0, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->f0.u32l;
    // 0x802E9F34: swc1        $f0, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->f0.u32l;
    // 0x802E9F38: swc1        $f0, 0x58($a1)
    MEM_W(0X58, ctx->r5) = ctx->f0.u32l;
    // 0x802E9F3C: swc1        $f4, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->f4.u32l;
    // 0x802E9F40: sh          $v0, 0x76($a1)
    MEM_H(0X76, ctx->r5) = ctx->r2;
    // 0x802E9F44: sh          $v0, 0x78($a1)
    MEM_H(0X78, ctx->r5) = ctx->r2;
    // 0x802E9F48: sh          $v0, 0x7A($a1)
    MEM_H(0X7A, ctx->r5) = ctx->r2;
    // 0x802E9F4C: sh          $v0, 0x7C($a1)
    MEM_H(0X7C, ctx->r5) = ctx->r2;
    // 0x802E9F50: sh          $v0, 0x84($a1)
    MEM_H(0X84, ctx->r5) = ctx->r2;
    // 0x802E9F54: sh          $v1, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r3;
    // 0x802E9F58: sh          $v1, 0x80($a1)
    MEM_H(0X80, ctx->r5) = ctx->r3;
    // 0x802E9F5C: sh          $v1, 0x82($a1)
    MEM_H(0X82, ctx->r5) = ctx->r3;
L_802E9F60:
    // 0x802E9F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E9F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E9F68: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802E9F6C: jr          $ra
    // 0x802E9F70: nop

    return;
    // 0x802E9F70: nop

;}
RECOMP_FUNC void D_8022B1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B1A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022B1A8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022B1AC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022B1B0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8022B1B4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022B1B8: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8022B1BC: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8022B1C0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8022B1C4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022B1C8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8022B1CC: blez        $v0, L_8022B280
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022B1D0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8022B280;
    }
    // 0x8022B1D0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022B1D4: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x8022B1D8: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8022B1DC: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8022B1E0: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8022B1E4: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8022B1E8: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
L_8022B1EC:
    // 0x8022B1EC: blez        $v0, L_8022B270
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022B1F0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8022B270;
    }
    // 0x8022B1F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8022B1F4:
    // 0x8022B1F4: beq         $s3, $a2, L_8022B260
    if (ctx->r19 == ctx->r6) {
        // 0x8022B1F8: sll         $t6, $a2, 3
        ctx->r14 = S32(ctx->r6 << 3);
            goto L_8022B260;
    }
    // 0x8022B1F8: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x8022B1FC: sll         $t7, $s3, 3
    ctx->r15 = S32(ctx->r19 << 3);
    // 0x8022B200: addu        $s1, $s2, $t7
    ctx->r17 = ADD32(ctx->r18, ctx->r15);
    // 0x8022B204: addu        $s0, $s2, $t6
    ctx->r16 = ADD32(ctx->r18, ctx->r14);
    // 0x8022B208: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8022B20C: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x8022B210: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x8022B214: beql        $at, $zero, L_8022B264
    if (ctx->r1 == 0) {
        // 0x8022B218: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8022B264;
    }
    goto skip_0;
    // 0x8022B218: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x8022B21C: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8022B220: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8022B224: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8022B228: beq         $at, $zero, L_8022B260
    if (ctx->r1 == 0) {
        // 0x8022B22C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_8022B260;
    }
    // 0x8022B22C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8022B230: jal         0x80231A24
    // 0x8022B234: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022B234: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x8022B238: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x8022B23C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8022B240: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022B244: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x8022B248: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x8022B24C: jal         0x80231A24
    // 0x8022B250: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022B250: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x8022B254: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022B258: b           L_8022B270
    // 0x8022B25C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
        goto L_8022B270;
    // 0x8022B25C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_8022B260:
    // 0x8022B260: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8022B264:
    // 0x8022B264: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022B268: bne         $at, $zero, L_8022B1F4
    if (ctx->r1 != 0) {
        // 0x8022B26C: nop
    
            goto L_8022B1F4;
    }
    // 0x8022B26C: nop

L_8022B270:
    // 0x8022B270: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022B274: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022B278: bne         $at, $zero, L_8022B1EC
    if (ctx->r1 != 0) {
        // 0x8022B27C: nop
    
            goto L_8022B1EC;
    }
    // 0x8022B27C: nop

L_8022B280:
    // 0x8022B280: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022B284: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B288: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8022B28C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8022B290: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8022B294: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B298: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8022B29C: jr          $ra
    // 0x8022B2A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8022B2A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802A4998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4A18: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A4A1C: jr          $ra
    // 0x802A4A20: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A4A20: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802E5C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E5D04: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E5D08: jr          $ra
    // 0x802E5D0C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802E5D0C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802E3A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3ABC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802E3AC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802E3AC4: lw          $t6, 0x3F8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3F8);
    // 0x802E3AC8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802E3ACC: bne         $t6, $at, L_802E3B3C
    if (ctx->r14 != ctx->r1) {
        // 0x802E3AD0: nop
    
            goto L_802E3B3C;
    }
    // 0x802E3AD0: nop

    // 0x802E3AD4: lh          $v0, 0x3FC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3FC);
    // 0x802E3AD8: bgez        $v0, L_802E3AE8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802E3ADC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802E3AE8;
    }
    // 0x802E3ADC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802E3AE0: b           L_802E3AE8
    // 0x802E3AE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_802E3AE8;
    // 0x802E3AE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802E3AE8:
    // 0x802E3AE8: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x802E3AEC: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x802E3AF0: lw          $v0, 0x550($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X550);
    // 0x802E3AF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E3AF8: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E3AFC: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802E3B00: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802E3B04: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802E3B08: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802E3B0C: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802E3B10: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x802E3B14: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802E3B18: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802E3B1C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802E3B20: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802E3B24: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802E3B28: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802E3B2C: jal         0x802CF27C
    // 0x802E3B30: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    static_3_802CF27C(rdram, ctx);
        goto after_0;
    // 0x802E3B30: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x802E3B34: b           L_802E3B48
    // 0x802E3B38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802E3B48;
    // 0x802E3B38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802E3B3C:
    // 0x802E3B3C: jal         0x8022970C
    // 0x802E3B40: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802E3B40: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x802E3B44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802E3B48:
    // 0x802E3B48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802E3B4C: jr          $ra
    // 0x802E3B50: nop

    return;
    // 0x802E3B50: nop

;}
RECOMP_FUNC void D_802E75E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7668: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802E766C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802E7670: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802E7674: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802E7678: bne         $t6, $zero, L_802E7688
    if (ctx->r14 != 0) {
        // 0x802E767C: nop
    
            goto L_802E7688;
    }
    // 0x802E767C: nop

    // 0x802E7680: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802E7684: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_802E7688:
    // 0x802E7688: jr          $ra
    // 0x802E768C: nop

    return;
    // 0x802E768C: nop

;}
RECOMP_FUNC void D_802F28E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2960: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802F2964: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802F2968: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802F296C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802F2970: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802F2974: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802F2978: jal         0x80224CA8
    // 0x802F297C: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802F297C: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_0:
    // 0x802F2980: jal         0x80224CA8
    // 0x802F2984: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802F2984: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_1:
    // 0x802F2988: jal         0x80224CA8
    // 0x802F298C: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802F298C: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_2:
    // 0x802F2990: jal         0x80224CA8
    // 0x802F2994: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802F2994: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_3:
    // 0x802F2998: jal         0x80224CA8
    // 0x802F299C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802F299C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_4:
    // 0x802F29A0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x802F29A4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802F29A8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802F29AC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802F29B0: addiu       $s0, $a3, 0x70
    ctx->r16 = ADD32(ctx->r7, 0X70);
    // 0x802F29B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F29B8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802F29BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802F29C0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F29C4: jal         0x8028D2E8
    // 0x802F29C8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    static_3_8028D2E8(rdram, ctx);
        goto after_5;
    // 0x802F29C8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_5:
    // 0x802F29CC: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802F29D0: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802F29D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F29D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F29DC: jal         0x8028DDD8
    // 0x802F29E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_8028DDD8(rdram, ctx);
        goto after_6;
    // 0x802F29E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802F29E4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802F29E8: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802F29EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F29F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F29F4: jal         0x8028DDD8
    // 0x802F29F8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_8028DDD8(rdram, ctx);
        goto after_7;
    // 0x802F29F8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_7:
    // 0x802F29FC: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802F2A00: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802F2A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F2A08: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F2A0C: jal         0x8028DDD8
    // 0x802F2A10: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    static_3_8028DDD8(rdram, ctx);
        goto after_8;
    // 0x802F2A10: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_8:
    // 0x802F2A14: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802F2A18: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802F2A1C: jal         0x8028DB8C
    // 0x802F2A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8028DB8C(rdram, ctx);
        goto after_9;
    // 0x802F2A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802F2A24: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802F2A28: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802F2A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F2A30: jal         0x8028DED0
    // 0x802F2A34: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    static_3_8028DED0(rdram, ctx);
        goto after_10;
    // 0x802F2A34: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_10:
    // 0x802F2A38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802F2A3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802F2A40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802F2A44: jr          $ra
    // 0x802F2A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802F2A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_80295C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295CC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80295CC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80295CC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80295CCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80295CD0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80295CD4: jal         0x80228DE0
    // 0x80295CD8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80295CD8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x80295CDC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80295CE0: sb          $t6, 0xB0($s0)
    MEM_B(0XB0, ctx->r16) = ctx->r14;
    // 0x80295CE4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80295CE8: jal         0x80228DE0
    // 0x80295CEC: addiu       $a0, $s0, 0x1E4
    ctx->r4 = ADD32(ctx->r16, 0X1E4);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80295CEC: addiu       $a0, $s0, 0x1E4
    ctx->r4 = ADD32(ctx->r16, 0X1E4);
    after_1:
    // 0x80295CF0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80295CF4: sb          $t7, 0x28C($s0)
    MEM_B(0X28C, ctx->r16) = ctx->r15;
    // 0x80295CF8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80295CFC: jal         0x80228DE0
    // 0x80295D00: addiu       $a0, $s0, 0x3C4
    ctx->r4 = ADD32(ctx->r16, 0X3C4);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x80295D00: addiu       $a0, $s0, 0x3C4
    ctx->r4 = ADD32(ctx->r16, 0X3C4);
    after_2:
    // 0x80295D04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80295D08: sb          $t8, 0x46C($s0)
    MEM_B(0X46C, ctx->r16) = ctx->r24;
    // 0x80295D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80295D10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80295D14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80295D18: jr          $ra
    // 0x80295D1C: nop

    return;
    // 0x80295D1C: nop

;}
RECOMP_FUNC void D_802C8A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C8B08: beq         $a0, $zero, L_802C8B24
    if (ctx->r4 == 0) {
        // 0x802C8B0C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802C8B24;
    }
    // 0x802C8B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C8B10: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x802C8B14: beql        $t6, $zero, L_802C8B28
    if (ctx->r14 == 0) {
        // 0x802C8B18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802C8B28;
    }
    goto skip_0;
    // 0x802C8B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802C8B1C: jal         0x802C681C
    // 0x802C8B20: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802C8B20: nop

    after_0:
L_802C8B24:
    // 0x802C8B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802C8B28:
    // 0x802C8B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C8B2C: jr          $ra
    // 0x802C8B30: nop

    return;
    // 0x802C8B30: nop

;}
RECOMP_FUNC void D_8023F32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F32C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F334: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023F338: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8023F33C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8023F340: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023F344: jal         0x8023FC40
    // 0x8023F348: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    static_3_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023F348: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x8023F34C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8023F350: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8023F354: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8023F358: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
    // 0x8023F35C: bne         $t0, $zero, L_8023F374
    if (ctx->r8 != 0) {
        // 0x8023F360: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_8023F374;
    }
    // 0x8023F360: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8023F364: jal         0x8023FC40
    // 0x8023F368: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_8023FC40(rdram, ctx);
        goto after_1;
    // 0x8023F368: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8023F36C: b           L_8023F444
    // 0x8023F370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8023F444;
    // 0x8023F370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F374:
    // 0x8023F374: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8023F378: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x8023F37C: jal         0x80237120
    // 0x8023F380: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    static_3_80237120(rdram, ctx);
        goto after_2;
    // 0x8023F380: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_2:
    // 0x8023F384: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F388: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8023F38C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8023F390: jal         0x80249170
    // 0x8023F394: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    static_3_80249170(rdram, ctx);
        goto after_3;
    // 0x8023F394: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_3:
    // 0x8023F398: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8023F39C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x8023F3A0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8023F3A4: bne         $a3, $at, L_8023F3B4
    if (ctx->r7 != ctx->r1) {
        // 0x8023F3A8: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_8023F3B4;
    }
    // 0x8023F3A8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F3AC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8023F3B0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_8023F3B4:
    // 0x8023F3B4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8023F3B8: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8023F3BC: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8023F3C0: beq         $v0, $at, L_8023F438
    if (ctx->r2 == ctx->r1) {
        // 0x8023F3C4: addiu       $a1, $v0, 0x8
        ctx->r5 = ADD32(ctx->r2, 0X8);
            goto L_8023F438;
    }
    // 0x8023F3C4: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
L_8023F3C8:
    // 0x8023F3C8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8023F3CC: bnel        $v0, $zero, L_8023F3FC
    if (ctx->r2 != 0) {
        // 0x8023F3D0: lw          $v1, 0x8($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X8);
            goto L_8023F3FC;
    }
    goto skip_0;
    // 0x8023F3D0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x8023F3D4: beql        $t8, $zero, L_8023F3E8
    if (ctx->r24 == 0) {
        // 0x8023F3D8: sw          $a3, 0x8($t0)
        MEM_W(0X8, ctx->r8) = ctx->r7;
            goto L_8023F3E8;
    }
    goto skip_1;
    // 0x8023F3D8: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
    skip_1:
    // 0x8023F3DC: b           L_8023F3E8
    // 0x8023F3E0: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
        goto L_8023F3E8;
    // 0x8023F3E0: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
    // 0x8023F3E4: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
L_8023F3E8:
    // 0x8023F3E8: jal         0x80237150
    // 0x8023F3EC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    static_3_80237150(rdram, ctx);
        goto after_4;
    // 0x8023F3EC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_4:
    // 0x8023F3F0: b           L_8023F438
    // 0x8023F3F4: nop

        goto L_8023F438;
    // 0x8023F3F4: nop

    // 0x8023F3F8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
L_8023F3FC:
    // 0x8023F3FC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F400: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023F404: beql        $at, $zero, L_8023F430
    if (ctx->r1 == 0) {
        // 0x8023F408: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8023F430;
    }
    goto skip_2;
    // 0x8023F408: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    skip_2:
    // 0x8023F40C: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
    // 0x8023F410: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x8023F414: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8023F418: subu        $t1, $t9, $a3
    ctx->r9 = SUB32(ctx->r25, ctx->r7);
    // 0x8023F41C: jal         0x80237150
    // 0x8023F420: sw          $t1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r9;
    static_3_80237150(rdram, ctx);
        goto after_5;
    // 0x8023F420: sw          $t1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r9;
    after_5:
    // 0x8023F424: b           L_8023F438
    // 0x8023F428: nop

        goto L_8023F438;
    // 0x8023F428: nop

    // 0x8023F42C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8023F430:
    // 0x8023F430: bne         $v0, $zero, L_8023F3C8
    if (ctx->r2 != 0) {
        // 0x8023F434: subu        $a3, $a3, $v1
        ctx->r7 = SUB32(ctx->r7, ctx->r3);
            goto L_8023F3C8;
    }
    // 0x8023F434: subu        $a3, $a3, $v1
    ctx->r7 = SUB32(ctx->r7, ctx->r3);
L_8023F438:
    // 0x8023F438: jal         0x8023FC40
    // 0x8023F43C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_8023FC40(rdram, ctx);
        goto after_6;
    // 0x8023F43C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_6:
    // 0x8023F440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F444:
    // 0x8023F444: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023F448: jr          $ra
    // 0x8023F44C: nop

    return;
    // 0x8023F44C: nop

;}
RECOMP_FUNC void D_802DD000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD080: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802DD084: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DD088: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DD08C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DD090: jal         0x80224CA8
    // 0x802DD094: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802DD094: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x802DD098: jal         0x8021BA90
    // 0x802DD09C: nop

    func_8021BA90(rdram, ctx);
        goto after_1;
    // 0x802DD09C: nop

    after_1:
    // 0x802DD0A0: sw          $v0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r2;
    // 0x802DD0A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802DD0A8: jal         0x8021ACB0
    // 0x802DD0AC: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x802DD0AC: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    after_2:
    // 0x802DD0B0: addiu       $a2, $s0, 0x74
    ctx->r6 = ADD32(ctx->r16, 0X74);
    // 0x802DD0B4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802DD0B8: jal         0x8022970C
    // 0x802DD0BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802DD0BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_3:
    // 0x802DD0C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802DD0C4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802DD0C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DD0CC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802DD0D0: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x802DD0D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DD0D8: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    // 0x802DD0DC: swc1        $f0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f0.u32l;
    // 0x802DD0E0: jal         0x8021B4B0
    // 0x802DD0E4: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    static_3_8021B4B0(rdram, ctx);
        goto after_4;
    // 0x802DD0E4: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    after_4:
    // 0x802DD0E8: jal         0x80223E1C
    // 0x802DD0EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80223E1C(rdram, ctx);
        goto after_5;
    // 0x802DD0EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x802DD0F0: bnel        $v0, $zero, L_802DD104
    if (ctx->r2 != 0) {
        // 0x802DD0F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802DD104;
    }
    goto skip_0;
    // 0x802DD0F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802DD0F8: jal         0x80224CA8
    // 0x802DD0FC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x802DD0FC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_6:
    // 0x802DD100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802DD104:
    // 0x802DD104: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DD108: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802DD10C: jr          $ra
    // 0x802DD110: nop

    return;
    // 0x802DD110: nop

;}
RECOMP_FUNC void func_80207210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207210: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80207214: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80207218: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8020721C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80207220: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80207224: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80207228: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8020722C: lwc1        $f4, 0x120($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X120);
    // 0x80207230: lwc1        $f0, 0x130($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X130);
    // 0x80207234: lwc1        $f8, 0x124($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X124);
    // 0x80207238: lwc1        $f2, 0x134($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X134);
    // 0x8020723C: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80207240: lwc1        $f4, 0x128($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X128);
    // 0x80207244: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80207248: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8020724C: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x80207250: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x80207254: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80207258: swc1        $f2, 0x144($a0)
    MEM_W(0X144, ctx->r4) = ctx->f2.u32l;
    // 0x8020725C: swc1        $f2, 0x150($a0)
    MEM_W(0X150, ctx->r4) = ctx->f2.u32l;
    // 0x80207260: swc1        $f2, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->f2.u32l;
    // 0x80207264: swc1        $f2, 0x168($a0)
    MEM_W(0X168, ctx->r4) = ctx->f2.u32l;
    // 0x80207268: swc1        $f2, 0x174($a0)
    MEM_W(0X174, ctx->r4) = ctx->f2.u32l;
    // 0x8020726C: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80207270: lwc1        $f8, 0x12C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X12C);
    // 0x80207274: mul.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80207278: swc1        $f14, 0x158($a0)
    MEM_W(0X158, ctx->r4) = ctx->f14.u32l;
    // 0x8020727C: swc1        $f14, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f14.u32l;
    // 0x80207280: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80207284: mul.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80207288: swc1        $f12, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->f12.u32l;
    // 0x8020728C: swc1        $f12, 0x14C($a0)
    MEM_W(0X14C, ctx->r4) = ctx->f12.u32l;
    // 0x80207290: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80207294: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80207298: mul.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8020729C: swc1        $f0, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f0.u32l;
    // 0x802072A0: swc1        $f0, 0x178($a0)
    MEM_W(0X178, ctx->r4) = ctx->f0.u32l;
    // 0x802072A4: swc1        $f0, 0x17C($a0)
    MEM_W(0X17C, ctx->r4) = ctx->f0.u32l;
    // 0x802072A8: swc1        $f0, 0x180($a0)
    MEM_W(0X180, ctx->r4) = ctx->f0.u32l;
    // 0x802072AC: swc1        $f0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->f0.u32l;
    // 0x802072B0: swc1        $f16, 0x148($a0)
    MEM_W(0X148, ctx->r4) = ctx->f16.u32l;
    // 0x802072B4: swc1        $f16, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f16.u32l;
    // 0x802072B8: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802072BC: swc1        $f18, 0x154($a0)
    MEM_W(0X154, ctx->r4) = ctx->f18.u32l;
    // 0x802072C0: swc1        $f18, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->f18.u32l;
L_802072C4:
    // 0x802072C4: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802072C8: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x802072CC: mflo        $t6
    ctx->r14 = lo;
    // 0x802072D0: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x802072D4: addiu       $s1, $v0, 0x1D0
    ctx->r17 = ADD32(ctx->r2, 0X1D0);
    // 0x802072D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802072DC: bgez        $t7, L_802072F0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802072E0: andi        $t8, $t7, 0x3
        ctx->r24 = ctx->r15 & 0X3;
            goto L_802072F0;
    }
    // 0x802072E0: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x802072E4: beq         $t8, $zero, L_802072F0
    if (ctx->r24 == 0) {
        // 0x802072E8: nop
    
            goto L_802072F0;
    }
    // 0x802072E8: nop

    // 0x802072EC: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_802072F0:
    // 0x802072F0: multu       $t8, $s4
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802072F4: addiu       $a2, $v0, 0x140
    ctx->r6 = ADD32(ctx->r2, 0X140);
    // 0x802072F8: mflo        $t9
    ctx->r25 = lo;
    // 0x802072FC: addu        $a1, $s2, $t9
    ctx->r5 = ADD32(ctx->r18, ctx->r25);
    // 0x80207300: jal         0x80234C78
    // 0x80207304: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    static_3_80234C78(rdram, ctx);
        goto after_0;
    // 0x80207304: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    after_0:
    // 0x80207308: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020730C: jal         0x80234D30
    // 0x80207310: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_1;
    // 0x80207310: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80207314: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80207318: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x8020731C: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80207320: bne         $at, $zero, L_802072C4
    if (ctx->r1 != 0) {
        // 0x80207324: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_802072C4;
    }
    // 0x80207324: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x80207328: addiu       $s0, $s2, 0x200
    ctx->r16 = ADD32(ctx->r18, 0X200);
    // 0x8020732C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80207330: jal         0x80234C14
    // 0x80207334: addiu       $a1, $s2, 0x170
    ctx->r5 = ADD32(ctx->r18, 0X170);
    static_3_80234C14(rdram, ctx);
        goto after_2;
    // 0x80207334: addiu       $a1, $s2, 0x170
    ctx->r5 = ADD32(ctx->r18, 0X170);
    after_2:
    // 0x80207338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020733C: jal         0x80234D30
    // 0x80207340: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_3;
    // 0x80207340: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80207344: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80207348: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8020734C: swc1        $f6, 0x20C($s2)
    MEM_W(0X20C, ctx->r18) = ctx->f6.u32l;
    // 0x80207350: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80207354: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80207358: swc1        $f10, 0x210($s2)
    MEM_W(0X210, ctx->r18) = ctx->f10.u32l;
    // 0x8020735C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80207360: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80207364: swc1        $f6, 0x214($s2)
    MEM_W(0X214, ctx->r18) = ctx->f6.u32l;
    // 0x80207368: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8020736C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80207370: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80207374: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80207378: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8020737C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80207380: jr          $ra
    // 0x80207384: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80207384: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802E6A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6A84: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E6A88: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802E6A8C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802E6A90: sb          $a1, 0xB8($a0)
    MEM_B(0XB8, ctx->r4) = ctx->r5;
    // 0x802E6A94: sb          $a3, 0xB9($a0)
    MEM_B(0XB9, ctx->r4) = ctx->r7;
    // 0x802E6A98: lbu         $t8, 0x13($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X13);
    // 0x802E6A9C: jr          $ra
    // 0x802E6AA0: sb          $t8, 0xBA($a0)
    MEM_B(0XBA, ctx->r4) = ctx->r24;
    return;
    // 0x802E6AA0: sb          $t8, 0xBA($a0)
    MEM_B(0XBA, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void D_8027BDF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BE6C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8027BE70: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027BE74: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8027BE78: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x8027BE7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027BE80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027BE84: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8027BE88: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8027BE8C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027BE90: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8027BE94: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x8027BE98: jal         0x8022A848
    // 0x8027BE9C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_0;
    // 0x8027BE9C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8027BEA0: jal         0x80221B2C
    // 0x8027BEA4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    static_3_80221B2C(rdram, ctx);
        goto after_1;
    // 0x8027BEA4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x8027BEA8: jal         0x8022970C
    // 0x8027BEAC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x8027BEAC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x8027BEB0: jal         0x8022149C
    // 0x8027BEB4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    static_3_8022149C(rdram, ctx);
        goto after_3;
    // 0x8027BEB4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x8027BEB8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BEBC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8027BEC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8027BEC4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027BEC8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8027BECC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8027BED0: jal         0x802CECBC
    // 0x8027BED4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_802CECBC(rdram, ctx);
        goto after_4;
    // 0x8027BED4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
    // 0x8027BED8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BEDC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8027BEE0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027BEE4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027BEE8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8027BEEC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8027BEF0: jal         0x802CEB9C
    // 0x8027BEF4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_802CEB9C(rdram, ctx);
        goto after_5;
    // 0x8027BEF4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
    // 0x8027BEF8: jal         0x8021EC9C
    // 0x8027BEFC: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_6;
    // 0x8027BEFC: nop

    after_6:
    // 0x8027BF00: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8027BF04: jal         0x802AC6F8
    // 0x8027BF08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802AC6F8(rdram, ctx);
        goto after_7;
    // 0x8027BF08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8027BF0C: jal         0x802230E4
    // 0x8027BF10: nop

    static_3_802230E4(rdram, ctx);
        goto after_8;
    // 0x8027BF10: nop

    after_8:
    // 0x8027BF14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027BF18: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8027BF1C: jr          $ra
    // 0x8027BF20: nop

    return;
    // 0x8027BF20: nop

;}
RECOMP_FUNC void D_80238B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238B00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238B04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238B08: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80238B0C: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80238B10: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80238B14: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80238B18: jal         0x8023F37C
    // 0x80238B1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80238B1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80238B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238B24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238B28: jr          $ra
    // 0x80238B2C: nop

    return;
    // 0x80238B2C: nop

;}
RECOMP_FUNC void D_802315E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802315E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802315E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802315E8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802315EC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802315F0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802315F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802315F8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802315FC: subu        $a2, $t6, $a0
    ctx->r6 = SUB32(ctx->r14, ctx->r4);
    // 0x80231600: jal         0x8022B780
    // 0x80231604: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_0;
    // 0x80231604: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80231608: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023160C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80231610: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80231614: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80231618: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023161C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80231620: jal         0x8022B460
    // 0x80231624: subu        $a2, $t7, $a1
    ctx->r6 = SUB32(ctx->r15, ctx->r5);
    func_8022B460(rdram, ctx);
        goto after_1;
    // 0x80231624: subu        $a2, $t7, $a1
    ctx->r6 = SUB32(ctx->r15, ctx->r5);
    after_1:
    // 0x80231628: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023162C: jal         0x80231CC4
    // 0x80231630: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    static_3_80231CC4(rdram, ctx);
        goto after_2;
    // 0x80231630: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    after_2:
    // 0x80231634: jal         0x802C9C10
    // 0x80231638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_802C9C10(rdram, ctx);
        goto after_3;
    // 0x80231638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8023163C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80231644: jr          $ra
    // 0x80231648: nop

    return;
    // 0x80231648: nop

;}
RECOMP_FUNC void D_80231E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231E90: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80231E94: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80231E98: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80231E9C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80231EA0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80231EA4: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80231EA8: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80231EAC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80231EB0: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x80231EB4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80231EB8: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80231EBC: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80231EC0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80231EC4: blez        $v1, L_80231F8C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80231EC8: sw          $s0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r16;
            goto L_80231F8C;
    }
    // 0x80231EC8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80231ECC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80231ED0: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80231ED4: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80231ED8: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80231EDC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80231EE0: addiu       $s2, $zero, 0x4C
    ctx->r18 = ADD32(0, 0X4C);
    // 0x80231EE4: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
L_80231EE8:
    // 0x80231EE8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80231EEC: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80231EF0: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x80231EF4: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x80231EF8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80231EFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80231F00: bc1fl       L_80231F14
    if (!c1cs) {
        // 0x80231F04: lw          $a1, 0x0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X0);
            goto L_80231F14;
    }
    goto skip_0;
    // 0x80231F04: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80231F08: b           L_80231F7C
    // 0x80231F0C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
        goto L_80231F7C;
    // 0x80231F0C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80231F10: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
L_80231F14:
    // 0x80231F14: lhu         $a2, 0x6($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X6);
    // 0x80231F18: lbu         $a3, 0x4($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X4);
    // 0x80231F1C: jal         0x80232EE0
    // 0x80231F20: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    static_3_80232EE0(rdram, ctx);
        goto after_0;
    // 0x80231F20: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x80231F24: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80231F28: lw          $t0, 0x28($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X28);
    // 0x80231F2C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80231F30: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80231F34: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x80231F38: div         $zero, $t1, $s2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r18)));
    // 0x80231F3C: mflo        $t2
    ctx->r10 = lo;
    // 0x80231F40: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x80231F44: sb          $s3, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r19;
    // 0x80231F48: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80231F4C: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80231F50: bne         $s2, $zero, L_80231F5C
    if (ctx->r18 != 0) {
        // 0x80231F54: nop
    
            goto L_80231F5C;
    }
    // 0x80231F54: nop

    // 0x80231F58: break       7
    do_break(2149785432);
L_80231F5C:
    // 0x80231F5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80231F60: bne         $s2, $at, L_80231F74
    if (ctx->r18 != ctx->r1) {
        // 0x80231F64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80231F74;
    }
    // 0x80231F64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80231F68: bne         $t1, $at, L_80231F74
    if (ctx->r9 != ctx->r1) {
        // 0x80231F6C: nop
    
            goto L_80231F74;
    }
    // 0x80231F6C: nop

    // 0x80231F70: break       6
    do_break(2149785456);
L_80231F74:
    // 0x80231F74: sll         $t4, $v1, 4
    ctx->r12 = S32(ctx->r3 << 4);
    // 0x80231F78: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
L_80231F7C:
    // 0x80231F7C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80231F80: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80231F84: bnel        $at, $zero, L_80231EE8
    if (ctx->r1 != 0) {
        // 0x80231F88: lwc1        $f4, 0x8($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
            goto L_80231EE8;
    }
    goto skip_1;
    // 0x80231F88: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    skip_1:
L_80231F8C:
    // 0x80231F8C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80231F90: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80231F94: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80231F98: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80231F9C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80231FA0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80231FA4: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80231FA8: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x80231FAC: jr          $ra
    // 0x80231FB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80231FB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802950BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029513C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80295140: jr          $ra
    // 0x80295144: swc1        $f12, 0x150($a0)
    MEM_W(0X150, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80295144: swc1        $f12, 0x150($a0)
    MEM_W(0X150, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802A992C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A99AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A99B0: bne         $a0, $zero, L_802A99C8
    if (ctx->r4 != 0) {
        // 0x802A99B4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A99C8;
    }
    // 0x802A99B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A99B8: jal         0x802C67EC
    // 0x802A99BC: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A99BC: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_0:
    // 0x802A99C0: beq         $v0, $zero, L_802A9A08
    if (ctx->r2 == 0) {
        // 0x802A99C4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A9A08;
    }
    // 0x802A99C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802A99C8:
    // 0x802A99C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A99CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A99D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A99D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A99D8: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x802A99DC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A99E0: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x802A99E4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x802A99E8: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x802A99EC: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x802A99F0: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x802A99F4: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x802A99F8: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x802A99FC: jal         0x802DA3F8
    // 0x802A9A00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802DA3F8(rdram, ctx);
        goto after_1;
    // 0x802A9A00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802A9A04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802A9A08:
    // 0x802A9A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A9A10: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A9A14: jr          $ra
    // 0x802A9A18: nop

    return;
    // 0x802A9A18: nop

;}
RECOMP_FUNC void D_802C58E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C5960: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802C5964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C5968: jal         0x802EDD84
    // 0x802C596C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    static_3_802EDD84(rdram, ctx);
        goto after_0;
    // 0x802C596C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x802C5970: jal         0x802EE050
    // 0x802C5974: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_802EE050(rdram, ctx);
        goto after_1;
    // 0x802C5974: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x802C5978: jal         0x8021E66C
    // 0x802C597C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_2;
    // 0x802C597C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x802C5980: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C5984: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C5988: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802C598C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x802C5990: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C5994: addiu       $t7, $t6, 0x457
    ctx->r15 = ADD32(ctx->r14, 0X457);
    // 0x802C5998: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802C599C: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x802C59A0: lw          $v0, 0x1D0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X1D0);
    // 0x802C59A4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x802C59A8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C59AC: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x802C59B0: beq         $at, $zero, L_802C59C0
    if (ctx->r1 == 0) {
        // 0x802C59B4: nop
    
            goto L_802C59C0;
    }
    // 0x802C59B4: nop

    // 0x802C59B8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802C59BC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_802C59C0:
    // 0x802C59C0: jal         0x8023072C
    // 0x802C59C4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_3;
    // 0x802C59C4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_3:
    // 0x802C59C8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C59CC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C59D0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C59D4: jal         0x8021E708
    // 0x802C59D8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_4;
    // 0x802C59D8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
    // 0x802C59DC: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x802C59E0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802C59E4: jal         0x8021E87C
    // 0x802C59E8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    static_3_8021E87C(rdram, ctx);
        goto after_5;
    // 0x802C59E8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x802C59EC: jal         0x8021E66C
    // 0x802C59F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8021E66C(rdram, ctx);
        goto after_6;
    // 0x802C59F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x802C59F4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C59F8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C59FC: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    // 0x802C5A00: jal         0x8021E87C
    // 0x802C5A04: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    static_3_8021E87C(rdram, ctx);
        goto after_7;
    // 0x802C5A04: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_7:
    // 0x802C5A08: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x802C5A0C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802C5A10: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
    // 0x802C5A14: jal         0x8021E708
    // 0x802C5A18: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_8;
    // 0x802C5A18: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_8:
    // 0x802C5A1C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C5A20: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C5A24: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x802C5A28: jal         0x8021E87C
    // 0x802C5A2C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    static_3_8021E87C(rdram, ctx);
        goto after_9;
    // 0x802C5A2C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_9:
    // 0x802C5A30: jal         0x8021E66C
    // 0x802C5A34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_10;
    // 0x802C5A34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x802C5A38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C5A3C: ldc1        $f12, 0x0($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, 0X0);
    // 0x802C5A40: jal         0x8021E6EC
    // 0x802C5A44: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_11;
    // 0x802C5A44: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_11:
    // 0x802C5A48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802C5A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802C5A50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C5A54: jal         0x8021E708
    // 0x802C5A58: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_12;
    // 0x802C5A58: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_12:
    // 0x802C5A5C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C5A60: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802C5A64: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802C5A68: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C5A6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802C5A70: bne         $t9, $zero, L_802C5A90
    if (ctx->r25 != 0) {
        // 0x802C5A74: addiu       $a1, $a1, 0x0
        ctx->r5 = ADD32(ctx->r5, 0X0);
            goto L_802C5A90;
    }
    // 0x802C5A74: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802C5A78: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802C5A7C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x802C5A80: lw          $t1, 0x1D4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X1D4);
    // 0x802C5A84: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C5A88: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C5A8C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_802C5A90:
    // 0x802C5A90: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C5A94: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C5A98: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x802C5A9C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802C5AA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C5AA4: addiu       $t3, $t2, 0x457
    ctx->r11 = ADD32(ctx->r10, 0X457);
    // 0x802C5AA8: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802C5AAC: lw          $t5, 0x1D0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X1D0);
    // 0x802C5AB0: lw          $t4, 0x1D4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X1D4);
    // 0x802C5AB4: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x802C5AB8: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x802C5ABC: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x802C5AC0: beq         $at, $zero, L_802C5AD0
    if (ctx->r1 == 0) {
        // 0x802C5AC4: nop
    
            goto L_802C5AD0;
    }
    // 0x802C5AC4: nop

    // 0x802C5AC8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802C5ACC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_802C5AD0:
    // 0x802C5AD0: jal         0x8023072C
    // 0x802C5AD4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    static_3_8023072C(rdram, ctx);
        goto after_13;
    // 0x802C5AD4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_13:
    // 0x802C5AD8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C5ADC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C5AE0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x802C5AE4: jal         0x8021E87C
    // 0x802C5AE8: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    static_3_8021E87C(rdram, ctx);
        goto after_14;
    // 0x802C5AE8: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_14:
    // 0x802C5AEC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C5AF0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C5AF4: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    // 0x802C5AF8: jal         0x8021E87C
    // 0x802C5AFC: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    static_3_8021E87C(rdram, ctx);
        goto after_15;
    // 0x802C5AFC: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_15:
    // 0x802C5B00: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x802C5B04: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x802C5B08: jal         0x8021E87C
    // 0x802C5B0C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    static_3_8021E87C(rdram, ctx);
        goto after_16;
    // 0x802C5B0C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_16:
    // 0x802C5B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C5B14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802C5B18: jr          $ra
    // 0x802C5B1C: nop

    return;
    // 0x802C5B1C: nop

;}
RECOMP_FUNC void D_802A2058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A20D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A20DC: jr          $ra
    // 0x802A20E0: sb          $a1, 0x1E($a0)
    MEM_B(0X1E, ctx->r4) = ctx->r5;
    return;
    // 0x802A20E0: sb          $a1, 0x1E($a0)
    MEM_B(0X1E, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802BA980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BAA00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802BAA04: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802BAA08: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802BAA0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802BAA10: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802BAA14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802BAA18: jal         0x80233CE8
    // 0x802BAA1C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    static_3_80233CE8(rdram, ctx);
        goto after_0;
    // 0x802BAA1C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_0:
    // 0x802BAA20: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x802BAA24: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x802BAA28: addiu       $t8, $zero, 0xE1
    ctx->r24 = ADD32(0, 0XE1);
    // 0x802BAA2C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802BAA30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802BAA34: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802BAA38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802BAA3C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BAA40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BAA44: jal         0x802344F4
    // 0x802BAA48: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_1;
    // 0x802BAA48: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x802BAA4C: jal         0x80233CE8
    // 0x802BAA50: nop

    static_3_80233CE8(rdram, ctx);
        goto after_2;
    // 0x802BAA50: nop

    after_2:
    // 0x802BAA54: jal         0x80233CE8
    // 0x802BAA58: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_3;
    // 0x802BAA58: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    after_3:
    // 0x802BAA5C: jal         0x80233CE8
    // 0x802BAA60: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_4;
    // 0x802BAA60: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    after_4:
    // 0x802BAA64: jal         0x80233CE8
    // 0x802BAA68: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_5;
    // 0x802BAA68: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    after_5:
    // 0x802BAA6C: jal         0x80233CE8
    // 0x802BAA70: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_6;
    // 0x802BAA70: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    after_6:
    // 0x802BAA74: jal         0x80233CE8
    // 0x802BAA78: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_7;
    // 0x802BAA78: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    after_7:
    // 0x802BAA7C: jal         0x80233CE8
    // 0x802BAA80: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_8;
    // 0x802BAA80: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_8:
    // 0x802BAA84: jal         0x80233CE8
    // 0x802BAA88: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_9;
    // 0x802BAA88: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_9:
    // 0x802BAA8C: jal         0x80233CE8
    // 0x802BAA90: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_10;
    // 0x802BAA90: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    after_10:
    // 0x802BAA94: jal         0x80233CE8
    // 0x802BAA98: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_11;
    // 0x802BAA98: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    after_11:
    // 0x802BAA9C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802BAAA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802BAAA4: jal         0x802F6348
    // 0x802BAAA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_802F6348(rdram, ctx);
        goto after_12;
    // 0x802BAAA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
    // 0x802BAAAC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x802BAAB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802BAAB4: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802BAAB8: lbu         $t0, 0x3624($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X3624);
    // 0x802BAABC: beql        $t0, $at, L_802BAACC
    if (ctx->r8 == ctx->r1) {
        // 0x802BAAC0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802BAACC;
    }
    goto skip_0;
    // 0x802BAAC0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802BAAC4: sb          $t1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r9;
    // 0x802BAAC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802BAACC:
    // 0x802BAACC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802BAAD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802BAAD4: jr          $ra
    // 0x802BAAD8: nop

    return;
    // 0x802BAAD8: nop

;}
RECOMP_FUNC void D_8029E838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029E8B8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8029E8BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029E8C0: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x8029E8C4: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x8029E8C8: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x8029E8CC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8029E8D0: jal         0x8020664C
    // 0x8029E8D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8020664C(rdram, ctx);
        goto after_0;
    // 0x8029E8D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8029E8D8: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8029E8DC: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8029E8E0: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8029E8E4: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8029E8E8: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8029E8EC: lwc1        $f18, 0x84($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8029E8F0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8029E8F4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8029E8F8: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x8029E8FC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8029E900: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x8029E904: jal         0x8022ADA8
    // 0x8029E908: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    static_3_8022ADA8(rdram, ctx);
        goto after_1;
    // 0x8029E908: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8029E90C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8029E910: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8029E914: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8029E918: jal         0x802D05CC
    // 0x8029E91C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    static_3_802D05CC(rdram, ctx);
        goto after_2;
    // 0x8029E91C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8029E920: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029E924: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8029E928: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8029E92C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8029E930: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8029E934: mul.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8029E938: nop

    // 0x8029E93C: mul.s       $f14, $f10, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8029E940: jal         0x8022AE1C
    // 0x8029E944: nop

    static_3_8022AE1C(rdram, ctx);
        goto after_3;
    // 0x8029E944: nop

    after_3:
    // 0x8029E948: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029E94C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029E950: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8029E954: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029E958: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x8029E95C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8029E960: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x8029E964: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8029E968: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8029E96C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8029E970: div.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8029E974: mul.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8029E978: nop

    // 0x8029E97C: mul.s       $f14, $f10, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8029E980: jal         0x8022AE1C
    // 0x8029E984: nop

    static_3_8022AE1C(rdram, ctx);
        goto after_4;
    // 0x8029E984: nop

    after_4:
    // 0x8029E988: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029E98C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029E990: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8029E994: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x8029E998: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
    // 0x8029E99C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029E9A0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x8029E9A4: jr          $ra
    // 0x8029E9A8: nop

    return;
    // 0x8029E9A8: nop

;}
RECOMP_FUNC void D_80236B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236B30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236B34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80236B38: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80236B3C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80236B40: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80236B44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80236B48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80236B4C: jal         0x80241760
    // 0x80236B50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x80236B50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80236B54: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80236B58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80236B5C: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80236B60: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x80236B64: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80236B68: bne         $at, $zero, L_80236BCC
    if (ctx->r1 != 0) {
        // 0x80236B6C: nop
    
            goto L_80236BCC;
    }
    // 0x80236B6C: nop

L_80236B70:
    // 0x80236B70: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80236B74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80236B78: bne         $t9, $at, L_80236BA4
    if (ctx->r25 != ctx->r1) {
        // 0x80236B7C: nop
    
            goto L_80236BA4;
    }
    // 0x80236B7C: nop

    // 0x80236B80: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80236B84: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80236B88: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80236B8C: sh          $t0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r8;
    // 0x80236B90: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80236B94: jal         0x80241DFC
    // 0x80236B98: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    static_3_80241DFC(rdram, ctx);
        goto after_1;
    // 0x80236B98: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x80236B9C: b           L_80236BB4
    // 0x80236BA0: nop

        goto L_80236BB4;
    // 0x80236BA0: nop

L_80236BA4:
    // 0x80236BA4: jal         0x80241780
    // 0x80236BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_2;
    // 0x80236BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80236BAC: b           L_80236C64
    // 0x80236BB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80236C64;
    // 0x80236BB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80236BB4:
    // 0x80236BB4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80236BB8: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x80236BBC: lw          $t4, 0x10($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X10);
    // 0x80236BC0: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80236BC4: beq         $at, $zero, L_80236B70
    if (ctx->r1 == 0) {
        // 0x80236BC8: nop
    
            goto L_80236B70;
    }
    // 0x80236BC8: nop

L_80236BCC:
    // 0x80236BCC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80236BD0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80236BD4: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x80236BD8: lw          $t7, 0x8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X8);
    // 0x80236BDC: lw          $t9, 0x10($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X10);
    // 0x80236BE0: lw          $t1, 0x14($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X14);
    // 0x80236BE4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80236BE8: div         $zero, $t8, $t9
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r25)));
    // 0x80236BEC: mfhi        $s1
    ctx->r17 = hi;
    // 0x80236BF0: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x80236BF4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80236BF8: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x80236BFC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80236C00: bne         $t9, $zero, L_80236C0C
    if (ctx->r25 != 0) {
        // 0x80236C04: nop
    
            goto L_80236C0C;
    }
    // 0x80236C04: nop

    // 0x80236C08: break       7
    do_break(2149805064);
L_80236C0C:
    // 0x80236C0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80236C10: bne         $t9, $at, L_80236C24
    if (ctx->r25 != ctx->r1) {
        // 0x80236C14: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80236C24;
    }
    // 0x80236C14: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80236C18: bne         $t8, $at, L_80236C24
    if (ctx->r24 != ctx->r1) {
        // 0x80236C1C: nop
    
            goto L_80236C24;
    }
    // 0x80236C1C: nop

    // 0x80236C20: break       6
    do_break(2149805088);
L_80236C24:
    // 0x80236C24: lw          $t6, 0x8($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X8);
    // 0x80236C28: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80236C2C: sw          $t7, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r15;
    // 0x80236C30: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80236C34: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80236C38: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x80236C3C: beq         $t5, $zero, L_80236C58
    if (ctx->r13 == 0) {
        // 0x80236C40: nop
    
            goto L_80236C58;
    }
    // 0x80236C40: nop

    // 0x80236C44: jal         0x80241F44
    // 0x80236C48: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    static_3_80241F44(rdram, ctx);
        goto after_3;
    // 0x80236C48: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_3:
    // 0x80236C4C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80236C50: jal         0x80237360
    // 0x80236C54: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80237360(rdram, ctx);
        goto after_4;
    // 0x80236C54: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
L_80236C58:
    // 0x80236C58: jal         0x80241780
    // 0x80236C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_5;
    // 0x80236C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80236C60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80236C64:
    // 0x80236C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80236C68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80236C6C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80236C70: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80236C74: jr          $ra
    // 0x80236C78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80236C78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_8027E65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E6D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027E6D8: beq         $a1, $at, L_8027E6F0
    if (ctx->r5 == ctx->r1) {
        // 0x8027E6DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8027E6F0;
    }
    // 0x8027E6DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027E6E0: beq         $a1, $at, L_8027E6F8
    if (ctx->r5 == ctx->r1) {
        // 0x8027E6E4: addiu       $v1, $a0, 0x6368
        ctx->r3 = ADD32(ctx->r4, 0X6368);
            goto L_8027E6F8;
    }
    // 0x8027E6E4: addiu       $v1, $a0, 0x6368
    ctx->r3 = ADD32(ctx->r4, 0X6368);
    // 0x8027E6E8: jr          $ra
    // 0x8027E6EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027E6EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027E6F0:
    // 0x8027E6F0: jr          $ra
    // 0x8027E6F4: addiu       $v0, $a0, 0x4B88
    ctx->r2 = ADD32(ctx->r4, 0X4B88);
    return;
    // 0x8027E6F4: addiu       $v0, $a0, 0x4B88
    ctx->r2 = ADD32(ctx->r4, 0X4B88);
L_8027E6F8:
    // 0x8027E6F8: jr          $ra
    // 0x8027E6FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8027E6FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_80213B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80213B58: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x80213B5C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80213B60: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80213B64: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80213B68: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x80213B6C: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x80213B70: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x80213B74: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x80213B78: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x80213B7C: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x80213B80: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x80213B84: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80213B88: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80213B8C: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x80213B90: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x80213B94: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x80213B98: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x80213B9C: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x80213BA0: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80213BA4: sw          $a0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r4;
    // 0x80213BA8: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x80213BAC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80213BB0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80213BB4: mtc1        $a1, $f26
    ctx->f26.u32l = ctx->r5;
    // 0x80213BB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80213BBC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80213BC0: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x80213BC4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80213BC8: bne         $t0, $zero, L_80213BE4
    if (ctx->r8 != 0) {
        // 0x80213BCC: sw          $t0, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->r8;
            goto L_80213BE4;
    }
    // 0x80213BCC: sw          $t0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r8;
    // 0x80213BD0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80213BD4: jal         0x80231A24
    // 0x80213BD8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80213BD8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80213BDC: b           L_80214130
    // 0x80213BE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214130;
    // 0x80213BE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213BE4:
    // 0x80213BE4: lwc1        $f22, 0x110($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80213BE8: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x80213BEC: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x80213BF0: add.s       $f16, $f26, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = ctx->f26.fl + ctx->f22.fl;
    // 0x80213BF4: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80213BF8: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x80213BFC: nop

    // 0x80213C00: bc1fl       L_80213C14
    if (!c1cs) {
        // 0x80213C04: sub.s       $f18, $f26, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f26.fl - ctx->f22.fl;
            goto L_80213C14;
    }
    goto skip_0;
    // 0x80213C04: sub.s       $f18, $f26, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f26.fl - ctx->f22.fl;
    skip_0:
    // 0x80213C08: b           L_80214130
    // 0x80213C0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214130;
    // 0x80213C0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213C10: sub.s       $f18, $f26, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f26.fl - ctx->f22.fl;
L_80213C14:
    // 0x80213C14: lwc1        $f4, 0xC($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XC);
    // 0x80213C18: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x80213C1C: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x80213C20: nop

    // 0x80213C24: bc1fl       L_80213C38
    if (!c1cs) {
        // 0x80213C28: add.s       $f20, $f28, $f22
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f28.fl + ctx->f22.fl;
            goto L_80213C38;
    }
    goto skip_1;
    // 0x80213C28: add.s       $f20, $f28, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f28.fl + ctx->f22.fl;
    skip_1:
    // 0x80213C2C: b           L_80214130
    // 0x80213C30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214130;
    // 0x80213C30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213C34: add.s       $f20, $f28, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f28.fl + ctx->f22.fl;
L_80213C38:
    // 0x80213C38: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80213C3C: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x80213C40: c.lt.s      $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f20.fl < ctx->f14.fl;
    // 0x80213C44: nop

    // 0x80213C48: bc1fl       L_80213C5C
    if (!c1cs) {
        // 0x80213C4C: sub.s       $f24, $f28, $f22
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f28.fl - ctx->f22.fl;
            goto L_80213C5C;
    }
    goto skip_2;
    // 0x80213C4C: sub.s       $f24, $f28, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f28.fl - ctx->f22.fl;
    skip_2:
    // 0x80213C50: b           L_80214130
    // 0x80213C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214130;
    // 0x80213C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213C58: sub.s       $f24, $f28, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f28.fl - ctx->f22.fl;
L_80213C5C:
    // 0x80213C5C: lwc1        $f6, 0x10($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X10);
    // 0x80213C60: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x80213C64: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80213C68: c.lt.s      $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f6.fl < ctx->f24.fl;
    // 0x80213C6C: nop

    // 0x80213C70: bc1fl       L_80213C84
    if (!c1cs) {
        // 0x80213C74: sub.s       $f8, $f18, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f12.fl;
            goto L_80213C84;
    }
    goto skip_3;
    // 0x80213C74: sub.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f12.fl;
    skip_3:
    // 0x80213C78: b           L_80214130
    // 0x80213C7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214130;
    // 0x80213C7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213C80: sub.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f12.fl;
L_80213C84:
    // 0x80213C84: lwc1        $f0, 0x1C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80213C88: lwc1        $f2, 0x20($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80213C8C: sub.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80213C90: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80213C94: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x80213C98: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80213C9C: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80213CA0: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80213CA4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80213CA8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80213CAC: sub.s       $f4, $f24, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f14.fl;
    // 0x80213CB0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80213CB4: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80213CB8: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80213CBC: sub.s       $f10, $f20, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f14.fl;
    // 0x80213CC0: div.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80213CC4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80213CC8: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80213CCC: nop

    // 0x80213CD0: sw          $t0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r8;
    // 0x80213CD4: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x80213CD8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80213CDC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80213CE0: bgez        $v0, L_80213CEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80213CE4: sw          $t2, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->r10;
            goto L_80213CEC;
    }
    // 0x80213CE4: sw          $t2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r10;
    // 0x80213CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213CEC:
    // 0x80213CEC: lbu         $v1, 0x18($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X18);
    // 0x80213CF0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80213CF4: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80213CF8: beq         $at, $zero, L_80213D04
    if (ctx->r1 == 0) {
        // 0x80213CFC: nop
    
            goto L_80213D04;
    }
    // 0x80213CFC: nop

    // 0x80213D00: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80213D04:
    // 0x80213D04: bgez        $t4, L_80213D10
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80213D08: addiu       $t6, $a0, 0x1
        ctx->r14 = ADD32(ctx->r4, 0X1);
            goto L_80213D10;
    }
    // 0x80213D08: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x80213D0C: sw          $zero, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = 0;
L_80213D10:
    // 0x80213D10: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x80213D14: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x80213D18: lbu         $v1, 0x19($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X19);
    // 0x80213D1C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80213D20: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80213D24: beql        $at, $zero, L_80213D34
    if (ctx->r1 == 0) {
        // 0x80213D28: lw          $t8, 0xB4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XB4);
            goto L_80213D34;
    }
    goto skip_4;
    // 0x80213D28: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    skip_4:
    // 0x80213D2C: sw          $v1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r3;
    // 0x80213D30: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
L_80213D34:
    // 0x80213D34: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80213D38: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x80213D3C: lwc1        $f30, 0x0($t8)
    ctx->f30.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80213D40: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80213D44: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80213D48: sw          $v0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r2;
    // 0x80213D4C: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x80213D50: bne         $at, $zero, L_802140F8
    if (ctx->r1 != 0) {
        // 0x80213D54: swc1        $f10, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
            goto L_802140F8;
    }
    // 0x80213D54: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x80213D58: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80213D5C: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x80213D60: swc1        $f26, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f26.u32l;
    // 0x80213D64: swc1        $f28, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f28.u32l;
L_80213D68:
    // 0x80213D68: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x80213D6C: lw          $t0, 0xE8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE8);
    // 0x80213D70: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x80213D74: lwc1        $f26, 0x4($t9)
    ctx->f26.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80213D78: lwc1        $f4, 0x20($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80213D7C: slt         $at, $t1, $t0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80213D80: sw          $t0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r8;
    // 0x80213D84: bne         $at, $zero, L_802140E4
    if (ctx->r1 != 0) {
        // 0x80213D88: add.s       $f28, $f4, $f26
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f26.fl;
            goto L_802140E4;
    }
    // 0x80213D88: add.s       $f28, $f4, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x80213D8C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80213D90: sw          $t2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r10;
L_80213D94:
    // 0x80213D94: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x80213D98: lw          $t5, 0xF8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF8);
    // 0x80213D9C: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x80213DA0: lbu         $t4, 0x18($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X18);
    // 0x80213DA4: lw          $t6, 0x28($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X28);
    // 0x80213DA8: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80213DAC: mflo        $t7
    ctx->r15 = lo;
    // 0x80213DB0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80213DB4: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80213DB8: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80213DBC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80213DC0: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x80213DC4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80213DC8: addu        $s4, $t6, $t9
    ctx->r20 = ADD32(ctx->r14, ctx->r25);
    // 0x80213DCC: beql        $s4, $zero, L_802140D4
    if (ctx->r20 == 0) {
        // 0x80213DD0: lw          $t2, 0xF8($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF8);
            goto L_802140D4;
    }
    goto skip_5;
    // 0x80213DD0: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    skip_5:
    // 0x80213DD4: lw          $fp, 0x40($s4)
    ctx->r30 = MEM_W(ctx->r20, 0X40);
    // 0x80213DD8: lwc1        $f6, 0x104($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80213DDC: beql        $fp, $zero, L_802140D4
    if (ctx->r30 == 0) {
        // 0x80213DE0: lw          $t2, 0xF8($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF8);
            goto L_802140D4;
    }
    goto skip_6;
    // 0x80213DE0: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    skip_6:
    // 0x80213DE4: lwc1        $f8, 0x30($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X30);
    // 0x80213DE8: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80213DEC: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80213DF0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80213DF4: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x80213DF8: addiu       $a2, $sp, 0xD4
    ctx->r6 = ADD32(ctx->r29, 0XD4);
    // 0x80213DFC: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x80213E00: lwc1        $f6, 0x34($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X34);
    // 0x80213E04: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80213E08: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80213E0C: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    // 0x80213E10: lbu         $v0, 0x48($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X48);
    // 0x80213E14: lwc1        $f4, 0x38($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X38);
    // 0x80213E18: beq         $v0, $zero, L_80213E30
    if (ctx->r2 == 0) {
        // 0x80213E1C: sub.s       $f20, $f10, $f4
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
            goto L_80213E30;
    }
    // 0x80213E1C: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80213E20: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80213E24: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80213E28: jal         0x80218C74
    // 0x80213E2C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    static_3_80218C74(rdram, ctx);
        goto after_1;
    // 0x80213E2C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
L_80213E30:
    // 0x80213E30: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80213E34: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80213E38: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x80213E3C: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80213E40: lwc1        $f14, 0xD4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80213E44: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x80213E48: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x80213E4C: jal         0x80218D34
    // 0x80213E50: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_80218D34(rdram, ctx);
        goto after_2;
    // 0x80213E50: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80213E54: lhu         $v1, 0x14($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X14);
    // 0x80213E58: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80213E5C: blezl       $v1, L_802140D4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80213E60: lw          $t2, 0xF8($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF8);
            goto L_802140D4;
    }
    goto skip_7;
    // 0x80213E60: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    skip_7:
    // 0x80213E64: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x80213E68: lw          $t1, 0x10($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X10);
L_80213E6C:
    // 0x80213E6C: sll         $t2, $s7, 5
    ctx->r10 = S32(ctx->r23 << 5);
    // 0x80213E70: lw          $t5, 0x98($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X98);
    // 0x80213E74: addu        $s2, $t1, $t2
    ctx->r18 = ADD32(ctx->r9, ctx->r10);
    // 0x80213E78: lhu         $t4, 0x18($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X18);
    // 0x80213E7C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80213E80: and         $t7, $t4, $t5
    ctx->r15 = ctx->r12 & ctx->r13;
    // 0x80213E84: beql        $t7, $zero, L_802140C4
    if (ctx->r15 == 0) {
        // 0x80213E88: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_802140C4;
    }
    goto skip_8;
    // 0x80213E88: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_8:
    // 0x80213E8C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80213E90: lhu         $t6, 0x0($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X0);
    // 0x80213E94: lwc1        $f8, 0xC($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XC);
    // 0x80213E98: lw          $t3, 0x1C($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X1C);
    // 0x80213E9C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80213EA0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80213EA4: addu        $t0, $t3, $t9
    ctx->r8 = ADD32(ctx->r11, ctx->r25);
    // 0x80213EA8: lw          $s5, 0x0($t0)
    ctx->r21 = MEM_W(ctx->r8, 0X0);
    // 0x80213EAC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80213EB0: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x80213EB4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80213EB8: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80213EBC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80213EC0: lwc1        $f4, 0x14($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X14);
    // 0x80213EC4: lwc1        $f14, 0xD4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80213EC8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80213ECC: lwc1        $f6, 0x1C($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X1C);
    // 0x80213ED0: jal         0x802164C8
    // 0x80213ED4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    static_3_802164C8(rdram, ctx);
        goto after_3;
    // 0x80213ED4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80213ED8: bnel        $v0, $zero, L_80213EEC
    if (ctx->r2 != 0) {
        // 0x80213EDC: lhu         $t1, 0x4A($s4)
        ctx->r9 = MEM_HU(ctx->r20, 0X4A);
            goto L_80213EEC;
    }
    goto skip_9;
    // 0x80213EDC: lhu         $t1, 0x4A($s4)
    ctx->r9 = MEM_HU(ctx->r20, 0X4A);
    skip_9:
    // 0x80213EE0: b           L_802140C0
    // 0x80213EE4: lhu         $v1, 0x14($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X14);
        goto L_802140C0;
    // 0x80213EE4: lhu         $v1, 0x14($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X14);
    // 0x80213EE8: lhu         $t1, 0x4A($s4)
    ctx->r9 = MEM_HU(ctx->r20, 0X4A);
L_80213EEC:
    // 0x80213EEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80213EF0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80213EF4: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x80213EF8: or          $t4, $t2, $s7
    ctx->r12 = ctx->r10 | ctx->r23;
    // 0x80213EFC: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x80213F00: lbu         $t5, 0x11($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X11);
    // 0x80213F04: lw          $a3, 0x0($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X0);
    // 0x80213F08: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80213F0C: andi        $t7, $t5, 0x6
    ctx->r15 = ctx->r13 & 0X6;
    // 0x80213F10: beq         $t7, $zero, L_80213F40
    if (ctx->r15 == 0) {
        // 0x80213F14: or          $s1, $a3, $zero
        ctx->r17 = ctx->r7 | 0;
            goto L_80213F40;
    }
    // 0x80213F14: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x80213F18: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80213F1C: lwc1        $f8, 0x2C($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X2C);
    // 0x80213F20: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80213F24: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80213F28: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80213F2C: lwc1        $f14, 0xD4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80213F30: jal         0x802168C4
    // 0x80213F34: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    static_3_802168C4(rdram, ctx);
        goto after_4;
    // 0x80213F34: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80213F38: b           L_80214064
    // 0x80213F3C: lbu         $t6, 0x48($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X48);
        goto L_80214064;
    // 0x80213F3C: lbu         $t6, 0x48($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X48);
L_80213F40:
    // 0x80213F40: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80213F44: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80213F48: sll         $t3, $a3, 2
    ctx->r11 = S32(ctx->r7 << 2);
    // 0x80213F4C: addu        $t9, $t6, $t3
    ctx->r25 = ADD32(ctx->r14, ctx->r11);
    // 0x80213F50: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80213F54: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80213F58: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
    // 0x80213F5C: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80213F60: lw          $t2, 0x0($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X0);
    // 0x80213F64: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80213F68: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80213F6C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80213F70: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80213F74: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x80213F78: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x80213F7C: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x80213F80: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80213F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213F88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80213F8C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80213F90: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80213F94: lwc1        $f6, 0x14($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X14);
    // 0x80213F98: sub.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x80213F9C: jal         0x80234D30
    // 0x80213FA0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    static_3_80234D30(rdram, ctx);
        goto after_5;
    // 0x80213FA0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    after_5:
    // 0x80213FA4: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80213FA8: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80213FAC: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80213FB0: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80213FB4: nop

    // 0x80213FB8: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80213FBC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80213FC0: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80213FC4: jal         0x8022AA40
    // 0x80213FC8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_6;
    // 0x80213FC8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_6:
    // 0x80213FCC: lwc1        $f10, 0x1C($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X1C);
    // 0x80213FD0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80213FD4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80213FD8: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80213FDC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80213FE0: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80213FE4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80213FE8: div.s       $f2, $f4, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80213FEC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80213FF0: c.lt.s      $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f2.fl < ctx->f24.fl;
    // 0x80213FF4: nop

    // 0x80213FF8: bc1fl       L_8021401C
    if (!c1cs) {
        // 0x80213FFC: lw          $t8, 0x0($s3)
        ctx->r24 = MEM_W(ctx->r19, 0X0);
            goto L_8021401C;
    }
    goto skip_10;
    // 0x80213FFC: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    skip_10:
    // 0x80214000: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x80214004: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80214008: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8021400C: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80214010: b           L_8021402C
    // 0x80214014: swc1        $f2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f2.u32l;
        goto L_8021402C;
    // 0x80214014: swc1        $f2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f2.u32l;
    // 0x80214018: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
L_8021401C:
    // 0x8021401C: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80214020: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80214024: addu        $t0, $t3, $t9
    ctx->r8 = ADD32(ctx->r11, ctx->r25);
    // 0x80214028: swc1        $f24, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f24.u32l;
L_8021402C:
    // 0x8021402C: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x80214030: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80214034: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80214038: sw          $t2, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r10;
    // 0x8021403C: lhu         $t5, 0x0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X0);
    // 0x80214040: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80214044: bnel        $at, $zero, L_80214064
    if (ctx->r1 != 0) {
        // 0x80214048: lbu         $t6, 0x48($s4)
        ctx->r14 = MEM_BU(ctx->r20, 0X48);
            goto L_80214064;
    }
    goto skip_11;
    // 0x80214048: lbu         $t6, 0x48($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X48);
    skip_11:
    // 0x8021404C: jal         0x80231C58
    // 0x80214050: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    static_3_80231C58(rdram, ctx);
        goto after_7;
    // 0x80214050: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_7:
    // 0x80214054: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80214058: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x8021405C: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x80214060: lbu         $t6, 0x48($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X48);
L_80214064:
    // 0x80214064: beql        $t6, $zero, L_802140C0
    if (ctx->r14 == 0) {
        // 0x80214068: lhu         $v1, 0x14($fp)
        ctx->r3 = MEM_HU(ctx->r30, 0X14);
            goto L_802140C0;
    }
    goto skip_12;
    // 0x80214068: lhu         $v1, 0x14($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X14);
    skip_12:
    // 0x8021406C: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80214070: sll         $s0, $s1, 2
    ctx->r16 = S32(ctx->r17 << 2);
    // 0x80214074: subu        $s0, $s0, $s1
    ctx->r16 = SUB32(ctx->r16, ctx->r17);
    // 0x80214078: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8021407C: beq         $at, $zero, L_802140BC
    if (ctx->r1 == 0) {
        // 0x80214080: sll         $s0, $s0, 2
        ctx->r16 = S32(ctx->r16 << 2);
            goto L_802140BC;
    }
    // 0x80214080: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80214084: lbu         $a0, 0x48($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X48);
L_80214088:
    // 0x80214088: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
    // 0x8021408C: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x80214090: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x80214094: addu        $a1, $s0, $t0
    ctx->r5 = ADD32(ctx->r16, ctx->r8);
    // 0x80214098: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x8021409C: jal         0x80218C74
    // 0x802140A0: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    static_3_80218C74(rdram, ctx);
        goto after_8;
    // 0x802140A0: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    after_8:
    // 0x802140A4: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x802140A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802140AC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x802140B0: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802140B4: bnel        $at, $zero, L_80214088
    if (ctx->r1 != 0) {
        // 0x802140B8: lbu         $a0, 0x48($s4)
        ctx->r4 = MEM_BU(ctx->r20, 0X48);
            goto L_80214088;
    }
    goto skip_13;
    // 0x802140B8: lbu         $a0, 0x48($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X48);
    skip_13:
L_802140BC:
    // 0x802140BC: lhu         $v1, 0x14($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X14);
L_802140C0:
    // 0x802140C0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_802140C4:
    // 0x802140C4: slt         $at, $s7, $v1
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802140C8: bnel        $at, $zero, L_80213E6C
    if (ctx->r1 != 0) {
        // 0x802140CC: lw          $t1, 0x10($fp)
        ctx->r9 = MEM_W(ctx->r30, 0X10);
            goto L_80213E6C;
    }
    goto skip_14;
    // 0x802140CC: lw          $t1, 0x10($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X10);
    skip_14:
    // 0x802140D0: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
L_802140D4:
    // 0x802140D4: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x802140D8: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x802140DC: bne         $t4, $t5, L_80213D94
    if (ctx->r12 != ctx->r13) {
        // 0x802140E0: sw          $t5, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = ctx->r13;
            goto L_80213D94;
    }
    // 0x802140E0: sw          $t5, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r13;
L_802140E4:
    // 0x802140E4: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x802140E8: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x802140EC: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x802140F0: bne         $t8, $t6, L_80213D68
    if (ctx->r24 != ctx->r14) {
        // 0x802140F4: sw          $t6, 0xFC($sp)
        MEM_W(0XFC, ctx->r29) = ctx->r14;
            goto L_80213D68;
    }
    // 0x802140F4: sw          $t6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r14;
L_802140F8:
    // 0x802140F8: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802140FC: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80214100: lw          $t9, 0x114($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X114);
    // 0x80214104: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80214108: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8021410C: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x80214110: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x80214114: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80214118: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x8021411C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80214120: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x80214124: lw          $t2, 0x0($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X0);
    // 0x80214128: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x8021412C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_80214130:
    // 0x80214130: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x80214134: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80214138: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8021413C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x80214140: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x80214144: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x80214148: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x8021414C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x80214150: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x80214154: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80214158: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8021415C: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x80214160: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x80214164: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x80214168: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x8021416C: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x80214170: jr          $ra
    // 0x80214174: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x80214174: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void D_8029ADD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029AE54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8029AE58: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8029AE5C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8029AE60: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029AE64: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8029AE68: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8029AE6C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8029AE70: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8029AE74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029AE78: jal         0x802CB994
    // 0x8029AE7C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_802CB994(rdram, ctx);
        goto after_0;
    // 0x8029AE7C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x8029AE80: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8029AE84: jal         0x802CB8E0
    // 0x8029AE88: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    static_3_802CB8E0(rdram, ctx);
        goto after_1;
    // 0x8029AE88: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_1:
    // 0x8029AE8C: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8029AE90: addiu       $s1, $zero, 0xA0
    ctx->r17 = ADD32(0, 0XA0);
    // 0x8029AE94: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8029AE98: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8029AE9C: addiu       $s3, $zero, 0xB
    ctx->r19 = ADD32(0, 0XB);
L_8029AEA0:
    // 0x8029AEA0: lbu         $t6, 0x1B($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X1B);
    // 0x8029AEA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029AEA8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8029AEAC: bne         $s0, $t6, L_8029AED0
    if (ctx->r16 != ctx->r14) {
        // 0x8029AEB0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029AED0;
    }
    // 0x8029AEB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029AEB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029AEB8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029AEBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029AEC0: jal         0x8021E708
    // 0x8029AEC4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_2;
    // 0x8029AEC4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x8029AEC8: b           L_8029AEDC
    // 0x8029AECC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
        goto L_8029AEDC;
    // 0x8029AECC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
L_8029AED0:
    // 0x8029AED0: jal         0x8021E708
    // 0x8029AED4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_3;
    // 0x8029AED4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x8029AED8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
L_8029AEDC:
    // 0x8029AEDC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8029AEE0: jal         0x8021E87C
    // 0x8029AEE4: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    static_3_8021E87C(rdram, ctx);
        goto after_4;
    // 0x8029AEE4: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    after_4:
    // 0x8029AEE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8029AEEC: addiu       $s1, $s1, -0xD
    ctx->r17 = ADD32(ctx->r17, -0XD);
    // 0x8029AEF0: bne         $s0, $s3, L_8029AEA0
    if (ctx->r16 != ctx->r19) {
        // 0x8029AEF4: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8029AEA0;
    }
    // 0x8029AEF4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8029AEF8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8029AEFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029AF00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8029AF04: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8029AF08: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8029AF0C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8029AF10: jr          $ra
    // 0x8029AF14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8029AF14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_80200304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80200308: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8020030C: lhu         $t6, 0x1A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1A);
    // 0x80200310: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80200314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200318: blez        $t6, L_80200330
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8020031C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_80200330;
    }
    // 0x8020031C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80200320: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80200324: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80200328: jal         0x80231C9C
    // 0x8020032C: addiu       $a2, $zero, 0x7E
    ctx->r6 = ADD32(0, 0X7E);
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x8020032C: addiu       $a2, $zero, 0x7E
    ctx->r6 = ADD32(0, 0X7E);
    after_0:
L_80200330:
    // 0x80200330: jal         0x80202288
    // 0x80200334: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    static_3_80202288(rdram, ctx);
        goto after_1;
    // 0x80200334: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    after_1:
    // 0x80200338: lhu         $t7, 0x1A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X1A);
    // 0x8020033C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80200340: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80200344: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80200348: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8020034C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80200350: jal         0x802057A0
    // 0x80200354: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    static_3_802057A0(rdram, ctx);
        goto after_2;
    // 0x80200354: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    after_2:
    // 0x80200358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020035C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80200360: jr          $ra
    // 0x80200364: nop

    return;
    // 0x80200364: nop

;}
RECOMP_FUNC void D_802826E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282760: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80282764: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80282768: jr          $ra
    // 0x8028276C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x8028276C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802B4DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4E54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B4E58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B4E5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B4E60: jal         0x80317DA0
    // 0x802B4E64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    static_3_80317DA0(rdram, ctx);
        goto after_0;
    // 0x802B4E64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x802B4E68: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802B4E6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B4E70: lw          $t9, 0xAC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XAC);
    // 0x802B4E74: lh          $t6, 0xA8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA8);
    // 0x802B4E78: jalr        $t9
    // 0x802B4E7C: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802B4E7C: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_1:
    // 0x802B4E80: lw          $v0, 0x368($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X368);
    // 0x802B4E84: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B4E88: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x802B4E8C: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802B4E90: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802B4E94: jalr        $t9
    // 0x802B4E98: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802B4E98: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    after_2:
    // 0x802B4E9C: lw          $v0, 0x458($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X458);
    // 0x802B4EA0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B4EA4: lh          $t8, 0x50($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X50);
    // 0x802B4EA8: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802B4EAC: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802B4EB0: jalr        $t9
    // 0x802B4EB4: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802B4EB4: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    after_3:
    // 0x802B4EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B4EBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B4EC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B4EC4: jr          $ra
    // 0x802B4EC8: nop

    return;
    // 0x802B4EC8: nop

;}
RECOMP_FUNC void D_802066BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802066BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802066C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802066C4: jal         0x8022A2F0
    // 0x802066C8: nop

    static_3_8022A2F0(rdram, ctx);
        goto after_0;
    // 0x802066C8: nop

    after_0:
    // 0x802066CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802066D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802066D4: jr          $ra
    // 0x802066D8: nop

    return;
    // 0x802066D8: nop

;}
RECOMP_FUNC void D_802279AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802279AC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802279B0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802279B4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802279B8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x802279BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802279C0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802279C4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802279C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802279CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802279D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802279D4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802279D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802279DC: jal         0x80223840
    // 0x802279E0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x802279E0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x802279E4: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x802279E8: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x802279EC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x802279F0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802279F4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802279F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802279FC: jal         0x8022393C
    // 0x80227A00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80227A00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80227A04: beq         $v0, $zero, L_80227A40
    if (ctx->r2 == 0) {
        // 0x80227A08: lui         $s0, 0x434F
        ctx->r16 = S32(0X434F << 16);
            goto L_80227A40;
    }
    // 0x80227A08: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x80227A0C: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
L_80227A10:
    // 0x80227A10: bnel        $v0, $s0, L_80227A28
    if (ctx->r2 != ctx->r16) {
        // 0x80227A14: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80227A28;
    }
    goto skip_0;
    // 0x80227A14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x80227A18: jal         0x80225EFC
    // 0x80227A1C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    static_3_80225EFC(rdram, ctx);
        goto after_2;
    // 0x80227A1C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x80227A20: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80227A24: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80227A28:
    // 0x80227A28: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227A2C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80227A30: jal         0x8022393C
    // 0x80227A34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80227A34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80227A38: bne         $v0, $zero, L_80227A10
    if (ctx->r2 != 0) {
        // 0x80227A3C: nop
    
            goto L_80227A10;
    }
    // 0x80227A3C: nop

L_80227A40:
    // 0x80227A40: jal         0x802238F0
    // 0x80227A44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802238F0(rdram, ctx);
        goto after_4;
    // 0x80227A44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x80227A48: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80227A4C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80227A50: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80227A54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80227A58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80227A5C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80227A60: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80227A64: jr          $ra
    // 0x80227A68: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80227A68: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802EF9A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFA28: jr          $ra
    // 0x802EFA2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EFA2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_80282954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802829D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802829D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802829DC: jal         0x8028D750
    // 0x802829E0: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D750(rdram, ctx);
        goto after_0;
    // 0x802829E0: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802829E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802829E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802829EC: jr          $ra
    // 0x802829F0: nop

    return;
    // 0x802829F0: nop

;}
RECOMP_FUNC void D_802D407C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D40FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D4100: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D4104: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D4108: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D410C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D4110: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D4114: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802D4118: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x802D411C: jal         0x80302DC8
    // 0x802D4120: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802D4120: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802D4124: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802D4128: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D412C: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    // 0x802D4130: jal         0x80302DC8
    // 0x802D4134: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802D4134: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802D4138: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802D413C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D4140: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x802D4144: jal         0x80302DC8
    // 0x802D4148: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_2;
    // 0x802D4148: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802D414C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802D4150: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802D4154: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D4158: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802D415C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802D4160: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802D4164: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x802D4168: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802D416C: jal         0x80290474
    // 0x802D4170: nop

    static_3_80290474(rdram, ctx);
        goto after_3;
    // 0x802D4170: nop

    after_3:
    // 0x802D4174: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D4178: jal         0x80302980
    // 0x802D417C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_4;
    // 0x802D417C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802D4180: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D4184: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D4188: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D418C: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x802D4190: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D4194: jal         0x80302988
    // 0x802D4198: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802D4198: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802D419C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D41A0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D41A4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D41A8: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    // 0x802D41AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D41B0: jal         0x80302988
    // 0x802D41B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_6;
    // 0x802D41B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802D41B8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D41BC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D41C0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D41C4: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x802D41C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D41CC: jal         0x80302988
    // 0x802D41D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_7;
    // 0x802D41D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802D41D4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D41D8: jal         0x80302A7C
    // 0x802D41DC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_8;
    // 0x802D41DC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802D41E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D41E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D41E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D41EC: jr          $ra
    // 0x802D41F0: nop

    return;
    // 0x802D41F0: nop

;}
RECOMP_FUNC void D_802C9EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C9F2C: beq         $a0, $zero, L_802C9F50
    if (ctx->r4 == 0) {
        // 0x802C9F30: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802C9F50;
    }
    // 0x802C9F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C9F34: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802C9F38: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802C9F3C: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x802C9F40: beq         $t7, $zero, L_802C9F50
    if (ctx->r15 == 0) {
        // 0x802C9F44: sw          $t6, 0xB8($a0)
        MEM_W(0XB8, ctx->r4) = ctx->r14;
            goto L_802C9F50;
    }
    // 0x802C9F44: sw          $t6, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r14;
    // 0x802C9F48: jal         0x802C681C
    // 0x802C9F4C: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802C9F4C: nop

    after_0:
L_802C9F50:
    // 0x802C9F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C9F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C9F58: jr          $ra
    // 0x802C9F5C: nop

    return;
    // 0x802C9F5C: nop

;}
RECOMP_FUNC void D_802DD72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD7AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802DD7B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DD7B4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DD7B8: jal         0x802AC584
    // 0x802DD7BC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AC584(rdram, ctx);
        goto after_0;
    // 0x802DD7BC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x802DD7C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802DD7C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802DD7C8: jr          $ra
    // 0x802DD7CC: nop

    return;
    // 0x802DD7CC: nop

;}
RECOMP_FUNC void D_8023DEE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DEE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DEE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DEE8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023DEEC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023DEF0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8023DEF4: jal         0x80241760
    // 0x8023DEF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023DEF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023DEFC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023DF00: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023DF04: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023DF08: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8023DF0C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8023DF10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8023DF14: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8023DF18: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x8023DF1C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8023DF20: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8023DF24: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023DF28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023DF2C: jal         0x80241780
    // 0x8023DF30: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x8023DF30: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    after_1:
    // 0x8023DF34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DF38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DF3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023DF40: jr          $ra
    // 0x8023DF44: nop

    return;
    // 0x8023DF44: nop

;}
RECOMP_FUNC void D_80282924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802829A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802829A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802829AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802829B0: jal         0x8021BAE0
    // 0x802829B4: lw          $a0, 0x2A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2A8);
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802829B4: lw          $a0, 0x2A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2A8);
    after_0:
    // 0x802829B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802829BC: jal         0x8028D688
    // 0x802829C0: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D688(rdram, ctx);
        goto after_1;
    // 0x802829C0: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_1:
    // 0x802829C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802829C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802829CC: jr          $ra
    // 0x802829D0: nop

    return;
    // 0x802829D0: nop

;}
RECOMP_FUNC void D_802A6A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6B1C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802A6B20: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x802A6B24: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6B28: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x802A6B2C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802A6B30: lwc1        $f24, 0x0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6B34: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x802A6B38: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802A6B3C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802A6B40: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6B44: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802A6B48: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802A6B4C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802A6B50: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802A6B54: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802A6B58: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802A6B5C: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6B60: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802A6B64: addiu       $s3, $zero, 0x9
    ctx->r19 = ADD32(0, 0X9);
L_802A6B68:
    // 0x802A6B68: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x802A6B6C: nop

    // 0x802A6B70: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802A6B74: mul.s       $f20, $f22, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x802A6B78: jal         0x80300424
    // 0x802A6B7C: add.s       $f12, $f20, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f24.fl;
    static_3_80300424(rdram, ctx);
        goto after_0;
    // 0x802A6B7C: add.s       $f12, $f20, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f24.fl;
    after_0:
    // 0x802A6B80: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x802A6B84: jal         0x80300424
    // 0x802A6B88: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    static_3_80300424(rdram, ctx);
        goto after_1;
    // 0x802A6B88: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x802A6B8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802A6B90: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x802A6B94: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802A6B98: bne         $s0, $s3, L_802A6B68
    if (ctx->r16 != ctx->r19) {
        // 0x802A6B9C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_802A6B68;
    }
    // 0x802A6B9C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802A6BA0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802A6BA4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802A6BA8: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x802A6BAC: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x802A6BB0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802A6BB4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802A6BB8: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x802A6BBC: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x802A6BC0: jr          $ra
    // 0x802A6BC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802A6BC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}

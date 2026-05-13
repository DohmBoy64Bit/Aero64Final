#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802B8168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B81E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B81EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B81F0: lw          $v0, 0xB8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB8);
    // 0x802B81F4: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x802B81F8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802B81FC: lh          $t6, 0x48($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X48);
    // 0x802B8200: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802B8204: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x802B8208: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802B820C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802B8210: jalr        $t9
    // 0x802B8214: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802B8214: nop

    after_0:
    // 0x802B8218: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802B821C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B8220: lw          $v0, 0xB8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB8);
    // 0x802B8224: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x802B8228: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802B822C: addu        $a0, $t7, $a2
    ctx->r4 = ADD32(ctx->r15, ctx->r6);
    // 0x802B8230: jalr        $t9
    // 0x802B8234: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802B8234: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x802B8238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B823C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B8240: jr          $ra
    // 0x802B8244: nop

    return;
    // 0x802B8244: nop

;}
RECOMP_FUNC void D_802D3F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3FEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D3FF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D3FF4: jal         0x8028D9B4
    // 0x802D3FF8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D9B4(rdram, ctx);
        goto after_0;
    // 0x802D3FF8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802D3FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D4000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D4004: jr          $ra
    // 0x802D4008: nop

    return;
    // 0x802D4008: nop

;}
RECOMP_FUNC void D_802B9560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B95E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B95E4: bne         $a0, $zero, L_802B95FC
    if (ctx->r4 != 0) {
        // 0x802B95E8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B95FC;
    }
    // 0x802B95E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B95EC: jal         0x802C67EC
    // 0x802B95F0: addiu       $a0, $zero, 0xCC
    ctx->r4 = ADD32(0, 0XCC);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802B95F0: addiu       $a0, $zero, 0xCC
    ctx->r4 = ADD32(0, 0XCC);
    after_0:
    // 0x802B95F4: beq         $v0, $zero, L_802B961C
    if (ctx->r2 == 0) {
        // 0x802B95F8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802B961C;
    }
    // 0x802B95F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802B95FC:
    // 0x802B95FC: jal         0x80320C38
    // 0x802B9600: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80320C38(rdram, ctx);
        goto after_1;
    // 0x802B9600: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802B9604: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802B9608: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802B960C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802B9610: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x802B9614: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x802B9618: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
L_802B961C:
    // 0x802B961C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B9620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B9624: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802B9628: jr          $ra
    // 0x802B962C: nop

    return;
    // 0x802B962C: nop

;}
RECOMP_FUNC void D_802EC364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC3E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC3E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC3EC: beq         $a0, $zero, L_802EC41C
    if (ctx->r4 == 0) {
        // 0x802EC3F0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EC41C;
    }
    // 0x802EC3F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EC3F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EC3F8: jal         0x8031C514
    // 0x802EC3FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EC3FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EC400: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EC404: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC408: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EC40C: beql        $t7, $zero, L_802EC420
    if (ctx->r15 == 0) {
        // 0x802EC410: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EC420;
    }
    goto skip_0;
    // 0x802EC410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EC414: jal         0x802C681C
    // 0x802EC418: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EC418: nop

    after_1:
L_802EC41C:
    // 0x802EC41C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EC420:
    // 0x802EC420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC424: jr          $ra
    // 0x802EC428: nop

    return;
    // 0x802EC428: nop

;}
RECOMP_FUNC void D_8023D750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D750: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023D758: jal         0x80241760
    // 0x8023D75C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023D75C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8023D760: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023D764: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8023D768: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8023D76C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023D770: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023D774: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8023D778: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8023D77C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8023D780: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x8023D784: sh          $t0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r8;
    // 0x8023D788: jal         0x80241780
    // 0x8023D78C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x8023D78C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8023D790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023D794: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023D798: jr          $ra
    // 0x8023D79C: nop

    return;
    // 0x8023D79C: nop

;}
RECOMP_FUNC void D_8021EB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021EB48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021EB4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021EB50: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8021EB54: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8021EB58: lw          $t6, 0x48($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X48);
    // 0x8021EB5C: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8021EB60: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x8021EB64: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x8021EB68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021EB6C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8021EB70: lh          $t8, 0x1C($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X1C);
    // 0x8021EB74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EB78: sh          $t8, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r24;
    // 0x8021EB7C: jal         0x8021EAB4
    // 0x8021EB80: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    static_3_8021EAB4(rdram, ctx);
        goto after_0;
    // 0x8021EB80: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    after_0:
    // 0x8021EB84: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021EB88: sh          $v0, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r2;
    // 0x8021EB8C: lw          $t9, 0x48($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X48);
    // 0x8021EB90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021EB94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EB98: lbu         $t0, 0x8($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X8);
    // 0x8021EB9C: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x8021EBA0: lw          $t1, 0x48($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X48);
    // 0x8021EBA4: lbu         $t2, 0x9($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X9);
    // 0x8021EBA8: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x8021EBAC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x8021EBB0: jal         0x8023CD40
    // 0x8021EBB4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    func_8023CD40(rdram, ctx);
        goto after_1;
    // 0x8021EBB4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x8021EBB8: lbu         $t3, 0x13($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X13);
    // 0x8021EBBC: lbu         $a1, 0x10($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X10);
    // 0x8021EBC0: lbu         $a2, 0x11($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X11);
    // 0x8021EBC4: lbu         $a3, 0x12($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X12);
    // 0x8021EBC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EBCC: jal         0x8023CD60
    // 0x8021EBD0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    static_3_8023CD60(rdram, ctx);
        goto after_2;
    // 0x8021EBD0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_2:
    // 0x8021EBD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EBD8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8021EBDC: jal         0x8023CD90
    // 0x8021EBE0: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    static_3_8023CD90(rdram, ctx);
        goto after_3;
    // 0x8021EBE0: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    after_3:
    // 0x8021EBE4: jal         0x8023BE84
    // 0x8021EBE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8023BE84(rdram, ctx);
        goto after_4;
    // 0x8021EBE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8021EBEC: beq         $v0, $zero, L_8021EC14
    if (ctx->r2 == 0) {
        // 0x8021EBF0: addiu       $at, $zero, -0x1000
        ctx->r1 = ADD32(0, -0X1000);
            goto L_8021EC14;
    }
    // 0x8021EBF0: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x8021EBF4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8021EBF8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8021EBFC: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8021EC00: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8021EC04: addiu       $t4, $a0, 0x8
    ctx->r12 = ADD32(ctx->r4, 0X8);
    // 0x8021EC08: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x8021EC0C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x8021EC10: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
L_8021EC14:
    // 0x8021EC14: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021EC18: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8021EC1C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8021EC20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8021EC24: addiu       $t9, $zero, 0xFFE
    ctx->r25 = ADD32(0, 0XFFE);
    // 0x8021EC28: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8021EC2C: ori         $t8, $t7, 0xFFE
    ctx->r24 = ctx->r15 | 0XFFE;
    // 0x8021EC30: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021EC34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021EC38: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8021EC3C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8021EC40: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x8021EC44: jr          $ra
    // 0x8021EC48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8021EC48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802D75F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D7670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D7674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D7678: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D767C: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x802D7680: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802D7684: beq         $a1, $at, L_802D7694
    if (ctx->r5 == ctx->r1) {
        // 0x802D7688: nop
    
            goto L_802D7694;
    }
    // 0x802D7688: nop

    // 0x802D768C: jal         0x8021BAE0
    // 0x802D7690: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802D7690: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
L_802D7694:
    // 0x802D7694: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D7698: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D769C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802D76A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802D76A4: jal         0x80302414
    // 0x802D76A8: addiu       $a1, $a1, 0x384
    ctx->r5 = ADD32(ctx->r5, 0X384);
    static_3_80302414(rdram, ctx);
        goto after_1;
    // 0x802D76A8: addiu       $a1, $a1, 0x384
    ctx->r5 = ADD32(ctx->r5, 0X384);
    after_1:
    // 0x802D76AC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D76B0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D76B4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802D76B8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802D76BC: jal         0x80302414
    // 0x802D76C0: addiu       $a1, $a1, 0x38C
    ctx->r5 = ADD32(ctx->r5, 0X38C);
    static_3_80302414(rdram, ctx);
        goto after_2;
    // 0x802D76C0: addiu       $a1, $a1, 0x38C
    ctx->r5 = ADD32(ctx->r5, 0X38C);
    after_2:
    // 0x802D76C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D76C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D76CC: jr          $ra
    // 0x802D76D0: nop

    return;
    // 0x802D76D0: nop

;}
RECOMP_FUNC void D_802DCBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DCC40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DCC44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DCC48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DCC4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DCC50: beq         $a0, $zero, L_802DCCB0
    if (ctx->r4 == 0) {
        // 0x802DCC54: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802DCCB0;
    }
    // 0x802DCC54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802DCC58: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DCC5C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802DCC60: jal         0x8030D6A0
    // 0x802DCC64: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    static_3_8030D6A0(rdram, ctx);
        goto after_0;
    // 0x802DCC64: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    after_0:
    // 0x802DCC68: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    // 0x802DCC6C: jal         0x802C49D0
    // 0x802DCC70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_1;
    // 0x802DCC70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802DCC74: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x802DCC78: jal         0x802C49D0
    // 0x802DCC7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_2;
    // 0x802DCC7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802DCC80: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802DCC84: jal         0x802D48A8
    // 0x802DCC88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D48A8(rdram, ctx);
        goto after_3;
    // 0x802DCC88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802DCC8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DCC90: jal         0x8031739C
    // 0x802DCC94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_4;
    // 0x802DCC94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802DCC98: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802DCC9C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802DCCA0: beql        $t8, $zero, L_802DCCB4
    if (ctx->r24 == 0) {
        // 0x802DCCA4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802DCCB4;
    }
    goto skip_0;
    // 0x802DCCA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802DCCA8: jal         0x802C681C
    // 0x802DCCAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_5;
    // 0x802DCCAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_802DCCB0:
    // 0x802DCCB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802DCCB4:
    // 0x802DCCB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DCCB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802DCCBC: jr          $ra
    // 0x802DCCC0: nop

    return;
    // 0x802DCCC0: nop

;}
RECOMP_FUNC void D_802B7FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B8050: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802B8054: jr          $ra
    // 0x802B8058: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802B8058: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802D5760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D57E0: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x802D57E4: beq         $at, $zero, L_802D57F4
    if (ctx->r1 == 0) {
        // 0x802D57E8: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_802D57F4;
    }
    // 0x802D57E8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D57EC: bgezl       $a0, L_802D57FC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802D57F0: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_802D57FC;
    }
    goto skip_0;
    // 0x802D57F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    skip_0:
L_802D57F4:
    // 0x802D57F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D57F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
L_802D57FC:
    // 0x802D57FC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x802D5800: jr          $ra
    // 0x802D5804: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x802D5804: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_8029F024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F0A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029F0A8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8029F0AC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8029F0B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029F0B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8029F0B8: jal         0x802CF718
    // 0x8029F0BC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802CF718(rdram, ctx);
        goto after_0;
    // 0x8029F0BC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x8029F0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029F0C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F0C8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F0CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029F0D0: jr          $ra
    // 0x8029F0D4: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    return;
    // 0x8029F0D4: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
;}
RECOMP_FUNC void D_802C80D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8158: jr          $ra
    // 0x802C815C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802C815C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_80230D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230D20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230D24: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80230D28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230D2C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230D30: jal         0x80231A24
    // 0x80230D34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80230D34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80230D38: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230D3C: jal         0x80231A24
    // 0x80230D40: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80230D40: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80230D44: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230D48: jal         0x80231A24
    // 0x80230D4C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80230D4C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x80230D50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230D54: jal         0x80231A24
    // 0x80230D58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80230D58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x80230D5C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230D60: jal         0x80231A24
    // 0x80230D64: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80230D64: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x80230D68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230D6C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230D70: jal         0x80231A24
    // 0x80230D74: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x80230D74: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_5:
    // 0x80230D78: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230D7C: jal         0x80231A24
    // 0x80230D80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x80230D80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x80230D84: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80230D88: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80230D8C: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x80230D90: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80230D94: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80230D98: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x80230D9C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80230DA0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x80230DA4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80230DA8: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80230DAC: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80230DB0: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80230DB4: addiu       $t9, $t9, 0xA0
    ctx->r25 = ADD32(ctx->r25, 0XA0);
    // 0x80230DB8: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80230DBC: addiu       $t7, $t7, 0xA0
    ctx->r15 = ADD32(ctx->r15, 0XA0);
    // 0x80230DC0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80230DC4: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80230DC8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230DCC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230DD0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80230DD4: subu        $a1, $t6, $t7
    ctx->r5 = SUB32(ctx->r14, ctx->r15);
    // 0x80230DD8: subu        $a2, $t8, $t9
    ctx->r6 = SUB32(ctx->r24, ctx->r25);
    // 0x80230DDC: jal         0x80231A24
    // 0x80230DE0: subu        $a3, $t0, $t1
    ctx->r7 = SUB32(ctx->r8, ctx->r9);
    static_3_80231A24(rdram, ctx);
        goto after_7;
    // 0x80230DE0: subu        $a3, $t0, $t1
    ctx->r7 = SUB32(ctx->r8, ctx->r9);
    after_7:
    // 0x80230DE4: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80230DE8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80230DEC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80230DF0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80230DF4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80230DF8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80230DFC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80230E00: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80230E04: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230E08: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230E0C: subu        $a1, $t5, $t6
    ctx->r5 = SUB32(ctx->r13, ctx->r14);
    // 0x80230E10: jal         0x80231A24
    // 0x80230E14: subu        $a2, $t7, $t8
    ctx->r6 = SUB32(ctx->r15, ctx->r24);
    static_3_80231A24(rdram, ctx);
        goto after_8;
    // 0x80230E14: subu        $a2, $t7, $t8
    ctx->r6 = SUB32(ctx->r15, ctx->r24);
    after_8:
    // 0x80230E18: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80230E1C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80230E20: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80230E24: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80230E28: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230E2C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230E30: jal         0x80231A24
    // 0x80230E34: subu        $a1, $a3, $a2
    ctx->r5 = SUB32(ctx->r7, ctx->r6);
    static_3_80231A24(rdram, ctx);
        goto after_9;
    // 0x80230E34: subu        $a1, $a3, $a2
    ctx->r5 = SUB32(ctx->r7, ctx->r6);
    after_9:
    // 0x80230E38: jal         0x8023CF00
    // 0x80230E3C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    static_3_8023CF00(rdram, ctx);
        goto after_10;
    // 0x80230E3C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_10:
    // 0x80230E40: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80230E44: jal         0x8022AF68
    // 0x80230E48: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    static_3_8022AF68(rdram, ctx);
        goto after_11;
    // 0x80230E48: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    after_11:
    // 0x80230E4C: jal         0x8021FFB4
    // 0x80230E50: nop

    static_3_8021FFB4(rdram, ctx);
        goto after_12;
    // 0x80230E50: nop

    after_12:
    // 0x80230E54: jal         0x80224010
    // 0x80230E58: nop

    static_3_80224010(rdram, ctx);
        goto after_13;
    // 0x80230E58: nop

    after_13:
    // 0x80230E5C: jal         0x802070A8
    // 0x80230E60: nop

    static_3_802070A8(rdram, ctx);
        goto after_14;
    // 0x80230E60: nop

    after_14:
    // 0x80230E64: jal         0x80205890
    // 0x80230E68: nop

    static_3_80205890(rdram, ctx);
        goto after_15;
    // 0x80230E68: nop

    after_15:
    // 0x80230E6C: jal         0x8021D444
    // 0x80230E70: nop

    static_3_8021D444(rdram, ctx);
        goto after_16;
    // 0x80230E70: nop

    after_16:
    // 0x80230E74: jal         0x802115D4
    // 0x80230E78: nop

    static_3_802115D4(rdram, ctx);
        goto after_17;
    // 0x80230E78: nop

    after_17:
    // 0x80230E7C: jal         0x8021BB84
    // 0x80230E80: nop

    static_3_8021BB84(rdram, ctx);
        goto after_18;
    // 0x80230E80: nop

    after_18:
    // 0x80230E84: jal         0x80223C60
    // 0x80230E88: nop

    static_3_80223C60(rdram, ctx);
        goto after_19;
    // 0x80230E88: nop

    after_19:
    // 0x80230E8C: jal         0x8021DD10
    // 0x80230E90: nop

    static_3_8021DD10(rdram, ctx);
        goto after_20;
    // 0x80230E90: nop

    after_20:
    // 0x80230E94: jal         0x8021F1B0
    // 0x80230E98: nop

    static_3_8021F1B0(rdram, ctx);
        goto after_21;
    // 0x80230E98: nop

    after_21:
    // 0x80230E9C: jal         0x80233224
    // 0x80230EA0: nop

    static_3_80233224(rdram, ctx);
        goto after_22;
    // 0x80230EA0: nop

    after_22:
    // 0x80230EA4: jal         0x80233D90
    // 0x80230EA8: nop

    static_3_80233D90(rdram, ctx);
        goto after_23;
    // 0x80230EA8: nop

    after_23:
    // 0x80230EAC: jal         0x8022D680
    // 0x80230EB0: nop

    static_3_8022D680(rdram, ctx);
        goto after_24;
    // 0x80230EB0: nop

    after_24:
    // 0x80230EB4: jal         0x80228080
    // 0x80230EB8: nop

    static_3_80228080(rdram, ctx);
        goto after_25;
    // 0x80230EB8: nop

    after_25:
    // 0x80230EBC: jal         0x8020455C
    // 0x80230EC0: nop

    static_3_8020455C(rdram, ctx);
        goto after_26;
    // 0x80230EC0: nop

    after_26:
    // 0x80230EC4: jal         0x8022BD80
    // 0x80230EC8: nop

    static_3_8022BD80(rdram, ctx);
        goto after_27;
    // 0x80230EC8: nop

    after_27:
    // 0x80230ECC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230ED0: jal         0x8023E330
    // 0x80230ED4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023E330(rdram, ctx);
        goto after_28;
    // 0x80230ED4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_28:
    // 0x80230ED8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80230EDC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80230EE0: bne         $v0, $zero, L_80230EF4
    if (ctx->r2 != 0) {
        // 0x80230EE4: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_80230EF4;
    }
    // 0x80230EE4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80230EE8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230EEC: jal         0x80231A24
    // 0x80230EF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_29;
    // 0x80230EF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_29:
L_80230EF4:
    // 0x80230EF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230EF8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80230EFC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80230F00: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80230F04: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x80230F08: jr          $ra
    // 0x80230F0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80230F0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80231740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231740: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80231744: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80231748: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8023174C: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x80231750: jal         0x802371E0
    // 0x80231754: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    static_3_802371E0(rdram, ctx);
        goto after_0;
    // 0x80231754: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80231758: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x8023175C: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x80231760: addiu       $t8, $sp, 0x50
    ctx->r24 = ADD32(ctx->r29, 0X50);
    // 0x80231764: addiu       $t9, $sp, 0x68
    ctx->r25 = ADD32(ctx->r29, 0X68);
    // 0x80231768: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8023176C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80231770: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80231774: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80231778: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8023177C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80231780: jal         0x8023E920
    // 0x80231784: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    static_3_8023E920(rdram, ctx);
        goto after_1;
    // 0x80231784: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_1:
    // 0x80231788: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8023178C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80231790: jal         0x802374B0
    // 0x80231794: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_2;
    // 0x80231794: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80231798: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023179C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802317A0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802317A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802317A8: jal         0x802371E0
    // 0x802317AC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    static_3_802371E0(rdram, ctx);
        goto after_3;
    // 0x802317AC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x802317B0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802317B4: lui         $a2, 0x3333
    ctx->r6 = S32(0X3333 << 16);
    // 0x802317B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x802317BC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802317C0: jal         0x8023DF30
    // 0x802317C4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    static_3_8023DF30(rdram, ctx);
        goto after_4;
    // 0x802317C4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_4:
    // 0x802317C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802317CC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802317D0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802317D4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802317D8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802317DC: jal         0x8023EA00
    // 0x802317E0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023EA00(rdram, ctx);
        goto after_5;
    // 0x802317E0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_5:
    // 0x802317E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802317E8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802317EC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802317F0: jr          $ra
    // 0x802317F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x802317F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_80234940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234940: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80234944: jr          $ra
    // 0x80234948: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
    return;
    // 0x80234948: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void D_802F05D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0650: jr          $ra
    // 0x802F0654: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    return;
    // 0x802F0654: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
;}
RECOMP_FUNC void D_802991B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80299234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80299238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029923C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80299240: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80299244: jal         0x802AEE54
    // 0x80299248: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_0;
    // 0x80299248: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8029924C: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x80299250: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x80299254: lw          $t9, 0xBC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XBC);
    // 0x80299258: lh          $t6, 0xB8($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XB8);
    // 0x8029925C: jalr        $t9
    // 0x80299260: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80299260: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_1:
    // 0x80299264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80299268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029926C: jr          $ra
    // 0x80299270: nop

    return;
    // 0x80299270: nop

;}
RECOMP_FUNC void D_802ACCC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACD44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802ACD48: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802ACD4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ACD50: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802ACD54: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ACD58: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802ACD5C: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ACD60: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802ACD64: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802ACD68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ACD6C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802ACD70: addiu       $t7, $zero, 0x81
    ctx->r15 = ADD32(0, 0X81);
    // 0x802ACD74: addiu       $t8, $zero, 0xB3
    ctx->r24 = ADD32(0, 0XB3);
    // 0x802ACD78: addiu       $t9, $zero, 0x8B
    ctx->r25 = ADD32(0, 0X8B);
    // 0x802ACD7C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACD80: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACD84: sb          $t6, 0x968($a0)
    MEM_B(0X968, ctx->r4) = ctx->r14;
    // 0x802ACD88: sw          $t7, 0x944($a0)
    MEM_W(0X944, ctx->r4) = ctx->r15;
    // 0x802ACD8C: sw          $t8, 0x948($a0)
    MEM_W(0X948, ctx->r4) = ctx->r24;
    // 0x802ACD90: sw          $t9, 0x94C($a0)
    MEM_W(0X94C, ctx->r4) = ctx->r25;
    // 0x802ACD94: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    // 0x802ACD98: jal         0x803034A8
    // 0x802ACD9C: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    static_3_803034A8(rdram, ctx);
        goto after_0;
    // 0x802ACD9C: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    after_0:
    // 0x802ACDA0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACDA4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACDA8: addiu       $a0, $s0, 0x9E0
    ctx->r4 = ADD32(ctx->r16, 0X9E0);
    // 0x802ACDAC: jal         0x803034A8
    // 0x802ACDB0: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    static_3_803034A8(rdram, ctx);
        goto after_1;
    // 0x802ACDB0: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    after_1:
    // 0x802ACDB4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACDB8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACDBC: addiu       $a0, $s0, 0xA54
    ctx->r4 = ADD32(ctx->r16, 0XA54);
    // 0x802ACDC0: jal         0x803034A8
    // 0x802ACDC4: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
    static_3_803034A8(rdram, ctx);
        goto after_2;
    // 0x802ACDC4: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
    after_2:
    // 0x802ACDC8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACDCC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACDD0: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    // 0x802ACDD4: jal         0x803034A8
    // 0x802ACDD8: addiu       $a1, $zero, 0x5D
    ctx->r5 = ADD32(0, 0X5D);
    static_3_803034A8(rdram, ctx);
        goto after_3;
    // 0x802ACDD8: addiu       $a1, $zero, 0x5D
    ctx->r5 = ADD32(0, 0X5D);
    after_3:
    // 0x802ACDDC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACDE0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACDE4: addiu       $a0, $s0, 0xBB0
    ctx->r4 = ADD32(ctx->r16, 0XBB0);
    // 0x802ACDE8: jal         0x803034A8
    // 0x802ACDEC: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    static_3_803034A8(rdram, ctx);
        goto after_4;
    // 0x802ACDEC: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_4:
    // 0x802ACDF0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACDF4: addiu       $a0, $s0, 0xD0C
    ctx->r4 = ADD32(ctx->r16, 0XD0C);
    // 0x802ACDF8: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    // 0x802ACDFC: jal         0x803034A8
    // 0x802ACE00: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    static_3_803034A8(rdram, ctx);
        goto after_5;
    // 0x802ACE00: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    after_5:
    // 0x802ACE04: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACE08: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACE0C: addiu       $a0, $s0, 0xD80
    ctx->r4 = ADD32(ctx->r16, 0XD80);
    // 0x802ACE10: jal         0x803034A8
    // 0x802ACE14: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
    static_3_803034A8(rdram, ctx);
        goto after_6;
    // 0x802ACE14: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
    after_6:
    // 0x802ACE18: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACE1C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACE20: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    // 0x802ACE24: jal         0x803034A8
    // 0x802ACE28: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    static_3_803034A8(rdram, ctx);
        goto after_7;
    // 0x802ACE28: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_7:
    // 0x802ACE2C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACE30: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACE34: addiu       $a0, $s0, 0xE68
    ctx->r4 = ADD32(ctx->r16, 0XE68);
    // 0x802ACE38: jal         0x803034A8
    // 0x802ACE3C: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    static_3_803034A8(rdram, ctx);
        goto after_8;
    // 0x802ACE3C: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    after_8:
    // 0x802ACE40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802ACE44: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802ACE48: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802ACE4C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802ACE50: jr          $ra
    // 0x802ACE54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802ACE54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_8022BA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BA08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BA10: jal         0x8022B948
    // 0x8022BA14: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_0;
    // 0x8022BA14: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8022BA18: beq         $v0, $zero, L_8022BA30
    if (ctx->r2 == 0) {
        // 0x8022BA1C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8022BA30;
    }
    // 0x8022BA1C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8022BA20: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022BA24: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022BA28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BA2C: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
L_8022BA30:
    // 0x8022BA30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BA34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BA38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8022BA3C: jr          $ra
    // 0x8022BA40: nop

    return;
    // 0x8022BA40: nop

;}
RECOMP_FUNC void D_802EC790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC810: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802EC814: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802EC818: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EC81C: bne         $a0, $zero, L_802EC834
    if (ctx->r4 != 0) {
        // 0x802EC820: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802EC834;
    }
    // 0x802EC820: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802EC824: jal         0x802C67EC
    // 0x802EC828: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EC828: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    after_0:
    // 0x802EC82C: beq         $v0, $zero, L_802EC8A8
    if (ctx->r2 == 0) {
        // 0x802EC830: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802EC8A8;
    }
    // 0x802EC830: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802EC834:
    // 0x802EC834: jal         0x8031C47C
    // 0x802EC838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EC838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802EC83C: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x802EC840: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802EC844: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802EC848: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802EC84C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x802EC850: jal         0x802C6930
    // 0x802EC854: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802EC854: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802EC858: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802EC85C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802EC860: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC864: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802EC868: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x802EC86C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802EC870: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EC874: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x802EC878: sh          $t7, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r15;
    // 0x802EC87C: sw          $t8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r24;
    // 0x802EC880: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
    // 0x802EC884: sh          $t0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r8;
    // 0x802EC888: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EC88C: sw          $t6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r14;
    // 0x802EC890: swc1        $f0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f0.u32l;
    // 0x802EC894: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x802EC898: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EC89C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802EC8A0: jal         0x8031D014
    // 0x802EC8A4: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    static_3_8031D014(rdram, ctx);
        goto after_3;
    // 0x802EC8A4: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    after_3:
L_802EC8A8:
    // 0x802EC8A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802EC8AC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802EC8B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802EC8B4: jr          $ra
    // 0x802EC8B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802EC8B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80295D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80295E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295E18: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80295E1C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80295E20: addiu       $a0, $zero, 0x7373
    ctx->r4 = ADD32(0, 0X7373);
    // 0x80295E24: beql        $v1, $zero, L_80295ED8
    if (ctx->r3 == 0) {
        // 0x80295E28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80295ED8;
    }
    goto skip_0;
    // 0x80295E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_80295E2C:
    // 0x80295E2C: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x80295E30: beq         $v0, $zero, L_80295E54
    if (ctx->r2 == 0) {
        // 0x80295E34: nop
    
            goto L_80295E54;
    }
    // 0x80295E34: nop

    // 0x80295E38: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x80295E3C: beq         $v1, $t6, L_80295E54
    if (ctx->r3 == ctx->r14) {
        // 0x80295E40: nop
    
            goto L_80295E54;
    }
    // 0x80295E40: nop

    // 0x80295E44: jal         0x802C65F4
    // 0x80295E48: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802C65F4(rdram, ctx);
        goto after_0;
    // 0x80295E48: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80295E4C: b           L_80295ED8
    // 0x80295E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295ED8;
    // 0x80295E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295E54:
    // 0x80295E54: beq         $v0, $zero, L_80295E80
    if (ctx->r2 == 0) {
        // 0x80295E58: nop
    
            goto L_80295E80;
    }
    // 0x80295E58: nop

    // 0x80295E5C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x80295E60: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x80295E64: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80295E68: beq         $t9, $v0, L_80295E80
    if (ctx->r25 == ctx->r2) {
        // 0x80295E6C: nop
    
            goto L_80295E80;
    }
    // 0x80295E6C: nop

    // 0x80295E70: jal         0x802C65F4
    // 0x80295E74: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802C65F4(rdram, ctx);
        goto after_1;
    // 0x80295E74: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x80295E78: b           L_80295ED8
    // 0x80295E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295ED8;
    // 0x80295E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295E80:
    // 0x80295E80: beql        $v0, $zero, L_80295EB4
    if (ctx->r2 == 0) {
        // 0x80295E84: lh          $t2, 0x0($v1)
        ctx->r10 = MEM_H(ctx->r3, 0X0);
            goto L_80295EB4;
    }
    goto skip_1;
    // 0x80295E84: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    skip_1:
    // 0x80295E88: lh          $t0, 0x2($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X2);
    // 0x80295E8C: beql        $t0, $zero, L_80295EB4
    if (ctx->r8 == 0) {
        // 0x80295E90: lh          $t2, 0x0($v1)
        ctx->r10 = MEM_H(ctx->r3, 0X0);
            goto L_80295EB4;
    }
    goto skip_2;
    // 0x80295E90: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    skip_2:
    // 0x80295E94: lh          $t1, 0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2);
    // 0x80295E98: beql        $t1, $zero, L_80295EB4
    if (ctx->r9 == 0) {
        // 0x80295E9C: lh          $t2, 0x0($v1)
        ctx->r10 = MEM_H(ctx->r3, 0X0);
            goto L_80295EB4;
    }
    goto skip_3;
    // 0x80295E9C: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    skip_3:
    // 0x80295EA0: jal         0x802C65F4
    // 0x80295EA4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802C65F4(rdram, ctx);
        goto after_2;
    // 0x80295EA4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80295EA8: b           L_80295ED8
    // 0x80295EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295ED8;
    // 0x80295EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80295EB0: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
L_80295EB4:
    // 0x80295EB4: beq         $a0, $t2, L_80295ECC
    if (ctx->r4 == ctx->r10) {
        // 0x80295EB8: nop
    
            goto L_80295ECC;
    }
    // 0x80295EB8: nop

    // 0x80295EBC: jal         0x802C65F4
    // 0x80295EC0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802C65F4(rdram, ctx);
        goto after_3;
    // 0x80295EC0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x80295EC4: b           L_80295ED8
    // 0x80295EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295ED8;
    // 0x80295EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295ECC:
    // 0x80295ECC: bne         $v0, $zero, L_80295E2C
    if (ctx->r2 != 0) {
        // 0x80295ED0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80295E2C;
    }
    // 0x80295ED0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80295ED4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295ED8:
    // 0x80295ED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80295EDC: jr          $ra
    // 0x80295EE0: nop

    return;
    // 0x80295EE0: nop

;}
RECOMP_FUNC void D_802EEF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EEFA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EEFA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EEFA8: beq         $a0, $zero, L_802EEFE4
    if (ctx->r4 == 0) {
        // 0x802EEFAC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EEFE4;
    }
    // 0x802EEFAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EEFB0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802EEFB4: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802EEFB8: sw          $t6, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r14;
    // 0x802EEFBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802EEFC0: jal         0x8031A684
    // 0x802EEFC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031A684(rdram, ctx);
        goto after_0;
    // 0x802EEFC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802EEFC8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802EEFCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EEFD0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802EEFD4: beql        $t8, $zero, L_802EEFE8
    if (ctx->r24 == 0) {
        // 0x802EEFD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EEFE8;
    }
    goto skip_0;
    // 0x802EEFD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EEFDC: jal         0x802C681C
    // 0x802EEFE0: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EEFE0: nop

    after_1:
L_802EEFE4:
    // 0x802EEFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EEFE8:
    // 0x802EEFE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EEFEC: jr          $ra
    // 0x802EEFF0: nop

    return;
    // 0x802EEFF0: nop

;}
RECOMP_FUNC void D_802CC320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CC3A0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x802CC3A4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802CC3A8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802CC3AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802CC3B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CC3B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CC3B8: lbu         $t6, 0x716C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X716C);
    // 0x802CC3BC: beql        $t6, $zero, L_802CC6A4
    if (ctx->r14 == 0) {
        // 0x802CC3C0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802CC6A4;
    }
    goto skip_0;
    // 0x802CC3C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x802CC3C4: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CC3C8: lwc1        $f4, 0x9C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x802CC3CC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802CC3D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CC3D4: mul.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802CC3D8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802CC3DC: nop

    // 0x802CC3E0: bc1fl       L_802CC3F4
    if (!c1cs) {
        // 0x802CC3E4: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802CC3F4;
    }
    goto skip_1;
    // 0x802CC3E4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_1:
    // 0x802CC3E8: b           L_802CC3F4
    // 0x802CC3EC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802CC3F4;
    // 0x802CC3EC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802CC3F0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802CC3F4:
    // 0x802CC3F4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CC3F8: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x802CC3FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802CC400: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802CC404: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802CC408: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CC40C: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802CC410: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x802CC414: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802CC418: mul.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x802CC41C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802CC420: nop

    // 0x802CC424: bc1fl       L_802CC438
    if (!c1cs) {
        // 0x802CC428: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802CC438;
    }
    goto skip_2;
    // 0x802CC428: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_2:
    // 0x802CC42C: b           L_802CC438
    // 0x802CC430: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802CC438;
    // 0x802CC430: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802CC434: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802CC438:
    // 0x802CC438: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CC43C: mul.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x802CC440: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x802CC444: nop

    // 0x802CC448: bc1fl       L_802CC480
    if (!c1cs) {
        // 0x802CC44C: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_802CC480;
    }
    goto skip_3;
    // 0x802CC44C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_3:
    // 0x802CC450: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802CC454: nop

    // 0x802CC458: bc1fl       L_802CC470
    if (!c1cs) {
        // 0x802CC45C: neg.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
            goto L_802CC470;
    }
    goto skip_4;
    // 0x802CC45C: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    skip_4:
    // 0x802CC460: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802CC464: b           L_802CC4A4
    // 0x802CC468: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
        goto L_802CC4A4;
    // 0x802CC468: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x802CC46C: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_802CC470:
    // 0x802CC470: mul.s       $f10, $f12, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x802CC474: b           L_802CC4A4
    // 0x802CC478: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
        goto L_802CC4A4;
    // 0x802CC478: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x802CC47C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_802CC480:
    // 0x802CC480: nop

    // 0x802CC484: bc1fl       L_802CC498
    if (!c1cs) {
        // 0x802CC488: neg.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
            goto L_802CC498;
    }
    goto skip_5;
    // 0x802CC488: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    skip_5:
    // 0x802CC48C: b           L_802CC498
    // 0x802CC490: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_802CC498;
    // 0x802CC490: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802CC494: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_802CC498:
    // 0x802CC498: mul.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x802CC49C: sub.s       $f2, $f4, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x802CC4A0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_802CC4A4:
    // 0x802CC4A4: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x802CC4A8: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
    // 0x802CC4AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CC4B0: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802CC4B4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CC4B8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802CC4BC: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x802CC4C0: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x802CC4C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802CC4C8: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802CC4CC: nop

    // 0x802CC4D0: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802CC4D4: jal         0x8022331C
    // 0x802CC4D8: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802CC4D8: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x802CC4DC: jal         0x802233EC
    // 0x802CC4E0: lui         $a0, 0xE0
    ctx->r4 = S32(0XE0 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_1;
    // 0x802CC4E0: lui         $a0, 0xE0
    ctx->r4 = S32(0XE0 << 16);
    after_1:
    // 0x802CC4E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CC4E8: jal         0x802FD1D8
    // 0x802CC4EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802FD1D8(rdram, ctx);
        goto after_2;
    // 0x802CC4EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802CC4F0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x802CC4F4: jal         0x80228DE0
    // 0x802CC4F8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x802CC4F8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_3:
    // 0x802CC4FC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802CC500: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802CC504: lwc1        $f8, 0x88($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802CC508: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CC50C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CC510: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802CC514: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802CC518: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x802CC51C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CC520: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802CC524: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802CC528: lwc1        $f8, 0x8C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802CC52C: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802CC530: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802CC534: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x802CC538: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802CC53C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802CC540: jal         0x8022A210
    // 0x802CC544: nop

    static_3_8022A210(rdram, ctx);
        goto after_4;
    // 0x802CC544: nop

    after_4:
    // 0x802CC548: jal         0x80223108
    // 0x802CC54C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    static_3_80223108(rdram, ctx);
        goto after_5;
    // 0x802CC54C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_5:
    // 0x802CC550: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802CC554: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802CC558: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802CC55C: lbu         $t7, 0x716D($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X716D);
    // 0x802CC560: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802CC564: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x802CC568: bgez        $t7, L_802CC57C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802CC56C: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802CC57C;
    }
    // 0x802CC56C: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802CC570: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CC574: nop

    // 0x802CC578: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_802CC57C:
    // 0x802CC57C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802CC580: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802CC584: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802CC588: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802CC58C: sub.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802CC590: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802CC594: nop

    // 0x802CC598: bc1fl       L_802CC5AC
    if (!c1cs) {
        // 0x802CC59C: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_802CC5AC;
    }
    goto skip_6;
    // 0x802CC59C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_6:
    // 0x802CC5A0: b           L_802CC5C4
    // 0x802CC5A4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802CC5C4;
    // 0x802CC5A4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802CC5A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_802CC5AC:
    // 0x802CC5AC: nop

    // 0x802CC5B0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802CC5B4: nop

    // 0x802CC5B8: bc1f        L_802CC5C4
    if (!c1cs) {
        // 0x802CC5BC: nop
    
            goto L_802CC5C4;
    }
    // 0x802CC5BC: nop

    // 0x802CC5C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802CC5C4:
    // 0x802CC5C4: jal         0x8021F4E4
    // 0x802CC5C8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    static_3_8021F4E4(rdram, ctx);
        goto after_6;
    // 0x802CC5C8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x802CC5CC: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802CC5D0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802CC5D4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x802CC5D8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x802CC5DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC5E0: addiu       $a3, $zero, -0x100
    ctx->r7 = ADD32(0, -0X100);
    // 0x802CC5E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CC5E8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x802CC5EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CC5F0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CC5F4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802CC5F8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802CC5FC: jal         0x8021F35C
    // 0x802CC600: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    static_3_8021F35C(rdram, ctx);
        goto after_7;
    // 0x802CC600: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_7:
    // 0x802CC604: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802CC608: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802CC60C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x802CC610: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC614: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x802CC618: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CC61C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CC620: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CC624: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802CC628: jal         0x8021F35C
    // 0x802CC62C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x802CC62C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_8:
    // 0x802CC630: addiu       $t9, $zero, 0x3E0
    ctx->r25 = ADD32(0, 0X3E0);
    // 0x802CC634: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802CC638: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802CC63C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CC640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC644: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x802CC648: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CC64C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CC650: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802CC654: jal         0x8021F35C
    // 0x802CC658: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802CC658: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_9:
    // 0x802CC65C: addiu       $t0, $zero, 0x3E0
    ctx->r8 = ADD32(0, 0X3E0);
    // 0x802CC660: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802CC664: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802CC668: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CC66C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC670: addiu       $a3, $zero, -0x100
    ctx->r7 = ADD32(0, -0X100);
    // 0x802CC674: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CC678: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CC67C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802CC680: jal         0x8021F35C
    // 0x802CC684: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802CC684: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_10:
    // 0x802CC688: jal         0x8021FCD0
    // 0x802CC68C: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_11;
    // 0x802CC68C: nop

    after_11:
    // 0x802CC690: jal         0x802230E4
    // 0x802CC694: nop

    static_3_802230E4(rdram, ctx);
        goto after_12;
    // 0x802CC694: nop

    after_12:
    // 0x802CC698: jal         0x8022337C
    // 0x802CC69C: nop

    static_3_8022337C(rdram, ctx);
        goto after_13;
    // 0x802CC69C: nop

    after_13:
    // 0x802CC6A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802CC6A4:
    // 0x802CC6A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802CC6A8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x802CC6AC: jr          $ra
    // 0x802CC6B0: nop

    return;
    // 0x802CC6B0: nop

;}
RECOMP_FUNC void D_80222A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222A90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80222A94: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80222A98: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80222A9C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80222AA0: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x80222AA4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80222AA8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80222AAC: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80222AB0: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x80222AB4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80222AB8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80222ABC: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80222AC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80222AC4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80222AC8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80222ACC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80222AD0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80222AD4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80222AD8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80222ADC: jal         0x80231C58
    // 0x80222AE0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80222AE0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_0:
    // 0x80222AE4: bne         $v0, $zero, L_80222B30
    if (ctx->r2 != 0) {
        // 0x80222AE8: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_80222B30;
    }
    // 0x80222AE8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80222AEC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80222AF0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80222AF4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80222AF8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80222AFC: jal         0x802228FC
    // 0x80222B00: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    static_3_802228FC(rdram, ctx);
        goto after_1;
    // 0x80222B00: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x80222B04: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80222B08: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80222B0C: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80222B10: lhu         $t2, 0x0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X0);
    // 0x80222B14: jal         0x80222B90
    // 0x80222B18: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    static_3_80222B90(rdram, ctx);
        goto after_2;
    // 0x80222B18: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    after_2:
    // 0x80222B1C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80222B20: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80222B24: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222B28: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80222B2C: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
L_80222B30:
    // 0x80222B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80222B34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80222B38: jr          $ra
    // 0x80222B3C: nop

    return;
    // 0x80222B3C: nop

;}
RECOMP_FUNC void D_802A04EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A056C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A0570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A0574: lh          $t7, 0x1A8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1A8);
    // 0x802A0578: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802A057C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A0580: sw          $zero, 0x19C($a0)
    MEM_W(0X19C, ctx->r4) = 0;
    // 0x802A0584: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    // 0x802A0588: bne         $t7, $at, L_802A05A0
    if (ctx->r15 != ctx->r1) {
        // 0x802A058C: sw          $a1, 0x1A4($a0)
        MEM_W(0X1A4, ctx->r4) = ctx->r5;
            goto L_802A05A0;
    }
    // 0x802A058C: sw          $a1, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r5;
    // 0x802A0590: beql        $a1, $zero, L_802A05A4
    if (ctx->r5 == 0) {
        // 0x802A0594: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A05A4;
    }
    goto skip_0;
    // 0x802A0594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A0598: jal         0x802D4098
    // 0x802A059C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    static_3_802D4098(rdram, ctx);
        goto after_0;
    // 0x802A059C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
L_802A05A0:
    // 0x802A05A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A05A4:
    // 0x802A05A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A05A8: jr          $ra
    // 0x802A05AC: nop

    return;
    // 0x802A05AC: nop

;}
RECOMP_FUNC void D_802E19EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1A6C: lw          $a3, 0x300($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X300);
    // 0x802E1A70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802E1A74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802E1A78: blez        $a3, L_802E1AB4
    if (SIGNED(ctx->r7) <= 0) {
        // 0x802E1A7C: lui         $at, 0xFF
        ctx->r1 = S32(0XFF << 16);
            goto L_802E1AB4;
    }
    // 0x802E1A7C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802E1A80: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802E1A84: and         $v0, $a1, $at
    ctx->r2 = ctx->r5 & ctx->r1;
    // 0x802E1A88: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
L_802E1A8C:
    // 0x802E1A8C: lw          $t6, 0x290($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X290);
    // 0x802E1A90: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802E1A94: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x802E1A98: bne         $v0, $t6, L_802E1AAC
    if (ctx->r2 != ctx->r14) {
        // 0x802E1A9C: nop
    
            goto L_802E1AAC;
    }
    // 0x802E1A9C: nop

    // 0x802E1AA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802E1AA4: b           L_802E1AB4
    // 0x802E1AA8: sw          $a1, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->r5;
        goto L_802E1AB4;
    // 0x802E1AA8: sw          $a1, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->r5;
L_802E1AAC:
    // 0x802E1AAC: bne         $at, $zero, L_802E1A8C
    if (ctx->r1 != 0) {
        // 0x802E1AB0: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_802E1A8C;
    }
    // 0x802E1AB0: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_802E1AB4:
    // 0x802E1AB4: bne         $v1, $zero, L_802E1AD8
    if (ctx->r3 != 0) {
        // 0x802E1AB8: lui         $at, 0xFF
        ctx->r1 = S32(0XFF << 16);
            goto L_802E1AD8;
    }
    // 0x802E1AB8: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802E1ABC: lw          $t8, 0x280($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X280);
    // 0x802E1AC0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802E1AC4: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x802E1AC8: bne         $t7, $t8, L_802E1AD8
    if (ctx->r15 != ctx->r24) {
        // 0x802E1ACC: nop
    
            goto L_802E1AD8;
    }
    // 0x802E1ACC: nop

    // 0x802E1AD0: sw          $a1, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->r5;
    // 0x802E1AD4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802E1AD8:
    // 0x802E1AD8: bne         $v1, $zero, L_802E1B28
    if (ctx->r3 != 0) {
        // 0x802E1ADC: nop
    
            goto L_802E1B28;
    }
    // 0x802E1ADC: nop

    // 0x802E1AE0: lw          $a3, 0x370($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X370);
    // 0x802E1AE4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802E1AE8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802E1AEC: blez        $a3, L_802E1B28
    if (SIGNED(ctx->r7) <= 0) {
        // 0x802E1AF0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802E1B28;
    }
    // 0x802E1AF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802E1AF4: and         $v0, $a1, $at
    ctx->r2 = ctx->r5 & ctx->r1;
    // 0x802E1AF8: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
L_802E1AFC:
    // 0x802E1AFC: lw          $t9, 0x304($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X304);
    // 0x802E1B00: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802E1B04: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x802E1B08: bne         $v0, $t9, L_802E1B20
    if (ctx->r2 != ctx->r25) {
        // 0x802E1B0C: nop
    
            goto L_802E1B20;
    }
    // 0x802E1B0C: nop

    // 0x802E1B10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802E1B14: sw          $a1, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->r5;
    // 0x802E1B18: jr          $ra
    // 0x802E1B1C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x802E1B1C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_802E1B20:
    // 0x802E1B20: bne         $at, $zero, L_802E1AFC
    if (ctx->r1 != 0) {
        // 0x802E1B24: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_802E1AFC;
    }
    // 0x802E1B24: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_802E1B28:
    // 0x802E1B28: jr          $ra
    // 0x802E1B2C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x802E1B2C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void D_802D1564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D15E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D15E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D15EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802D15F0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802D15F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802D15F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D15FC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D1600: jal         0x80201388
    // 0x802D1604: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    static_3_80201388(rdram, ctx);
        goto after_0;
    // 0x802D1604: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x802D1608: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x802D160C: bne         $v1, $v0, L_802D1658
    if (ctx->r3 != ctx->r2) {
        // 0x802D1610: andi        $s0, $v0, 0xFF
        ctx->r16 = ctx->r2 & 0XFF;
            goto L_802D1658;
    }
    // 0x802D1610: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x802D1614: lbu         $v0, 0x2020($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2020);
    // 0x802D1618: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x802D161C: bne         $v1, $v0, L_802D162C
    if (ctx->r3 != ctx->r2) {
        // 0x802D1620: sll         $t6, $v0, 5
        ctx->r14 = S32(ctx->r2 << 5);
            goto L_802D162C;
    }
    // 0x802D1620: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x802D1624: b           L_802D16BC
    // 0x802D1628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D16BC;
    // 0x802D1628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D162C:
    // 0x802D162C: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x802D1630: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x802D1634: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D1638: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x802D163C: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802D1640: bne         $at, $zero, L_802D1658
    if (ctx->r1 != 0) {
        // 0x802D1644: nop
    
            goto L_802D1658;
    }
    // 0x802D1644: nop

    // 0x802D1648: jal         0x80231A24
    // 0x802D164C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802D164C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x802D1650: b           L_802D16BC
    // 0x802D1654: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D16BC;
    // 0x802D1654: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D1658:
    // 0x802D1658: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802D165C: jal         0x80301CA0
    // 0x802D1660: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80301CA0(rdram, ctx);
        goto after_2;
    // 0x802D1660: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x802D1664: jal         0x80207130
    // 0x802D1668: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_3;
    // 0x802D1668: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802D166C: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x802D1670: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802D1674: sll         $t0, $s0, 5
    ctx->r8 = S32(ctx->r16 << 5);
    // 0x802D1678: addu        $v1, $s1, $t0
    ctx->r3 = ADD32(ctx->r17, ctx->r8);
    // 0x802D167C: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x802D1680: sh          $a1, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r5;
    // 0x802D1684: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x802D1688: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802D168C: sw          $t1, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r9;
    // 0x802D1690: jal         0x80302DC8
    // 0x802D1694: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    static_3_80302DC8(rdram, ctx);
        goto after_4;
    // 0x802D1694: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_4:
    // 0x802D1698: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802D169C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802D16A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802D16A4: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x802D16A8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x802D16AC: sw          $t2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r10;
    // 0x802D16B0: sb          $s0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r16;
    // 0x802D16B4: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802D16B8: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
L_802D16BC:
    // 0x802D16BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D16C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802D16C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802D16C8: jr          $ra
    // 0x802D16CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802D16CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802A3768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A37E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A37EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A37F0: beq         $a0, $zero, L_802A382C
    if (ctx->r4 == 0) {
        // 0x802A37F4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802A382C;
    }
    // 0x802A37F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A37F8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A37FC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A3800: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A3804: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A3808: jal         0x802D1A34
    // 0x802A380C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D1A34(rdram, ctx);
        goto after_0;
    // 0x802A380C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A3810: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A3814: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A3818: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A381C: beql        $t8, $zero, L_802A3830
    if (ctx->r24 == 0) {
        // 0x802A3820: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A3830;
    }
    goto skip_0;
    // 0x802A3820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A3824: jal         0x802C681C
    // 0x802A3828: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802A3828: nop

    after_1:
L_802A382C:
    // 0x802A382C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A3830:
    // 0x802A3830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A3834: jr          $ra
    // 0x802A3838: nop

    return;
    // 0x802A3838: nop

;}
RECOMP_FUNC void D_8027F05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F0D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027F0D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8027F0DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8027F0E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027F0E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027F0E8: jal         0x80205AA0
    // 0x8027F0EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80205AA0(rdram, ctx);
        goto after_0;
    // 0x8027F0EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8027F0F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8027F0F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027F0F8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027F0FC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027F100: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027F104: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027F108: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8027F10C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027F110: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027F114: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8027F118: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027F11C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027F120: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8027F124: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8027F128: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027F12C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8027F130: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027F134: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8027F138: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027F13C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8027F140: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x8027F144: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8027F148: jal         0x80205C7C
    // 0x8027F14C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_80205C7C(rdram, ctx);
        goto after_1;
    // 0x8027F14C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8027F150: addiu       $t6, $zero, 0xE0
    ctx->r14 = ADD32(0, 0XE0);
    // 0x8027F154: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8027F158: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027F15C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8027F160: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
    // 0x8027F164: jal         0x80205D70
    // 0x8027F168: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    static_3_80205D70(rdram, ctx);
        goto after_2;
    // 0x8027F168: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x8027F16C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027F170: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027F174: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027F178: jal         0x80205B0C
    // 0x8027F17C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80205B0C(rdram, ctx);
        goto after_3;
    // 0x8027F17C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8027F180: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027F184: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027F188: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027F18C: jal         0x80205B0C
    // 0x8027F190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80205B0C(rdram, ctx);
        goto after_4;
    // 0x8027F190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8027F194: jal         0x8022970C
    // 0x8027F198: addiu       $a0, $s0, 0x7174
    ctx->r4 = ADD32(ctx->r16, 0X7174);
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x8027F198: addiu       $a0, $s0, 0x7174
    ctx->r4 = ADD32(ctx->r16, 0X7174);
    after_5:
    // 0x8027F19C: addiu       $t7, $zero, 0x120
    ctx->r15 = ADD32(0, 0X120);
    // 0x8027F1A0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8027F1A4: addiu       $t8, $zero, 0xD0
    ctx->r24 = ADD32(0, 0XD0);
    // 0x8027F1A8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8027F1AC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8027F1B0: lui         $at, 0x4390
    ctx->r1 = S32(0X4390 << 16);
    // 0x8027F1B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8027F1B8: lui         $at, 0x4350
    ctx->r1 = S32(0X4350 << 16);
    // 0x8027F1BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8027F1C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8027F1C4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027F1C8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027F1CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8027F1D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027F1D4: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8027F1D8: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8027F1DC: swc1        $f4, 0x71B4($s0)
    MEM_W(0X71B4, ctx->r16) = ctx->f4.u32l;
    // 0x8027F1E0: jal         0x80205B0C
    // 0x8027F1E4: swc1        $f16, 0x71B8($s0)
    MEM_W(0X71B8, ctx->r16) = ctx->f16.u32l;
    static_3_80205B0C(rdram, ctx);
        goto after_6;
    // 0x8027F1E4: swc1        $f16, 0x71B8($s0)
    MEM_W(0X71B8, ctx->r16) = ctx->f16.u32l;
    after_6:
    // 0x8027F1E8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8027F1EC: sw          $t9, 0x65B4($s0)
    MEM_W(0X65B4, ctx->r16) = ctx->r25;
    // 0x8027F1F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027F1F4: jal         0x802AEE54
    // 0x8027F1F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802AEE54(rdram, ctx);
        goto after_7;
    // 0x8027F1F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x8027F1FC: jal         0x80317E10
    // 0x8027F200: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_8;
    // 0x8027F200: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x8027F204: beq         $v0, $zero, L_8027F22C
    if (ctx->r2 == 0) {
        // 0x8027F208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027F22C;
    }
    // 0x8027F208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027F20C: jal         0x802AEE54
    // 0x8027F210: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802AEE54(rdram, ctx);
        goto after_9;
    // 0x8027F210: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x8027F214: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x8027F218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027F21C: lw          $t9, 0xAC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XAC);
    // 0x8027F220: lh          $t0, 0xA8($v1)
    ctx->r8 = MEM_H(ctx->r3, 0XA8);
    // 0x8027F224: jalr        $t9
    // 0x8027F228: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x8027F228: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    after_10:
L_8027F22C:
    // 0x8027F22C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027F230: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8027F234: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027F238: jr          $ra
    // 0x8027F23C: nop

    return;
    // 0x8027F23C: nop

;}
RECOMP_FUNC void func_802AA8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA924: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AA928: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802AA92C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AA930: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA934: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802AA938: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x802AA93C: jal         0x8021ACB0
    // 0x802AA940: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AA940: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    after_0:
    // 0x802AA944: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AA948: jal         0x8021B838
    // 0x802AA94C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AA94C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AA950: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AA954: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AA958: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AA95C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AA960: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x802AA964: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AA968: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AA96C: lh          $t7, 0xB8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB8);
    // 0x802AA970: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802AA974: jalr        $t9
    // 0x802AA978: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AA978: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_2:
    // 0x802AA97C: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AA980: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x802AA984: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802AA988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AA98C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AA990: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AA994: jal         0x80317194
    // 0x802AA998: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_3;
    // 0x802AA998: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_3:
    // 0x802AA99C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802AA9A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AA9A4: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AA9A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AA9AC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802AA9B0: jal         0x802D51DC
    // 0x802AA9B4: nop

    static_3_802D51DC(rdram, ctx);
        goto after_4;
    // 0x802AA9B4: nop

    after_4:
    // 0x802AA9B8: addiu       $s1, $s0, 0x1070
    ctx->r17 = ADD32(ctx->r16, 0X1070);
    // 0x802AA9BC: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AA9C0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802AA9C4: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x802AA9C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802AA9CC: jal         0x802C4A20
    // 0x802AA9D0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    static_3_802C4A20(rdram, ctx);
        goto after_5;
    // 0x802AA9D0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_5:
    // 0x802AA9D4: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x802AA9D8: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802AA9DC: jal         0x802C5824
    // 0x802AA9E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802C5824(rdram, ctx);
        goto after_6;
    // 0x802AA9E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x802AA9E4: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x802AA9E8: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802AA9EC: jal         0x802C5818
    // 0x802AA9F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802C5818(rdram, ctx);
        goto after_7;
    // 0x802AA9F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x802AA9F4: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x802AA9F8: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802AA9FC: jal         0x802C580C
    // 0x802AAA00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802C580C(rdram, ctx);
        goto after_8;
    // 0x802AAA00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x802AAA04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802AAA08: jal         0x802C5830
    // 0x802AAA0C: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    static_3_802C5830(rdram, ctx);
        goto after_9;
    // 0x802AAA0C: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    after_9:
    // 0x802AAA10: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AAA14: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x802AAA18: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAA1C: jal         0x802C4A20
    // 0x802AAA20: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802AAA20: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802AAA24: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802AAA28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AAA2C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802AAA30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AAA34: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802AAA38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AAA3C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AAA40: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AAA44: sw          $zero, 0x664($s0)
    MEM_W(0X664, ctx->r16) = 0;
    // 0x802AAA48: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AAA4C: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x802AAA50: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x802AAA54: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    // 0x802AAA58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AAA5C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802AAA60: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802AAA64: jr          $ra
    // 0x802AAA68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802AAA68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802DE0C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DE144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DE148: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DE14C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DE150: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802DE154: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802DE158: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DE15C: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
    // 0x802DE160: lw          $t7, 0x1C30($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C30);
    // 0x802DE164: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DE168: addiu       $a1, $s0, 0x1C00
    ctx->r5 = ADD32(ctx->r16, 0X1C00);
    // 0x802DE16C: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DE170: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802DE174: jal         0x80302414
    // 0x802DE178: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_0;
    // 0x802DE178: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802DE17C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE180: addiu       $a1, $s0, 0x1C08
    ctx->r5 = ADD32(ctx->r16, 0X1C08);
    // 0x802DE184: jal         0x80302414
    // 0x802DE188: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_1;
    // 0x802DE188: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802DE18C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE190: addiu       $a1, $s0, 0x1C10
    ctx->r5 = ADD32(ctx->r16, 0X1C10);
    // 0x802DE194: jal         0x80302414
    // 0x802DE198: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_2;
    // 0x802DE198: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802DE19C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE1A0: addiu       $a1, $s0, 0x1C18
    ctx->r5 = ADD32(ctx->r16, 0X1C18);
    // 0x802DE1A4: jal         0x80302414
    // 0x802DE1A8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_3;
    // 0x802DE1A8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802DE1AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DE1B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DE1B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802DE1B8: jr          $ra
    // 0x802DE1BC: nop

    return;
    // 0x802DE1BC: nop

;}
RECOMP_FUNC void D_802CED50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CEDD0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802CEDD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802CEDD8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802CEDDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CEDE0: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x802CEDE4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802CEDE8: beq         $a2, $zero, L_802CEE04
    if (ctx->r6 == 0) {
        // 0x802CEDEC: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_802CEE04;
    }
    // 0x802CEDEC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802CEDF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CEDF4: beq         $a2, $at, L_802CEE90
    if (ctx->r6 == ctx->r1) {
        // 0x802CEDF8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802CEE90;
    }
    // 0x802CEDF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CEDFC: b           L_802CEEA0
    // 0x802CEE00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802CEEA0;
    // 0x802CEE00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802CEE04:
    // 0x802CEE04: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802CEE08: sb          $t6, 0x410($a3)
    MEM_B(0X410, ctx->r7) = ctx->r14;
    // 0x802CEE0C: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    // 0x802CEE10: jal         0x802902DC
    // 0x802CEE14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802902DC(rdram, ctx);
        goto after_0;
    // 0x802CEE14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x802CEE18: jal         0x802FA254
    // 0x802CEE1C: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    static_3_802FA254(rdram, ctx);
        goto after_1;
    // 0x802CEE1C: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    after_1:
    // 0x802CEE20: jal         0x8022970C
    // 0x802CEE24: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802CEE24: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x802CEE28: lui         $a1, 0x3FAF
    ctx->r5 = S32(0X3FAF << 16);
    // 0x802CEE2C: lui         $a2, 0x448E
    ctx->r6 = S32(0X448E << 16);
    // 0x802CEE30: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802CEE34: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x802CEE38: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x802CEE3C: jal         0x8022A0D0
    // 0x802CEE40: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_3;
    // 0x802CEE40: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    after_3:
    // 0x802CEE44: lui         $a1, 0x3F8B
    ctx->r5 = S32(0X3F8B << 16);
    // 0x802CEE48: ori         $a1, $a1, 0x1161
    ctx->r5 = ctx->r5 | 0X1161;
    // 0x802CEE4C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x802CEE50: jal         0x802D01D4
    // 0x802CEE54: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x802CEE54: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_4:
    // 0x802CEE58: lui         $a1, 0xBDDE
    ctx->r5 = S32(0XBDDE << 16);
    // 0x802CEE5C: ori         $a1, $a1, 0xAFF6
    ctx->r5 = ctx->r5 | 0XAFF6;
    // 0x802CEE60: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x802CEE64: jal         0x802D01D4
    // 0x802CEE68: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802CEE68: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_5:
    // 0x802CEE6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CEE70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CEE74: jal         0x802B0024
    // 0x802CEE78: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    static_3_802B0024(rdram, ctx);
        goto after_6;
    // 0x802CEE78: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x802CEE7C: addiu       $a0, $s0, 0x6D0
    ctx->r4 = ADD32(ctx->r16, 0X6D0);
    // 0x802CEE80: jal         0x802F7220
    // 0x802CEE84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802F7220(rdram, ctx);
        goto after_7;
    // 0x802CEE84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x802CEE88: b           L_802CEEA0
    // 0x802CEE8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802CEEA0;
    // 0x802CEE8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802CEE90:
    // 0x802CEE90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CEE94: jal         0x80309B88
    // 0x802CEE98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309B88(rdram, ctx);
        goto after_8;
    // 0x802CEE98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x802CEE9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802CEEA0:
    // 0x802CEEA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802CEEA4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x802CEEA8: jr          $ra
    // 0x802CEEAC: nop

    return;
    // 0x802CEEAC: nop

;}
RECOMP_FUNC void D_802C9DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9E40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802C9E44: lb          $t7, 0xC($a0)
    ctx->r15 = MEM_B(ctx->r4, 0XC);
    // 0x802C9E48: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x802C9E4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802C9E50: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802C9E54: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802C9E58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802C9E5C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802C9E60: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802C9E64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802C9E68: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802C9E6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802C9E70: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x802C9E74: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802C9E78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802C9E7C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x802C9E80: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
    // 0x802C9E84: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x802C9E88: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802C9E8C: bne         $v0, $at, L_802C9EA4
    if (ctx->r2 != ctx->r1) {
        // 0x802C9E90: swc1        $f6, 0x84($a0)
        MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
            goto L_802C9EA4;
    }
    // 0x802C9E90: swc1        $f6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
    // 0x802C9E94: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C9E98: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802C9E9C: b           L_802C9EB8
    // 0x802C9EA0: swc1        $f8, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f8.u32l;
        goto L_802C9EB8;
    // 0x802C9EA0: swc1        $f8, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f8.u32l;
L_802C9EA4:
    // 0x802C9EA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802C9EA8: bne         $v0, $at, L_802C9EB8
    if (ctx->r2 != ctx->r1) {
        // 0x802C9EAC: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802C9EB8;
    }
    // 0x802C9EAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C9EB0: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802C9EB4: swc1        $f16, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f16.u32l;
L_802C9EB8:
    // 0x802C9EB8: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x802C9EBC: lwc1        $f18, 0x58($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X58);
    // 0x802C9EC0: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x802C9EC4: lwc1        $f8, 0x5C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x802C9EC8: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x802C9ECC: lwc1        $f18, 0x60($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X60);
    // 0x802C9ED0: lwc1        $f10, 0x88($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X88);
    // 0x802C9ED4: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802C9ED8: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
    // 0x802C9EDC: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x802C9EE0: swc1        $f16, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f16.u32l;
    // 0x802C9EE4: jr          $ra
    // 0x802C9EE8: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802C9EE8: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_80220954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80220954: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80220958: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8022095C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220960: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80220964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80220968: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8022096C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80220970: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80220974: lui         $t8, 0x2
    ctx->r24 = S32(0X2 << 16);
    // 0x80220978: ori         $t8, $t8, 0x2000
    ctx->r24 = ctx->r24 | 0X2000;
    // 0x8022097C: lui         $t7, 0xB600
    ctx->r15 = S32(0XB600 << 16);
    // 0x80220980: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80220984: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80220988: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022098C: addiu       $t7, $zero, 0x1005
    ctx->r15 = ADD32(0, 0X1005);
    // 0x80220990: lui         $t6, 0xB700
    ctx->r14 = S32(0XB700 << 16);
    // 0x80220994: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220998: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022099C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802209A0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x802209A4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802209A8: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
    // 0x802209AC: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x802209B0: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x802209B4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802209B8: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x802209BC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802209C0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802209C4: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x802209C8: lui         $t7, 0x10
    ctx->r15 = S32(0X10 << 16);
    // 0x802209CC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802209D0: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802209D4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802209D8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x802209DC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802209E0: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x802209E4: ori         $t9, $t9, 0x1001
    ctx->r25 = ctx->r25 | 0X1001;
    // 0x802209E8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x802209EC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802209F0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802209F4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802209F8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802209FC: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x80220A00: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x80220A04: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80220A08: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80220A0C: addiu       $t8, $zero, -0x3C8
    ctx->r24 = ADD32(0, -0X3C8);
    // 0x80220A10: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80220A14: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80220A18: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220A1C: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80220A20: lui         $t8, 0xC18
    ctx->r24 = S32(0XC18 << 16);
    // 0x80220A24: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220A28: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80220A2C: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x80220A30: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80220A34: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220A38: ori         $t8, $t8, 0x4A50
    ctx->r24 = ctx->r24 | 0X4A50;
    // 0x80220A3C: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80220A40: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80220A44: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80220A48: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80220A4C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80220A50: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220A54: lui         $t6, 0xFF10
    ctx->r14 = S32(0XFF10 << 16);
    // 0x80220A58: ori         $t6, $t6, 0x13F
    ctx->r14 = ctx->r14 | 0X13F;
    // 0x80220A5C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220A60: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80220A64: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80220A68: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80220A6C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80220A70: jal         0x802375F0
    // 0x80220A74: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x80220A74: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x80220A78: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80220A7C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80220A80: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80220A84: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x80220A88: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220A8C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80220A90: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80220A94: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80220A98: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80220A9C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80220AA0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80220AA4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80220AA8: lw          $t6, 0xC($t9)
    ctx->r14 = MEM_W(ctx->r25, 0XC);
    // 0x80220AAC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80220AB0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220AB4: lui         $t6, 0xFF10
    ctx->r14 = S32(0XFF10 << 16);
    // 0x80220AB8: ori         $t6, $t6, 0x13F
    ctx->r14 = ctx->r14 | 0X13F;
    // 0x80220ABC: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80220AC0: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80220AC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80220AC8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80220ACC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220AD0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220AD4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80220AD8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80220ADC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80220AE0: jal         0x802375F0
    // 0x80220AE4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x80220AE4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80220AE8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80220AEC: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80220AF0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80220AF4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80220AF8: sw          $v0, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r2;
    // 0x80220AFC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220B00: lui         $t8, 0xFCFF
    ctx->r24 = S32(0XFCFF << 16);
    // 0x80220B04: lui         $t9, 0xFFFE
    ctx->r25 = S32(0XFFFE << 16);
    // 0x80220B08: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80220B0C: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80220B10: ori         $t9, $t9, 0x7838
    ctx->r25 = ctx->r25 | 0X7838;
    // 0x80220B14: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x80220B18: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80220B1C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80220B20: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220B24: lui         $t8, 0xC18
    ctx->r24 = S32(0XC18 << 16);
    // 0x80220B28: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80220B2C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80220B30: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80220B34: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80220B38: ori         $t8, $t8, 0x4A50
    ctx->r24 = ctx->r24 | 0X4A50;
    // 0x80220B3C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80220B40: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80220B44: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220B48: addiu       $t7, $zero, 0x1000
    ctx->r15 = ADD32(0, 0X1000);
    // 0x80220B4C: lui         $t6, 0xB600
    ctx->r14 = S32(0XB600 << 16);
    // 0x80220B50: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220B54: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80220B58: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80220B5C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80220B60: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220B64: addiu       $t6, $zero, 0x2000
    ctx->r14 = ADD32(0, 0X2000);
    // 0x80220B68: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x80220B6C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80220B70: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80220B74: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80220B78: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80220B7C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220B80: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80220B84: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80220B88: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80220B8C: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80220B90: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80220B94: lw          $t9, 0xC($t5)
    ctx->r25 = MEM_W(ctx->r13, 0XC);
    // 0x80220B98: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80220B9C: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80220BA0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80220BA4: lhu         $t2, 0x0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X0);
    // 0x80220BA8: lh          $t9, 0x4($t5)
    ctx->r25 = MEM_H(ctx->r13, 0X4);
    // 0x80220BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80220BB0: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80220BB4: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x80220BB8: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x80220BBC: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x80220BC0: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80220BC4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80220BC8: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80220BCC: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80220BD0: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80220BD4: lh          $t6, 0x6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X6);
    // 0x80220BD8: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x80220BDC: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x80220BE0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80220BE4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80220BE8: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80220BEC: jr          $ra
    // 0x80220BF0: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    return;
    // 0x80220BF0: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
;}
RECOMP_FUNC void D_8027A954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A9CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A9D0: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A9D4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A9D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027A9DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027A9E0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027A9E4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8027A9E8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A9EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A9F0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x8027A9F4: addiu       $a1, $t6, 0x6674
    ctx->r5 = ADD32(ctx->r14, 0X6674);
    // 0x8027A9F8: addiu       $a0, $a0, 0x664C
    ctx->r4 = ADD32(ctx->r4, 0X664C);
    // 0x8027A9FC: jal         0x802A3560
    // 0x8027AA00: addiu       $a3, $t6, 0x6675
    ctx->r7 = ADD32(ctx->r14, 0X6675);
    static_3_802A3560(rdram, ctx);
        goto after_0;
    // 0x8027AA00: addiu       $a3, $t6, 0x6675
    ctx->r7 = ADD32(ctx->r14, 0X6675);
    after_0:
    // 0x8027AA04: beq         $v0, $zero, L_8027AA28
    if (ctx->r2 == 0) {
        // 0x8027AA08: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027AA28;
    }
    // 0x8027AA08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027AA0C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027AA10: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8027AA14: jal         0x802D72D8
    // 0x8027AA18: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_802D72D8(rdram, ctx);
        goto after_1;
    // 0x8027AA18: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027AA1C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027AA20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027AA24: sb          $t8, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r24;
L_8027AA28:
    // 0x8027AA28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027AA2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027AA30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8027AA34: jr          $ra
    // 0x8027AA38: nop

    return;
    // 0x8027AA38: nop

;}
RECOMP_FUNC void D_80246560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246568: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8024656C: jal         0x8024A710
    // 0x80246570: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_8024A710(rdram, ctx);
        goto after_0;
    // 0x80246570: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80246574: beq         $v0, $zero, L_80246584
    if (ctx->r2 == 0) {
        // 0x80246578: nop
    
            goto L_80246584;
    }
    // 0x80246578: nop

    // 0x8024657C: b           L_802465FC
    // 0x80246580: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802465FC;
    // 0x80246580: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80246584:
    // 0x80246584: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80246588: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024658C: bne         $t6, $at, L_802465A0
    if (ctx->r14 != ctx->r1) {
        // 0x80246590: nop
    
            goto L_802465A0;
    }
    // 0x80246590: nop

    // 0x80246594: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80246598: jal         0x8023CE80
    // 0x8024659C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8023CE80(rdram, ctx);
        goto after_1;
    // 0x8024659C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
L_802465A0:
    // 0x802465A0: jal         0x802375F0
    // 0x802465A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x802465A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x802465A8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802465AC: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x802465B0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x802465B4: bne         $t8, $zero, L_802465D0
    if (ctx->r24 != 0) {
        // 0x802465B8: nop
    
            goto L_802465D0;
    }
    // 0x802465B8: nop

    // 0x802465BC: lui         $t9, 0x1FC0
    ctx->r25 = S32(0X1FC0 << 16);
    // 0x802465C0: ori         $t9, $t9, 0x7C0
    ctx->r25 = ctx->r25 | 0X7C0;
    // 0x802465C4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802465C8: b           L_802465E0
    // 0x802465CC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
        goto L_802465E0;
    // 0x802465CC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
L_802465D0:
    // 0x802465D0: lui         $t1, 0x1FC0
    ctx->r9 = S32(0X1FC0 << 16);
    // 0x802465D4: ori         $t1, $t1, 0x7C0
    ctx->r9 = ctx->r9 | 0X7C0;
    // 0x802465D8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802465DC: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_802465E0:
    // 0x802465E0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x802465E4: bne         $t3, $zero, L_802465F8
    if (ctx->r11 != 0) {
        // 0x802465E8: nop
    
            goto L_802465F8;
    }
    // 0x802465E8: nop

    // 0x802465EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802465F0: jal         0x8023F020
    // 0x802465F4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8023F020(rdram, ctx);
        goto after_3;
    // 0x802465F4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_3:
L_802465F8:
    // 0x802465F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802465FC:
    // 0x802465FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80246604: jr          $ra
    // 0x80246608: nop

    return;
    // 0x80246608: nop

;}
RECOMP_FUNC void D_8029DC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DD00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029DD04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029DD08: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029DD0C: jal         0x802AD148
    // 0x8029DD10: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AD148(rdram, ctx);
        goto after_0;
    // 0x8029DD10: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8029DD14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029DD18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029DD1C: jr          $ra
    // 0x8029DD20: nop

    return;
    // 0x8029DD20: nop

;}
RECOMP_FUNC void D_802CE688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CE708: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802CE70C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CE710: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802CE714: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CE718: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802CE71C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802CE720: jal         0x802FD6D4
    // 0x802CE724: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    static_3_802FD6D4(rdram, ctx);
        goto after_0;
    // 0x802CE724: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x802CE728: jal         0x802FD7A8
    // 0x802CE72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802FD7A8(rdram, ctx);
        goto after_1;
    // 0x802CE72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802CE730: jal         0x802FDCBC
    // 0x802CE734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802FDCBC(rdram, ctx);
        goto after_2;
    // 0x802CE734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802CE738: jal         0x802FD740
    // 0x802CE73C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802FD740(rdram, ctx);
        goto after_3;
    // 0x802CE73C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802CE740: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x802CE744: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CE748: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802CE74C: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802CE750: lh          $t6, 0xB0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XB0);
    // 0x802CE754: jalr        $t9
    // 0x802CE758: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802CE758: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_4:
    // 0x802CE75C: lui         $a1, 0x44F3
    ctx->r5 = S32(0X44F3 << 16);
    // 0x802CE760: lui         $a2, 0xC4F3
    ctx->r6 = S32(0XC4F3 << 16);
    // 0x802CE764: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CE768: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x802CE76C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802CE770: jal         0x80318E04
    // 0x802CE774: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_5;
    // 0x802CE774: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_5:
    // 0x802CE778: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802CE77C: jal         0x80318C9C
    // 0x802CE780: lui         $a1, 0x425C
    ctx->r5 = S32(0X425C << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_6;
    // 0x802CE780: lui         $a1, 0x425C
    ctx->r5 = S32(0X425C << 16);
    after_6:
    // 0x802CE784: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802CE788: jal         0x802AEDEC
    // 0x802CE78C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_7;
    // 0x802CE78C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x802CE790: lw          $t7, 0x78($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X78);
    // 0x802CE794: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x802CE798: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CE79C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802CE7A0: jal         0x802BCF20
    // 0x802CE7A4: sw          $t8, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r24;
    static_3_802BCF20(rdram, ctx);
        goto after_8;
    // 0x802CE7A4: sw          $t8, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r24;
    after_8:
    // 0x802CE7A8: jal         0x80309B18
    // 0x802CE7AC: nop

    static_3_80309B18(rdram, ctx);
        goto after_9;
    // 0x802CE7AC: nop

    after_9:
    // 0x802CE7B0: jal         0x803099E4
    // 0x802CE7B4: nop

    static_3_803099E4(rdram, ctx);
        goto after_10;
    // 0x802CE7B4: nop

    after_10:
    // 0x802CE7B8: jal         0x802AAE00
    // 0x802CE7BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_802AAE00(rdram, ctx);
        goto after_11;
    // 0x802CE7BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_11:
    // 0x802CE7C0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x802CE7C4: lui         $a1, 0xC348
    ctx->r5 = S32(0XC348 << 16);
    // 0x802CE7C8: lui         $a2, 0xC387
    ctx->r6 = S32(0XC387 << 16);
    // 0x802CE7CC: jal         0x80212E24
    // 0x802CE7D0: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    static_3_80212E24(rdram, ctx);
        goto after_12;
    // 0x802CE7D0: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_12:
    // 0x802CE7D4: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x802CE7D8: sw          $v0, 0x1B31($at)
    MEM_W(0X1B31, ctx->r1) = ctx->r2;
    // 0x802CE7DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CE7E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CE7E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802CE7E8: jal         0x8022FBDC
    // 0x802CE7EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_13;
    // 0x802CE7EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x802CE7F0: addiu       $a0, $s0, 0x7FFF
    ctx->r4 = ADD32(ctx->r16, 0X7FFF);
    // 0x802CE7F4: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CE7F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CE7FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802CE800: jal         0x8022FBDC
    // 0x802CE804: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_14;
    // 0x802CE804: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x802CE808: addiu       $a0, $s0, 0x7FFF
    ctx->r4 = ADD32(ctx->r16, 0X7FFF);
    // 0x802CE80C: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CE810: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CE814: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802CE818: jal         0x8022FBDC
    // 0x802CE81C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_15;
    // 0x802CE81C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x802CE820: addiu       $a0, $s0, 0x7FFF
    ctx->r4 = ADD32(ctx->r16, 0X7FFF);
    // 0x802CE824: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CE828: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CE82C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x802CE830: jal         0x8022FBDC
    // 0x802CE834: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_16;
    // 0x802CE834: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x802CE838: addiu       $a0, $s0, 0x7FFF
    ctx->r4 = ADD32(ctx->r16, 0X7FFF);
    // 0x802CE83C: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CE840: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CE844: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802CE848: jal         0x8022FBDC
    // 0x802CE84C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_17;
    // 0x802CE84C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x802CE850: addiu       $a0, $s0, 0x7FFF
    ctx->r4 = ADD32(ctx->r16, 0X7FFF);
    // 0x802CE854: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CE858: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CE85C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802CE860: jal         0x8022FBDC
    // 0x802CE864: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_18;
    // 0x802CE864: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x802CE868: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x802CE86C: addu        $v0, $s0, $v1
    ctx->r2 = ADD32(ctx->r16, ctx->r3);
    // 0x802CE870: ori         $at, $zero, 0x8740
    ctx->r1 = 0 | 0X8740;
    // 0x802CE874: addiu       $t0, $s0, 0x6684
    ctx->r8 = ADD32(ctx->r16, 0X6684);
    // 0x802CE878: addiu       $t1, $s0, 0x17F4
    ctx->r9 = ADD32(ctx->r16, 0X17F4);
    // 0x802CE87C: addu        $t2, $s0, $at
    ctx->r10 = ADD32(ctx->r16, ctx->r1);
    // 0x802CE880: addiu       $t3, $s0, 0x739C
    ctx->r11 = ADD32(ctx->r16, 0X739C);
    // 0x802CE884: sw          $t0, 0x1B0C($v0)
    MEM_W(0X1B0C, ctx->r2) = ctx->r8;
    // 0x802CE888: sw          $t1, 0x1B10($v0)
    MEM_W(0X1B10, ctx->r2) = ctx->r9;
    // 0x802CE88C: sw          $t2, 0x1B14($v0)
    MEM_W(0X1B14, ctx->r2) = ctx->r10;
    // 0x802CE890: sw          $t3, 0x1B18($v0)
    MEM_W(0X1B18, ctx->r2) = ctx->r11;
    // 0x802CE894: sb          $zero, 0x1B1C($v0)
    MEM_B(0X1B1C, ctx->r2) = 0;
    // 0x802CE898: sb          $zero, 0x1B1D($v0)
    MEM_B(0X1B1D, ctx->r2) = 0;
    // 0x802CE89C: sb          $zero, 0x1B1E($v0)
    MEM_B(0X1B1E, ctx->r2) = 0;
    // 0x802CE8A0: sb          $zero, 0x1B1F($v0)
    MEM_B(0X1B1F, ctx->r2) = 0;
    // 0x802CE8A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802CE8A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802CE8AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802CE8B0: jr          $ra
    // 0x802CE8B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802CE8B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802EE1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EE25C: addiu       $sp, $sp, -0x1F8
    ctx->r29 = ADD32(ctx->r29, -0X1F8);
    // 0x802EE260: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x802EE264: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x802EE268: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x802EE26C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x802EE270: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x802EE274: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x802EE278: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x802EE27C: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x802EE280: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x802EE284: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x802EE288: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x802EE28C: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x802EE290: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x802EE294: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x802EE298: lbu         $t9, 0xAC($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XAC);
    // 0x802EE29C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EE2A0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x802EE2A4: beq         $t9, $zero, L_802EEE50
    if (ctx->r25 == 0) {
        // 0x802EE2A8: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_802EEE50;
    }
    // 0x802EE2A8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x802EE2AC: lh          $t2, 0xD4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XD4);
    // 0x802EE2B0: addiu       $s1, $sp, 0xDC
    ctx->r17 = ADD32(ctx->r29, 0XDC);
    // 0x802EE2B4: blezl       $t2, L_802EEE54
    if (SIGNED(ctx->r10) <= 0) {
        // 0x802EE2B8: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_802EEE54;
    }
    goto skip_0;
    // 0x802EE2B8: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_0:
    // 0x802EE2BC: jal         0x8022970C
    // 0x802EE2C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802EE2C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x802EE2C4: lh          $t3, 0x70($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X70);
    // 0x802EE2C8: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802EE2CC: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x802EE2D0: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x802EE2D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802EE2D8: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EE2DC: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802EE2E0: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802EE2E4: div.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802EE2E8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802EE2EC: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802EE2F0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802EE2F4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802EE2F8: jal         0x8022A210
    // 0x802EE2FC: nop

    static_3_8022A210(rdram, ctx);
        goto after_1;
    // 0x802EE2FC: nop

    after_1:
    // 0x802EE300: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802EE304: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802EE308: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802EE30C: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x802EE310: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802EE314: addiu       $a2, $sp, 0x11C
    ctx->r6 = ADD32(ctx->r29, 0X11C);
    // 0x802EE318: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x802EE31C: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x802EE320: jal         0x8020664C
    // 0x802EE324: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    static_3_8020664C(rdram, ctx);
        goto after_2;
    // 0x802EE324: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x802EE328: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802EE32C: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x802EE330: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802EE334: lwc1        $f10, 0x150($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802EE338: sub.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802EE33C: lwc1        $f8, 0x154($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X154);
    // 0x802EE340: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x802EE344: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802EE348: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802EE34C: swc1        $f0, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f0.u32l;
    // 0x802EE350: sub.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802EE354: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802EE358: swc1        $f2, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f2.u32l;
    // 0x802EE35C: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802EE360: swc1        $f14, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f14.u32l;
    // 0x802EE364: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802EE368: jal         0x8023CE00
    // 0x802EE36C: add.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f8.fl;
    static_3_8023CE00(rdram, ctx);
        goto after_3;
    // 0x802EE36C: add.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f8.fl;
    after_3:
    // 0x802EE370: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EE374: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EE378: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802EE37C: nop

    // 0x802EE380: bc1tl       L_802EEE54
    if (c1cs) {
        // 0x802EE384: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_802EEE54;
    }
    goto skip_1;
    // 0x802EE384: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_1:
    // 0x802EE388: lwc1        $f10, 0x6C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802EE38C: lwc1        $f4, 0x1C0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x802EE390: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x802EE394: nop

    // 0x802EE398: bc1tl       L_802EEE54
    if (c1cs) {
        // 0x802EE39C: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_802EEE54;
    }
    goto skip_2;
    // 0x802EE39C: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_2:
    // 0x802EE3A0: div.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802EE3A4: lwc1        $f6, 0x1C4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x802EE3A8: lwc1        $f4, 0x1C8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C8);
    // 0x802EE3AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802EE3B0: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EE3B4: swc1        $f8, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f8.u32l;
    // 0x802EE3B8: div.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802EE3BC: swc1        $f10, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f10.u32l;
    // 0x802EE3C0: jal         0x80223108
    // 0x802EE3C4: swc1        $f8, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f8.u32l;
    static_3_80223108(rdram, ctx);
        goto after_4;
    // 0x802EE3C4: swc1        $f8, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x802EE3C8: jal         0x8022331C
    // 0x802EE3CC: nop

    static_3_8022331C(rdram, ctx);
        goto after_5;
    // 0x802EE3CC: nop

    after_5:
    // 0x802EE3D0: jal         0x802233EC
    // 0x802EE3D4: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_6;
    // 0x802EE3D4: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    after_6:
    // 0x802EE3D8: jal         0x8022342C
    // 0x802EE3DC: lui         $a0, 0x412
    ctx->r4 = S32(0X412 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_7;
    // 0x802EE3DC: lui         $a0, 0x412
    ctx->r4 = S32(0X412 << 16);
    after_7:
    // 0x802EE3E0: lh          $t4, 0x86($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X86);
    // 0x802EE3E4: beq         $t4, $zero, L_802EE3FC
    if (ctx->r12 == 0) {
        // 0x802EE3E8: nop
    
            goto L_802EE3FC;
    }
    // 0x802EE3E8: nop

    // 0x802EE3EC: jal         0x802233EC
    // 0x802EE3F0: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_8;
    // 0x802EE3F0: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_8:
    // 0x802EE3F4: b           L_802EE408
    // 0x802EE3F8: lh          $t5, 0x88($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X88);
        goto L_802EE408;
    // 0x802EE3F8: lh          $t5, 0x88($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X88);
L_802EE3FC:
    // 0x802EE3FC: jal         0x8022342C
    // 0x802EE400: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_9;
    // 0x802EE400: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_9:
    // 0x802EE404: lh          $t5, 0x88($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X88);
L_802EE408:
    // 0x802EE408: beq         $t5, $zero, L_802EE420
    if (ctx->r13 == 0) {
        // 0x802EE40C: nop
    
            goto L_802EE420;
    }
    // 0x802EE40C: nop

    // 0x802EE410: jal         0x802233EC
    // 0x802EE414: lui         $a0, 0x20
    ctx->r4 = S32(0X20 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_10;
    // 0x802EE414: lui         $a0, 0x20
    ctx->r4 = S32(0X20 << 16);
    after_10:
    // 0x802EE418: b           L_802EE42C
    // 0x802EE41C: lh          $t6, 0x7E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X7E);
        goto L_802EE42C;
    // 0x802EE41C: lh          $t6, 0x7E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X7E);
L_802EE420:
    // 0x802EE420: jal         0x8022342C
    // 0x802EE424: lui         $a0, 0x20
    ctx->r4 = S32(0X20 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_11;
    // 0x802EE424: lui         $a0, 0x20
    ctx->r4 = S32(0X20 << 16);
    after_11:
    // 0x802EE428: lh          $t6, 0x7E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X7E);
L_802EE42C:
    // 0x802EE42C: lh          $t7, 0x80($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X80);
    // 0x802EE430: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EE434: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x802EE438: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802EE43C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EE440: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EE444: lh          $t8, 0x82($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X82);
    // 0x802EE448: lh          $t9, 0x84($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X84);
    // 0x802EE44C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x802EE450: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EE454: mul.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802EE458: nop

    // 0x802EE45C: mul.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802EE460: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x802EE464: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EE468: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EE46C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802EE470: nop

    // 0x802EE474: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EE478: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802EE47C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802EE480: jal         0x80221F44
    // 0x802EE484: nop

    static_3_80221F44(rdram, ctx);
        goto after_12;
    // 0x802EE484: nop

    after_12:
    // 0x802EE488: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802EE48C: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802EE490: bnel        $t2, $zero, L_802EE56C
    if (ctx->r10 != 0) {
        // 0x802EE494: lh          $t5, 0xB4($s0)
        ctx->r13 = MEM_H(ctx->r16, 0XB4);
            goto L_802EE56C;
    }
    goto skip_3;
    // 0x802EE494: lh          $t5, 0xB4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XB4);
    skip_3:
    // 0x802EE498: lh          $v0, 0xA4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA4);
    // 0x802EE49C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802EE4A0: beql        $v0, $zero, L_802EE4C4
    if (ctx->r2 == 0) {
        // 0x802EE4A4: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_802EE4C4;
    }
    goto skip_4;
    // 0x802EE4A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_4:
    // 0x802EE4A8: beq         $v0, $at, L_802EE4CC
    if (ctx->r2 == ctx->r1) {
        // 0x802EE4AC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802EE4CC;
    }
    // 0x802EE4AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802EE4B0: beql        $v0, $at, L_802EE518
    if (ctx->r2 == ctx->r1) {
        // 0x802EE4B4: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_802EE518;
    }
    goto skip_5;
    // 0x802EE4B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    skip_5:
    // 0x802EE4B8: b           L_802EE56C
    // 0x802EE4BC: lh          $t5, 0xB4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XB4);
        goto L_802EE56C;
    // 0x802EE4BC: lh          $t5, 0xB4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XB4);
    // 0x802EE4C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_802EE4C4:
    // 0x802EE4C4: b           L_802EE568
    // 0x802EE4C8: swc1        $f4, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f4.u32l;
        goto L_802EE568;
    // 0x802EE4C8: swc1        $f4, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f4.u32l;
L_802EE4CC:
    // 0x802EE4CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802EE4D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EE4D4: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802EE4D8: lh          $t3, 0xA6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XA6);
    // 0x802EE4DC: lwc1        $f4, 0xA8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x802EE4E0: div.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802EE4E4: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x802EE4E8: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802EE4EC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EE4F0: swc1        $f8, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f8.u32l;
    // 0x802EE4F4: lwc1        $f10, 0xA8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x802EE4F8: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x802EE4FC: nop

    // 0x802EE500: bc1fl       L_802EE56C
    if (!c1cs) {
        // 0x802EE504: lh          $t5, 0xB4($s0)
        ctx->r13 = MEM_H(ctx->r16, 0XB4);
            goto L_802EE56C;
    }
    goto skip_6;
    // 0x802EE504: lh          $t5, 0xB4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XB4);
    skip_6:
    // 0x802EE508: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802EE50C: b           L_802EE568
    // 0x802EE510: swc1        $f8, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f8.u32l;
        goto L_802EE568;
    // 0x802EE510: swc1        $f8, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f8.u32l;
    // 0x802EE514: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_802EE518:
    // 0x802EE518: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EE51C: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802EE520: lwc1        $f8, 0xA8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x802EE524: lh          $v0, 0xA6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA6);
    // 0x802EE528: div.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802EE52C: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x802EE530: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802EE534: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x802EE538: nop

    // 0x802EE53C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EE540: swc1        $f6, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f6.u32l;
    // 0x802EE544: lwc1        $f4, 0xA8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x802EE548: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x802EE54C: nop

    // 0x802EE550: bc1fl       L_802EE56C
    if (!c1cs) {
        // 0x802EE554: lh          $t5, 0xB4($s0)
        ctx->r13 = MEM_H(ctx->r16, 0XB4);
            goto L_802EE56C;
    }
    goto skip_7;
    // 0x802EE554: lh          $t5, 0xB4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XB4);
    skip_7:
    // 0x802EE558: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x802EE55C: nop

    // 0x802EE560: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EE564: swc1        $f8, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f8.u32l;
L_802EE568:
    // 0x802EE568: lh          $t5, 0xB4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XB4);
L_802EE56C:
    // 0x802EE56C: lh          $v0, 0xD6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XD6);
    // 0x802EE570: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x802EE574: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x802EE578: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802EE57C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802EE580: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EE584: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EE588: div.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802EE58C: swc1        $f4, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f4.u32l;
    // 0x802EE590: lh          $t8, 0xC0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XC0);
    // 0x802EE594: lh          $t7, 0xC2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC2);
    // 0x802EE598: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x802EE59C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x802EE5A0: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EE5A4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EE5A8: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802EE5AC: blez        $v0, L_802EEE40
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802EE5B0: swc1        $f6, 0x178($sp)
        MEM_W(0X178, ctx->r29) = ctx->f6.u32l;
            goto L_802EEE40;
    }
    // 0x802EE5B0: swc1        $f6, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f6.u32l;
    // 0x802EE5B4: lh          $t9, 0xBE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XBE);
L_802EE5B8:
    // 0x802EE5B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EE5BC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EE5C0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x802EE5C4: lh          $t2, 0xB4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XB4);
    // 0x802EE5C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EE5CC: lwc1        $f8, 0x17C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x802EE5D0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x802EE5D4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802EE5D8: mtc1        $s5, $f10
    ctx->f10.u32l = ctx->r21;
    // 0x802EE5DC: nop

    // 0x802EE5E0: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802EE5E4: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802EE5E8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x802EE5EC: nop

    // 0x802EE5F0: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EE5F4: add.s       $f28, $f6, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802EE5F8: c.le.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.fl <= ctx->f28.fl;
    // 0x802EE5FC: nop

    // 0x802EE600: bc1fl       L_802EE610
    if (!c1cs) {
        // 0x802EE604: trunc.w.s   $f4, $f28
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    ctx->f4.u32l = TRUNC_W_S(ctx->f28.fl);
            goto L_802EE610;
    }
    goto skip_8;
    // 0x802EE604: trunc.w.s   $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    ctx->f4.u32l = TRUNC_W_S(ctx->f28.fl);
    skip_8:
    // 0x802EE608: sub.s       $f28, $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f28.fl = ctx->f28.fl - ctx->f0.fl;
    // 0x802EE60C: trunc.w.s   $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    ctx->f4.u32l = TRUNC_W_S(ctx->f28.fl);
L_802EE610:
    // 0x802EE610: lh          $v0, 0xD4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XD4);
    // 0x802EE614: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EE618: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802EE61C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x802EE620: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802EE624: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x802EE628: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x802EE62C: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802EE630: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x802EE634: nop

    // 0x802EE638: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EE63C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EE640: sub.s       $f2, $f28, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f28.fl - ctx->f10.fl;
    // 0x802EE644: div.s       $f10, $f28, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f28.fl, ctx->f6.fl);
    // 0x802EE648: sub.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x802EE64C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x802EE650: nop

    // 0x802EE654: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EE658: c.le.s      $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f4.fl <= ctx->f28.fl;
    // 0x802EE65C: swc1        $f10, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f10.u32l;
    // 0x802EE660: bc1fl       L_802EE69C
    if (!c1cs) {
        // 0x802EE664: lh          $t8, 0xBC($s0)
        ctx->r24 = MEM_H(ctx->r16, 0XBC);
            goto L_802EE69C;
    }
    goto skip_9;
    // 0x802EE664: lh          $t8, 0xBC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XBC);
    skip_9:
    // 0x802EE668: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x802EE66C: nop

    // 0x802EE670: swc1        $f30, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f30.u32l;
    // 0x802EE674: swc1        $f30, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->f30.u32l;
    // 0x802EE678: swc1        $f30, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->f30.u32l;
    // 0x802EE67C: swc1        $f30, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->f30.u32l;
    // 0x802EE680: swc1        $f30, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f30.u32l;
    // 0x802EE684: swc1        $f30, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f30.u32l;
    // 0x802EE688: swc1        $f30, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f30.u32l;
    // 0x802EE68C: swc1        $f30, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f30.u32l;
    // 0x802EE690: b           L_802EE8A4
    // 0x802EE694: swc1        $f30, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f30.u32l;
        goto L_802EE8A4;
    // 0x802EE694: swc1        $f30, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f30.u32l;
    // 0x802EE698: lh          $t8, 0xBC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XBC);
L_802EE69C:
    // 0x802EE69C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x802EE6A0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x802EE6A4: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802EE6A8: beql        $at, $zero, L_802EE6FC
    if (ctx->r1 == 0) {
        // 0x802EE6AC: lh          $t5, 0xC6($s0)
        ctx->r13 = MEM_H(ctx->r16, 0XC6);
            goto L_802EE6FC;
    }
    goto skip_10;
    // 0x802EE6AC: lh          $t5, 0xC6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XC6);
    skip_10:
    // 0x802EE6B0: lh          $t4, 0xC6($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XC6);
    // 0x802EE6B4: lw          $t2, 0xB8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XB8);
    // 0x802EE6B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EE6BC: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x802EE6C0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EE6C4: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x802EE6C8: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802EE6CC: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x802EE6D0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802EE6D4: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802EE6D8: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802EE6DC: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802EE6E0: nop

    // 0x802EE6E4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802EE6E8: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802EE6EC: mul.s       $f30, $f4, $f8
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f30.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802EE6F0: b           L_802EE718
    // 0x802EE6F4: nop

        goto L_802EE718;
    // 0x802EE6F4: nop

    // 0x802EE6F8: lh          $t5, 0xC6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XC6);
L_802EE6FC:
    // 0x802EE6FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EE700: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EE704: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x802EE708: nop

    // 0x802EE70C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802EE710: mul.s       $f30, $f6, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f30.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802EE714: nop

L_802EE718:
    // 0x802EE718: multu       $v1, $t1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802EE71C: lw          $t6, 0xDC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XDC);
    // 0x802EE720: lh          $t7, 0x70($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X70);
    // 0x802EE724: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802EE728: addiu       $a2, $sp, 0x1C0
    ctx->r6 = ADD32(ctx->r29, 0X1C0);
    // 0x802EE72C: mflo        $a1
    ctx->r5 = lo;
    // 0x802EE730: addu        $v0, $t6, $a1
    ctx->r2 = ADD32(ctx->r14, ctx->r5);
    // 0x802EE734: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802EE738: addiu       $a0, $v0, 0xC
    ctx->r4 = ADD32(ctx->r2, 0XC);
    // 0x802EE73C: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802EE740: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x802EE744: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802EE748: multu       $s5, $t1
    result = U64(U32(ctx->r21)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802EE74C: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802EE750: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x802EE754: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802EE758: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802EE75C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802EE760: mflo        $t5
    ctx->r13 = lo;
    // 0x802EE764: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
    // 0x802EE768: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802EE76C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EE770: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802EE774: swc1        $f6, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f6.u32l;
    // 0x802EE778: lw          $t8, 0xDC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XDC);
    // 0x802EE77C: lh          $t9, 0x70($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X70);
    // 0x802EE780: addu        $v0, $t8, $a1
    ctx->r2 = ADD32(ctx->r24, ctx->r5);
    // 0x802EE784: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802EE788: addiu       $a0, $v0, 0xC
    ctx->r4 = ADD32(ctx->r2, 0XC);
    // 0x802EE78C: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802EE790: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802EE794: nop

    // 0x802EE798: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802EE79C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802EE7A0: lwc1        $f10, 0x54($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X54);
    // 0x802EE7A4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802EE7A8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x802EE7AC: nop

    // 0x802EE7B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EE7B4: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802EE7B8: swc1        $f8, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->f8.u32l;
    // 0x802EE7BC: lw          $t2, 0xDC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XDC);
    // 0x802EE7C0: lh          $t3, 0x70($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X70);
    // 0x802EE7C4: addu        $v0, $t2, $a1
    ctx->r2 = ADD32(ctx->r10, ctx->r5);
    // 0x802EE7C8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802EE7CC: addiu       $a0, $v0, 0xC
    ctx->r4 = ADD32(ctx->r2, 0XC);
    // 0x802EE7D0: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802EE7D4: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802EE7D8: addiu       $a0, $sp, 0x1B4
    ctx->r4 = ADD32(ctx->r29, 0X1B4);
    // 0x802EE7DC: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802EE7E0: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802EE7E4: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    // 0x802EE7E8: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802EE7EC: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x802EE7F0: nop

    // 0x802EE7F4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EE7F8: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802EE7FC: swc1        $f10, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->f10.u32l;
    // 0x802EE800: lh          $t4, 0xE8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XE8);
    // 0x802EE804: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x802EE808: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EE80C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x802EE810: nop

    // 0x802EE814: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EE818: div.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802EE81C: lwc1        $f6, 0x188($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802EE820: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802EE824: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802EE828: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802EE82C: mul.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802EE830: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802EE834: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802EE838: swc1        $f4, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f4.u32l;
    // 0x802EE83C: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802EE840: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802EE844: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802EE848: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802EE84C: swc1        $f6, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->f6.u32l;
    // 0x802EE850: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802EE854: swc1        $f6, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->f6.u32l;
    // 0x802EE858: lw          $t7, 0xDC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XDC);
    // 0x802EE85C: addu        $v0, $t7, $a1
    ctx->r2 = ADD32(ctx->r15, ctx->r5);
    // 0x802EE860: addiu       $t0, $v0, 0xC
    ctx->r8 = ADD32(ctx->r2, 0XC);
    // 0x802EE864: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x802EE868: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802EE86C: addiu       $a1, $sp, 0x1D8
    ctx->r5 = ADD32(ctx->r29, 0X1D8);
    // 0x802EE870: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802EE874: swc1        $f4, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->f4.u32l;
    // 0x802EE878: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x802EE87C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802EE880: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802EE884: swc1        $f10, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f10.u32l;
    // 0x802EE888: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x802EE88C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802EE890: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802EE894: jal         0x80320270
    // 0x802EE898: swc1        $f8, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f8.u32l;
    static_3_80320270(rdram, ctx);
        goto after_13;
    // 0x802EE898: swc1        $f8, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x802EE89C: jal         0x803201D0
    // 0x802EE8A0: addiu       $a0, $sp, 0x1B4
    ctx->r4 = ADD32(ctx->r29, 0X1B4);
    static_3_803201D0(rdram, ctx);
        goto after_14;
    // 0x802EE8A0: addiu       $a0, $sp, 0x1B4
    ctx->r4 = ADD32(ctx->r29, 0X1B4);
    after_14:
L_802EE8A4:
    // 0x802EE8A4: lh          $t8, 0xD8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XD8);
    // 0x802EE8A8: lh          $t9, 0x70($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X70);
    // 0x802EE8AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EE8B0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802EE8B4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EE8B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EE8BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EE8C0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802EE8C4: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802EE8C8: lwc1        $f6, 0x1D8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1D8);
    // 0x802EE8CC: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EE8D0: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802EE8D4: lwc1        $f8, 0x1DC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1DC);
    // 0x802EE8D8: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EE8DC: lwc1        $f6, 0x1E0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1E0);
    // 0x802EE8E0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802EE8E4: nop

    // 0x802EE8E8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EE8EC: swc1        $f4, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f4.u32l;
    // 0x802EE8F0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EE8F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EE8F8: swc1        $f10, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f10.u32l;
    // 0x802EE8FC: mul.s       $f6, $f30, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f6.fl);
    // 0x802EE900: swc1        $f8, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f8.u32l;
    // 0x802EE904: lh          $t2, 0x70($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X70);
    // 0x802EE908: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x802EE90C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x802EE910: nop

    // 0x802EE914: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EE918: mul.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802EE91C: lwc1        $f6, 0x1B4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x802EE920: lwc1        $f4, 0x1B8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x802EE924: mul.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EE928: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802EE92C: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x802EE930: mul.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802EE934: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EE938: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EE93C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EE940: mul.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802EE944: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x802EE948: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802EE94C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EE950: mul.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802EE954: swc1        $f12, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f12.u32l;
    // 0x802EE958: swc1        $f14, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f14.u32l;
    // 0x802EE95C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x802EE960: swc1        $f4, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->f4.u32l;
    // 0x802EE964: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EE968: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802EE96C: add.s       $f22, $f8, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x802EE970: mul.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802EE974: swc1        $f8, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->f8.u32l;
    // 0x802EE978: swc1        $f4, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f4.u32l;
    // 0x802EE97C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802EE980: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x802EE984: lwc1        $f10, 0x19C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x802EE988: add.s       $f20, $f4, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x802EE98C: sub.s       $f10, $f4, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x802EE990: lwc1        $f4, 0x1E4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x802EE994: swc1        $f20, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f20.u32l;
    // 0x802EE998: swc1        $f10, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f10.u32l;
    // 0x802EE99C: lwc1        $f10, 0x1A0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x802EE9A0: swc1        $f22, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f22.u32l;
    // 0x802EE9A4: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802EE9A8: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802EE9AC: swc1        $f10, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f10.u32l;
    // 0x802EE9B0: lwc1        $f10, 0x1BC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x802EE9B4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802EE9B8: lwc1        $f10, 0x1D4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1D4);
    // 0x802EE9BC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802EE9C0: lwc1        $f10, 0x1D4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1D4);
    // 0x802EE9C4: add.s       $f24, $f10, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802EE9C8: swc1        $f18, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f18.u32l;
    // 0x802EE9CC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802EE9D0: lwc1        $f8, 0x1E8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1E8);
    // 0x802EE9D4: swc1        $f24, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f24.u32l;
    // 0x802EE9D8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802EE9DC: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802EE9E0: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x802EE9E4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802EE9E8: lwc1        $f10, 0x1EC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1EC);
    // 0x802EE9EC: sh          $t4, 0x164($sp)
    MEM_H(0X164, ctx->r29) = ctx->r12;
    // 0x802EE9F0: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802EE9F4: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802EE9F8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x802EE9FC: lwc1        $f10, 0x1E4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x802EEA00: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802EEA04: sh          $t6, 0x166($sp)
    MEM_H(0X166, ctx->r29) = ctx->r14;
    // 0x802EEA08: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x802EEA0C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x802EEA10: lwc1        $f8, 0x1E8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1E8);
    // 0x802EEA14: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EEA18: sh          $t8, 0x168($sp)
    MEM_H(0X168, ctx->r29) = ctx->r24;
    // 0x802EEA1C: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x802EEA20: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x802EEA24: lwc1        $f4, 0x1EC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1EC);
    // 0x802EEA28: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802EEA2C: sh          $t2, 0x16A($sp)
    MEM_H(0X16A, ctx->r29) = ctx->r10;
    // 0x802EEA30: add.s       $f8, $f4, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x802EEA34: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x802EEA38: lwc1        $f6, 0x1E4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x802EEA3C: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
    // 0x802EEA40: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EEA44: sh          $t4, 0x16C($sp)
    MEM_H(0X16C, ctx->r29) = ctx->r12;
    // 0x802EEA48: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802EEA4C: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x802EEA50: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x802EEA54: lwc1        $f6, 0x1E8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1E8);
    // 0x802EEA58: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EEA5C: sh          $t6, 0x16E($sp)
    MEM_H(0X16E, ctx->r29) = ctx->r14;
    // 0x802EEA60: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802EEA64: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x802EEA68: lwc1        $f6, 0x1EC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1EC);
    // 0x802EEA6C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EEA70: sh          $t8, 0x170($sp)
    MEM_H(0X170, ctx->r29) = ctx->r24;
    // 0x802EEA74: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802EEA78: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x802EEA7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802EEA80: lwc1        $f6, 0x188($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802EEA84: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802EEA88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EEA8C: mul.s       $f26, $f10, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802EEA90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EEA94: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x802EEA98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EEA9C: sh          $t2, 0x172($sp)
    MEM_H(0X172, ctx->r29) = ctx->r10;
    // 0x802EEAA0: sh          $t4, 0x174($sp)
    MEM_H(0X174, ctx->r29) = ctx->r12;
    // 0x802EEAA4: c.lt.s      $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f4.fl < ctx->f26.fl;
    // 0x802EEAA8: mov.s       $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    ctx->f2.fl = ctx->f26.fl;
    // 0x802EEAAC: bc1f        L_802EEABC
    if (!c1cs) {
        // 0x802EEAB0: nop
    
            goto L_802EEABC;
    }
    // 0x802EEAB0: nop

    // 0x802EEAB4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802EEAB8: nop

L_802EEABC:
    // 0x802EEABC: lh          $t5, 0x76($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X76);
    // 0x802EEAC0: lh          $t6, 0xE0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE0);
    // 0x802EEAC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EEAC8: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802EEACC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802EEAD0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802EEAD4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EEAD8: lh          $t2, 0x78($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X78);
    // 0x802EEADC: lh          $t3, 0xE2($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE2);
    // 0x802EEAE0: lh          $t7, 0x7A($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X7A);
    // 0x802EEAE4: lh          $t4, 0x7C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X7C);
    // 0x802EEAE8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EEAEC: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802EEAF0: lh          $v1, 0x72($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X72);
    // 0x802EEAF4: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
    // 0x802EEAF8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802EEAFC: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802EEB00: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x802EEB04: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802EEB08: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EEB0C: mfc1        $s2, $f8
    ctx->r18 = (int32_t)ctx->f8.u32l;
    // 0x802EEB10: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x802EEB14: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x802EEB18: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EEB1C: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802EEB20: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802EEB24: lh          $t8, 0xE4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE4);
    // 0x802EEB28: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EEB2C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802EEB30: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802EEB34: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EEB38: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EEB3C: mfc1        $s3, $f6
    ctx->r19 = (int32_t)ctx->f6.u32l;
    // 0x802EEB40: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x802EEB44: sll         $t5, $s3, 16
    ctx->r13 = S32(ctx->r19 << 16);
    // 0x802EEB48: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EEB4C: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802EEB50: sra         $s3, $t5, 16
    ctx->r19 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802EEB54: lh          $t5, 0xE6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XE6);
    // 0x802EEB58: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802EEB5C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802EEB60: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x802EEB64: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EEB68: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EEB6C: mfc1        $s4, $f4
    ctx->r20 = (int32_t)ctx->f4.u32l;
    // 0x802EEB70: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x802EEB74: sll         $t2, $s4, 16
    ctx->r10 = S32(ctx->r20 << 16);
    // 0x802EEB78: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EEB7C: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802EEB80: sra         $s4, $t2, 16
    ctx->r20 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802EEB84: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802EEB88: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802EEB8C: lwc1        $f6, 0x188($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802EEB90: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802EEB94: sub.s       $f10, $f20, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x802EEB98: mfc1        $s1, $f8
    ctx->r17 = (int32_t)ctx->f8.u32l;
    // 0x802EEB9C: nop

    // 0x802EEBA0: sll         $t7, $s1, 16
    ctx->r15 = S32(ctx->r17 << 16);
    // 0x802EEBA4: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802EEBA8: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x802EEBAC: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x802EEBB0: nop

    // 0x802EEBB4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EEBB8: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802EEBBC: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EEBC0: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x802EEBC4: nop

    // 0x802EEBC8: sll         $t2, $s1, 16
    ctx->r10 = S32(ctx->r17 << 16);
    // 0x802EEBCC: sra         $s1, $t2, 16
    ctx->r17 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802EEBD0: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x802EEBD4: beq         $at, $zero, L_802EEBEC
    if (ctx->r1 == 0) {
        // 0x802EEBD8: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_802EEBEC;
    }
    // 0x802EEBD8: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802EEBDC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802EEBE0: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802EEBE4: b           L_802EEBF4
    // 0x802EEBE8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_802EEBF4;
    // 0x802EEBE8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_802EEBEC:
    // 0x802EEBEC: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802EEBF0: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_802EEBF4:
    // 0x802EEBF4: lh          $t7, 0xD4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XD4);
    // 0x802EEBF8: lwc1        $f6, 0x178($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802EEBFC: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x802EEC00: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x802EEC04: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x802EEC08: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x802EEC0C: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802EEC10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802EEC14: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802EEC18: c.le.s      $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f4.fl <= ctx->f28.fl;
    // 0x802EEC1C: nop

    // 0x802EEC20: bc1fl       L_802EEC3C
    if (!c1cs) {
        // 0x802EEC24: lh          $v0, 0xA4($s0)
        ctx->r2 = MEM_H(ctx->r16, 0XA4);
            goto L_802EEC3C;
    }
    goto skip_11;
    // 0x802EEC24: lh          $v0, 0xA4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA4);
    skip_11:
    // 0x802EEC28: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x802EEC2C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802EEC30: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x802EEC34: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x802EEC38: lh          $v0, 0xA4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA4);
L_802EEC3C:
    // 0x802EEC3C: beq         $v0, $zero, L_802EEC60
    if (ctx->r2 == 0) {
        // 0x802EEC40: nop
    
            goto L_802EEC60;
    }
    // 0x802EEC40: nop

    // 0x802EEC44: beql        $v0, $at, L_802EEC6C
    if (ctx->r2 == ctx->r1) {
        // 0x802EEC48: lwc1        $f10, 0xA8($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0XA8);
            goto L_802EEC6C;
    }
    goto skip_12;
    // 0x802EEC48: lwc1        $f10, 0xA8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA8);
    skip_12:
    // 0x802EEC4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802EEC50: beql        $v0, $at, L_802EECC4
    if (ctx->r2 == ctx->r1) {
        // 0x802EEC54: lwc1        $f6, 0xA8($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0XA8);
            goto L_802EECC4;
    }
    goto skip_13;
    // 0x802EEC54: lwc1        $f6, 0xA8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA8);
    skip_13:
    // 0x802EEC58: b           L_802EECF8
    // 0x802EEC5C: lh          $t3, 0x9C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X9C);
        goto L_802EECF8;
    // 0x802EEC5C: lh          $t3, 0x9C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X9C);
L_802EEC60:
    // 0x802EEC60: b           L_802EECF4
    // 0x802EEC64: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
        goto L_802EECF4;
    // 0x802EEC64: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x802EEC68: lwc1        $f10, 0xA8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA8);
L_802EEC6C:
    // 0x802EEC6C: lh          $t3, 0xA6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XA6);
    // 0x802EEC70: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802EEC74: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x802EEC78: nop

    // 0x802EEC7C: addu        $t2, $s5, $t9
    ctx->r10 = ADD32(ctx->r21, ctx->r25);
    // 0x802EEC80: div         $zero, $t2, $t3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r11)));
    // 0x802EEC84: mfhi        $s6
    ctx->r22 = hi;
    // 0x802EEC88: sll         $t4, $s6, 16
    ctx->r12 = S32(ctx->r22 << 16);
    // 0x802EEC8C: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802EEC90: bne         $t3, $zero, L_802EEC9C
    if (ctx->r11 != 0) {
        // 0x802EEC94: nop
    
            goto L_802EEC9C;
    }
    // 0x802EEC94: nop

    // 0x802EEC98: break       7
    do_break(2150558872);
L_802EEC9C:
    // 0x802EEC9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802EECA0: bne         $t3, $at, L_802EECB4
    if (ctx->r11 != ctx->r1) {
        // 0x802EECA4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802EECB4;
    }
    // 0x802EECA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802EECA8: bne         $t2, $at, L_802EECB4
    if (ctx->r10 != ctx->r1) {
        // 0x802EECAC: nop
    
            goto L_802EECB4;
    }
    // 0x802EECAC: nop

    // 0x802EECB0: break       6
    do_break(2150558896);
L_802EECB4:
    // 0x802EECB4: or          $s6, $t5, $zero
    ctx->r22 = ctx->r13 | 0;
    // 0x802EECB8: b           L_802EECF8
    // 0x802EECBC: lh          $t3, 0x9C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X9C);
        goto L_802EECF8;
    // 0x802EECBC: lh          $t3, 0x9C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X9C);
    // 0x802EECC0: lwc1        $f6, 0xA8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA8);
L_802EECC4:
    // 0x802EECC4: lh          $v0, 0xA6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA6);
    // 0x802EECC8: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EECCC: mfc1        $s6, $f4
    ctx->r22 = (int32_t)ctx->f4.u32l;
    // 0x802EECD0: nop

    // 0x802EECD4: sll         $t7, $s6, 16
    ctx->r15 = S32(ctx->r22 << 16);
    // 0x802EECD8: sra         $s6, $t7, 16
    ctx->r22 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802EECDC: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802EECE0: bnel        $at, $zero, L_802EECF8
    if (ctx->r1 != 0) {
        // 0x802EECE4: lh          $t3, 0x9C($s0)
        ctx->r11 = MEM_H(ctx->r16, 0X9C);
            goto L_802EECF8;
    }
    goto skip_14;
    // 0x802EECE4: lh          $t3, 0x9C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X9C);
    skip_14:
    // 0x802EECE8: addiu       $s6, $v0, -0x1
    ctx->r22 = ADD32(ctx->r2, -0X1);
    // 0x802EECEC: sll         $t9, $s6, 16
    ctx->r25 = S32(ctx->r22 << 16);
    // 0x802EECF0: sra         $s6, $t9, 16
    ctx->r22 = S32(SIGNED(ctx->r25) >> 16);
L_802EECF4:
    // 0x802EECF4: lh          $t3, 0x9C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X9C);
L_802EECF8:
    // 0x802EECF8: jal         0x80223468
    // 0x802EECFC: addu        $a0, $t3, $s6
    ctx->r4 = ADD32(ctx->r11, ctx->r22);
    static_3_80223468(rdram, ctx);
        goto after_15;
    // 0x802EECFC: addu        $a0, $t3, $s6
    ctx->r4 = ADD32(ctx->r11, ctx->r22);
    after_15:
    // 0x802EED00: jal         0x8021F4E4
    // 0x802EED04: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_16;
    // 0x802EED04: nop

    after_16:
    // 0x802EED08: lh          $t4, 0x98($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X98);
    // 0x802EED0C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802EED10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EED14: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x802EED18: lh          $t7, 0x9A($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X9A);
    // 0x802EED1C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802EED20: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802EED24: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802EED28: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x802EED2C: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x802EED30: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x802EED34: lh          $a0, 0x164($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X164);
    // 0x802EED38: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802EED3C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x802EED40: lh          $a1, 0x166($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X166);
    // 0x802EED44: lh          $a2, 0x168($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X168);
    // 0x802EED48: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802EED4C: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802EED50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EED54: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802EED58: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802EED5C: sll         $t6, $a3, 5
    ctx->r14 = S32(ctx->r7 << 5);
    // 0x802EED60: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x802EED64: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802EED68: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x802EED6C: nop

    // 0x802EED70: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x802EED74: jal         0x8021F35C
    // 0x802EED78: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x802EED78: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_17:
    // 0x802EED7C: lh          $t3, 0x98($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X98);
    // 0x802EED80: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EED84: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EED88: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x802EED8C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802EED90: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x802EED94: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802EED98: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x802EED9C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x802EEDA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802EEDA4: lh          $a0, 0x16A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X16A);
    // 0x802EEDA8: lh          $a1, 0x16C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X16C);
    // 0x802EEDAC: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802EEDB0: lh          $a2, 0x16E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X16E);
    // 0x802EEDB4: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EEDB8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802EEDBC: nop

    // 0x802EEDC0: sll         $t5, $a3, 5
    ctx->r13 = S32(ctx->r7 << 5);
    // 0x802EEDC4: jal         0x8021F35C
    // 0x802EEDC8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x802EEDC8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    after_18:
    // 0x802EEDCC: lh          $t6, 0x98($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X98);
    // 0x802EEDD0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EEDD4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EEDD8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802EEDDC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802EEDE0: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x802EEDE4: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802EEDE8: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x802EEDEC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x802EEDF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802EEDF4: lh          $a0, 0x170($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X170);
    // 0x802EEDF8: lh          $a1, 0x172($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X172);
    // 0x802EEDFC: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802EEE00: lh          $a2, 0x174($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X174);
    // 0x802EEE04: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EEE08: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802EEE0C: nop

    // 0x802EEE10: sll         $t8, $a3, 5
    ctx->r24 = S32(ctx->r7 << 5);
    // 0x802EEE14: jal         0x8021F35C
    // 0x802EEE18: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_19;
    // 0x802EEE18: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    after_19:
    // 0x802EEE1C: jal         0x8021FCD0
    // 0x802EEE20: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_20;
    // 0x802EEE20: nop

    after_20:
    // 0x802EEE24: lh          $t3, 0xD6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XD6);
    // 0x802EEE28: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x802EEE2C: sll         $t9, $s5, 16
    ctx->r25 = S32(ctx->r21 << 16);
    // 0x802EEE30: sra         $s5, $t9, 16
    ctx->r21 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802EEE34: slt         $at, $s5, $t3
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802EEE38: bnel        $at, $zero, L_802EE5B8
    if (ctx->r1 != 0) {
        // 0x802EEE3C: lh          $t9, 0xBE($s0)
        ctx->r25 = MEM_H(ctx->r16, 0XBE);
            goto L_802EE5B8;
    }
    goto skip_15;
    // 0x802EEE3C: lh          $t9, 0xBE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XBE);
    skip_15:
L_802EEE40:
    // 0x802EEE40: jal         0x802230E4
    // 0x802EEE44: nop

    static_3_802230E4(rdram, ctx);
        goto after_21;
    // 0x802EEE44: nop

    after_21:
    // 0x802EEE48: jal         0x8022337C
    // 0x802EEE4C: nop

    static_3_8022337C(rdram, ctx);
        goto after_22;
    // 0x802EEE4C: nop

    after_22:
L_802EEE50:
    // 0x802EEE50: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_802EEE54:
    // 0x802EEE54: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x802EEE58: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x802EEE5C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x802EEE60: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x802EEE64: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x802EEE68: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x802EEE6C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x802EEE70: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x802EEE74: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x802EEE78: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x802EEE7C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x802EEE80: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x802EEE84: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x802EEE88: jr          $ra
    // 0x802EEE8C: addiu       $sp, $sp, 0x1F8
    ctx->r29 = ADD32(ctx->r29, 0X1F8);
    return;
    // 0x802EEE8C: addiu       $sp, $sp, 0x1F8
    ctx->r29 = ADD32(ctx->r29, 0X1F8);
;}
RECOMP_FUNC void D_8024AA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024AA34: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8024AA38: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8024AA3C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8024AA40: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8024AA44: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8024AA48: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024AA4C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024AA50: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8024AA54: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8024AA58: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x8024AA5C: sw          $a2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r6;
    // 0x8024AA60: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8024AA64: sb          $a3, 0x65($a1)
    MEM_B(0X65, ctx->r5) = ctx->r7;
    // 0x8024AA68: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x8024AA6C: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
L_8024AA70:
    // 0x8024AA70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024AA74: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8024AA78: bne         $at, $zero, L_8024AA70
    if (ctx->r1 != 0) {
        // 0x8024AA7C: sb          $a3, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r7;
            goto L_8024AA70;
    }
    // 0x8024AA7C: sb          $a3, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r7;
    // 0x8024AA80: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024AA84: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8024AA88: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x8024AA8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8024AA90: jal         0x80246660
    // 0x8024AA94: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    static_3_80246660(rdram, ctx);
        goto after_0;
    // 0x8024AA94: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    after_0:
    // 0x8024AA98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024AA9C: bne         $v0, $at, L_8024AAC0
    if (ctx->r2 != ctx->r1) {
        // 0x8024AAA0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8024AAC0;
    }
    // 0x8024AAA0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8024AAA4: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8024AAA8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024AAAC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8024AAB0: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x8024AAB4: jal         0x80246660
    // 0x8024AAB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_80246660(rdram, ctx);
        goto after_1;
    // 0x8024AAB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8024AABC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8024AAC0:
    // 0x8024AAC0: beq         $v0, $zero, L_8024AAD0
    if (ctx->r2 == 0) {
        // 0x8024AAC4: or          $a1, $s4, $zero
        ctx->r5 = ctx->r20 | 0;
            goto L_8024AAD0;
    }
    // 0x8024AAC4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024AAC8: b           L_8024ABAC
    // 0x8024AACC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8024ABAC;
    // 0x8024AACC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8024AAD0:
    // 0x8024AAD0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8024AAD4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8024AAD8: jal         0x80245710
    // 0x8024AADC: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    static_3_80245710(rdram, ctx);
        goto after_2;
    // 0x8024AADC: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x8024AAE0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024AAE4: bne         $v0, $at, L_8024AAF0
    if (ctx->r2 != ctx->r1) {
        // 0x8024AAE8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8024AAF0;
    }
    // 0x8024AAE8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8024AAEC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_8024AAF0:
    // 0x8024AAF0: beq         $v1, $zero, L_8024AB04
    if (ctx->r3 == 0) {
        // 0x8024AAF4: lbu         $t6, 0x5F($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X5F);
            goto L_8024AB04;
    }
    // 0x8024AAF4: lbu         $t6, 0x5F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5F);
    // 0x8024AAF8: b           L_8024ABAC
    // 0x8024AAFC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8024ABAC;
    // 0x8024AAFC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8024AB00: lbu         $t6, 0x5F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5F);
L_8024AB04:
    // 0x8024AB04: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x8024AB08: beq         $t6, $at, L_8024AB18
    if (ctx->r14 == ctx->r1) {
        // 0x8024AB0C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8024AB18;
    }
    // 0x8024AB0C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8024AB10: b           L_8024ABAC
    // 0x8024AB14: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8024ABAC;
    // 0x8024AB14: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8024AB18:
    // 0x8024AB18: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8024AB1C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8024AB20: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8024AB24: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8024AB28: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8024AB2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024AB30:
    // 0x8024AB30: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8024AB34: sb          $v0, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r2;
    // 0x8024AB38: sb          $zero, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = 0;
    // 0x8024AB3C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8024AB40: sb          $zero, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = 0;
    // 0x8024AB44: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8024AB48: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x8024AB4C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8024AB50: sb          $v0, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r2;
    // 0x8024AB54: bne         $v1, $a1, L_8024AB30
    if (ctx->r3 != ctx->r5) {
        // 0x8024AB58: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_8024AB30;
    }
    // 0x8024AB58: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
    // 0x8024AB5C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8024AB60: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8024AB64: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8024AB68: sll         $v0, $s4, 6
    ctx->r2 = S32(ctx->r20 << 6);
    // 0x8024AB6C: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    // 0x8024AB70: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8024AB74: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x8024AB78: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x8024AB7C: jal         0x8024A940
    // 0x8024AB80: addiu       $s3, $zero, 0x600
    ctx->r19 = ADD32(0, 0X600);
    static_3_8024A940(rdram, ctx);
        goto after_3;
    // 0x8024AB80: addiu       $s3, $zero, 0x600
    ctx->r19 = ADD32(0, 0X600);
    after_3:
    // 0x8024AB84: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x8024AB88: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8024AB8C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8024AB90: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8024AB94: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x8024AB98: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x8024AB9C: addiu       $s3, $zero, 0x600
    ctx->r19 = ADD32(0, 0X600);
    // 0x8024ABA0: jal         0x8024A940
    // 0x8024ABA4: addu        $a1, $v0, $t8
    ctx->r5 = ADD32(ctx->r2, ctx->r24);
    static_3_8024A940(rdram, ctx);
        goto after_4;
    // 0x8024ABA4: addu        $a1, $v0, $t8
    ctx->r5 = ADD32(ctx->r2, ctx->r24);
    after_4:
    // 0x8024ABA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024ABAC:
    // 0x8024ABAC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8024ABB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024ABB4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024ABB8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8024ABBC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8024ABC0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8024ABC4: jr          $ra
    // 0x8024ABC8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8024ABC8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void D_802B9000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B9080: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802B9084: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B9088: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B908C: lh          $t6, 0x80($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X80);
    // 0x802B9090: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B9094: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B9098: bnel        $t6, $at, L_802B910C
    if (ctx->r14 != ctx->r1) {
        // 0x802B909C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B910C;
    }
    goto skip_0;
    // 0x802B909C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802B90A0: jal         0x8021ACB0
    // 0x802B90A4: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802B90A4: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_0:
    // 0x802B90A8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802B90AC: jal         0x8021BA1C
    // 0x802B90B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8021BA1C(rdram, ctx);
        goto after_1;
    // 0x802B90B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802B90B4: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x802B90B8: beql        $t7, $zero, L_802B910C
    if (ctx->r15 == 0) {
        // 0x802B90BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B910C;
    }
    goto skip_1;
    // 0x802B90BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x802B90C0: jal         0x8022970C
    // 0x802B90C4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802B90C4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x802B90C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B90CC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x802B90D0: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    // 0x802B90D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B90D8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802B90DC: jal         0x8022A0D0
    // 0x802B90E0: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_3;
    // 0x802B90E0: nop

    after_3:
    // 0x802B90E4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802B90E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B90EC: jal         0x8021B4B0
    // 0x802B90F0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    static_3_8021B4B0(rdram, ctx);
        goto after_4;
    // 0x802B90F0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x802B90F4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802B90F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802B90FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B9100: jal         0x8021B240
    // 0x802B9104: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_5;
    // 0x802B9104: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x802B9108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B910C:
    // 0x802B910C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B9110: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802B9114: jr          $ra
    // 0x802B9118: nop

    return;
    // 0x802B9118: nop

;}
RECOMP_FUNC void D_802A9CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9D40: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802A9D44: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A9D48: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802A9D4C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A9D50: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802A9D54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A9D58: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802A9D5C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x802A9D60: addiu       $t6, $sp, 0x44
    ctx->r14 = ADD32(ctx->r29, 0X44);
    // 0x802A9D64: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x802A9D68: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x802A9D6C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802A9D70: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802A9D74: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x802A9D78: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802A9D7C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802A9D80: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802A9D84: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    // 0x802A9D88: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x802A9D8C: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x802A9D90: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x802A9D94: jal         0x802141C8
    // 0x802A9D98: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    static_3_802141C8(rdram, ctx);
        goto after_0;
    // 0x802A9D98: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x802A9D9C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802A9DA0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A9DA4: beq         $v0, $zero, L_802A9DC8
    if (ctx->r2 == 0) {
        // 0x802A9DA8: lwc1        $f2, 0x34($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
            goto L_802A9DC8;
    }
    // 0x802A9DA8: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802A9DAC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x802A9DB0: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x802A9DB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A9DB8: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x802A9DBC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802A9DC0: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802A9DC4: add.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f16.fl;
L_802A9DC8:
    // 0x802A9DC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802A9DCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802A9DD0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802A9DD4: jr          $ra
    // 0x802A9DD8: nop

    return;
    // 0x802A9DD8: nop

;}
RECOMP_FUNC void D_8023F550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023F554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F558: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8023F55C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8023F560: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023F564: jal         0x8023FC40
    // 0x8023F568: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023F568: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023F56C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8023F570: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F574: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8023F578: lw          $t6, 0x20($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X20);
    // 0x8023F57C: sw          $t6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r14;
    // 0x8023F580: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x8023F584: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8023F588: jal         0x8023FC40
    // 0x8023F58C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    static_3_8023FC40(rdram, ctx);
        goto after_1;
    // 0x8023F58C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    after_1:
    // 0x8023F590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023F594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023F598: jr          $ra
    // 0x8023F59C: nop

    return;
    // 0x8023F59C: nop

;}
RECOMP_FUNC void D_802E7A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E7B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7B0C: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x802E7B10: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E7B14: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7B18: bne         $a1, $zero, L_802E7B40
    if (ctx->r5 != 0) {
        // 0x802E7B1C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E7B40;
    }
    // 0x802E7B1C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7B20: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7B24: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E7B28: jal         0x80231A24
    // 0x802E7B2C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7B2C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E7B30: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E7B34: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E7B38: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E7B3C: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
L_802E7B40:
    // 0x802E7B40: jal         0x802D25F4
    // 0x802E7B44: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802D25F4(rdram, ctx);
        goto after_1;
    // 0x802E7B44: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x802E7B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E7B50: jr          $ra
    // 0x802E7B54: nop

    return;
    // 0x802E7B54: nop

;}
RECOMP_FUNC void D_8023DF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DF50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DF54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DF58: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023DF5C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023DF60: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8023DF64: jal         0x80241760
    // 0x8023DF68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023DF68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023DF6C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023DF70: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8023DF74: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023DF78: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8023DF7C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8023DF80: sw          $t6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r14;
    // 0x8023DF84: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8023DF88: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8023DF8C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023DF90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023DF94: sw          $t8, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r24;
    // 0x8023DF98: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x8023DF9C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023DFA0: jal         0x80241780
    // 0x8023DFA4: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x8023DFA4: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    after_1:
    // 0x8023DFA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DFAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DFB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023DFB4: jr          $ra
    // 0x8023DFB8: nop

    return;
    // 0x8023DFB8: nop

;}
RECOMP_FUNC void D_802ED54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED5CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED5D0: bne         $a0, $zero, L_802ED5E8
    if (ctx->r4 != 0) {
        // 0x802ED5D4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802ED5E8;
    }
    // 0x802ED5D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED5D8: jal         0x802C67EC
    // 0x802ED5DC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ED5DC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802ED5E0: beq         $v0, $zero, L_802ED63C
    if (ctx->r2 == 0) {
        // 0x802ED5E4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802ED63C;
    }
    // 0x802ED5E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802ED5E8:
    // 0x802ED5E8: jal         0x8031C47C
    // 0x802ED5EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ED5EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802ED5F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED5F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED5F8: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED5FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802ED600: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802ED604: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802ED608: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802ED60C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED610: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802ED614: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802ED618: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802ED61C: sh          $v1, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r3;
    // 0x802ED620: sh          $v1, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r3;
    // 0x802ED624: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802ED628: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802ED62C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED630: jal         0x8031DDA8
    // 0x802ED634: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031DDA8(rdram, ctx);
        goto after_2;
    // 0x802ED634: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802ED638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802ED63C:
    // 0x802ED63C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ED640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED644: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802ED648: jr          $ra
    // 0x802ED64C: nop

    return;
    // 0x802ED64C: nop

;}
RECOMP_FUNC void D_802C8450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C84D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C84D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C84D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802C84DC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802C84E0: jal         0x80207130
    // 0x802C84E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802C84E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802C84E8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802C84EC: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x802C84F0: lw          $t6, 0x50($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X50);
    // 0x802C84F4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802C84F8: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802C84FC: sub.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d - ctx->f6.d;
    // 0x802C8500: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x802C8504: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802C8508: nop

    // 0x802C850C: bc1fl       L_802C851C
    if (!c1cs) {
        // 0x802C8510: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802C851C;
    }
    goto skip_0;
    // 0x802C8510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802C8514: sb          $zero, 0x2D($a1)
    MEM_B(0X2D, ctx->r5) = 0;
    // 0x802C8518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802C851C:
    // 0x802C851C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C8520: jr          $ra
    // 0x802C8524: nop

    return;
    // 0x802C8524: nop

;}
RECOMP_FUNC void D_80223C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223C10: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80223C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80223C18: addiu       $a1, $t6, 0x0
    ctx->r5 = ADD32(ctx->r14, 0X0);
    // 0x80223C1C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80223C20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80223C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223C28: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80223C2C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80223C30: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_80223C34:
    // 0x80223C34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223C38: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_80223C3C:
    // 0x80223C3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80223C40: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x80223C44: bne         $v0, $a0, L_80223C3C
    if (ctx->r2 != ctx->r4) {
        // 0x80223C48: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80223C3C;
    }
    // 0x80223C48: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80223C4C: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x80223C50: sltu        $at, $a1, $a3
    ctx->r1 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x80223C54: addiu       $a2, $a2, 0x1C
    ctx->r6 = ADD32(ctx->r6, 0X1C);
    // 0x80223C58: sw          $zero, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = 0;
    // 0x80223C5C: bne         $at, $zero, L_80223C34
    if (ctx->r1 != 0) {
        // 0x80223C60: sw          $zero, -0x8($a1)
        MEM_W(-0X8, ctx->r5) = 0;
            goto L_80223C34;
    }
    // 0x80223C60: sw          $zero, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = 0;
    // 0x80223C64: jal         0x80231790
    // 0x80223C68: nop

    static_3_80231790(rdram, ctx);
        goto after_0;
    // 0x80223C68: nop

    after_0:
    // 0x80223C6C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80223C70: beq         $t7, $zero, L_80223C9C
    if (ctx->r15 == 0) {
        // 0x80223C74: andi        $t0, $v0, 0x2
        ctx->r8 = ctx->r2 & 0X2;
            goto L_80223C9C;
    }
    // 0x80223C74: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x80223C78: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80223C7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223C80: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x80223C84: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223C88: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80223C8C: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x80223C90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223C94: b           L_80223CA4
    // 0x80223C98: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
        goto L_80223CA4;
    // 0x80223C98: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_80223C9C:
    // 0x80223C9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223CA0: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
L_80223CA4:
    // 0x80223CA4: beq         $t0, $zero, L_80223CD0
    if (ctx->r8 == 0) {
        // 0x80223CA8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80223CD0;
    }
    // 0x80223CA8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80223CAC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80223CB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223CB4: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x80223CB8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223CBC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80223CC0: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x80223CC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223CC8: b           L_80223CD8
    // 0x80223CCC: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
        goto L_80223CD8;
    // 0x80223CCC: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_80223CD0:
    // 0x80223CD0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223CD4: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
L_80223CD8:
    // 0x80223CD8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80223CDC: sllv        $t4, $t3, $a0
    ctx->r12 = S32(ctx->r11 << (ctx->r4 & 31));
    // 0x80223CE0: and         $t5, $t4, $v0
    ctx->r13 = ctx->r12 & ctx->r2;
    // 0x80223CE4: beq         $t5, $zero, L_80223D1C
    if (ctx->r13 == 0) {
        // 0x80223CE8: addiu       $t0, $a0, 0x1
        ctx->r8 = ADD32(ctx->r4, 0X1);
            goto L_80223D1C;
    }
    // 0x80223CE8: addiu       $t0, $a0, 0x1
    ctx->r8 = ADD32(ctx->r4, 0X1);
    // 0x80223CEC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223CF0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223CF4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80223CF8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80223CFC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223D00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80223D04: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80223D08: sb          $v1, 0x18($a1)
    MEM_B(0X18, ctx->r5) = ctx->r3;
    // 0x80223D0C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80223D10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223D14: b           L_80223D3C
    // 0x80223D18: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
        goto L_80223D3C;
    // 0x80223D18: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_80223D1C:
    // 0x80223D1C: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x80223D20: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80223D24: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80223D28: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80223D2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80223D30: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x80223D34: sb          $zero, 0x18($a1)
    MEM_B(0X18, ctx->r5) = 0;
    // 0x80223D38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80223D3C:
    // 0x80223D3C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80223D40: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x80223D44: and         $t3, $t2, $v0
    ctx->r11 = ctx->r10 & ctx->r2;
    // 0x80223D48: beq         $t3, $zero, L_80223D64
    if (ctx->r11 == 0) {
        // 0x80223D4C: addiu       $t4, $a0, 0x2
        ctx->r12 = ADD32(ctx->r4, 0X2);
            goto L_80223D64;
    }
    // 0x80223D4C: addiu       $t4, $a0, 0x2
    ctx->r12 = ADD32(ctx->r4, 0X2);
    // 0x80223D50: sb          $v1, 0x34($a1)
    MEM_B(0X34, ctx->r5) = ctx->r3;
    // 0x80223D54: sb          $v1, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r3;
    // 0x80223D58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223D5C: b           L_80223D68
    // 0x80223D60: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
        goto L_80223D68;
    // 0x80223D60: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_80223D64:
    // 0x80223D64: sb          $zero, 0x34($a1)
    MEM_B(0X34, ctx->r5) = 0;
L_80223D68:
    // 0x80223D68: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80223D6C: sllv        $t6, $t5, $t4
    ctx->r14 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x80223D70: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x80223D74: beq         $t7, $zero, L_80223D90
    if (ctx->r15 == 0) {
        // 0x80223D78: addiu       $t8, $a0, 0x3
        ctx->r24 = ADD32(ctx->r4, 0X3);
            goto L_80223D90;
    }
    // 0x80223D78: addiu       $t8, $a0, 0x3
    ctx->r24 = ADD32(ctx->r4, 0X3);
    // 0x80223D7C: sb          $v1, 0x50($a1)
    MEM_B(0X50, ctx->r5) = ctx->r3;
    // 0x80223D80: sb          $v1, 0x38($a1)
    MEM_B(0X38, ctx->r5) = ctx->r3;
    // 0x80223D84: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223D88: b           L_80223D94
    // 0x80223D8C: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
        goto L_80223D94;
    // 0x80223D8C: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_80223D90:
    // 0x80223D90: sb          $zero, 0x50($a1)
    MEM_B(0X50, ctx->r5) = 0;
L_80223D94:
    // 0x80223D94: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80223D98: sllv        $t1, $t9, $t8
    ctx->r9 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x80223D9C: and         $t0, $t1, $v0
    ctx->r8 = ctx->r9 & ctx->r2;
    // 0x80223DA0: beq         $t0, $zero, L_80223DB8
    if (ctx->r8 == 0) {
        // 0x80223DA4: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_80223DB8;
    }
    // 0x80223DA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223DA8: sb          $v1, 0x6C($a1)
    MEM_B(0X6C, ctx->r5) = ctx->r3;
    // 0x80223DAC: sb          $v1, 0x54($a1)
    MEM_B(0X54, ctx->r5) = ctx->r3;
    // 0x80223DB0: b           L_80223DBC
    // 0x80223DB4: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
        goto L_80223DBC;
    // 0x80223DB4: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_80223DB8:
    // 0x80223DB8: sb          $zero, 0x6C($a1)
    MEM_B(0X6C, ctx->r5) = 0;
L_80223DBC:
    // 0x80223DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80223DC4: jr          $ra
    // 0x80223DC8: nop

    return;
    // 0x80223DC8: nop

;}
RECOMP_FUNC void D_802A1E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1EBC: jr          $ra
    // 0x802A1EC0: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    return;
    // 0x802A1EC0: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
;}
RECOMP_FUNC void D_80228EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228EE8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80228EEC: addiu       $v1, $sp, 0x68
    ctx->r3 = ADD32(ctx->r29, 0X68);
    // 0x80228EF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228EF4: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80228EF8: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x80228EFC: bne         $a0, $v1, L_80228F08
    if (ctx->r4 != ctx->r3) {
        // 0x80228F00: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80228F08;
    }
    // 0x80228F00: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80228F04: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
L_80228F08:
    // 0x80228F08: lh          $t6, 0x88($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X88);
    // 0x80228F0C: lh          $t8, 0x68($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X68);
    // 0x80228F10: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80228F14: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80228F18: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80228F1C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80228F20: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80228F24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80228F28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80228F2C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80228F30: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80228F34: lh          $t3, 0x6A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6A);
    // 0x80228F38: lh          $t1, 0x8A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X8A);
    // 0x80228F3C: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80228F40: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80228F44: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80228F48: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80228F4C: nop

    // 0x80228F50: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80228F54: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80228F58: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80228F5C: lh          $t7, 0x6C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6C);
    // 0x80228F60: lh          $t6, 0x8C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X8C);
    // 0x80228F64: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80228F68: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x80228F6C: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x80228F70: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80228F74: nop

    // 0x80228F78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80228F7C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80228F80: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80228F84: lh          $t2, 0x6E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6E);
    // 0x80228F88: lh          $t1, 0x8E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X8E);
    // 0x80228F8C: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x80228F90: andi        $t3, $t1, 0xFFFF
    ctx->r11 = ctx->r9 & 0XFFFF;
    // 0x80228F94: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x80228F98: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80228F9C: nop

    // 0x80228FA0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80228FA4: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80228FA8: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x80228FAC: lh          $t8, 0x70($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X70);
    // 0x80228FB0: lh          $t6, 0x90($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X90);
    // 0x80228FB4: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80228FB8: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80228FBC: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80228FC0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80228FC4: nop

    // 0x80228FC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80228FCC: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80228FD0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x80228FD4: lh          $t3, 0x72($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X72);
    // 0x80228FD8: lh          $t1, 0x92($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X92);
    // 0x80228FDC: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80228FE0: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80228FE4: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80228FE8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80228FEC: nop

    // 0x80228FF0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80228FF4: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80228FF8: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x80228FFC: lh          $t7, 0x74($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X74);
    // 0x80229000: lh          $t6, 0x94($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X94);
    // 0x80229004: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80229008: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x8022900C: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x80229010: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80229014: nop

    // 0x80229018: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022901C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80229020: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x80229024: lh          $t2, 0x76($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X76);
    // 0x80229028: lh          $t1, 0x96($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X96);
    // 0x8022902C: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x80229030: andi        $t3, $t1, 0xFFFF
    ctx->r11 = ctx->r9 & 0XFFFF;
    // 0x80229034: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x80229038: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8022903C: nop

    // 0x80229040: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80229044: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229048: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x8022904C: lh          $t8, 0x78($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X78);
    // 0x80229050: lh          $t6, 0x98($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X98);
    // 0x80229054: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80229058: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8022905C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80229060: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80229064: nop

    // 0x80229068: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022906C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80229070: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x80229074: lh          $t3, 0x7A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X7A);
    // 0x80229078: lh          $t1, 0x9A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X9A);
    // 0x8022907C: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80229080: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80229084: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80229088: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8022908C: nop

    // 0x80229090: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80229094: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229098: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x8022909C: lh          $t7, 0x7C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X7C);
    // 0x802290A0: lh          $t6, 0x9C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X9C);
    // 0x802290A4: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x802290A8: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x802290AC: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x802290B0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x802290B4: nop

    // 0x802290B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802290BC: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802290C0: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x802290C4: lh          $t2, 0x7E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X7E);
    // 0x802290C8: lh          $t1, 0x9E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X9E);
    // 0x802290CC: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x802290D0: andi        $t3, $t1, 0xFFFF
    ctx->r11 = ctx->r9 & 0XFFFF;
    // 0x802290D4: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x802290D8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x802290DC: nop

    // 0x802290E0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802290E4: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802290E8: swc1        $f18, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f18.u32l;
    // 0x802290EC: lh          $t8, 0x80($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X80);
    // 0x802290F0: lh          $t6, 0xA0($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XA0);
    // 0x802290F4: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x802290F8: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x802290FC: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80229100: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80229104: nop

    // 0x80229108: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022910C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80229110: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
    // 0x80229114: lh          $t3, 0x82($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X82);
    // 0x80229118: lh          $t1, 0xA2($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XA2);
    // 0x8022911C: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80229120: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80229124: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80229128: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8022912C: nop

    // 0x80229130: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80229134: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229138: swc1        $f18, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f18.u32l;
    // 0x8022913C: lh          $t7, 0x84($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X84);
    // 0x80229140: lh          $t6, 0xA4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XA4);
    // 0x80229144: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80229148: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x8022914C: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x80229150: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80229154: nop

    // 0x80229158: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022915C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80229160: swc1        $f8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f8.u32l;
    // 0x80229164: lh          $t2, 0x86($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X86);
    // 0x80229168: lh          $t1, 0xA6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XA6);
    // 0x8022916C: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x80229170: andi        $t3, $t1, 0xFFFF
    ctx->r11 = ctx->r9 & 0XFFFF;
    // 0x80229174: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x80229178: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8022917C: nop

    // 0x80229180: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80229184: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229188: bne         $v0, $v1, L_80229198
    if (ctx->r2 != ctx->r3) {
        // 0x8022918C: swc1        $f18, 0x3C($v0)
        MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
            goto L_80229198;
    }
    // 0x8022918C: swc1        $f18, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
    // 0x80229190: jal         0x80228DE0
    // 0x80229194: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80229194: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
L_80229198:
    // 0x80229198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022919C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802291A0: jr          $ra
    // 0x802291A4: nop

    return;
    // 0x802291A4: nop

;}

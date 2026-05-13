#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802A202C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A20AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A20B0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802A20B4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802A20B8: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x802A20BC: swc1        $f14, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f14.u32l;
    // 0x802A20C0: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802A20C4: jr          $ra
    // 0x802A20C8: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802A20C8: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802A698C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6A0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6A10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6A14: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x802A6A18: sh          $zero, 0x348($a0)
    MEM_H(0X348, ctx->r4) = 0;
    // 0x802A6A1C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A6A20: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x802A6A24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802A6A28: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802A6A2C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A6A30: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802A6A34: jalr        $t9
    // 0x802A6A38: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802A6A38: nop

    after_0:
    // 0x802A6A3C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802A6A40: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A6A44: lw          $v0, 0x308($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X308);
    // 0x802A6A48: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x802A6A4C: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802A6A50: addu        $a0, $t7, $a2
    ctx->r4 = ADD32(ctx->r15, ctx->r6);
    // 0x802A6A54: jalr        $t9
    // 0x802A6A58: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802A6A58: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_1:
    // 0x802A6A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6A64: jr          $ra
    // 0x802A6A68: nop

    return;
    // 0x802A6A68: nop

;}
RECOMP_FUNC void D_80223454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223454: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80223458: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022345C: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x80223460: beq         $a1, $zero, L_8022346C
    if (ctx->r5 == 0) {
        // 0x80223464: and         $v0, $v1, $a2
        ctx->r2 = ctx->r3 & ctx->r6;
            goto L_8022346C;
    }
    // 0x80223464: and         $v0, $v1, $a2
    ctx->r2 = ctx->r3 & ctx->r6;
    // 0x80223468: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
L_8022346C:
    // 0x8022346C: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x80223470: bne         $a0, $at, L_802234B8
    if (ctx->r4 != ctx->r1) {
        // 0x80223474: nop
    
            goto L_802234B8;
    }
    // 0x80223474: nop

    // 0x80223478: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
    // 0x8022347C: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x80223480: bne         $a0, $at, L_8022348C
    if (ctx->r4 != ctx->r1) {
        // 0x80223484: lui         $a2, 0x0
        ctx->r6 = S32(0X0 << 16);
            goto L_8022348C;
    }
    // 0x80223484: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80223488: beq         $v0, $zero, L_80223570
    if (ctx->r2 == 0) {
        // 0x8022348C: addiu       $a2, $a2, 0x0
        ctx->r6 = ADD32(ctx->r6, 0X0);
            goto L_80223570;
    }
L_8022348C:
    // 0x8022348C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80223490: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80223494: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80223498: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8022349C: lui         $at, 0xBB00
    ctx->r1 = S32(0XBB00 << 16);
    // 0x802234A0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802234A4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x802234A8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x802234AC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802234B0: jr          $ra
    // 0x802234B4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    return;
    // 0x802234B4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_802234B8:
    // 0x802234B8: beq         $a1, $zero, L_8022351C
    if (ctx->r5 == 0) {
        // 0x802234BC: lui         $t0, 0x0
        ctx->r8 = S32(0X0 << 16);
            goto L_8022351C;
    }
    // 0x802234BC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802234C0: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x802234C4: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x802234C8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802234CC: lw          $t1, 0x2C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X2C);
    // 0x802234D0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802234D4: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x802234D8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x802234DC: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x802234E0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x802234E4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802234E8: lw          $v0, 0x4($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X4);
    // 0x802234EC: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x802234F0: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x802234F4: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x802234F8: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x802234FC: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80223500: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80223504: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x80223508: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x8022350C: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80223510: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80223514: jr          $ra
    // 0x80223518: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    return;
    // 0x80223518: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
L_8022351C:
    // 0x8022351C: beq         $v0, $zero, L_80223570
    if (ctx->r2 == 0) {
        // 0x80223520: lui         $t3, 0x0
        ctx->r11 = S32(0X0 << 16);
            goto L_80223570;
    }
    // 0x80223520: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80223524: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80223528: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x8022352C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80223530: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x80223534: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80223538: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8022353C: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x80223540: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x80223544: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80223548: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8022354C: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
    // 0x80223550: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80223554: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80223558: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8022355C: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x80223560: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x80223564: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80223568: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8022356C: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
L_80223570:
    // 0x80223570: jr          $ra
    // 0x80223574: nop

    return;
    // 0x80223574: nop

;}
RECOMP_FUNC void D_8023E650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E650: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8023E654: jr          $ra
    // 0x8023E658: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x8023E658: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_8022C534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C534: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022C538: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022C53C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C544: bne         $t6, $zero, L_8022C560
    if (ctx->r14 != 0) {
        // 0x8022C548: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8022C560;
    }
    // 0x8022C548: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022C54C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C550: jal         0x80231A24
    // 0x8022C554: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C554: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022C558: b           L_8022C5C4
    // 0x8022C55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022C5C4;
    // 0x8022C55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C560:
    // 0x8022C560: jal         0x8022D560
    // 0x8022C564: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    static_3_8022D560(rdram, ctx);
        goto after_1;
    // 0x8022C564: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_1:
    // 0x8022C568: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022C56C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8022C570: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022C574: bne         $t7, $zero, L_8022C590
    if (ctx->r15 != 0) {
        // 0x8022C578: nop
    
            goto L_8022C590;
    }
    // 0x8022C578: nop

    // 0x8022C57C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022C580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022C584: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    // 0x8022C588: jal         0x80236B80
    // 0x8022C58C: lw          $a1, 0x54($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X54);
    static_3_80236B80(rdram, ctx);
        goto after_2;
    // 0x8022C58C: lw          $a1, 0x54($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X54);
    after_2:
L_8022C590:
    // 0x8022C590: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022C594: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8022C598: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8022C59C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C5A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8022C5A4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8022C5A8: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8022C5AC: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022C5B0: beql        $t0, $zero, L_8022C5C4
    if (ctx->r8 == 0) {
        // 0x8022C5B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C5C4;
    }
    goto skip_0;
    // 0x8022C5B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022C5B8: jal         0x8022C6A4
    // 0x8022C5BC: nop

    static_3_8022C6A4(rdram, ctx);
        goto after_3;
    // 0x8022C5BC: nop

    after_3:
    // 0x8022C5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C5C4:
    // 0x8022C5C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022C5C8: jr          $ra
    // 0x8022C5CC: nop

    return;
    // 0x8022C5CC: nop

;}
RECOMP_FUNC void D_8021F43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F43C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021F440: lh          $t6, 0x0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X0);
    // 0x8021F444: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x8021F448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F44C: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021F450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F454: beq         $at, $zero, L_8021F478
    if (ctx->r1 == 0) {
        // 0x8021F458: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8021F478;
    }
    // 0x8021F458: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021F45C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021F460: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021F464: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8021F468: jal         0x80231A24
    // 0x8021F46C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021F46C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8021F470: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F474: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_8021F478:
    // 0x8021F478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F47C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F480: sh          $a2, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r6;
    // 0x8021F484: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F488: sh          $v0, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r2;
    // 0x8021F48C: jr          $ra
    // 0x8021F490: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8021F490: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802A200C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A208C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A2090: jr          $ra
    // 0x802A2094: swc1        $f12, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802A2094: swc1        $f12, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_80200958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200958: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8020095C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80200960: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80200964: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80200968: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8020096C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80200970: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x80200974: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x80200978: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8020097C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80200980: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80200984: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80200988: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x8020098C: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x80200990: lbu         $s6, 0x10($a1)
    ctx->r22 = MEM_BU(ctx->r5, 0X10);
    // 0x80200994: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80200998: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020099C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x802009A0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x802009A4: lhu         $s7, 0x0($t9)
    ctx->r23 = MEM_HU(ctx->r25, 0X0);
    // 0x802009A8: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x802009AC: lw          $s1, 0x4($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X4);
    // 0x802009B0: lw          $s2, 0x8($a1)
    ctx->r18 = MEM_W(ctx->r5, 0X8);
    // 0x802009B4: blez        $s6, L_80200AA4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x802009B8: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80200AA4;
    }
    // 0x802009B8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x802009BC: addiu       $s5, $sp, 0x60
    ctx->r21 = ADD32(ctx->r29, 0X60);
    // 0x802009C0: lw          $t0, 0xC($s3)
    ctx->r8 = MEM_W(ctx->r19, 0XC);
L_802009C4:
    // 0x802009C4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x802009C8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x802009CC: addu        $t1, $t0, $s4
    ctx->r9 = ADD32(ctx->r8, ctx->r20);
    // 0x802009D0: jal         0x802116AC
    // 0x802009D4: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    static_3_802116AC(rdram, ctx);
        goto after_0;
    // 0x802009D4: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    after_0:
    // 0x802009D8: lbu         $v0, 0x11($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X11);
    // 0x802009DC: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x802009E0: beql        $t2, $zero, L_80200A14
    if (ctx->r10 == 0) {
        // 0x802009E4: andi        $t3, $v0, 0x2
        ctx->r11 = ctx->r2 & 0X2;
            goto L_80200A14;
    }
    goto skip_0;
    // 0x802009E4: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    skip_0:
    // 0x802009E8: beq         $s0, $zero, L_80200A10
    if (ctx->r16 == 0) {
        // 0x802009EC: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80200A10;
    }
    // 0x802009EC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802009F0: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802009F4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802009F8: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x802009FC: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x80200A00: jal         0x8022A918
    // 0x80200A04: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A918(rdram, ctx);
        goto after_1;
    // 0x80200A04: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80200A08: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80200A0C: lbu         $v0, 0x11($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X11);
L_80200A10:
    // 0x80200A10: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
L_80200A14:
    // 0x80200A14: beql        $t3, $zero, L_80200A5C
    if (ctx->r11 == 0) {
        // 0x80200A18: andi        $t4, $v0, 0x4
        ctx->r12 = ctx->r2 & 0X4;
            goto L_80200A5C;
    }
    goto skip_1;
    // 0x80200A18: andi        $t4, $v0, 0x4
    ctx->r12 = ctx->r2 & 0X4;
    skip_1:
    // 0x80200A1C: beq         $s1, $zero, L_80200A58
    if (ctx->r17 == 0) {
        // 0x80200A20: lwc1        $f6, 0x90($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
            goto L_80200A58;
    }
    // 0x80200A20: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80200A24: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80200A28: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80200A2C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80200A30: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80200A34: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80200A38: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x80200A3C: lwc1        $f18, -0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, -0X8);
    // 0x80200A40: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80200A44: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x80200A48: lwc1        $f8, -0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, -0X4);
    // 0x80200A4C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80200A50: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x80200A54: lbu         $v0, 0x11($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X11);
L_80200A58:
    // 0x80200A58: andi        $t4, $v0, 0x4
    ctx->r12 = ctx->r2 & 0X4;
L_80200A5C:
    // 0x80200A5C: beql        $t4, $zero, L_80200A84
    if (ctx->r12 == 0) {
        // 0x80200A60: lw          $t5, 0xC($s3)
        ctx->r13 = MEM_W(ctx->r19, 0XC);
            goto L_80200A84;
    }
    goto skip_2;
    // 0x80200A60: lw          $t5, 0xC($s3)
    ctx->r13 = MEM_W(ctx->r19, 0XC);
    skip_2:
    // 0x80200A64: beq         $s2, $zero, L_80200A80
    if (ctx->r18 == 0) {
        // 0x80200A68: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80200A80;
    }
    // 0x80200A68: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80200A6C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x80200A70: lw          $a2, 0x4($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X4);
    // 0x80200A74: jal         0x8022A210
    // 0x80200A78: lw          $a3, 0x8($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X8);
    static_3_8022A210(rdram, ctx);
        goto after_2;
    // 0x80200A78: lw          $a3, 0x8($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X8);
    after_2:
    // 0x80200A7C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_80200A80:
    // 0x80200A80: lw          $t5, 0xC($s3)
    ctx->r13 = MEM_W(ctx->r19, 0XC);
L_80200A84:
    // 0x80200A84: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x80200A88: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80200A8C: addu        $t7, $t5, $s4
    ctx->r15 = ADD32(ctx->r13, ctx->r20);
    // 0x80200A90: jal         0x8021B4B0
    // 0x80200A94: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    static_3_8021B4B0(rdram, ctx);
        goto after_3;
    // 0x80200A94: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    after_3:
    // 0x80200A98: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80200A9C: bnel        $s4, $s6, L_802009C4
    if (ctx->r20 != ctx->r22) {
        // 0x80200AA0: lw          $t0, 0xC($s3)
        ctx->r8 = MEM_W(ctx->r19, 0XC);
            goto L_802009C4;
    }
    goto skip_3;
    // 0x80200AA0: lw          $t0, 0xC($s3)
    ctx->r8 = MEM_W(ctx->r19, 0XC);
    skip_3:
L_80200AA4:
    // 0x80200AA4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80200AA8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80200AAC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80200AB0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80200AB4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80200AB8: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80200ABC: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80200AC0: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80200AC4: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x80200AC8: jr          $ra
    // 0x80200ACC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80200ACC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void D_802D7ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D7F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D7F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D7F60: bne         $a0, $zero, L_802D7F78
    if (ctx->r4 != 0) {
        // 0x802D7F64: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802D7F78;
    }
    // 0x802D7F64: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D7F68: jal         0x802C67EC
    // 0x802D7F6C: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D7F6C: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    after_0:
    // 0x802D7F70: beq         $v0, $zero, L_802D7FB0
    if (ctx->r2 == 0) {
        // 0x802D7F74: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802D7FB0;
    }
    // 0x802D7F74: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802D7F78:
    // 0x802D7F78: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D7F7C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D7F80: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D7F84: sw          $t6, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r14;
    // 0x802D7F88: sw          $zero, 0x14($a1)
    MEM_W(0X14, ctx->r5) = 0;
    // 0x802D7F8C: sw          $zero, 0x24($a1)
    MEM_W(0X24, ctx->r5) = 0;
    // 0x802D7F90: sb          $zero, 0x28($a1)
    MEM_B(0X28, ctx->r5) = 0;
    // 0x802D7F94: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x802D7F98: swc1        $f0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f0.u32l;
    // 0x802D7F9C: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x802D7FA0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802D7FA4: jal         0x80224CA8
    // 0x802D7FA8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802D7FA8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
    // 0x802D7FAC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802D7FB0:
    // 0x802D7FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D7FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D7FB8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802D7FBC: jr          $ra
    // 0x802D7FC0: nop

    return;
    // 0x802D7FC0: nop

;}
RECOMP_FUNC void D_802A3490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A3514: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A3518: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802A351C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A3520: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802A3524: swc1        $f12, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f12.u32l;
    // 0x802A3528: swc1        $f14, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f14.u32l;
    // 0x802A352C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A3530: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802A3534: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802A3538: swc1        $f4, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f4.u32l;
    // 0x802A353C: jal         0x802D2880
    // 0x802A3540: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    static_3_802D2880(rdram, ctx);
        goto after_0;
    // 0x802A3540: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x802A3544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A3548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A354C: jr          $ra
    // 0x802A3550: nop

    return;
    // 0x802A3550: nop

;}
RECOMP_FUNC void D_80245AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245AC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245ACC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80245AD0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80245AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80245AD8: jal         0x80236B80
    // 0x80245ADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_0;
    // 0x80245ADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80245AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245AE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80245AE8: jr          $ra
    // 0x80245AEC: nop

    return;
    // 0x80245AEC: nop

;}
RECOMP_FUNC void D_80222A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222A58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80222A5C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80222A60: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80222A64: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80222A68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80222A6C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80222A70: sll         $t7, $a0, 5
    ctx->r15 = S32(ctx->r4 << 5);
    // 0x80222A74: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80222A78: jal         0x802228FC
    // 0x80222A7C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    static_3_802228FC(rdram, ctx);
        goto after_0;
    // 0x80222A7C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x80222A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80222A84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80222A88: jr          $ra
    // 0x80222A8C: nop

    return;
    // 0x80222A8C: nop

;}
RECOMP_FUNC void D_802A30B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3134: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802A3138: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A313C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802A3140: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802A3144: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x802A3148: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x802A314C: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x802A3150: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x802A3154: bne         $v0, $at, L_802A33F0
    if (ctx->r2 != ctx->r1) {
        // 0x802A3158: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_802A33F0;
    }
    // 0x802A3158: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A315C: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802A3160: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3164: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3168: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802A316C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802A3170: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A3174: lwc1        $f18, 0xEC($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XEC);
    // 0x802A3178: lwc1        $f4, 0xE0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x802A317C: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802A3180: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802A3184: mul.s       $f0, $f14, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x802A3188: lwc1        $f4, 0xF0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XF0);
    // 0x802A318C: lwc1        $f6, 0xF8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XF8);
    // 0x802A3190: swc1        $f10, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f10.u32l;
    // 0x802A3194: lwc1        $f10, 0xF4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XF4);
    // 0x802A3198: sub.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x802A319C: sub.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802A31A0: mul.s       $f2, $f14, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x802A31A4: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x802A31A8: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x802A31AC: lwc1        $f8, 0xFC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XFC);
    // 0x802A31B0: mul.s       $f12, $f14, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x802A31B4: sub.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x802A31B8: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x802A31BC: lwc1        $f18, 0x100($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X100);
    // 0x802A31C0: sub.s       $f6, $f12, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x802A31C4: jal         0x8023499C
    // 0x802A31C8: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_0;
    // 0x802A31C8: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x802A31CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A31D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A31D4: lwc1        $f4, 0x104($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X104);
    // 0x802A31D8: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802A31DC: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802A31E0: jal         0x8023499C
    // 0x802A31E4: swc1        $f18, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->f18.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_1;
    // 0x802A31E4: swc1        $f18, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->f18.u32l;
    after_1:
    // 0x802A31E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A31EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A31F0: lwc1        $f6, 0x108($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X108);
    // 0x802A31F4: sub.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802A31F8: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802A31FC: jal         0x8023499C
    // 0x802A3200: swc1        $f10, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f10.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_2;
    // 0x802A3200: swc1        $f10, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x802A3204: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802A3208: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A320C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A3210: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A3214: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802A3218: lwc1        $f2, 0x104($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X104);
    // 0x802A321C: sub.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802A3220: lwc1        $f18, 0x10C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802A3224: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3228: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A322C: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x802A3230: bc1f        L_802A3248
    if (!c1cs) {
        // 0x802A3234: swc1        $f4, 0x10C($s0)
        MEM_W(0X10C, ctx->r16) = ctx->f4.u32l;
            goto L_802A3248;
    }
    // 0x802A3234: swc1        $f4, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f4.u32l;
    // 0x802A3238: swc1        $f12, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->f12.u32l;
    // 0x802A323C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3240: b           L_802A3268
    // 0x802A3244: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
        goto L_802A3268;
    // 0x802A3244: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
L_802A3248:
    // 0x802A3248: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A324C: mul.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x802A3250: sub.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x802A3254: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802A3258: nop

    // 0x802A325C: bc1fl       L_802A326C
    if (!c1cs) {
        // 0x802A3260: lwc1        $f12, 0x4C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_802A326C;
    }
    goto skip_0;
    // 0x802A3260: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x802A3264: swc1        $f0, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->f0.u32l;
L_802A3268:
    // 0x802A3268: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
L_802A326C:
    // 0x802A326C: lwc1        $f2, 0x108($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X108);
    // 0x802A3270: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A3274: nop

    // 0x802A3278: bc1f        L_802A3288
    if (!c1cs) {
        // 0x802A327C: nop
    
            goto L_802A3288;
    }
    // 0x802A327C: nop

    // 0x802A3280: b           L_802A32A4
    // 0x802A3284: swc1        $f12, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f12.u32l;
        goto L_802A32A4;
    // 0x802A3284: swc1        $f12, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f12.u32l;
L_802A3288:
    // 0x802A3288: mul.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x802A328C: sub.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x802A3290: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802A3294: nop

    // 0x802A3298: bc1fl       L_802A32A8
    if (!c1cs) {
        // 0x802A329C: lwc1        $f12, 0x50($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
            goto L_802A32A8;
    }
    goto skip_1;
    // 0x802A329C: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    skip_1:
    // 0x802A32A0: swc1        $f0, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f0.u32l;
L_802A32A4:
    // 0x802A32A4: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
L_802A32A8:
    // 0x802A32A8: lwc1        $f0, 0x10C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802A32AC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802A32B0: nop

    // 0x802A32B4: bc1f        L_802A32C8
    if (!c1cs) {
        // 0x802A32B8: nop
    
            goto L_802A32C8;
    }
    // 0x802A32B8: nop

    // 0x802A32BC: swc1        $f12, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f12.u32l;
    // 0x802A32C0: b           L_802A32E8
    // 0x802A32C4: lwc1        $f0, 0x10C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10C);
        goto L_802A32E8;
    // 0x802A32C4: lwc1        $f0, 0x10C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10C);
L_802A32C8:
    // 0x802A32C8: mul.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x802A32CC: sub.s       $f2, $f12, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x802A32D0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802A32D4: nop

    // 0x802A32D8: bc1fl       L_802A32EC
    if (!c1cs) {
        // 0x802A32DC: lwc1        $f4, 0x104($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X104);
            goto L_802A32EC;
    }
    goto skip_2;
    // 0x802A32DC: lwc1        $f4, 0x104($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X104);
    skip_2:
    // 0x802A32E0: swc1        $f2, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f2.u32l;
    // 0x802A32E4: lwc1        $f0, 0x10C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10C);
L_802A32E8:
    // 0x802A32E8: lwc1        $f4, 0x104($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X104);
L_802A32EC:
    // 0x802A32EC: lwc1        $f6, 0xF8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802A32F0: lwc1        $f18, 0xFC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XFC);
    // 0x802A32F4: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802A32F8: lwc1        $f4, 0x108($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X108);
    // 0x802A32FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802A3300: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802A3304: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802A3308: swc1        $f8, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f8.u32l;
    // 0x802A330C: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802A3310: lwc1        $f8, 0x100($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X100);
    // 0x802A3314: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x802A3318: lwc1        $f6, 0xEC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x802A331C: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802A3320: swc1        $f10, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f10.u32l;
    // 0x802A3324: lwc1        $f10, 0xF8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802A3328: swc1        $f18, 0x100($s0)
    MEM_W(0X100, ctx->r16) = ctx->f18.u32l;
    // 0x802A332C: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802A3330: lwc1        $f10, 0xFC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XFC);
    // 0x802A3334: lwc1        $f18, 0xF0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XF0);
    // 0x802A3338: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802A333C: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802A3340: lwc1        $f10, 0x100($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X100);
    // 0x802A3344: swc1        $f4, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f4.u32l;
    // 0x802A3348: lwc1        $f4, 0xF4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x802A334C: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x802A3350: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802A3354: swc1        $f8, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f8.u32l;
    // 0x802A3358: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x802A335C: swc1        $f6, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f6.u32l;
    // 0x802A3360: jal         0x8022970C
    // 0x802A3364: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802A3364: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_3:
    // 0x802A3368: lwc1        $f8, 0xE0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x802A336C: lwc1        $f10, 0xEC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x802A3370: lwc1        $f18, 0xE4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x802A3374: lwc1        $f6, 0xF0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XF0);
    // 0x802A3378: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802A337C: lwc1        $f10, 0xE8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x802A3380: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x802A3384: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x802A3388: swc1        $f4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f4.u32l;
    // 0x802A338C: lwc1        $f4, 0xF4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x802A3390: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A3394: swc1        $f8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f8.u32l;
    // 0x802A3398: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802A339C: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
    // 0x802A33A0: jal         0x802D01D4
    // 0x802A33A4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x802A33A4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x802A33A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A33AC: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A33B0: lwc1        $f6, 0x100($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X100);
    // 0x802A33B4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802A33B8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802A33BC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802A33C0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802A33C4: jal         0x802D01D4
    // 0x802A33C8: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802A33C8: nop

    after_5:
    // 0x802A33CC: lwc1        $f10, 0xF8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802A33D0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802A33D4: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802A33D8: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802A33DC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802A33E0: jal         0x802D01D4
    // 0x802A33E4: nop

    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x802A33E4: nop

    after_6:
    // 0x802A33E8: b           L_802A3500
    // 0x802A33EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802A3500;
    // 0x802A33EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802A33F0:
    // 0x802A33F0: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x802A33F4: bne         $v0, $at, L_802A34FC
    if (ctx->r2 != ctx->r1) {
        // 0x802A33F8: lui         $at, 0x42F0
        ctx->r1 = S32(0X42F0 << 16);
            goto L_802A34FC;
    }
    // 0x802A33F8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x802A33FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A3400: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802A3404: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x802A3408: nop

    // 0x802A340C: bc1fl       L_802A34EC
    if (!c1cs) {
        // 0x802A3410: lwc1        $f10, 0x10($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
            goto L_802A34EC;
    }
    goto skip_3;
    // 0x802A3410: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    skip_3:
    // 0x802A3414: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802A3418: jal         0x8022970C
    // 0x802A341C: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    func_8022970C(rdram, ctx);
        goto after_7;
    // 0x802A341C: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    after_7:
    // 0x802A3420: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802A3424: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x802A3428: jal         0x802D01D4
    // 0x802A342C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_8;
    // 0x802A342C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_8:
    // 0x802A3430: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A3434: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x802A3438: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802A343C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x802A3440: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A3444: lwc1        $f6, 0xE0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x802A3448: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A344C: sub.s       $f0, $f14, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x802A3450: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802A3454: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802A3458: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    // 0x802A345C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3460: lwc1        $f4, 0xE0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x802A3464: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A3468: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802A346C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A3470: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3474: sub.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x802A3478: swc1        $f18, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f18.u32l;
    // 0x802A347C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3480: mul.s       $f4, $f14, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x802A3484: jal         0x8022AA40
    // 0x802A3488: sub.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f4.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_9;
    // 0x802A3488: sub.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f4.fl;
    after_9:
    // 0x802A348C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A3490: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802A3494: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x802A3498: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A349C: sub.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x802A34A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A34A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A34A8: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802A34AC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A34B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A34B4: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802A34B8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A34BC: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802A34C0: jal         0x80300424
    // 0x802A34C4: add.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f6.fl;
    static_3_80300424(rdram, ctx);
        goto after_10;
    // 0x802A34C4: add.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f6.fl;
    after_10:
    // 0x802A34C8: sub.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x802A34CC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802A34D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A34D4: lwc1        $f18, 0xE8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x802A34D8: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802A34DC: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x802A34E0: b           L_802A34FC
    // 0x802A34E4: swc1        $f6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f6.u32l;
        goto L_802A34FC;
    // 0x802A34E4: swc1        $f6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f6.u32l;
    // 0x802A34E8: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
L_802A34EC:
    // 0x802A34EC: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802A34F0: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802A34F4: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802A34F8: swc1        $f18, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f18.u32l;
L_802A34FC:
    // 0x802A34FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802A3500:
    // 0x802A3500: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802A3504: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802A3508: jr          $ra
    // 0x802A350C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x802A350C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_802E9C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9CB8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E9CBC: jr          $ra
    // 0x802E9CC0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802E9CC0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80284954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802849D4: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x802849D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802849DC: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x802849E0: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x802849E4: lw          $t7, 0x78($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X78);
    // 0x802849E8: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x802849EC: beql        $t8, $zero, L_802853EC
    if (ctx->r24 == 0) {
        // 0x802849F0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802853EC;
    }
    goto skip_0;
    // 0x802849F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802849F4: jal         0x8022331C
    // 0x802849F8: nop

    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802849F8: nop

    after_0:
    // 0x802849FC: lw          $t9, 0xD8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD8);
    // 0x80284A00: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x80284A04: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x80284A08: jal         0x80228DE0
    // 0x80284A0C: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80284A0C: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    after_1:
    // 0x80284A10: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80284A14: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80284A18: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80284A1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80284A20: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80284A24: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80284A28: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80284A2C: mul.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80284A30: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80284A34: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80284A38: nop

    // 0x80284A3C: bc1fl       L_80284A5C
    if (!c1cs) {
        // 0x80284A40: c.lt.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
            goto L_80284A5C;
    }
    goto skip_1;
    // 0x80284A40: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    skip_1:
    // 0x80284A44: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
L_80284A48:
    // 0x80284A48: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80284A4C: nop

    // 0x80284A50: bc1tl       L_80284A48
    if (c1cs) {
        // 0x80284A54: sub.s       $f2, $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80284A48;
    }
    goto skip_2;
    // 0x80284A54: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
    skip_2:
    // 0x80284A58: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
L_80284A5C:
    // 0x80284A5C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80284A60: bc1f        L_80284A7C
    if (!c1cs) {
        // 0x80284A64: nop
    
            goto L_80284A7C;
    }
    // 0x80284A64: nop

    // 0x80284A68: add.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
L_80284A6C:
    // 0x80284A6C: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80284A70: nop

    // 0x80284A74: bc1tl       L_80284A6C
    if (c1cs) {
        // 0x80284A78: add.s       $f2, $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
            goto L_80284A6C;
    }
    goto skip_3;
    // 0x80284A78: add.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
    skip_3:
L_80284A7C:
    // 0x80284A7C: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x80284A80: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80284A84: bne         $t1, $at, L_80284A94
    if (ctx->r9 != ctx->r1) {
        // 0x80284A88: nop
    
            goto L_80284A94;
    }
    // 0x80284A88: nop

    // 0x80284A8C: b           L_80284A94
    // 0x80284A90: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80284A94;
    // 0x80284A90: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80284A94:
    // 0x80284A94: bne         $v1, $zero, L_80284CB8
    if (ctx->r3 != 0) {
        // 0x80284A98: lw          $t9, 0xD8($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XD8);
            goto L_80284CB8;
    }
    // 0x80284A98: lw          $t9, 0xD8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD8);
    // 0x80284A9C: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    // 0x80284AA0: jal         0x80223468
    // 0x80284AA4: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    static_3_80223468(rdram, ctx);
        goto after_2;
    // 0x80284AA4: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x80284AA8: jal         0x8021F4E4
    // 0x80284AAC: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_3;
    // 0x80284AAC: nop

    after_3:
    // 0x80284AB0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80284AB4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80284AB8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80284ABC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80284AC0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80284AC4: lwc1        $f2, 0xD4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80284AC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80284ACC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80284AD0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80284AD4: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80284AD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80284ADC: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80284AE0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80284AE4: addiu       $t7, $zero, 0xE1
    ctx->r15 = ADD32(0, 0XE1);
    // 0x80284AE8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80284AEC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80284AF0: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80284AF4: addiu       $a1, $zero, 0xC3
    ctx->r5 = ADD32(0, 0XC3);
    // 0x80284AF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80284AFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80284B00: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80284B04: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80284B08: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80284B0C: div.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80284B10: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80284B14: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80284B18: nop

    // 0x80284B1C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80284B20: addiu       $a3, $v0, 0x1D00
    ctx->r7 = ADD32(ctx->r2, 0X1D00);
    // 0x80284B24: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x80284B28: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80284B2C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80284B30: jal         0x8021F35C
    // 0x80284B34: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    static_3_8021F35C(rdram, ctx);
        goto after_4;
    // 0x80284B34: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_4:
    // 0x80284B38: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80284B3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80284B40: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80284B44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80284B48: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80284B4C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80284B50: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80284B54: addiu       $a3, $a3, 0x2700
    ctx->r7 = ADD32(ctx->r7, 0X2700);
    // 0x80284B58: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x80284B5C: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80284B60: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80284B64: addiu       $t3, $zero, 0xE1
    ctx->r11 = ADD32(0, 0XE1);
    // 0x80284B68: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80284B6C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80284B70: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80284B74: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80284B78: addiu       $a1, $zero, 0xC3
    ctx->r5 = ADD32(0, 0XC3);
    // 0x80284B7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80284B80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80284B84: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80284B88: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80284B8C: jal         0x8021F35C
    // 0x80284B90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    static_3_8021F35C(rdram, ctx);
        goto after_5;
    // 0x80284B90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_5:
    // 0x80284B94: addiu       $t4, $zero, 0x100
    ctx->r12 = ADD32(0, 0X100);
    // 0x80284B98: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80284B9C: addiu       $t6, $zero, 0xE1
    ctx->r14 = ADD32(0, 0XE1);
    // 0x80284BA0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80284BA4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80284BA8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80284BAC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80284BB0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80284BB4: addiu       $a1, $zero, 0xC9
    ctx->r5 = ADD32(0, 0XC9);
    // 0x80284BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80284BBC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80284BC0: jal         0x8021F35C
    // 0x80284BC4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_6;
    // 0x80284BC4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_6:
    // 0x80284BC8: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x80284BCC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80284BD0: addiu       $t9, $zero, 0xE1
    ctx->r25 = ADD32(0, 0XE1);
    // 0x80284BD4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80284BD8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80284BDC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80284BE0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80284BE4: addiu       $a1, $zero, 0xC9
    ctx->r5 = ADD32(0, 0XC9);
    // 0x80284BE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80284BEC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80284BF0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80284BF4: jal         0x8021F35C
    // 0x80284BF8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_7;
    // 0x80284BF8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_7:
    // 0x80284BFC: jal         0x8021FCD0
    // 0x80284C00: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_8;
    // 0x80284C00: nop

    after_8:
    // 0x80284C04: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x80284C08: jal         0x8023413C
    // 0x80284C0C: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    static_3_8023413C(rdram, ctx);
        goto after_9;
    // 0x80284C0C: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    after_9:
    // 0x80284C10: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x80284C14: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80284C18: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80284C1C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80284C20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80284C24: lw          $t2, 0x6FBC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X6FBC);
    // 0x80284C28: beql        $t2, $zero, L_80284C6C
    if (ctx->r10 == 0) {
        // 0x80284C2C: mov.s       $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
            goto L_80284C6C;
    }
    goto skip_4;
    // 0x80284C2C: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
    skip_4:
    // 0x80284C30: jal         0x802AEE54
    // 0x80284C34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_10;
    // 0x80284C34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80284C38: lw          $t3, 0xD8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD8);
    // 0x80284C3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80284C40: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80284C44: jal         0x803192A0
    // 0x80284C48: lw          $a1, 0x6FBC($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X6FBC);
    static_3_803192A0(rdram, ctx);
        goto after_11;
    // 0x80284C48: lw          $a1, 0x6FBC($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X6FBC);
    after_11:
    // 0x80284C4C: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x80284C50: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80284C54: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80284C58: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80284C5C: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x80284C60: b           L_80284C6C
    // 0x80284C64: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
        goto L_80284C6C;
    // 0x80284C64: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80284C68: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
L_80284C6C:
    // 0x80284C6C: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
    // 0x80284C70: lw          $t6, 0x6F00($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6F00);
    // 0x80284C74: beq         $t6, $zero, L_80284CB0
    if (ctx->r14 == 0) {
        // 0x80284C78: nop
    
            goto L_80284CB0;
    }
    // 0x80284C78: nop

    // 0x80284C7C: jal         0x802AEE54
    // 0x80284C80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_12;
    // 0x80284C80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80284C84: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x80284C88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80284C8C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80284C90: jal         0x803192A0
    // 0x80284C94: lw          $a1, 0x6F00($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X6F00);
    static_3_803192A0(rdram, ctx);
        goto after_13;
    // 0x80284C94: lw          $a1, 0x6F00($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X6F00);
    after_13:
    // 0x80284C98: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80284C9C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80284CA0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80284CA4: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x80284CA8: b           L_80284DD8
    // 0x80284CAC: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
        goto L_80284DD8;
    // 0x80284CAC: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
L_80284CB0:
    // 0x80284CB0: b           L_80284DD8
    // 0x80284CB4: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
        goto L_80284DD8;
    // 0x80284CB4: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
L_80284CB8:
    // 0x80284CB8: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80284CBC: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    // 0x80284CC0: jal         0x802AEE54
    // 0x80284CC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_14;
    // 0x80284CC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x80284CC8: jal         0x80317E10
    // 0x80284CCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_15;
    // 0x80284CCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_15:
    // 0x80284CD0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80284CD4: beq         $v0, $zero, L_80284D1C
    if (ctx->r2 == 0) {
        // 0x80284CD8: lwc1        $f2, 0xD4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
            goto L_80284D1C;
    }
    // 0x80284CD8: lwc1        $f2, 0xD4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80284CDC: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x80284CE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80284CE4: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80284CE8: jal         0x802AEE54
    // 0x80284CEC: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    static_3_802AEE54(rdram, ctx);
        goto after_16;
    // 0x80284CEC: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    after_16:
    // 0x80284CF0: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    // 0x80284CF4: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80284CF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80284CFC: jal         0x802AEE54
    // 0x80284D00: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_17;
    // 0x80284D00: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    after_17:
    // 0x80284D04: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80284D08: jal         0x803192A0
    // 0x80284D0C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_803192A0(rdram, ctx);
        goto after_18;
    // 0x80284D0C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_18:
    // 0x80284D10: lwc1        $f2, 0xD4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80284D14: b           L_80284D20
    // 0x80284D18: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_80284D20;
    // 0x80284D18: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_80284D1C:
    // 0x80284D1C: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
L_80284D20:
    // 0x80284D20: lw          $t3, 0xD8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD8);
    // 0x80284D24: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
    // 0x80284D28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80284D2C: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x80284D30: jal         0x802AEE54
    // 0x80284D34: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    static_3_802AEE54(rdram, ctx);
        goto after_19;
    // 0x80284D34: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    after_19:
    // 0x80284D38: jal         0x80317E10
    // 0x80284D3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_20;
    // 0x80284D3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_20:
    // 0x80284D40: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80284D44: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80284D48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80284D4C: beq         $v0, $zero, L_80284DA0
    if (ctx->r2 == 0) {
        // 0x80284D50: lwc1        $f2, 0xD4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
            goto L_80284DA0;
    }
    // 0x80284D50: lwc1        $f2, 0xD4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80284D54: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x80284D58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80284D5C: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x80284D60: jal         0x802AEE54
    // 0x80284D64: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    static_3_802AEE54(rdram, ctx);
        goto after_21;
    // 0x80284D64: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    after_21:
    // 0x80284D68: lw          $t5, 0xD8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD8);
    // 0x80284D6C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80284D70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80284D74: jal         0x802AEE54
    // 0x80284D78: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_22;
    // 0x80284D78: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    after_22:
    // 0x80284D7C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80284D80: jal         0x803192A0
    // 0x80284D84: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_803192A0(rdram, ctx);
        goto after_23;
    // 0x80284D84: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_23:
    // 0x80284D88: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80284D8C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80284D90: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80284D94: lwc1        $f2, 0xD4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80284D98: b           L_80284DA4
    // 0x80284D9C: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_80284DA4;
    // 0x80284D9C: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_80284DA0:
    // 0x80284DA0: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
L_80284DA4:
    // 0x80284DA4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80284DA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80284DAC: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80284DB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80284DB4: mul.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80284DB8: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x80284DBC: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80284DC0: div.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80284DC4: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80284DC8: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80284DCC: nop

    // 0x80284DD0: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x80284DD4: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
L_80284DD8:
    // 0x80284DD8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80284DDC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80284DE0: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80284DE4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80284DE8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80284DEC: mul.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80284DF0: sra         $t1, $t9, 5
    ctx->r9 = S32(SIGNED(ctx->r25) >> 5);
    // 0x80284DF4: sw          $t1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r9;
    // 0x80284DF8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80284DFC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80284E00: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    // 0x80284E04: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80284E08: nop

    // 0x80284E0C: bc1fl       L_80284E2C
    if (!c1cs) {
        // 0x80284E10: c.lt.s      $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
            goto L_80284E2C;
    }
    goto skip_5;
    // 0x80284E10: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    skip_5:
    // 0x80284E14: sub.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f12.fl;
L_80284E18:
    // 0x80284E18: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80284E1C: nop

    // 0x80284E20: bc1tl       L_80284E18
    if (c1cs) {
        // 0x80284E24: sub.s       $f14, $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_80284E18;
    }
    goto skip_6;
    // 0x80284E24: sub.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f12.fl;
    skip_6:
    // 0x80284E28: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
L_80284E2C:
    // 0x80284E2C: nop

    // 0x80284E30: bc1f        L_80284E4C
    if (!c1cs) {
        // 0x80284E34: nop
    
            goto L_80284E4C;
    }
    // 0x80284E34: nop

    // 0x80284E38: add.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f12.fl;
L_80284E3C:
    // 0x80284E3C: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x80284E40: nop

    // 0x80284E44: bc1tl       L_80284E3C
    if (c1cs) {
        // 0x80284E48: add.s       $f14, $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f12.fl;
            goto L_80284E3C;
    }
    goto skip_7;
    // 0x80284E48: add.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f12.fl;
    skip_7:
L_80284E4C:
    // 0x80284E4C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80284E50: mul.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80284E54: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80284E58: nop

    // 0x80284E5C: bc1fl       L_80284E7C
    if (!c1cs) {
        // 0x80284E60: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_80284E7C;
    }
    goto skip_8;
    // 0x80284E60: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_8:
    // 0x80284E64: sub.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f12.fl;
L_80284E68:
    // 0x80284E68: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80284E6C: nop

    // 0x80284E70: bc1tl       L_80284E68
    if (c1cs) {
        // 0x80284E74: sub.s       $f0, $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f12.fl;
            goto L_80284E68;
    }
    goto skip_9;
    // 0x80284E74: sub.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f12.fl;
    skip_9:
    // 0x80284E78: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
L_80284E7C:
    // 0x80284E7C: nop

    // 0x80284E80: bc1f        L_80284E9C
    if (!c1cs) {
        // 0x80284E84: nop
    
            goto L_80284E9C;
    }
    // 0x80284E84: nop

    // 0x80284E88: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
L_80284E8C:
    // 0x80284E8C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80284E90: nop

    // 0x80284E94: bc1tl       L_80284E8C
    if (c1cs) {
        // 0x80284E98: add.s       $f0, $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_80284E8C;
    }
    goto skip_10;
    // 0x80284E98: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
    skip_10:
L_80284E9C:
    // 0x80284E9C: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x80284EA0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80284EA4: bne         $t2, $at, L_80284EB4
    if (ctx->r10 != ctx->r1) {
        // 0x80284EA8: nop
    
            goto L_80284EB4;
    }
    // 0x80284EA8: nop

    // 0x80284EAC: b           L_80284EB4
    // 0x80284EB0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80284EB4;
    // 0x80284EB0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80284EB4:
    // 0x80284EB4: bne         $v1, $zero, L_80285210
    if (ctx->r3 != 0) {
        // 0x80284EB8: slti        $at, $t3, 0x81
        ctx->r1 = SIGNED(ctx->r11) < 0X81 ? 1 : 0;
            goto L_80285210;
    }
    // 0x80284EB8: slti        $at, $t3, 0x81
    ctx->r1 = SIGNED(ctx->r11) < 0X81 ? 1 : 0;
    // 0x80284EBC: bne         $at, $zero, L_80284EC8
    if (ctx->r1 != 0) {
        // 0x80284EC0: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_80284EC8;
    }
    // 0x80284EC0: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x80284EC4: addiu       $v0, $t3, -0x100
    ctx->r2 = ADD32(ctx->r11, -0X100);
L_80284EC8:
    // 0x80284EC8: slti        $at, $v0, -0x27
    ctx->r1 = SIGNED(ctx->r2) < -0X27 ? 1 : 0;
    // 0x80284ECC: bne         $at, $zero, L_80284F1C
    if (ctx->r1 != 0) {
        // 0x80284ED0: slti        $at, $v0, 0x28
        ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
            goto L_80284F1C;
    }
    // 0x80284ED0: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80284ED4: beq         $at, $zero, L_80284F1C
    if (ctx->r1 == 0) {
        // 0x80284ED8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80284F1C;
    }
    // 0x80284ED8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80284EDC: lw          $a0, 0x4C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4C);
    // 0x80284EE0: addiu       $t4, $zero, 0x9C
    ctx->r12 = ADD32(0, 0X9C);
    // 0x80284EE4: subu        $a2, $t4, $v0
    ctx->r6 = SUB32(ctx->r12, ctx->r2);
    // 0x80284EE8: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x80284EEC: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x80284EF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80284EF4: jal         0x802344F4
    // 0x80284EF8: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    static_3_802344F4(rdram, ctx);
        goto after_24;
    // 0x80284EF8: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    after_24:
    // 0x80284EFC: lw          $t5, 0xD8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD8);
    // 0x80284F00: jal         0x8023413C
    // 0x80284F04: lw          $a0, 0x4C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4C);
    static_3_8023413C(rdram, ctx);
        goto after_25;
    // 0x80284F04: lw          $a0, 0x4C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4C);
    after_25:
    // 0x80284F08: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80284F0C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80284F10: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80284F14: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80284F18: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
L_80284F1C:
    // 0x80284F1C: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x80284F20: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    // 0x80284F24: slti        $at, $v1, 0x81
    ctx->r1 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
    // 0x80284F28: bne         $at, $zero, L_80284F34
    if (ctx->r1 != 0) {
        // 0x80284F2C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80284F34;
    }
    // 0x80284F2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80284F30: addiu       $v0, $v1, -0x100
    ctx->r2 = ADD32(ctx->r3, -0X100);
L_80284F34:
    // 0x80284F34: slti        $at, $v0, -0x27
    ctx->r1 = SIGNED(ctx->r2) < -0X27 ? 1 : 0;
    // 0x80284F38: bne         $at, $zero, L_80284F88
    if (ctx->r1 != 0) {
        // 0x80284F3C: slti        $at, $v0, 0x28
        ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
            goto L_80284F88;
    }
    // 0x80284F3C: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80284F40: beq         $at, $zero, L_80284F88
    if (ctx->r1 == 0) {
        // 0x80284F44: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80284F88;
    }
    // 0x80284F44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80284F48: lw          $a0, 0x50($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X50);
    // 0x80284F4C: addiu       $t6, $zero, 0x99
    ctx->r14 = ADD32(0, 0X99);
    // 0x80284F50: subu        $a2, $t6, $v0
    ctx->r6 = SUB32(ctx->r14, ctx->r2);
    // 0x80284F54: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x80284F58: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x80284F5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80284F60: jal         0x802344F4
    // 0x80284F64: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    static_3_802344F4(rdram, ctx);
        goto after_26;
    // 0x80284F64: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    after_26:
    // 0x80284F68: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x80284F6C: jal         0x8023413C
    // 0x80284F70: lw          $a0, 0x50($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X50);
    static_3_8023413C(rdram, ctx);
        goto after_27;
    // 0x80284F70: lw          $a0, 0x50($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X50);
    after_27:
    // 0x80284F74: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80284F78: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80284F7C: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80284F80: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80284F84: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
L_80284F88:
    // 0x80284F88: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x80284F8C: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x80284F90: slti        $at, $v1, 0x81
    ctx->r1 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
    // 0x80284F94: bne         $at, $zero, L_80284FA0
    if (ctx->r1 != 0) {
        // 0x80284F98: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80284FA0;
    }
    // 0x80284F98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80284F9C: addiu       $v0, $v1, -0x100
    ctx->r2 = ADD32(ctx->r3, -0X100);
L_80284FA0:
    // 0x80284FA0: slti        $at, $v0, -0x27
    ctx->r1 = SIGNED(ctx->r2) < -0X27 ? 1 : 0;
    // 0x80284FA4: bne         $at, $zero, L_80284FF4
    if (ctx->r1 != 0) {
        // 0x80284FA8: slti        $at, $v0, 0x28
        ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
            goto L_80284FF4;
    }
    // 0x80284FA8: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80284FAC: beq         $at, $zero, L_80284FF4
    if (ctx->r1 == 0) {
        // 0x80284FB0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80284FF4;
    }
    // 0x80284FB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80284FB4: lw          $a0, 0x54($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X54);
    // 0x80284FB8: addiu       $t8, $zero, 0x9C
    ctx->r24 = ADD32(0, 0X9C);
    // 0x80284FBC: subu        $a2, $t8, $v0
    ctx->r6 = SUB32(ctx->r24, ctx->r2);
    // 0x80284FC0: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x80284FC4: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x80284FC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80284FCC: jal         0x802344F4
    // 0x80284FD0: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    static_3_802344F4(rdram, ctx);
        goto after_28;
    // 0x80284FD0: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    after_28:
    // 0x80284FD4: lw          $t9, 0xD8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD8);
    // 0x80284FD8: jal         0x8023413C
    // 0x80284FDC: lw          $a0, 0x54($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X54);
    static_3_8023413C(rdram, ctx);
        goto after_29;
    // 0x80284FDC: lw          $a0, 0x54($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X54);
    after_29:
    // 0x80284FE0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80284FE4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80284FE8: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80284FEC: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80284FF0: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
L_80284FF4:
    // 0x80284FF4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x80284FF8: addiu       $v1, $v1, -0x60
    ctx->r3 = ADD32(ctx->r3, -0X60);
    // 0x80284FFC: slti        $at, $v1, 0x81
    ctx->r1 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
    // 0x80285000: bne         $at, $zero, L_8028500C
    if (ctx->r1 != 0) {
        // 0x80285004: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8028500C;
    }
    // 0x80285004: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80285008: addiu       $v0, $v1, -0x100
    ctx->r2 = ADD32(ctx->r3, -0X100);
L_8028500C:
    // 0x8028500C: slti        $at, $v0, -0x27
    ctx->r1 = SIGNED(ctx->r2) < -0X27 ? 1 : 0;
    // 0x80285010: bne         $at, $zero, L_80285060
    if (ctx->r1 != 0) {
        // 0x80285014: slti        $at, $v0, 0x28
        ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
            goto L_80285060;
    }
    // 0x80285014: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80285018: beq         $at, $zero, L_80285060
    if (ctx->r1 == 0) {
        // 0x8028501C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80285060;
    }
    // 0x8028501C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80285020: lw          $a0, 0x58($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X58);
    // 0x80285024: addiu       $t1, $zero, 0x99
    ctx->r9 = ADD32(0, 0X99);
    // 0x80285028: subu        $a2, $t1, $v0
    ctx->r6 = SUB32(ctx->r9, ctx->r2);
    // 0x8028502C: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x80285030: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x80285034: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80285038: jal         0x802344F4
    // 0x8028503C: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    static_3_802344F4(rdram, ctx);
        goto after_30;
    // 0x8028503C: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    after_30:
    // 0x80285040: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    // 0x80285044: jal         0x8023413C
    // 0x80285048: lw          $a0, 0x58($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X58);
    static_3_8023413C(rdram, ctx);
        goto after_31;
    // 0x80285048: lw          $a0, 0x58($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X58);
    after_31:
    // 0x8028504C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80285050: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285054: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80285058: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8028505C: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
L_80285060:
    // 0x80285060: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x80285064: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x80285068: slti        $at, $v1, -0x80
    ctx->r1 = SIGNED(ctx->r3) < -0X80 ? 1 : 0;
    // 0x8028506C: beq         $at, $zero, L_80285078
    if (ctx->r1 == 0) {
        // 0x80285070: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80285078;
    }
    // 0x80285070: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80285074: addiu       $v0, $v1, 0x100
    ctx->r2 = ADD32(ctx->r3, 0X100);
L_80285078:
    // 0x80285078: slti        $at, $v0, -0x27
    ctx->r1 = SIGNED(ctx->r2) < -0X27 ? 1 : 0;
    // 0x8028507C: bne         $at, $zero, L_802850CC
    if (ctx->r1 != 0) {
        // 0x80285080: slti        $at, $v0, 0x28
        ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
            goto L_802850CC;
    }
    // 0x80285080: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80285084: beq         $at, $zero, L_802850CC
    if (ctx->r1 == 0) {
        // 0x80285088: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_802850CC;
    }
    // 0x80285088: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028508C: lw          $a0, 0x5C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X5C);
    // 0x80285090: addiu       $t3, $zero, 0x9C
    ctx->r11 = ADD32(0, 0X9C);
    // 0x80285094: subu        $a2, $t3, $v0
    ctx->r6 = SUB32(ctx->r11, ctx->r2);
    // 0x80285098: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x8028509C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x802850A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802850A4: jal         0x802344F4
    // 0x802850A8: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    static_3_802344F4(rdram, ctx);
        goto after_32;
    // 0x802850A8: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    after_32:
    // 0x802850AC: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x802850B0: jal         0x8023413C
    // 0x802850B4: lw          $a0, 0x5C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X5C);
    static_3_8023413C(rdram, ctx);
        goto after_33;
    // 0x802850B4: lw          $a0, 0x5C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X5C);
    after_33:
    // 0x802850B8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x802850BC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802850C0: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802850C4: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802850C8: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
L_802850CC:
    // 0x802850CC: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x802850D0: addiu       $v1, $v1, -0xA0
    ctx->r3 = ADD32(ctx->r3, -0XA0);
    // 0x802850D4: slti        $at, $v1, -0x80
    ctx->r1 = SIGNED(ctx->r3) < -0X80 ? 1 : 0;
    // 0x802850D8: beq         $at, $zero, L_802850E4
    if (ctx->r1 == 0) {
        // 0x802850DC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_802850E4;
    }
    // 0x802850DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802850E0: addiu       $v0, $v1, 0x100
    ctx->r2 = ADD32(ctx->r3, 0X100);
L_802850E4:
    // 0x802850E4: slti        $at, $v0, -0x27
    ctx->r1 = SIGNED(ctx->r2) < -0X27 ? 1 : 0;
    // 0x802850E8: bne         $at, $zero, L_80285138
    if (ctx->r1 != 0) {
        // 0x802850EC: slti        $at, $v0, 0x28
        ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
            goto L_80285138;
    }
    // 0x802850EC: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x802850F0: beq         $at, $zero, L_80285138
    if (ctx->r1 == 0) {
        // 0x802850F4: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80285138;
    }
    // 0x802850F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802850F8: lw          $a0, 0x60($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X60);
    // 0x802850FC: addiu       $t5, $zero, 0x99
    ctx->r13 = ADD32(0, 0X99);
    // 0x80285100: subu        $a2, $t5, $v0
    ctx->r6 = SUB32(ctx->r13, ctx->r2);
    // 0x80285104: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x80285108: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x8028510C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80285110: jal         0x802344F4
    // 0x80285114: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    static_3_802344F4(rdram, ctx);
        goto after_34;
    // 0x80285114: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    after_34:
    // 0x80285118: lw          $t6, 0xD8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD8);
    // 0x8028511C: jal         0x8023413C
    // 0x80285120: lw          $a0, 0x60($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X60);
    static_3_8023413C(rdram, ctx);
        goto after_35;
    // 0x80285120: lw          $a0, 0x60($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X60);
    after_35:
    // 0x80285124: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80285128: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028512C: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80285130: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80285134: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
L_80285138:
    // 0x80285138: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x8028513C: addiu       $v1, $v1, -0xC0
    ctx->r3 = ADD32(ctx->r3, -0XC0);
    // 0x80285140: slti        $at, $v1, -0x80
    ctx->r1 = SIGNED(ctx->r3) < -0X80 ? 1 : 0;
    // 0x80285144: beq         $at, $zero, L_80285150
    if (ctx->r1 == 0) {
        // 0x80285148: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80285150;
    }
    // 0x80285148: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8028514C: addiu       $v0, $v1, 0x100
    ctx->r2 = ADD32(ctx->r3, 0X100);
L_80285150:
    // 0x80285150: slti        $at, $v0, -0x27
    ctx->r1 = SIGNED(ctx->r2) < -0X27 ? 1 : 0;
    // 0x80285154: bne         $at, $zero, L_802851A4
    if (ctx->r1 != 0) {
        // 0x80285158: slti        $at, $v0, 0x28
        ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
            goto L_802851A4;
    }
    // 0x80285158: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x8028515C: beq         $at, $zero, L_802851A4
    if (ctx->r1 == 0) {
        // 0x80285160: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_802851A4;
    }
    // 0x80285160: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80285164: lw          $a0, 0x64($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X64);
    // 0x80285168: addiu       $t7, $zero, 0x9C
    ctx->r15 = ADD32(0, 0X9C);
    // 0x8028516C: subu        $a2, $t7, $v0
    ctx->r6 = SUB32(ctx->r15, ctx->r2);
    // 0x80285170: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x80285174: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x80285178: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028517C: jal         0x802344F4
    // 0x80285180: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    static_3_802344F4(rdram, ctx);
        goto after_36;
    // 0x80285180: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    after_36:
    // 0x80285184: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x80285188: jal         0x8023413C
    // 0x8028518C: lw          $a0, 0x64($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X64);
    static_3_8023413C(rdram, ctx);
        goto after_37;
    // 0x8028518C: lw          $a0, 0x64($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X64);
    after_37:
    // 0x80285190: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80285194: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285198: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8028519C: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802851A0: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
L_802851A4:
    // 0x802851A4: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x802851A8: addiu       $v1, $v1, -0xE0
    ctx->r3 = ADD32(ctx->r3, -0XE0);
    // 0x802851AC: slti        $at, $v1, -0x80
    ctx->r1 = SIGNED(ctx->r3) < -0X80 ? 1 : 0;
    // 0x802851B0: beq         $at, $zero, L_802851BC
    if (ctx->r1 == 0) {
        // 0x802851B4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_802851BC;
    }
    // 0x802851B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802851B8: addiu       $v0, $v1, 0x100
    ctx->r2 = ADD32(ctx->r3, 0X100);
L_802851BC:
    // 0x802851BC: slti        $at, $v0, -0x27
    ctx->r1 = SIGNED(ctx->r2) < -0X27 ? 1 : 0;
    // 0x802851C0: bne         $at, $zero, L_80285210
    if (ctx->r1 != 0) {
        // 0x802851C4: slti        $at, $v0, 0x28
        ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
            goto L_80285210;
    }
    // 0x802851C4: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x802851C8: beq         $at, $zero, L_80285210
    if (ctx->r1 == 0) {
        // 0x802851CC: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80285210;
    }
    // 0x802851CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802851D0: lw          $a0, 0x68($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X68);
    // 0x802851D4: addiu       $t9, $zero, 0x99
    ctx->r25 = ADD32(0, 0X99);
    // 0x802851D8: subu        $a2, $t9, $v0
    ctx->r6 = SUB32(ctx->r25, ctx->r2);
    // 0x802851DC: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x802851E0: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x802851E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802851E8: jal         0x802344F4
    // 0x802851EC: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    static_3_802344F4(rdram, ctx);
        goto after_38;
    // 0x802851EC: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    after_38:
    // 0x802851F0: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x802851F4: jal         0x8023413C
    // 0x802851F8: lw          $a0, 0x68($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X68);
    static_3_8023413C(rdram, ctx);
        goto after_39;
    // 0x802851F8: lw          $a0, 0x68($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X68);
    after_39:
    // 0x802851FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80285200: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285204: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80285208: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8028520C: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
L_80285210:
    // 0x80285210: lw          $v0, 0x78($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X78);
    // 0x80285214: andi        $t2, $v0, 0x8
    ctx->r10 = ctx->r2 & 0X8;
    // 0x80285218: beq         $t2, $zero, L_802853E0
    if (ctx->r10 == 0) {
        // 0x8028521C: andi        $t3, $v0, 0x2000
        ctx->r11 = ctx->r2 & 0X2000;
            goto L_802853E0;
    }
    // 0x8028521C: andi        $t3, $v0, 0x2000
    ctx->r11 = ctx->r2 & 0X2000;
    // 0x80285220: beq         $t3, $zero, L_80285310
    if (ctx->r11 == 0) {
        // 0x80285224: lui         $at, 0x4380
        ctx->r1 = S32(0X4380 << 16);
            goto L_80285310;
    }
    // 0x80285224: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80285228: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028522C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80285230: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x80285234: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80285238: addiu       $t6, $zero, 0x9A
    ctx->r14 = ADD32(0, 0X9A);
    // 0x8028523C: addiu       $a3, $zero, 0xD0
    ctx->r7 = ADD32(0, 0XD0);
    // 0x80285240: div.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80285244: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80285248: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8028524C: nop

    // 0x80285250: slti        $at, $v1, 0x81
    ctx->r1 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
    // 0x80285254: bne         $at, $zero, L_80285260
    if (ctx->r1 != 0) {
        // 0x80285258: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80285260;
    }
    // 0x80285258: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8028525C: addiu       $v0, $v1, -0x100
    ctx->r2 = ADD32(ctx->r3, -0X100);
L_80285260:
    // 0x80285260: slti        $at, $v0, -0x28
    ctx->r1 = SIGNED(ctx->r2) < -0X28 ? 1 : 0;
    // 0x80285264: beq         $at, $zero, L_80285278
    if (ctx->r1 == 0) {
        // 0x80285268: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80285278;
    }
    // 0x80285268: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8028526C: addiu       $v0, $zero, -0x28
    ctx->r2 = ADD32(0, -0X28);
    // 0x80285270: b           L_80285294
    // 0x80285274: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
        goto L_80285294;
    // 0x80285274: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
L_80285278:
    // 0x80285278: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x8028527C: bnel        $at, $zero, L_80285294
    if (ctx->r1 != 0) {
        // 0x80285280: lw          $a0, 0x2C($t0)
        ctx->r4 = MEM_W(ctx->r8, 0X2C);
            goto L_80285294;
    }
    goto skip_11;
    // 0x80285280: lw          $a0, 0x2C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X2C);
    skip_11:
    // 0x80285284: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80285288: b           L_80285294
    // 0x8028528C: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
        goto L_80285294;
    // 0x8028528C: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    // 0x80285290: lw          $a0, 0x2C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X2C);
L_80285294:
    // 0x80285294: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80285298: bne         $a1, $at, L_802852A8
    if (ctx->r5 != ctx->r1) {
        // 0x8028529C: subu        $a2, $t6, $v0
        ctx->r6 = SUB32(ctx->r14, ctx->r2);
            goto L_802852A8;
    }
    // 0x8028529C: subu        $a2, $t6, $v0
    ctx->r6 = SUB32(ctx->r14, ctx->r2);
    // 0x802852A0: b           L_802852A8
    // 0x802852A4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_802852A8;
    // 0x802852A4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802852A8:
    // 0x802852A8: beq         $v1, $zero, L_802852DC
    if (ctx->r3 == 0) {
        // 0x802852AC: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_802852DC;
    }
    // 0x802852AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802852B0: addiu       $t5, $zero, 0x9A
    ctx->r13 = ADD32(0, 0X9A);
    // 0x802852B4: subu        $a2, $t5, $v0
    ctx->r6 = SUB32(ctx->r13, ctx->r2);
    // 0x802852B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802852BC: addiu       $a3, $zero, 0xDA
    ctx->r7 = ADD32(0, 0XDA);
    // 0x802852C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802852C4: sw          $a0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r4;
    // 0x802852C8: jal         0x802344F4
    // 0x802852CC: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    static_3_802344F4(rdram, ctx);
        goto after_40;
    // 0x802852CC: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    after_40:
    // 0x802852D0: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
    // 0x802852D4: b           L_802852F4
    // 0x802852D8: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
        goto L_802852F4;
    // 0x802852D8: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
L_802852DC:
    // 0x802852DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802852E0: sw          $a0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r4;
    // 0x802852E4: jal         0x802344F4
    // 0x802852E8: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    static_3_802344F4(rdram, ctx);
        goto after_41;
    // 0x802852E8: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    after_41:
    // 0x802852EC: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
    // 0x802852F0: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
L_802852F4:
    // 0x802852F4: jal         0x8023413C
    // 0x802852F8: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    static_3_8023413C(rdram, ctx);
        goto after_42;
    // 0x802852F8: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    after_42:
    // 0x802852FC: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x80285300: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80285304: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285308: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8028530C: lw          $v0, 0x78($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X78);
L_80285310:
    // 0x80285310: andi        $t8, $v0, 0x1000
    ctx->r24 = ctx->r2 & 0X1000;
    // 0x80285314: beq         $t8, $zero, L_802853E0
    if (ctx->r24 == 0) {
        // 0x80285318: lui         $at, 0x4380
        ctx->r1 = S32(0X4380 << 16);
            goto L_802853E0;
    }
    // 0x80285318: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8028531C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285320: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80285324: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x80285328: mul.s       $f4, $f14, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x8028532C: addiu       $t2, $zero, 0x9A
    ctx->r10 = ADD32(0, 0X9A);
    // 0x80285330: addiu       $a3, $zero, 0xD0
    ctx->r7 = ADD32(0, 0XD0);
    // 0x80285334: div.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80285338: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8028533C: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x80285340: nop

    // 0x80285344: slti        $at, $v1, 0x81
    ctx->r1 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
    // 0x80285348: bne         $at, $zero, L_80285354
    if (ctx->r1 != 0) {
        // 0x8028534C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80285354;
    }
    // 0x8028534C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80285350: addiu       $v0, $v1, -0x100
    ctx->r2 = ADD32(ctx->r3, -0X100);
L_80285354:
    // 0x80285354: slti        $at, $v0, -0x28
    ctx->r1 = SIGNED(ctx->r2) < -0X28 ? 1 : 0;
    // 0x80285358: beq         $at, $zero, L_8028536C
    if (ctx->r1 == 0) {
        // 0x8028535C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8028536C;
    }
    // 0x8028535C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80285360: addiu       $v0, $zero, -0x28
    ctx->r2 = ADD32(0, -0X28);
    // 0x80285364: b           L_80285388
    // 0x80285368: lw          $a0, 0x40($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X40);
        goto L_80285388;
    // 0x80285368: lw          $a0, 0x40($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X40);
L_8028536C:
    // 0x8028536C: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x80285370: bnel        $at, $zero, L_80285388
    if (ctx->r1 != 0) {
        // 0x80285374: lw          $a0, 0x3C($t0)
        ctx->r4 = MEM_W(ctx->r8, 0X3C);
            goto L_80285388;
    }
    goto skip_12;
    // 0x80285374: lw          $a0, 0x3C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X3C);
    skip_12:
    // 0x80285378: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8028537C: b           L_80285388
    // 0x80285380: lw          $a0, 0x40($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X40);
        goto L_80285388;
    // 0x80285380: lw          $a0, 0x40($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X40);
    // 0x80285384: lw          $a0, 0x3C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X3C);
L_80285388:
    // 0x80285388: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8028538C: bne         $a1, $at, L_8028539C
    if (ctx->r5 != ctx->r1) {
        // 0x80285390: subu        $a2, $t2, $v0
        ctx->r6 = SUB32(ctx->r10, ctx->r2);
            goto L_8028539C;
    }
    // 0x80285390: subu        $a2, $t2, $v0
    ctx->r6 = SUB32(ctx->r10, ctx->r2);
    // 0x80285394: b           L_8028539C
    // 0x80285398: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8028539C;
    // 0x80285398: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8028539C:
    // 0x8028539C: beq         $v1, $zero, L_802853C8
    if (ctx->r3 == 0) {
        // 0x802853A0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_802853C8;
    }
    // 0x802853A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802853A4: addiu       $t1, $zero, 0x9A
    ctx->r9 = ADD32(0, 0X9A);
    // 0x802853A8: subu        $a2, $t1, $v0
    ctx->r6 = SUB32(ctx->r9, ctx->r2);
    // 0x802853AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802853B0: addiu       $a3, $zero, 0x72
    ctx->r7 = ADD32(0, 0X72);
    // 0x802853B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802853B8: jal         0x802344F4
    // 0x802853BC: sw          $a0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r4;
    static_3_802344F4(rdram, ctx);
        goto after_43;
    // 0x802853BC: sw          $a0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r4;
    after_43:
    // 0x802853C0: b           L_802853D8
    // 0x802853C4: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
        goto L_802853D8;
    // 0x802853C4: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
L_802853C8:
    // 0x802853C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802853CC: jal         0x802344F4
    // 0x802853D0: sw          $a0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r4;
    static_3_802344F4(rdram, ctx);
        goto after_44;
    // 0x802853D0: sw          $a0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r4;
    after_44:
    // 0x802853D4: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
L_802853D8:
    // 0x802853D8: jal         0x8023413C
    // 0x802853DC: nop

    static_3_8023413C(rdram, ctx);
        goto after_45;
    // 0x802853DC: nop

    after_45:
L_802853E0:
    // 0x802853E0: jal         0x8022337C
    // 0x802853E4: nop

    static_3_8022337C(rdram, ctx);
        goto after_46;
    // 0x802853E4: nop

    after_46:
    // 0x802853E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802853EC:
    // 0x802853EC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x802853F0: jr          $ra
    // 0x802853F4: nop

    return;
    // 0x802853F4: nop

;}
RECOMP_FUNC void D_80209A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80209A50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80209A54: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80209A58: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80209A5C: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80209A60: lwc1        $f22, 0x30($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80209A64: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x80209A68: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80209A6C: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x80209A70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80209A74: bc1fl       L_80209AC0
    if (!c1cs) {
        // 0x80209A78: c.lt.s      $f18, $f20
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f18.fl < ctx->f20.fl;
            goto L_80209AC0;
    }
    goto skip_0;
    // 0x80209A78: c.lt.s      $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f18.fl < ctx->f20.fl;
    skip_0:
    // 0x80209A7C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80209A80: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80209A84: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80209A88: c.lt.s      $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f18.fl < ctx->f22.fl;
    // 0x80209A8C: nop

    // 0x80209A90: bc1fl       L_80209AB0
    if (!c1cs) {
        // 0x80209A94: mov.s       $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
            goto L_80209AB0;
    }
    goto skip_1;
    // 0x80209A94: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    skip_1:
    // 0x80209A98: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80209A9C: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x80209AA0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80209AA4: b           L_80209AB4
    // 0x80209AA8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
        goto L_80209AB4;
    // 0x80209AA8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x80209AAC: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_80209AB0:
    // 0x80209AB0: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_80209AB4:
    // 0x80209AB4: b           L_80209AF4
    // 0x80209AB8: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
        goto L_80209AF4;
    // 0x80209AB8: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80209ABC: c.lt.s      $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f18.fl < ctx->f20.fl;
L_80209AC0:
    // 0x80209AC0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80209AC4: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80209AC8: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80209ACC: bc1fl       L_80209AF0
    if (!c1cs) {
        // 0x80209AD0: mov.s       $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
            goto L_80209AF0;
    }
    goto skip_2;
    // 0x80209AD0: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    skip_2:
    // 0x80209AD4: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80209AD8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x80209ADC: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80209AE0: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80209AE4: b           L_80209AF4
    // 0x80209AE8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_80209AF4;
    // 0x80209AE8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x80209AEC: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_80209AF0:
    // 0x80209AF0: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_80209AF4:
    // 0x80209AF4: beq         $a0, $at, L_8020A838
    if (ctx->r4 == ctx->r1) {
        // 0x80209AF8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8020A838;
    }
    // 0x80209AF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80209AFC: beq         $a0, $at, L_80209E40
    if (ctx->r4 == ctx->r1) {
        // 0x80209B00: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80209E40;
    }
    // 0x80209B00: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80209B04: bne         $a0, $at, L_8020B49C
    if (ctx->r4 != ctx->r1) {
        // 0x80209B08: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020B49C;
    }
    // 0x80209B08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80209B0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80209B10: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x80209B14: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80209B18: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80209B1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80209B20: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80209B24: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80209B28: sub.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80209B2C: mul.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x80209B30: nop

    // 0x80209B34: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80209B38: nop

    // 0x80209B3C: mul.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80209B40: nop

    // 0x80209B44: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80209B48: nop

    // 0x80209B4C: mul.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80209B50: bgez        $a2, L_80209B60
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80209B54: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_80209B60;
    }
    // 0x80209B54: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80209B58: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x80209B5C: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_80209B60:
    // 0x80209B60: blez        $v1, L_8020B49C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80209B64: andi        $a0, $v1, 0x1
        ctx->r4 = ctx->r3 & 0X1;
            goto L_8020B49C;
    }
    // 0x80209B64: andi        $a0, $v1, 0x1
    ctx->r4 = ctx->r3 & 0X1;
    // 0x80209B68: beql        $a0, $zero, L_80209C04
    if (ctx->r4 == 0) {
        // 0x80209B6C: sll         $t2, $v1, 1
        ctx->r10 = S32(ctx->r3 << 1);
            goto L_80209C04;
    }
    goto skip_3;
    // 0x80209B6C: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    skip_3:
    // 0x80209B70: lhu         $a1, 0x0($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X0);
    // 0x80209B74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80209B78: andi        $t6, $a1, 0xF800
    ctx->r14 = ctx->r5 & 0XF800;
    // 0x80209B7C: sra         $t7, $t6, 11
    ctx->r15 = S32(SIGNED(ctx->r14) >> 11);
    // 0x80209B80: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80209B84: andi        $t8, $a1, 0x7C0
    ctx->r24 = ctx->r5 & 0X7C0;
    // 0x80209B88: sra         $t9, $t8, 6
    ctx->r25 = S32(SIGNED(ctx->r24) >> 6);
    // 0x80209B8C: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209B90: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80209B94: andi        $t2, $a1, 0x3E
    ctx->r10 = ctx->r5 & 0X3E;
    // 0x80209B98: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80209B9C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80209BA0: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80209BA4: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80209BA8: andi        $t4, $a1, 0x1
    ctx->r12 = ctx->r5 & 0X1;
    // 0x80209BAC: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80209BB0: mul.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80209BB4: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x80209BB8: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x80209BBC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80209BC0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80209BC4: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80209BC8: mul.s       $f10, $f16, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80209BCC: sll         $t7, $t6, 11
    ctx->r15 = S32(ctx->r14 << 11);
    // 0x80209BD0: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80209BD4: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x80209BD8: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x80209BDC: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80209BE0: or          $t5, $t8, $t3
    ctx->r13 = ctx->r24 | ctx->r11;
    // 0x80209BE4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80209BE8: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80209BEC: nop

    // 0x80209BF0: sll         $t7, $t4, 1
    ctx->r15 = S32(ctx->r12 << 1);
    // 0x80209BF4: or          $t9, $t5, $t7
    ctx->r25 = ctx->r13 | ctx->r15;
    // 0x80209BF8: beq         $v0, $v1, L_8020B49C
    if (ctx->r2 == ctx->r3) {
        // 0x80209BFC: sh          $t9, 0x0($a3)
        MEM_H(0X0, ctx->r7) = ctx->r25;
            goto L_8020B49C;
    }
    // 0x80209BFC: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
    // 0x80209C00: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
L_80209C04:
    // 0x80209C04: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80209C08: addu        $a1, $a3, $t8
    ctx->r5 = ADD32(ctx->r7, ctx->r24);
    // 0x80209C0C: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
    // 0x80209C10: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x80209C14: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80209C18: andi        $t3, $a2, 0xF800
    ctx->r11 = ctx->r6 & 0XF800;
    // 0x80209C1C: beq         $a1, $a0, L_80209D38
    if (ctx->r5 == ctx->r4) {
        // 0x80209C20: sra         $t6, $t3, 11
        ctx->r14 = S32(SIGNED(ctx->r11) >> 11);
            goto L_80209D38;
    }
    // 0x80209C20: sra         $t6, $t3, 11
    ctx->r14 = S32(SIGNED(ctx->r11) >> 11);
L_80209C24:
    // 0x80209C24: mtc1        $t6, $f24
    ctx->f24.u32l = ctx->r14;
    // 0x80209C28: lhu         $v0, -0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, -0X2);
    // 0x80209C2C: andi        $t4, $a2, 0x7C0
    ctx->r12 = ctx->r6 & 0X7C0;
    // 0x80209C30: cvt.s.w     $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.fl = CVT_S_W(ctx->f24.u32l);
    // 0x80209C34: sra         $t5, $t4, 6
    ctx->r13 = S32(SIGNED(ctx->r12) >> 6);
    // 0x80209C38: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80209C3C: andi        $t7, $a2, 0x3E
    ctx->r15 = ctx->r6 & 0X3E;
    // 0x80209C40: sra         $t9, $t7, 1
    ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80209C44: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80209C48: mul.s       $f24, $f14, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x80209C4C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80209C50: andi        $t2, $a2, 0x1
    ctx->r10 = ctx->r6 & 0X1;
    // 0x80209C54: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x80209C58: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80209C5C: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80209C60: add.s       $f24, $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f22.fl;
    // 0x80209C64: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209C68: trunc.w.s   $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80209C6C: mul.s       $f8, $f16, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80209C70: add.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80209C74: mfc1        $t3, $f24
    ctx->r11 = (int32_t)ctx->f24.u32l;
    // 0x80209C78: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80209C7C: sll         $t6, $t3, 11
    ctx->r14 = S32(ctx->r11 << 11);
    // 0x80209C80: or          $t4, $t2, $t6
    ctx->r12 = ctx->r10 | ctx->r14;
    // 0x80209C84: add.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80209C88: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80209C8C: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80209C90: sll         $t9, $t7, 6
    ctx->r25 = S32(ctx->r15 << 6);
    // 0x80209C94: or          $t8, $t4, $t9
    ctx->r24 = ctx->r12 | ctx->r25;
    // 0x80209C98: andi        $t7, $v0, 0xF800
    ctx->r15 = ctx->r2 & 0XF800;
    // 0x80209C9C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80209CA0: sra         $t4, $t7, 11
    ctx->r12 = S32(SIGNED(ctx->r15) >> 11);
    // 0x80209CA4: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80209CA8: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x80209CAC: or          $t5, $t8, $t6
    ctx->r13 = ctx->r24 | ctx->r14;
    // 0x80209CB0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209CB4: andi        $t9, $v0, 0x7C0
    ctx->r25 = ctx->r2 & 0X7C0;
    // 0x80209CB8: sra         $t3, $t9, 6
    ctx->r11 = S32(SIGNED(ctx->r25) >> 6);
    // 0x80209CBC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80209CC0: andi        $t2, $v0, 0x3E
    ctx->r10 = ctx->r2 & 0X3E;
    // 0x80209CC4: sra         $t8, $t2, 1
    ctx->r24 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80209CC8: mul.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80209CCC: mtc1        $t8, $f24
    ctx->f24.u32l = ctx->r24;
    // 0x80209CD0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80209CD4: sh          $t5, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r13;
    // 0x80209CD8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80209CDC: cvt.s.w     $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.fl = CVT_S_W(ctx->f24.u32l);
    // 0x80209CE0: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80209CE4: add.s       $f8, $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x80209CE8: add.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80209CEC: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80209CF0: mul.s       $f24, $f16, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80209CF4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80209CF8: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80209CFC: sll         $t4, $t7, 11
    ctx->r12 = S32(ctx->r15 << 11);
    // 0x80209D00: or          $t9, $t6, $t4
    ctx->r25 = ctx->r14 | ctx->r12;
    // 0x80209D04: add.s       $f24, $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f18.fl;
    // 0x80209D08: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80209D0C: trunc.w.s   $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80209D10: sll         $t8, $t2, 6
    ctx->r24 = S32(ctx->r10 << 6);
    // 0x80209D14: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x80209D18: mfc1        $t6, $f24
    ctx->r14 = (int32_t)ctx->f24.u32l;
    // 0x80209D1C: nop

    // 0x80209D20: sll         $t4, $t6, 1
    ctx->r12 = S32(ctx->r14 << 1);
    // 0x80209D24: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x80209D28: sh          $t3, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r11;
    // 0x80209D2C: andi        $t3, $a2, 0xF800
    ctx->r11 = ctx->r6 & 0XF800;
    // 0x80209D30: bne         $a1, $a0, L_80209C24
    if (ctx->r5 != ctx->r4) {
        // 0x80209D34: sra         $t6, $t3, 11
        ctx->r14 = S32(SIGNED(ctx->r11) >> 11);
            goto L_80209C24;
    }
    // 0x80209D34: sra         $t6, $t3, 11
    ctx->r14 = S32(SIGNED(ctx->r11) >> 11);
L_80209D38:
    // 0x80209D38: mtc1        $t6, $f24
    ctx->f24.u32l = ctx->r14;
    // 0x80209D3C: andi        $t4, $a2, 0x7C0
    ctx->r12 = ctx->r6 & 0X7C0;
    // 0x80209D40: sra         $t5, $t4, 6
    ctx->r13 = S32(SIGNED(ctx->r12) >> 6);
    // 0x80209D44: cvt.s.w     $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.fl = CVT_S_W(ctx->f24.u32l);
    // 0x80209D48: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80209D4C: andi        $t7, $a2, 0x3E
    ctx->r15 = ctx->r6 & 0X3E;
    // 0x80209D50: sra         $t9, $t7, 1
    ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80209D54: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80209D58: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80209D5C: mul.s       $f24, $f14, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x80209D60: lhu         $v0, -0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, -0X2);
    // 0x80209D64: andi        $t2, $a2, 0x1
    ctx->r10 = ctx->r6 & 0X1;
    // 0x80209D68: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80209D6C: add.s       $f24, $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f22.fl;
    // 0x80209D70: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209D74: add.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80209D78: mul.s       $f8, $f16, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80209D7C: trunc.w.s   $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80209D80: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80209D84: mfc1        $t3, $f24
    ctx->r11 = (int32_t)ctx->f24.u32l;
    // 0x80209D88: add.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80209D8C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80209D90: sll         $t6, $t3, 11
    ctx->r14 = S32(ctx->r11 << 11);
    // 0x80209D94: or          $t4, $t2, $t6
    ctx->r12 = ctx->r10 | ctx->r14;
    // 0x80209D98: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80209D9C: sll         $t9, $t7, 6
    ctx->r25 = S32(ctx->r15 << 6);
    // 0x80209DA0: or          $t8, $t4, $t9
    ctx->r24 = ctx->r12 | ctx->r25;
    // 0x80209DA4: andi        $t7, $v0, 0xF800
    ctx->r15 = ctx->r2 & 0XF800;
    // 0x80209DA8: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80209DAC: sra         $t4, $t7, 11
    ctx->r12 = S32(SIGNED(ctx->r15) >> 11);
    // 0x80209DB0: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80209DB4: andi        $t9, $v0, 0x7C0
    ctx->r25 = ctx->r2 & 0X7C0;
    // 0x80209DB8: sra         $t3, $t9, 6
    ctx->r11 = S32(SIGNED(ctx->r25) >> 6);
    // 0x80209DBC: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x80209DC0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209DC4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80209DC8: or          $t5, $t8, $t6
    ctx->r13 = ctx->r24 | ctx->r14;
    // 0x80209DCC: andi        $t2, $v0, 0x3E
    ctx->r10 = ctx->r2 & 0X3E;
    // 0x80209DD0: sra         $t8, $t2, 1
    ctx->r24 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80209DD4: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80209DD8: mtc1        $t8, $f24
    ctx->f24.u32l = ctx->r24;
    // 0x80209DDC: mul.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80209DE0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80209DE4: sh          $t5, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r13;
    // 0x80209DE8: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80209DEC: add.s       $f8, $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x80209DF0: cvt.s.w     $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.fl = CVT_S_W(ctx->f24.u32l);
    // 0x80209DF4: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80209DF8: mul.s       $f24, $f16, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80209DFC: add.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80209E00: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80209E04: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80209E08: sll         $t4, $t7, 11
    ctx->r12 = S32(ctx->r15 << 11);
    // 0x80209E0C: or          $t9, $t6, $t4
    ctx->r25 = ctx->r14 | ctx->r12;
    // 0x80209E10: add.s       $f24, $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f18.fl;
    // 0x80209E14: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80209E18: trunc.w.s   $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80209E1C: sll         $t8, $t2, 6
    ctx->r24 = S32(ctx->r10 << 6);
    // 0x80209E20: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x80209E24: mfc1        $t6, $f24
    ctx->r14 = (int32_t)ctx->f24.u32l;
    // 0x80209E28: nop

    // 0x80209E2C: sll         $t4, $t6, 1
    ctx->r12 = S32(ctx->r14 << 1);
    // 0x80209E30: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x80209E34: sh          $t3, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r11;
    // 0x80209E38: b           L_8020B4A0
    // 0x80209E3C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4A0;
    // 0x80209E3C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_80209E40:
    // 0x80209E40: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80209E44: beq         $a1, $at, L_80209E64
    if (ctx->r5 == ctx->r1) {
        // 0x80209E48: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80209E64;
    }
    // 0x80209E48: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80209E4C: beq         $a1, $at, L_8020A2F8
    if (ctx->r5 == ctx->r1) {
        // 0x80209E50: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020A2F8;
    }
    // 0x80209E50: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80209E54: beql        $a1, $at, L_8020A590
    if (ctx->r5 == ctx->r1) {
        // 0x80209E58: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020A590;
    }
    goto skip_4;
    // 0x80209E58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_4:
    // 0x80209E5C: b           L_8020B4A0
    // 0x80209E60: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4A0;
    // 0x80209E60: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_80209E64:
    // 0x80209E64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80209E68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80209E6C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80209E70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80209E74: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80209E78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80209E7C: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x80209E80: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80209E84: nop

    // 0x80209E88: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80209E8C: blez        $a2, L_8020B49C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80209E90: nop
    
            goto L_8020B49C;
    }
    // 0x80209E90: nop

    // 0x80209E94: beq         $a1, $zero, L_80209FA0
    if (ctx->r5 == 0) {
        // 0x80209E98: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80209FA0;
    }
    // 0x80209E98: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80209E9C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80209EA0: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x80209EA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80209EA8: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x80209EAC: sra         $t9, $t2, 1
    ctx->r25 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80209EB0: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x80209EB4: nop

    // 0x80209EB8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x80209EBC: mul.s       $f24, $f2, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80209EC0: beql        $v1, $v0, L_80209F48
    if (ctx->r3 == ctx->r2) {
        // 0x80209EC4: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_80209F48;
    }
    goto skip_5;
    // 0x80209EC4: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_5:
    // 0x80209EC8: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_80209ECC:
    // 0x80209ECC: andi        $t8, $a1, 0xF1
    ctx->r24 = ctx->r5 & 0XF1;
    // 0x80209ED0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80209ED4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80209ED8: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80209EDC: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x80209EE0: nop

    // 0x80209EE4: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80209EE8: or          $a1, $t8, $t5
    ctx->r5 = ctx->r24 | ctx->r13;
    // 0x80209EEC: andi        $t3, $a1, 0xE0
    ctx->r11 = ctx->r5 & 0XE0;
    // 0x80209EF0: sra         $t2, $t3, 5
    ctx->r10 = S32(SIGNED(ctx->r11) >> 5);
    // 0x80209EF4: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x80209EF8: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x80209EFC: andi        $t9, $a1, 0x1F
    ctx->r25 = ctx->r5 & 0X1F;
    // 0x80209F00: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x80209F04: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x80209F08: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x80209F0C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80209F10: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x80209F14: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80209F18: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x80209F1C: nop

    // 0x80209F20: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x80209F24: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x80209F28: sra         $t9, $t2, 1
    ctx->r25 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80209F2C: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x80209F30: sb          $t5, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r13;
    // 0x80209F34: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x80209F38: mul.s       $f24, $f2, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80209F3C: bnel        $v1, $v0, L_80209ECC
    if (ctx->r3 != ctx->r2) {
        // 0x80209F40: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_80209ECC;
    }
    goto skip_6;
    // 0x80209F40: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_6:
    // 0x80209F44: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_80209F48:
    // 0x80209F48: andi        $t8, $a1, 0xF1
    ctx->r24 = ctx->r5 & 0XF1;
    // 0x80209F4C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80209F50: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80209F54: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x80209F58: nop

    // 0x80209F5C: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80209F60: or          $a1, $t8, $t5
    ctx->r5 = ctx->r24 | ctx->r13;
    // 0x80209F64: andi        $t3, $a1, 0xE0
    ctx->r11 = ctx->r5 & 0XE0;
    // 0x80209F68: sra         $t2, $t3, 5
    ctx->r10 = S32(SIGNED(ctx->r11) >> 5);
    // 0x80209F6C: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x80209F70: andi        $t9, $a1, 0x1F
    ctx->r25 = ctx->r5 & 0X1F;
    // 0x80209F74: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x80209F78: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x80209F7C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80209F80: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x80209F84: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80209F88: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x80209F8C: nop

    // 0x80209F90: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x80209F94: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x80209F98: sb          $t5, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r13;
    // 0x80209F9C: beq         $v0, $a2, L_8020B49C
    if (ctx->r2 == ctx->r6) {
        // 0x80209FA0: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020B49C;
    }
L_80209FA0:
    // 0x80209FA0: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x80209FA4: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x80209FA8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80209FAC: andi        $t4, $a1, 0xE
    ctx->r12 = ctx->r5 & 0XE;
    // 0x80209FB0: sra         $t3, $t4, 1
    ctx->r11 = S32(SIGNED(ctx->r12) >> 1);
    // 0x80209FB4: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x80209FB8: nop

    // 0x80209FBC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x80209FC0: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x80209FC4: beq         $v0, $a2, L_8020A170
    if (ctx->r2 == ctx->r6) {
        // 0x80209FC8: add.s       $f24, $f20, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_8020A170;
    }
    // 0x80209FC8: add.s       $f24, $f20, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
L_80209FCC:
    // 0x80209FCC: trunc.w.s   $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80209FD0: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x80209FD4: andi        $t2, $a1, 0xF1
    ctx->r10 = ctx->r5 & 0XF1;
    // 0x80209FD8: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x80209FDC: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x80209FE0: andi        $t8, $v1, 0xE
    ctx->r24 = ctx->r3 & 0XE;
    // 0x80209FE4: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x80209FE8: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x80209FEC: or          $a1, $t2, $t9
    ctx->r5 = ctx->r10 | ctx->r25;
    // 0x80209FF0: andi        $t5, $a1, 0xE0
    ctx->r13 = ctx->r5 & 0XE0;
    // 0x80209FF4: sra         $t4, $t5, 5
    ctx->r12 = S32(SIGNED(ctx->r13) >> 5);
    // 0x80209FF8: mtc1        $t4, $f22
    ctx->f22.u32l = ctx->r12;
    // 0x80209FFC: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020A000: andi        $t3, $a1, 0x1F
    ctx->r11 = ctx->r5 & 0X1F;
    // 0x8020A004: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A008: sra         $t5, $t8, 1
    ctx->r13 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8020A00C: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A010: andi        $t4, $v1, 0xF1
    ctx->r12 = ctx->r3 & 0XF1;
    // 0x8020A014: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020A018: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A01C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A020: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020A024: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020A028: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A02C: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A030: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A034: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A038: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A03C: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A040: sll         $t2, $t6, 5
    ctx->r10 = S32(ctx->r14 << 5);
    // 0x8020A044: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A048: sb          $t9, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r25;
    // 0x8020A04C: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A050: andi        $t2, $t0, 0xE
    ctx->r10 = ctx->r8 & 0XE;
    // 0x8020A054: sll         $t3, $t6, 1
    ctx->r11 = S32(ctx->r14 << 1);
    // 0x8020A058: or          $v1, $t4, $t3
    ctx->r3 = ctx->r12 | ctx->r11;
    // 0x8020A05C: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020A060: sra         $t8, $t9, 5
    ctx->r24 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020A064: mtc1        $t8, $f20
    ctx->f20.u32l = ctx->r24;
    // 0x8020A068: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020A06C: andi        $t5, $v1, 0x1F
    ctx->r13 = ctx->r3 & 0X1F;
    // 0x8020A070: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A074: sra         $t9, $t2, 1
    ctx->r25 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020A078: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x8020A07C: andi        $t8, $t0, 0xF1
    ctx->r24 = ctx->r8 & 0XF1;
    // 0x8020A080: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A084: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A088: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A08C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A090: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A094: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A098: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A09C: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A0A0: sll         $t4, $t6, 5
    ctx->r12 = S32(ctx->r14 << 5);
    // 0x8020A0A4: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x8020A0A8: sb          $t3, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r11;
    // 0x8020A0AC: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A0B0: andi        $t4, $t1, 0xE
    ctx->r12 = ctx->r9 & 0XE;
    // 0x8020A0B4: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x8020A0B8: or          $t0, $t8, $t5
    ctx->r8 = ctx->r24 | ctx->r13;
    // 0x8020A0BC: andi        $t3, $t0, 0xE0
    ctx->r11 = ctx->r8 & 0XE0;
    // 0x8020A0C0: sra         $t2, $t3, 5
    ctx->r10 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020A0C4: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x8020A0C8: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020A0CC: sra         $t3, $t4, 1
    ctx->r11 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020A0D0: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A0D4: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020A0D8: andi        $t9, $t0, 0x1F
    ctx->r25 = ctx->r8 & 0X1F;
    // 0x8020A0DC: andi        $t2, $t1, 0xF1
    ctx->r10 = ctx->r9 & 0XF1;
    // 0x8020A0E0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A0E4: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A0E8: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A0EC: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A0F0: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A0F4: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A0F8: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A0FC: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A100: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x8020A104: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x8020A108: sb          $t5, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r13;
    // 0x8020A10C: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A110: nop

    // 0x8020A114: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8020A118: or          $t1, $t2, $t9
    ctx->r9 = ctx->r10 | ctx->r25;
    // 0x8020A11C: andi        $t5, $t1, 0xE0
    ctx->r13 = ctx->r9 & 0XE0;
    // 0x8020A120: sra         $t4, $t5, 5
    ctx->r12 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020A124: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A128: andi        $t3, $t1, 0x1F
    ctx->r11 = ctx->r9 & 0X1F;
    // 0x8020A12C: andi        $t4, $a1, 0xE
    ctx->r12 = ctx->r5 & 0XE;
    // 0x8020A130: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A134: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020A138: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A13C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A140: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A144: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A148: nop

    // 0x8020A14C: sll         $t2, $t6, 5
    ctx->r10 = S32(ctx->r14 << 5);
    // 0x8020A150: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A154: sra         $t3, $t4, 1
    ctx->r11 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020A158: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020A15C: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020A160: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A164: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A168: bne         $v0, $a2, L_80209FCC
    if (ctx->r2 != ctx->r6) {
        // 0x8020A16C: add.s       $f24, $f20, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_80209FCC;
    }
    // 0x8020A16C: add.s       $f24, $f20, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
L_8020A170:
    // 0x8020A170: trunc.w.s   $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x8020A174: andi        $t2, $a1, 0xF1
    ctx->r10 = ctx->r5 & 0XF1;
    // 0x8020A178: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020A17C: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020A180: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A184: andi        $t8, $v1, 0xE
    ctx->r24 = ctx->r3 & 0XE;
    // 0x8020A188: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020A18C: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8020A190: or          $a1, $t2, $t9
    ctx->r5 = ctx->r10 | ctx->r25;
    // 0x8020A194: andi        $t5, $a1, 0xE0
    ctx->r13 = ctx->r5 & 0XE0;
    // 0x8020A198: sra         $t4, $t5, 5
    ctx->r12 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020A19C: mtc1        $t4, $f22
    ctx->f22.u32l = ctx->r12;
    // 0x8020A1A0: sra         $t5, $t8, 1
    ctx->r13 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8020A1A4: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A1A8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A1AC: andi        $t3, $a1, 0x1F
    ctx->r11 = ctx->r5 & 0X1F;
    // 0x8020A1B0: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020A1B4: andi        $t4, $v1, 0xF1
    ctx->r12 = ctx->r3 & 0XF1;
    // 0x8020A1B8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020A1BC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A1C0: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A1C4: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A1C8: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A1CC: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A1D0: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A1D4: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A1D8: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A1DC: sll         $t2, $t6, 5
    ctx->r10 = S32(ctx->r14 << 5);
    // 0x8020A1E0: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A1E4: sb          $t9, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r25;
    // 0x8020A1E8: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A1EC: andi        $t2, $t0, 0xE
    ctx->r10 = ctx->r8 & 0XE;
    // 0x8020A1F0: sll         $t3, $t6, 1
    ctx->r11 = S32(ctx->r14 << 1);
    // 0x8020A1F4: or          $v1, $t4, $t3
    ctx->r3 = ctx->r12 | ctx->r11;
    // 0x8020A1F8: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020A1FC: sra         $t8, $t9, 5
    ctx->r24 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020A200: mtc1        $t8, $f20
    ctx->f20.u32l = ctx->r24;
    // 0x8020A204: sra         $t9, $t2, 1
    ctx->r25 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020A208: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x8020A20C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A210: andi        $t5, $v1, 0x1F
    ctx->r13 = ctx->r3 & 0X1F;
    // 0x8020A214: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020A218: andi        $t8, $t0, 0xF1
    ctx->r24 = ctx->r8 & 0XF1;
    // 0x8020A21C: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A220: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A224: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A228: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A22C: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A230: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A234: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A238: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A23C: sll         $t4, $t6, 5
    ctx->r12 = S32(ctx->r14 << 5);
    // 0x8020A240: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x8020A244: sb          $t3, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r11;
    // 0x8020A248: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A24C: andi        $t4, $t1, 0xE
    ctx->r12 = ctx->r9 & 0XE;
    // 0x8020A250: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x8020A254: or          $t0, $t8, $t5
    ctx->r8 = ctx->r24 | ctx->r13;
    // 0x8020A258: andi        $t3, $t0, 0xE0
    ctx->r11 = ctx->r8 & 0XE0;
    // 0x8020A25C: sra         $t2, $t3, 5
    ctx->r10 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020A260: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x8020A264: sra         $t3, $t4, 1
    ctx->r11 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020A268: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020A26C: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A270: andi        $t9, $t0, 0x1F
    ctx->r25 = ctx->r8 & 0X1F;
    // 0x8020A274: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020A278: andi        $t2, $t1, 0xF1
    ctx->r10 = ctx->r9 & 0XF1;
    // 0x8020A27C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A280: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A284: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A288: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A28C: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A290: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A294: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A298: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A29C: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x8020A2A0: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x8020A2A4: sb          $t5, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r13;
    // 0x8020A2A8: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A2AC: nop

    // 0x8020A2B0: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8020A2B4: or          $t1, $t2, $t9
    ctx->r9 = ctx->r10 | ctx->r25;
    // 0x8020A2B8: andi        $t5, $t1, 0xE0
    ctx->r13 = ctx->r9 & 0XE0;
    // 0x8020A2BC: sra         $t4, $t5, 5
    ctx->r12 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020A2C0: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A2C4: andi        $t3, $t1, 0x1F
    ctx->r11 = ctx->r9 & 0X1F;
    // 0x8020A2C8: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020A2CC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A2D0: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A2D4: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A2D8: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A2DC: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A2E0: nop

    // 0x8020A2E4: sll         $t2, $t6, 5
    ctx->r10 = S32(ctx->r14 << 5);
    // 0x8020A2E8: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A2EC: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020A2F0: b           L_8020B4A0
    // 0x8020A2F4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4A0;
    // 0x8020A2F4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8020A2F8:
    // 0x8020A2F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020A2FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020A300: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020A304: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020A308: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8020A30C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020A310: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020A314: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020A318: nop

    // 0x8020A31C: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8020A320: blez        $a2, L_8020B49C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020A324: nop
    
            goto L_8020B49C;
    }
    // 0x8020A324: nop

    // 0x8020A328: beq         $a1, $zero, L_8020A3C8
    if (ctx->r5 == 0) {
        // 0x8020A32C: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020A3C8;
    }
    // 0x8020A32C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020A330: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8020A334: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020A338: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A33C: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020A340: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A344: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A348: nop

    // 0x8020A34C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A350: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A354: beql        $v1, $v0, L_8020A3A4
    if (ctx->r3 == ctx->r2) {
        // 0x8020A358: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A3A4;
    }
    goto skip_7;
    // 0x8020A358: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_7:
    // 0x8020A35C: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A360:
    // 0x8020A360: andi        $t4, $a1, 0xF
    ctx->r12 = ctx->r5 & 0XF;
    // 0x8020A364: lbu         $a1, 0x1($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X1);
    // 0x8020A368: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A36C: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A370: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020A374: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A378: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A37C: mfc1        $t3, $f22
    ctx->r11 = (int32_t)ctx->f22.u32l;
    // 0x8020A380: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020A384: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A388: sll         $t2, $t3, 4
    ctx->r10 = S32(ctx->r11 << 4);
    // 0x8020A38C: or          $t9, $t4, $t2
    ctx->r25 = ctx->r12 | ctx->r10;
    // 0x8020A390: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020A394: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A398: bnel        $v1, $v0, L_8020A360
    if (ctx->r3 != ctx->r2) {
        // 0x8020A39C: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A360;
    }
    goto skip_8;
    // 0x8020A39C: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_8:
    // 0x8020A3A0: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A3A4:
    // 0x8020A3A4: andi        $t4, $a1, 0xF
    ctx->r12 = ctx->r5 & 0XF;
    // 0x8020A3A8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020A3AC: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A3B0: mfc1        $t3, $f22
    ctx->r11 = (int32_t)ctx->f22.u32l;
    // 0x8020A3B4: nop

    // 0x8020A3B8: sll         $t2, $t3, 4
    ctx->r10 = S32(ctx->r11 << 4);
    // 0x8020A3BC: or          $t9, $t4, $t2
    ctx->r25 = ctx->r12 | ctx->r10;
    // 0x8020A3C0: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020A3C4: beq         $v0, $a2, L_8020B49C
    if (ctx->r2 == ctx->r6) {
        // 0x8020A3C8: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020B49C;
    }
L_8020A3C8:
    // 0x8020A3C8: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x8020A3CC: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020A3D0: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020A3D4: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020A3D8: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020A3DC: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A3E0: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A3E4: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020A3E8: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A3EC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A3F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020A3F4: andi        $t8, $t0, 0xF0
    ctx->r24 = ctx->r8 & 0XF0;
    // 0x8020A3F8: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A3FC: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A400: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A404: beq         $v0, $a2, L_8020A4E8
    if (ctx->r2 == ctx->r6) {
        // 0x8020A408: cvt.s.w     $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
            goto L_8020A4E8;
    }
    // 0x8020A408: cvt.s.w     $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
L_8020A40C:
    // 0x8020A40C: mul.s       $f20, $f2, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A410: add.s       $f18, $f24, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x8020A414: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020A418: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020A41C: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020A420: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020A424: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020A428: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020A42C: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A430: mtc1        $t5, $f14
    ctx->f14.u32l = ctx->r13;
    // 0x8020A434: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020A438: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020A43C: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020A440: lbu         $v1, 0x5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5);
    // 0x8020A444: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A448: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8020A44C: andi        $t3, $t0, 0xF
    ctx->r11 = ctx->r8 & 0XF;
    // 0x8020A450: lbu         $t0, 0x6($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X6);
    // 0x8020A454: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020A458: sll         $t2, $t4, 4
    ctx->r10 = S32(ctx->r12 << 4);
    // 0x8020A45C: or          $t9, $t7, $t2
    ctx->r25 = ctx->r15 | ctx->r10;
    // 0x8020A460: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x8020A464: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020A468: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A46C: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020A470: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A474: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8020A478: mfc1        $t7, $f20
    ctx->r15 = (int32_t)ctx->f20.u32l;
    // 0x8020A47C: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A480: andi        $t4, $t1, 0xF
    ctx->r12 = ctx->r9 & 0XF;
    // 0x8020A484: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020A488: sll         $t2, $t7, 4
    ctx->r10 = S32(ctx->r15 << 4);
    // 0x8020A48C: or          $t9, $t6, $t2
    ctx->r25 = ctx->r14 | ctx->r10;
    // 0x8020A490: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A494: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8020A498: sb          $t9, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r25;
    // 0x8020A49C: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020A4A0: sll         $t2, $t6, 4
    ctx->r10 = S32(ctx->r14 << 4);
    // 0x8020A4A4: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x8020A4A8: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A4AC: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A4B0: sb          $t9, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r25;
    // 0x8020A4B4: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A4B8: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A4BC: andi        $t8, $t0, 0xF0
    ctx->r24 = ctx->r8 & 0XF0;
    // 0x8020A4C0: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020A4C4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020A4C8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020A4CC: cvt.s.w     $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A4D0: mfc1        $t3, $f14
    ctx->r11 = (int32_t)ctx->f14.u32l;
    // 0x8020A4D4: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A4D8: sll         $t2, $t3, 4
    ctx->r10 = S32(ctx->r11 << 4);
    // 0x8020A4DC: or          $t9, $t4, $t2
    ctx->r25 = ctx->r12 | ctx->r10;
    // 0x8020A4E0: bne         $v0, $a2, L_8020A40C
    if (ctx->r2 != ctx->r6) {
        // 0x8020A4E4: sb          $t9, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r25;
            goto L_8020A40C;
    }
    // 0x8020A4E4: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
L_8020A4E8:
    // 0x8020A4E8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020A4EC: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020A4F0: mul.s       $f20, $f2, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A4F4: add.s       $f18, $f24, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x8020A4F8: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020A4FC: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A500: mtc1        $t5, $f14
    ctx->f14.u32l = ctx->r13;
    // 0x8020A504: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020A508: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020A50C: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020A510: andi        $t3, $t0, 0xF
    ctx->r11 = ctx->r8 & 0XF;
    // 0x8020A514: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020A518: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020A51C: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020A520: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A524: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020A528: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8020A52C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020A530: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A534: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8020A538: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020A53C: sll         $t2, $t4, 4
    ctx->r10 = S32(ctx->r12 << 4);
    // 0x8020A540: or          $t9, $t7, $t2
    ctx->r25 = ctx->r15 | ctx->r10;
    // 0x8020A544: mfc1        $t7, $f20
    ctx->r15 = (int32_t)ctx->f20.u32l;
    // 0x8020A548: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x8020A54C: sb          $t9, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r25;
    // 0x8020A550: sll         $t2, $t7, 4
    ctx->r10 = S32(ctx->r15 << 4);
    // 0x8020A554: or          $t9, $t6, $t2
    ctx->r25 = ctx->r14 | ctx->r10;
    // 0x8020A558: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8020A55C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020A560: sb          $t9, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r25;
    // 0x8020A564: sll         $t2, $t6, 4
    ctx->r10 = S32(ctx->r14 << 4);
    // 0x8020A568: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A56C: mfc1        $t3, $f14
    ctx->r11 = (int32_t)ctx->f14.u32l;
    // 0x8020A570: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x8020A574: andi        $t4, $t1, 0xF
    ctx->r12 = ctx->r9 & 0XF;
    // 0x8020A578: sll         $t2, $t3, 4
    ctx->r10 = S32(ctx->r11 << 4);
    // 0x8020A57C: or          $t9, $t4, $t2
    ctx->r25 = ctx->r12 | ctx->r10;
    // 0x8020A580: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020A584: b           L_8020B4A0
    // 0x8020A588: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4A0;
    // 0x8020A588: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8020A58C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8020A590:
    // 0x8020A590: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020A594: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020A598: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020A59C: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8020A5A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020A5A4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020A5A8: nop

    // 0x8020A5AC: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8020A5B0: bgez        $a2, L_8020A5C0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8020A5B4: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8020A5C0;
    }
    // 0x8020A5B4: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8020A5B8: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8020A5BC: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8020A5C0:
    // 0x8020A5C0: blez        $v1, L_8020B49C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020A5C4: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_8020B49C;
    }
    // 0x8020A5C4: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x8020A5C8: beq         $a2, $zero, L_8020A66C
    if (ctx->r6 == 0) {
        // 0x8020A5CC: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8020A66C;
    }
    // 0x8020A5CC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8020A5D0: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8020A5D4: addu        $a1, $a3, $t8
    ctx->r5 = ADD32(ctx->r7, ctx->r24);
    // 0x8020A5D8: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020A5DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A5E0: andi        $t5, $a2, 0xFF00
    ctx->r13 = ctx->r6 & 0XFF00;
    // 0x8020A5E4: sra         $t7, $t5, 8
    ctx->r15 = S32(SIGNED(ctx->r13) >> 8);
    // 0x8020A5E8: mtc1        $t7, $f20
    ctx->f20.u32l = ctx->r15;
    // 0x8020A5EC: nop

    // 0x8020A5F0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A5F4: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A5F8: beql        $a0, $v0, L_8020A648
    if (ctx->r4 == ctx->r2) {
        // 0x8020A5FC: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A648;
    }
    goto skip_9;
    // 0x8020A5FC: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_9:
    // 0x8020A600: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A604:
    // 0x8020A604: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8020A608: lhu         $a2, 0x2($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X2);
    // 0x8020A60C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A610: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A614: andi        $t5, $a2, 0xFF00
    ctx->r13 = ctx->r6 & 0XFF00;
    // 0x8020A618: sra         $t7, $t5, 8
    ctx->r15 = S32(SIGNED(ctx->r13) >> 8);
    // 0x8020A61C: mtc1        $t7, $f20
    ctx->f20.u32l = ctx->r15;
    // 0x8020A620: mfc1        $t2, $f22
    ctx->r10 = (int32_t)ctx->f22.u32l;
    // 0x8020A624: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020A628: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A62C: sll         $t9, $t2, 8
    ctx->r25 = S32(ctx->r10 << 8);
    // 0x8020A630: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020A634: sh          $t8, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r24;
    // 0x8020A638: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A63C: bnel        $a0, $v0, L_8020A604
    if (ctx->r4 != ctx->r2) {
        // 0x8020A640: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A604;
    }
    goto skip_10;
    // 0x8020A640: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_10:
    // 0x8020A644: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A648:
    // 0x8020A648: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8020A64C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020A650: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A654: mfc1        $t2, $f22
    ctx->r10 = (int32_t)ctx->f22.u32l;
    // 0x8020A658: nop

    // 0x8020A65C: sll         $t9, $t2, 8
    ctx->r25 = S32(ctx->r10 << 8);
    // 0x8020A660: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020A664: sh          $t8, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r24;
    // 0x8020A668: beq         $v0, $v1, L_8020B49C
    if (ctx->r2 == ctx->r3) {
        // 0x8020A66C: sll         $t5, $v1, 1
        ctx->r13 = S32(ctx->r3 << 1);
            goto L_8020B49C;
    }
L_8020A66C:
    // 0x8020A66C: sll         $t5, $v1, 1
    ctx->r13 = S32(ctx->r3 << 1);
    // 0x8020A670: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8020A674: addu        $a1, $a3, $t7
    ctx->r5 = ADD32(ctx->r7, ctx->r15);
    // 0x8020A678: addu        $a0, $t5, $a3
    ctx->r4 = ADD32(ctx->r13, ctx->r7);
    // 0x8020A67C: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020A680: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8020A684: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8020A688: andi        $t3, $a2, 0xFF00
    ctx->r11 = ctx->r6 & 0XFF00;
    // 0x8020A68C: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A690: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A694: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020A698: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A69C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A6A0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020A6A4: andi        $t3, $v1, 0xFF00
    ctx->r11 = ctx->r3 & 0XFF00;
    // 0x8020A6A8: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A6AC: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A6B0: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A6B4: beq         $a1, $a0, L_8020A798
    if (ctx->r5 == ctx->r4) {
        // 0x8020A6B8: cvt.s.w     $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
            goto L_8020A798;
    }
    // 0x8020A6B8: cvt.s.w     $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
L_8020A6BC:
    // 0x8020A6BC: mul.s       $f20, $f2, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A6C0: add.s       $f18, $f24, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x8020A6C4: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020A6C8: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x8020A6CC: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x8020A6D0: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020A6D4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020A6D8: andi        $t3, $t0, 0xFF00
    ctx->r11 = ctx->r8 & 0XFF00;
    // 0x8020A6DC: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A6E0: mtc1        $t4, $f14
    ctx->f14.u32l = ctx->r12;
    // 0x8020A6E4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8020A6E8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020A6EC: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020A6F0: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8020A6F4: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A6F8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8020A6FC: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x8020A700: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8020A704: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020A708: sll         $t5, $t8, 8
    ctx->r13 = S32(ctx->r24 << 8);
    // 0x8020A70C: or          $t7, $t2, $t5
    ctx->r15 = ctx->r10 | ctx->r13;
    // 0x8020A710: sh          $t7, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r15;
    // 0x8020A714: andi        $t3, $a2, 0xFF00
    ctx->r11 = ctx->r6 & 0XFF00;
    // 0x8020A718: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A71C: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020A720: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A724: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8020A728: mfc1        $t2, $f20
    ctx->r10 = (int32_t)ctx->f20.u32l;
    // 0x8020A72C: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A730: andi        $t8, $t0, 0xFF
    ctx->r24 = ctx->r8 & 0XFF;
    // 0x8020A734: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020A738: sll         $t5, $t2, 8
    ctx->r13 = S32(ctx->r10 << 8);
    // 0x8020A73C: or          $t7, $t6, $t5
    ctx->r15 = ctx->r14 | ctx->r13;
    // 0x8020A740: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A744: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8020A748: sh          $t7, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r15;
    // 0x8020A74C: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020A750: sll         $t5, $t6, 8
    ctx->r13 = S32(ctx->r14 << 8);
    // 0x8020A754: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x8020A758: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A75C: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x8020A760: sh          $t7, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r15;
    // 0x8020A764: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A768: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A76C: andi        $t3, $v1, 0xFF00
    ctx->r11 = ctx->r3 & 0XFF00;
    // 0x8020A770: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020A774: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020A778: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A77C: cvt.s.w     $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A780: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020A784: nop

    // 0x8020A788: sll         $t5, $t9, 8
    ctx->r13 = S32(ctx->r25 << 8);
    // 0x8020A78C: or          $t7, $t8, $t5
    ctx->r15 = ctx->r24 | ctx->r13;
    // 0x8020A790: bne         $a1, $a0, L_8020A6BC
    if (ctx->r5 != ctx->r4) {
        // 0x8020A794: sh          $t7, -0xA($a1)
        MEM_H(-0XA, ctx->r5) = ctx->r15;
            goto L_8020A6BC;
    }
    // 0x8020A794: sh          $t7, -0xA($a1)
    MEM_H(-0XA, ctx->r5) = ctx->r15;
L_8020A798:
    // 0x8020A798: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020A79C: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x8020A7A0: mul.s       $f20, $f2, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A7A4: add.s       $f18, $f24, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x8020A7A8: andi        $t3, $t0, 0xFF00
    ctx->r11 = ctx->r8 & 0XFF00;
    // 0x8020A7AC: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A7B0: mtc1        $t4, $f14
    ctx->f14.u32l = ctx->r12;
    // 0x8020A7B4: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x8020A7B8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020A7BC: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8020A7C0: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x8020A7C4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020A7C8: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020A7CC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A7D0: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020A7D4: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8020A7D8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020A7DC: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A7E0: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8020A7E4: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020A7E8: sll         $t5, $t8, 8
    ctx->r13 = S32(ctx->r24 << 8);
    // 0x8020A7EC: or          $t7, $t2, $t5
    ctx->r15 = ctx->r10 | ctx->r13;
    // 0x8020A7F0: mfc1        $t2, $f20
    ctx->r10 = (int32_t)ctx->f20.u32l;
    // 0x8020A7F4: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x8020A7F8: sh          $t7, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r15;
    // 0x8020A7FC: sll         $t5, $t2, 8
    ctx->r13 = S32(ctx->r10 << 8);
    // 0x8020A800: or          $t7, $t6, $t5
    ctx->r15 = ctx->r14 | ctx->r13;
    // 0x8020A804: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8020A808: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020A80C: sh          $t7, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r15;
    // 0x8020A810: sll         $t5, $t6, 8
    ctx->r13 = S32(ctx->r14 << 8);
    // 0x8020A814: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x8020A818: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020A81C: sh          $t7, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r15;
    // 0x8020A820: andi        $t8, $t0, 0xFF
    ctx->r24 = ctx->r8 & 0XFF;
    // 0x8020A824: sll         $t5, $t9, 8
    ctx->r13 = S32(ctx->r25 << 8);
    // 0x8020A828: or          $t7, $t8, $t5
    ctx->r15 = ctx->r24 | ctx->r13;
    // 0x8020A82C: sh          $t7, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r15;
    // 0x8020A830: b           L_8020B4A0
    // 0x8020A834: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4A0;
    // 0x8020A834: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8020A838:
    // 0x8020A838: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020A83C: beq         $a1, $at, L_8020A85C
    if (ctx->r5 == ctx->r1) {
        // 0x8020A840: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020A85C;
    }
    // 0x8020A840: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020A844: beq         $a1, $at, L_8020ACE4
    if (ctx->r5 == ctx->r1) {
        // 0x8020A848: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020ACE4;
    }
    // 0x8020A848: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020A84C: beql        $a1, $at, L_8020B0BC
    if (ctx->r5 == ctx->r1) {
        // 0x8020A850: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020B0BC;
    }
    goto skip_11;
    // 0x8020A850: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_11:
    // 0x8020A854: b           L_8020B4A0
    // 0x8020A858: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4A0;
    // 0x8020A858: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8020A85C:
    // 0x8020A85C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020A860: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020A864: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020A868: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020A86C: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8020A870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020A874: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020A878: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020A87C: nop

    // 0x8020A880: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8020A884: blez        $a2, L_8020B49C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020A888: nop
    
            goto L_8020B49C;
    }
    // 0x8020A888: nop

    // 0x8020A88C: beq         $a1, $zero, L_8020A990
    if (ctx->r5 == 0) {
        // 0x8020A890: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020A990;
    }
    // 0x8020A890: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020A894: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8020A898: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020A89C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A8A0: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020A8A4: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020A8A8: nop

    // 0x8020A8AC: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A8B0: mul.s       $f24, $f2, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A8B4: beql        $v1, $v0, L_8020A938
    if (ctx->r3 == ctx->r2) {
        // 0x8020A8B8: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A938;
    }
    goto skip_12;
    // 0x8020A8B8: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_12:
    // 0x8020A8BC: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A8C0:
    // 0x8020A8C0: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020A8C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A8C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020A8CC: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A8D0: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A8D4: nop

    // 0x8020A8D8: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x8020A8DC: or          $a1, $t4, $t9
    ctx->r5 = ctx->r12 | ctx->r25;
    // 0x8020A8E0: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8020A8E4: sra         $t7, $t5, 4
    ctx->r15 = S32(SIGNED(ctx->r13) >> 4);
    // 0x8020A8E8: mtc1        $t7, $f22
    ctx->f22.u32l = ctx->r15;
    // 0x8020A8EC: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020A8F0: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020A8F4: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A8F8: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020A8FC: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A900: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A904: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A908: mfc1        $t4, $f22
    ctx->r12 = (int32_t)ctx->f22.u32l;
    // 0x8020A90C: nop

    // 0x8020A910: sll         $t9, $t4, 4
    ctx->r25 = S32(ctx->r12 << 4);
    // 0x8020A914: or          $t8, $t3, $t9
    ctx->r24 = ctx->r11 | ctx->r25;
    // 0x8020A918: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020A91C: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020A920: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    // 0x8020A924: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A928: mul.s       $f24, $f2, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A92C: bnel        $v1, $v0, L_8020A8C0
    if (ctx->r3 != ctx->r2) {
        // 0x8020A930: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A8C0;
    }
    goto skip_13;
    // 0x8020A930: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_13:
    // 0x8020A934: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A938:
    // 0x8020A938: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020A93C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020A940: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A944: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A948: nop

    // 0x8020A94C: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x8020A950: or          $a1, $t4, $t9
    ctx->r5 = ctx->r12 | ctx->r25;
    // 0x8020A954: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8020A958: sra         $t7, $t5, 4
    ctx->r15 = S32(SIGNED(ctx->r13) >> 4);
    // 0x8020A95C: mtc1        $t7, $f22
    ctx->f22.u32l = ctx->r15;
    // 0x8020A960: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020A964: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020A968: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A96C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A970: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A974: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A978: mfc1        $t4, $f22
    ctx->r12 = (int32_t)ctx->f22.u32l;
    // 0x8020A97C: nop

    // 0x8020A980: sll         $t9, $t4, 4
    ctx->r25 = S32(ctx->r12 << 4);
    // 0x8020A984: or          $t8, $t3, $t9
    ctx->r24 = ctx->r11 | ctx->r25;
    // 0x8020A988: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    // 0x8020A98C: beq         $v0, $a2, L_8020B49C
    if (ctx->r2 == ctx->r6) {
        // 0x8020A990: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020B49C;
    }
L_8020A990:
    // 0x8020A990: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x8020A994: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020A998: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020A99C: andi        $t5, $a1, 0xF
    ctx->r13 = ctx->r5 & 0XF;
    // 0x8020A9A0: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A9A4: nop

    // 0x8020A9A8: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A9AC: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A9B0: beq         $v0, $a2, L_8020AB54
    if (ctx->r2 == ctx->r6) {
        // 0x8020A9B4: add.s       $f24, $f20, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_8020AB54;
    }
    // 0x8020A9B4: add.s       $f24, $f20, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
L_8020A9B8:
    // 0x8020A9B8: trunc.w.s   $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x8020A9BC: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020A9C0: andi        $t7, $a1, 0xF0
    ctx->r15 = ctx->r5 & 0XF0;
    // 0x8020A9C4: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020A9C8: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A9CC: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020A9D0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020A9D4: andi        $t4, $t6, 0xF
    ctx->r12 = ctx->r14 & 0XF;
    // 0x8020A9D8: or          $a1, $t7, $t4
    ctx->r5 = ctx->r15 | ctx->r12;
    // 0x8020A9DC: andi        $t9, $a1, 0xF0
    ctx->r25 = ctx->r5 & 0XF0;
    // 0x8020A9E0: sra         $t8, $t9, 4
    ctx->r24 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8020A9E4: mtc1        $t8, $f22
    ctx->f22.u32l = ctx->r24;
    // 0x8020A9E8: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020A9EC: andi        $t5, $a1, 0xF
    ctx->r13 = ctx->r5 & 0XF;
    // 0x8020A9F0: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A9F4: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020A9F8: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x8020A9FC: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020AA00: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020AA04: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AA08: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020AA0C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020AA10: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AA14: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020AA18: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020AA1C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AA20: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020AA24: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AA28: sll         $t4, $t7, 4
    ctx->r12 = S32(ctx->r15 << 4);
    // 0x8020AA2C: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x8020AA30: sb          $t3, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r11;
    // 0x8020AA34: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020AA38: nop

    // 0x8020AA3C: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x8020AA40: or          $v1, $t8, $t7
    ctx->r3 = ctx->r24 | ctx->r15;
    // 0x8020AA44: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020AA48: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020AA4C: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020AA50: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020AA54: andi        $t4, $t0, 0xF
    ctx->r12 = ctx->r8 & 0XF;
    // 0x8020AA58: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AA5C: mtc1        $t4, $f22
    ctx->f22.u32l = ctx->r12;
    // 0x8020AA60: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020AA64: andi        $t3, $t0, 0xF0
    ctx->r11 = ctx->r8 & 0XF0;
    // 0x8020AA68: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020AA6C: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AA70: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AA74: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020AA78: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AA7C: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020AA80: mfc1        $t8, $f20
    ctx->r24 = (int32_t)ctx->f20.u32l;
    // 0x8020AA84: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020AA88: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8020AA8C: or          $t5, $t9, $t7
    ctx->r13 = ctx->r25 | ctx->r15;
    // 0x8020AA90: sb          $t5, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r13;
    // 0x8020AA94: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020AA98: nop

    // 0x8020AA9C: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8020AAA0: or          $t0, $t3, $t8
    ctx->r8 = ctx->r11 | ctx->r24;
    // 0x8020AAA4: andi        $t7, $t0, 0xF0
    ctx->r15 = ctx->r8 & 0XF0;
    // 0x8020AAA8: sra         $t5, $t7, 4
    ctx->r13 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020AAAC: mtc1        $t5, $f22
    ctx->f22.u32l = ctx->r13;
    // 0x8020AAB0: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020AAB4: mtc1        $t7, $f20
    ctx->f20.u32l = ctx->r15;
    // 0x8020AAB8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020AABC: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020AAC0: andi        $t4, $t0, 0xF
    ctx->r12 = ctx->r8 & 0XF;
    // 0x8020AAC4: andi        $t5, $t1, 0xF0
    ctx->r13 = ctx->r9 & 0XF0;
    // 0x8020AAC8: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AACC: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020AAD0: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020AAD4: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AAD8: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020AADC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AAE0: mfc1        $t3, $f22
    ctx->r11 = (int32_t)ctx->f22.u32l;
    // 0x8020AAE4: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AAE8: sll         $t8, $t3, 4
    ctx->r24 = S32(ctx->r11 << 4);
    // 0x8020AAEC: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x8020AAF0: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x8020AAF4: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020AAF8: nop

    // 0x8020AAFC: andi        $t3, $t6, 0xF
    ctx->r11 = ctx->r14 & 0XF;
    // 0x8020AB00: or          $t1, $t5, $t3
    ctx->r9 = ctx->r13 | ctx->r11;
    // 0x8020AB04: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020AB08: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020AB0C: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x8020AB10: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020AB14: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020AB18: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AB1C: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AB20: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AB24: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AB28: mfc1        $t5, $f20
    ctx->r13 = (int32_t)ctx->f20.u32l;
    // 0x8020AB2C: nop

    // 0x8020AB30: sll         $t3, $t5, 4
    ctx->r11 = S32(ctx->r13 << 4);
    // 0x8020AB34: andi        $t5, $a1, 0xF
    ctx->r13 = ctx->r5 & 0XF;
    // 0x8020AB38: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020AB3C: or          $t4, $t7, $t3
    ctx->r12 = ctx->r15 | ctx->r11;
    // 0x8020AB40: sb          $t4, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r12;
    // 0x8020AB44: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AB48: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AB4C: bne         $v0, $a2, L_8020A9B8
    if (ctx->r2 != ctx->r6) {
        // 0x8020AB50: add.s       $f24, $f20, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_8020A9B8;
    }
    // 0x8020AB50: add.s       $f24, $f20, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
L_8020AB54:
    // 0x8020AB54: trunc.w.s   $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x8020AB58: andi        $t7, $a1, 0xF0
    ctx->r15 = ctx->r5 & 0XF0;
    // 0x8020AB5C: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020AB60: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020AB64: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020AB68: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020AB6C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020AB70: andi        $t4, $t6, 0xF
    ctx->r12 = ctx->r14 & 0XF;
    // 0x8020AB74: or          $a1, $t7, $t4
    ctx->r5 = ctx->r15 | ctx->r12;
    // 0x8020AB78: andi        $t9, $a1, 0xF0
    ctx->r25 = ctx->r5 & 0XF0;
    // 0x8020AB7C: sra         $t8, $t9, 4
    ctx->r24 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8020AB80: mtc1        $t8, $f22
    ctx->f22.u32l = ctx->r24;
    // 0x8020AB84: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020AB88: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x8020AB8C: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020AB90: andi        $t5, $a1, 0xF
    ctx->r13 = ctx->r5 & 0XF;
    // 0x8020AB94: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020AB98: sb          $a1, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r5;
    // 0x8020AB9C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020ABA0: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020ABA4: nop

    // 0x8020ABA8: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020ABAC: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020ABB0: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020ABB4: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020ABB8: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020ABBC: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020ABC0: sll         $t4, $t7, 4
    ctx->r12 = S32(ctx->r15 << 4);
    // 0x8020ABC4: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x8020ABC8: sb          $t3, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r11;
    // 0x8020ABCC: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020ABD0: nop

    // 0x8020ABD4: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x8020ABD8: or          $v1, $t8, $t7
    ctx->r3 = ctx->r24 | ctx->r15;
    // 0x8020ABDC: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020ABE0: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020ABE4: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020ABE8: andi        $t4, $t0, 0xF
    ctx->r12 = ctx->r8 & 0XF;
    // 0x8020ABEC: mtc1        $t4, $f22
    ctx->f22.u32l = ctx->r12;
    // 0x8020ABF0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020ABF4: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020ABF8: andi        $t3, $t0, 0xF0
    ctx->r11 = ctx->r8 & 0XF0;
    // 0x8020ABFC: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020AC00: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020AC04: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AC08: nop

    // 0x8020AC0C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020AC10: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AC14: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AC18: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020AC1C: mfc1        $t8, $f20
    ctx->r24 = (int32_t)ctx->f20.u32l;
    // 0x8020AC20: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020AC24: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8020AC28: or          $t5, $t9, $t7
    ctx->r13 = ctx->r25 | ctx->r15;
    // 0x8020AC2C: sb          $t5, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r13;
    // 0x8020AC30: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020AC34: nop

    // 0x8020AC38: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8020AC3C: or          $t0, $t3, $t8
    ctx->r8 = ctx->r11 | ctx->r24;
    // 0x8020AC40: andi        $t7, $t0, 0xF0
    ctx->r15 = ctx->r8 & 0XF0;
    // 0x8020AC44: sra         $t5, $t7, 4
    ctx->r13 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020AC48: mtc1        $t5, $f22
    ctx->f22.u32l = ctx->r13;
    // 0x8020AC4C: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020AC50: mtc1        $t7, $f20
    ctx->f20.u32l = ctx->r15;
    // 0x8020AC54: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020AC58: andi        $t4, $t0, 0xF
    ctx->r12 = ctx->r8 & 0XF;
    // 0x8020AC5C: andi        $t5, $t1, 0xF0
    ctx->r13 = ctx->r9 & 0XF0;
    // 0x8020AC60: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020AC64: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AC68: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020AC6C: nop

    // 0x8020AC70: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AC74: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020AC78: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020AC7C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AC80: mfc1        $t3, $f22
    ctx->r11 = (int32_t)ctx->f22.u32l;
    // 0x8020AC84: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AC88: sll         $t8, $t3, 4
    ctx->r24 = S32(ctx->r11 << 4);
    // 0x8020AC8C: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x8020AC90: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x8020AC94: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020AC98: nop

    // 0x8020AC9C: andi        $t3, $t6, 0xF
    ctx->r11 = ctx->r14 & 0XF;
    // 0x8020ACA0: or          $t1, $t5, $t3
    ctx->r9 = ctx->r13 | ctx->r11;
    // 0x8020ACA4: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020ACA8: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020ACAC: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x8020ACB0: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020ACB4: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020ACB8: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020ACBC: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020ACC0: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020ACC4: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020ACC8: mfc1        $t5, $f20
    ctx->r13 = (int32_t)ctx->f20.u32l;
    // 0x8020ACCC: nop

    // 0x8020ACD0: sll         $t3, $t5, 4
    ctx->r11 = S32(ctx->r13 << 4);
    // 0x8020ACD4: or          $t4, $t7, $t3
    ctx->r12 = ctx->r15 | ctx->r11;
    // 0x8020ACD8: sb          $t4, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r12;
    // 0x8020ACDC: b           L_8020B4A0
    // 0x8020ACE0: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4A0;
    // 0x8020ACE0: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8020ACE4:
    // 0x8020ACE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020ACE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020ACEC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020ACF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020ACF4: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8020ACF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020ACFC: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020AD00: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020AD04: nop

    // 0x8020AD08: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8020AD0C: blez        $a2, L_8020B49C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020AD10: nop
    
            goto L_8020B49C;
    }
    // 0x8020AD10: nop

    // 0x8020AD14: beq         $a1, $zero, L_8020ADE0
    if (ctx->r5 == 0) {
        // 0x8020AD18: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020ADE0;
    }
    // 0x8020AD18: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020AD1C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
L_8020AD20:
    // 0x8020AD20: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8020AD24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020AD28: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020AD2C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8020AD30: bgez        $t8, L_8020AD44
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020AD34: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020AD44;
    }
    // 0x8020AD34: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020AD38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020AD3C: nop

    // 0x8020AD40: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_8020AD44:
    // 0x8020AD44: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020AD48: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020AD4C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020AD50: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8020AD54: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020AD58: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020AD5C: nop

    // 0x8020AD60: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020AD64: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020AD68: nop

    // 0x8020AD6C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020AD70: beql        $t2, $zero, L_8020ADC0
    if (ctx->r10 == 0) {
        // 0x8020AD74: mfc1        $t2, $f8
        ctx->r10 = (int32_t)ctx->f8.u32l;
            goto L_8020ADC0;
    }
    goto skip_14;
    // 0x8020AD74: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    skip_14:
    // 0x8020AD78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020AD7C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020AD80: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020AD84: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020AD88: nop

    // 0x8020AD8C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020AD90: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020AD94: nop

    // 0x8020AD98: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020AD9C: bne         $t2, $zero, L_8020ADB4
    if (ctx->r10 != 0) {
        // 0x8020ADA0: nop
    
            goto L_8020ADB4;
    }
    // 0x8020ADA0: nop

    // 0x8020ADA4: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8020ADA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020ADAC: b           L_8020ADCC
    // 0x8020ADB0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8020ADCC;
    // 0x8020ADB0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8020ADB4:
    // 0x8020ADB4: b           L_8020ADCC
    // 0x8020ADB8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8020ADCC;
    // 0x8020ADB8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8020ADBC: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_8020ADC0:
    // 0x8020ADC0: nop

    // 0x8020ADC4: bltz        $t2, L_8020ADB4
    if (SIGNED(ctx->r10) < 0) {
        // 0x8020ADC8: nop
    
            goto L_8020ADB4;
    }
    // 0x8020ADC8: nop

L_8020ADCC:
    // 0x8020ADCC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020ADD0: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    // 0x8020ADD4: bne         $v1, $v0, L_8020AD20
    if (ctx->r3 != ctx->r2) {
        // 0x8020ADD8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8020AD20;
    }
    // 0x8020ADD8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020ADDC: beq         $v0, $a2, L_8020B49C
    if (ctx->r2 == ctx->r6) {
        // 0x8020ADE0: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020B49C;
    }
L_8020ADE0:
    // 0x8020ADE0: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
L_8020ADE4:
    // 0x8020ADE4: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8020ADE8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020ADEC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020ADF0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8020ADF4: bgez        $t6, L_8020AE08
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020ADF8: cvt.s.w     $f12, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020AE08;
    }
    // 0x8020ADF8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020ADFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020AE00: nop

    // 0x8020AE04: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_8020AE08:
    // 0x8020AE08: mul.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020AE0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020AE10: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020AE14: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8020AE18: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020AE1C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020AE20: nop

    // 0x8020AE24: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020AE28: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020AE2C: nop

    // 0x8020AE30: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020AE34: beql        $t7, $zero, L_8020AE84
    if (ctx->r15 == 0) {
        // 0x8020AE38: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_8020AE84;
    }
    goto skip_15;
    // 0x8020AE38: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_15:
    // 0x8020AE3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020AE40: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020AE44: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8020AE48: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020AE4C: nop

    // 0x8020AE50: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020AE54: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020AE58: nop

    // 0x8020AE5C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020AE60: bne         $t7, $zero, L_8020AE78
    if (ctx->r15 != 0) {
        // 0x8020AE64: nop
    
            goto L_8020AE78;
    }
    // 0x8020AE64: nop

    // 0x8020AE68: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8020AE6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020AE70: b           L_8020AE90
    // 0x8020AE74: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8020AE90;
    // 0x8020AE74: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8020AE78:
    // 0x8020AE78: b           L_8020AE90
    // 0x8020AE7C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8020AE90;
    // 0x8020AE7C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8020AE80: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_8020AE84:
    // 0x8020AE84: nop

    // 0x8020AE88: bltz        $t7, L_8020AE78
    if (SIGNED(ctx->r15) < 0) {
        // 0x8020AE8C: nop
    
            goto L_8020AE78;
    }
    // 0x8020AE8C: nop

L_8020AE90:
    // 0x8020AE90: lbu         $t3, 0x1($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1);
    // 0x8020AE94: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020AE98: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020AE9C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8020AEA0: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x8020AEA4: bgez        $t3, L_8020AEB8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8020AEA8: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020AEB8;
    }
    // 0x8020AEA8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020AEAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020AEB0: nop

    // 0x8020AEB4: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_8020AEB8:
    // 0x8020AEB8: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020AEBC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020AEC0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020AEC4: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8020AEC8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020AECC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020AED0: nop

    // 0x8020AED4: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020AED8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020AEDC: nop

    // 0x8020AEE0: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020AEE4: beql        $t8, $zero, L_8020AF34
    if (ctx->r24 == 0) {
        // 0x8020AEE8: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_8020AF34;
    }
    goto skip_16;
    // 0x8020AEE8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_16:
    // 0x8020AEEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020AEF0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020AEF4: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8020AEF8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020AEFC: nop

    // 0x8020AF00: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020AF04: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020AF08: nop

    // 0x8020AF0C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020AF10: bne         $t8, $zero, L_8020AF28
    if (ctx->r24 != 0) {
        // 0x8020AF14: nop
    
            goto L_8020AF28;
    }
    // 0x8020AF14: nop

    // 0x8020AF18: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8020AF1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020AF20: b           L_8020AF40
    // 0x8020AF24: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020AF40;
    // 0x8020AF24: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020AF28:
    // 0x8020AF28: b           L_8020AF40
    // 0x8020AF2C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020AF40;
    // 0x8020AF2C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020AF30: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_8020AF34:
    // 0x8020AF34: nop

    // 0x8020AF38: bltz        $t8, L_8020AF28
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020AF3C: nop
    
            goto L_8020AF28;
    }
    // 0x8020AF3C: nop

L_8020AF40:
    // 0x8020AF40: lbu         $t9, 0x2($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X2);
    // 0x8020AF44: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020AF48: sb          $t8, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r24;
    // 0x8020AF4C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8020AF50: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020AF54: bgez        $t9, L_8020AF68
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8020AF58: cvt.s.w     $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020AF68;
    }
    // 0x8020AF58: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020AF5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020AF60: nop

    // 0x8020AF64: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
L_8020AF68:
    // 0x8020AF68: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020AF6C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020AF70: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020AF74: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8020AF78: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020AF7C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020AF80: nop

    // 0x8020AF84: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020AF88: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020AF8C: nop

    // 0x8020AF90: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8020AF94: beql        $t6, $zero, L_8020AFE4
    if (ctx->r14 == 0) {
        // 0x8020AF98: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_8020AFE4;
    }
    goto skip_17;
    // 0x8020AF98: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_17:
    // 0x8020AF9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020AFA0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020AFA4: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8020AFA8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020AFAC: nop

    // 0x8020AFB0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020AFB4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020AFB8: nop

    // 0x8020AFBC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8020AFC0: bne         $t6, $zero, L_8020AFD8
    if (ctx->r14 != 0) {
        // 0x8020AFC4: nop
    
            goto L_8020AFD8;
    }
    // 0x8020AFC4: nop

    // 0x8020AFC8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8020AFCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020AFD0: b           L_8020AFF0
    // 0x8020AFD4: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8020AFF0;
    // 0x8020AFD4: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8020AFD8:
    // 0x8020AFD8: b           L_8020AFF0
    // 0x8020AFDC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8020AFF0;
    // 0x8020AFDC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8020AFE0: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_8020AFE4:
    // 0x8020AFE4: nop

    // 0x8020AFE8: bltz        $t6, L_8020AFD8
    if (SIGNED(ctx->r14) < 0) {
        // 0x8020AFEC: nop
    
            goto L_8020AFD8;
    }
    // 0x8020AFEC: nop

L_8020AFF0:
    // 0x8020AFF0: lbu         $t5, 0x3($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X3);
    // 0x8020AFF4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020AFF8: sb          $t6, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r14;
    // 0x8020AFFC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8020B000: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B004: bgez        $t5, L_8020B018
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8020B008: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020B018;
    }
    // 0x8020B008: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020B00C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B010: nop

    // 0x8020B014: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_8020B018:
    // 0x8020B018: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B01C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020B020: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B024: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8020B028: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020B02C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020B030: nop

    // 0x8020B034: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020B038: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020B03C: nop

    // 0x8020B040: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020B044: beql        $t3, $zero, L_8020B094
    if (ctx->r11 == 0) {
        // 0x8020B048: mfc1        $t3, $f8
        ctx->r11 = (int32_t)ctx->f8.u32l;
            goto L_8020B094;
    }
    goto skip_18;
    // 0x8020B048: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    skip_18:
    // 0x8020B04C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020B050: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020B054: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020B058: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020B05C: nop

    // 0x8020B060: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020B064: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020B068: nop

    // 0x8020B06C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020B070: bne         $t3, $zero, L_8020B088
    if (ctx->r11 != 0) {
        // 0x8020B074: nop
    
            goto L_8020B088;
    }
    // 0x8020B074: nop

    // 0x8020B078: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x8020B07C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B080: b           L_8020B0A0
    // 0x8020B084: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8020B0A0;
    // 0x8020B084: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8020B088:
    // 0x8020B088: b           L_8020B0A0
    // 0x8020B08C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8020B0A0;
    // 0x8020B08C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8020B090: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
L_8020B094:
    // 0x8020B094: nop

    // 0x8020B098: bltz        $t3, L_8020B088
    if (SIGNED(ctx->r11) < 0) {
        // 0x8020B09C: nop
    
            goto L_8020B088;
    }
    // 0x8020B09C: nop

L_8020B0A0:
    // 0x8020B0A0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020B0A4: sb          $t3, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r11;
    // 0x8020B0A8: bne         $v0, $a2, L_8020ADE4
    if (ctx->r2 != ctx->r6) {
        // 0x8020B0AC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8020ADE4;
    }
    // 0x8020B0AC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020B0B0: b           L_8020B4A0
    // 0x8020B0B4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4A0;
    // 0x8020B0B4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8020B0B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8020B0BC:
    // 0x8020B0BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B0C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8020B0C4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8020B0C8: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x8020B0CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020B0D0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8020B0D4: nop

    // 0x8020B0D8: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8020B0DC: bgez        $a2, L_8020B0EC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8020B0E0: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8020B0EC;
    }
    // 0x8020B0E0: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8020B0E4: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8020B0E8: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8020B0EC:
    // 0x8020B0EC: blez        $v1, L_8020B49C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020B0F0: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_8020B49C;
    }
    // 0x8020B0F0: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x8020B0F4: beq         $a2, $zero, L_8020B1C4
    if (ctx->r6 == 0) {
        // 0x8020B0F8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8020B1C4;
    }
    // 0x8020B0F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8020B0FC: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x8020B100: addu        $a1, $a3, $t4
    ctx->r5 = ADD32(ctx->r7, ctx->r12);
L_8020B104:
    // 0x8020B104: lhu         $t8, 0x0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X0);
    // 0x8020B108: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020B10C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B110: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8020B114: bgez        $t8, L_8020B128
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020B118: cvt.s.w     $f12, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020B128;
    }
    // 0x8020B118: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020B11C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020B120: nop

    // 0x8020B124: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_8020B128:
    // 0x8020B128: mul.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B12C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020B130: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B134: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8020B138: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020B13C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020B140: nop

    // 0x8020B144: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020B148: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020B14C: nop

    // 0x8020B150: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020B154: beql        $t2, $zero, L_8020B1A4
    if (ctx->r10 == 0) {
        // 0x8020B158: mfc1        $t2, $f10
        ctx->r10 = (int32_t)ctx->f10.u32l;
            goto L_8020B1A4;
    }
    goto skip_19;
    // 0x8020B158: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    skip_19:
    // 0x8020B15C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B160: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020B164: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8020B168: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020B16C: nop

    // 0x8020B170: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020B174: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020B178: nop

    // 0x8020B17C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020B180: bne         $t2, $zero, L_8020B198
    if (ctx->r10 != 0) {
        // 0x8020B184: nop
    
            goto L_8020B198;
    }
    // 0x8020B184: nop

    // 0x8020B188: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x8020B18C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B190: b           L_8020B1B0
    // 0x8020B194: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8020B1B0;
    // 0x8020B194: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8020B198:
    // 0x8020B198: b           L_8020B1B0
    // 0x8020B19C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8020B1B0;
    // 0x8020B19C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8020B1A0: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
L_8020B1A4:
    // 0x8020B1A4: nop

    // 0x8020B1A8: bltz        $t2, L_8020B198
    if (SIGNED(ctx->r10) < 0) {
        // 0x8020B1AC: nop
    
            goto L_8020B198;
    }
    // 0x8020B1AC: nop

L_8020B1B0:
    // 0x8020B1B0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020B1B4: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
    // 0x8020B1B8: bne         $a0, $v0, L_8020B104
    if (ctx->r4 != ctx->r2) {
        // 0x8020B1BC: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_8020B104;
    }
    // 0x8020B1BC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020B1C0: beq         $v0, $v1, L_8020B49C
    if (ctx->r2 == ctx->r3) {
        // 0x8020B1C4: sll         $t6, $v1, 1
        ctx->r14 = S32(ctx->r3 << 1);
            goto L_8020B49C;
    }
L_8020B1C4:
    // 0x8020B1C4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x8020B1C8: sll         $t5, $v0, 1
    ctx->r13 = S32(ctx->r2 << 1);
    // 0x8020B1CC: addu        $a1, $a3, $t5
    ctx->r5 = ADD32(ctx->r7, ctx->r13);
    // 0x8020B1D0: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
L_8020B1D4:
    // 0x8020B1D4: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8020B1D8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B1DC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8020B1E0: bgez        $t7, L_8020B1F4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020B1E4: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020B1F4;
    }
    // 0x8020B1E4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020B1E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020B1EC: nop

    // 0x8020B1F0: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_8020B1F4:
    // 0x8020B1F4: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B1F8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020B1FC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B200: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8020B204: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020B208: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020B20C: nop

    // 0x8020B210: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020B214: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020B218: nop

    // 0x8020B21C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020B220: beql        $t4, $zero, L_8020B270
    if (ctx->r12 == 0) {
        // 0x8020B224: mfc1        $t4, $f4
        ctx->r12 = (int32_t)ctx->f4.u32l;
            goto L_8020B270;
    }
    goto skip_20;
    // 0x8020B224: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    skip_20:
    // 0x8020B228: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020B22C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020B230: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8020B234: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020B238: nop

    // 0x8020B23C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020B240: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020B244: nop

    // 0x8020B248: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020B24C: bne         $t4, $zero, L_8020B264
    if (ctx->r12 != 0) {
        // 0x8020B250: nop
    
            goto L_8020B264;
    }
    // 0x8020B250: nop

    // 0x8020B254: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x8020B258: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B25C: b           L_8020B27C
    // 0x8020B260: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020B27C;
    // 0x8020B260: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020B264:
    // 0x8020B264: b           L_8020B27C
    // 0x8020B268: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020B27C;
    // 0x8020B268: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020B26C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
L_8020B270:
    // 0x8020B270: nop

    // 0x8020B274: bltz        $t4, L_8020B264
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020B278: nop
    
            goto L_8020B264;
    }
    // 0x8020B278: nop

L_8020B27C:
    // 0x8020B27C: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x8020B280: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020B284: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B288: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8020B28C: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x8020B290: bgez        $t8, L_8020B2A4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020B294: cvt.s.w     $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020B2A4;
    }
    // 0x8020B294: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020B298: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020B29C: nop

    // 0x8020B2A0: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
L_8020B2A4:
    // 0x8020B2A4: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B2A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020B2AC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B2B0: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8020B2B4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020B2B8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020B2BC: nop

    // 0x8020B2C0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020B2C4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020B2C8: nop

    // 0x8020B2CC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020B2D0: beql        $t2, $zero, L_8020B320
    if (ctx->r10 == 0) {
        // 0x8020B2D4: mfc1        $t2, $f6
        ctx->r10 = (int32_t)ctx->f6.u32l;
            goto L_8020B320;
    }
    goto skip_21;
    // 0x8020B2D4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    skip_21:
    // 0x8020B2D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020B2DC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020B2E0: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8020B2E4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020B2E8: nop

    // 0x8020B2EC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020B2F0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020B2F4: nop

    // 0x8020B2F8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020B2FC: bne         $t2, $zero, L_8020B314
    if (ctx->r10 != 0) {
        // 0x8020B300: nop
    
            goto L_8020B314;
    }
    // 0x8020B300: nop

    // 0x8020B304: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8020B308: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B30C: b           L_8020B32C
    // 0x8020B310: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8020B32C;
    // 0x8020B310: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8020B314:
    // 0x8020B314: b           L_8020B32C
    // 0x8020B318: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8020B32C;
    // 0x8020B318: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8020B31C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
L_8020B320:
    // 0x8020B320: nop

    // 0x8020B324: bltz        $t2, L_8020B314
    if (SIGNED(ctx->r10) < 0) {
        // 0x8020B328: nop
    
            goto L_8020B314;
    }
    // 0x8020B328: nop

L_8020B32C:
    // 0x8020B32C: lhu         $t6, 0x4($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X4);
    // 0x8020B330: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020B334: sh          $t2, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r10;
    // 0x8020B338: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8020B33C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B340: bgez        $t6, L_8020B354
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020B344: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020B354;
    }
    // 0x8020B344: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020B348: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B34C: nop

    // 0x8020B350: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_8020B354:
    // 0x8020B354: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B358: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020B35C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B360: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8020B364: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020B368: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020B36C: nop

    // 0x8020B370: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020B374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020B378: nop

    // 0x8020B37C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020B380: beql        $t7, $zero, L_8020B3D0
    if (ctx->r15 == 0) {
        // 0x8020B384: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_8020B3D0;
    }
    goto skip_22;
    // 0x8020B384: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_22:
    // 0x8020B388: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020B38C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020B390: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020B394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020B398: nop

    // 0x8020B39C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020B3A0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020B3A4: nop

    // 0x8020B3A8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020B3AC: bne         $t7, $zero, L_8020B3C4
    if (ctx->r15 != 0) {
        // 0x8020B3B0: nop
    
            goto L_8020B3C4;
    }
    // 0x8020B3B0: nop

    // 0x8020B3B4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8020B3B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B3BC: b           L_8020B3DC
    // 0x8020B3C0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8020B3DC;
    // 0x8020B3C0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8020B3C4:
    // 0x8020B3C4: b           L_8020B3DC
    // 0x8020B3C8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8020B3DC;
    // 0x8020B3C8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8020B3CC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_8020B3D0:
    // 0x8020B3D0: nop

    // 0x8020B3D4: bltz        $t7, L_8020B3C4
    if (SIGNED(ctx->r15) < 0) {
        // 0x8020B3D8: nop
    
            goto L_8020B3C4;
    }
    // 0x8020B3D8: nop

L_8020B3DC:
    // 0x8020B3DC: lhu         $t3, 0x6($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X6);
    // 0x8020B3E0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020B3E4: sh          $t7, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r15;
    // 0x8020B3E8: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8020B3EC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B3F0: bgez        $t3, L_8020B404
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8020B3F4: cvt.s.w     $f12, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020B404;
    }
    // 0x8020B3F4: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020B3F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020B3FC: nop

    // 0x8020B400: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_8020B404:
    // 0x8020B404: mul.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B408: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020B40C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B410: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8020B414: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020B418: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020B41C: nop

    // 0x8020B420: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020B424: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020B428: nop

    // 0x8020B42C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020B430: beql        $t8, $zero, L_8020B480
    if (ctx->r24 == 0) {
        // 0x8020B434: mfc1        $t8, $f10
        ctx->r24 = (int32_t)ctx->f10.u32l;
            goto L_8020B480;
    }
    goto skip_23;
    // 0x8020B434: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    skip_23:
    // 0x8020B438: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B43C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020B440: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8020B444: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020B448: nop

    // 0x8020B44C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020B450: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020B454: nop

    // 0x8020B458: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020B45C: bne         $t8, $zero, L_8020B474
    if (ctx->r24 != 0) {
        // 0x8020B460: nop
    
            goto L_8020B474;
    }
    // 0x8020B460: nop

    // 0x8020B464: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8020B468: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B46C: b           L_8020B48C
    // 0x8020B470: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020B48C;
    // 0x8020B470: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020B474:
    // 0x8020B474: b           L_8020B48C
    // 0x8020B478: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020B48C;
    // 0x8020B478: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020B47C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
L_8020B480:
    // 0x8020B480: nop

    // 0x8020B484: bltz        $t8, L_8020B474
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020B488: nop
    
            goto L_8020B474;
    }
    // 0x8020B488: nop

L_8020B48C:
    // 0x8020B48C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020B490: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020B494: bne         $a1, $a0, L_8020B1D4
    if (ctx->r5 != ctx->r4) {
        // 0x8020B498: sh          $t8, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r24;
            goto L_8020B1D4;
    }
    // 0x8020B498: sh          $t8, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r24;
L_8020B49C:
    // 0x8020B49C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8020B4A0:
    // 0x8020B4A0: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8020B4A4: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8020B4A8: jr          $ra
    // 0x8020B4AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8020B4AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802E6CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6D34: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802E6D38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E6D3C: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802E6D40: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E6D44: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E6D48: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E6D4C: bne         $v1, $zero, L_802E6D74
    if (ctx->r3 != 0) {
        // 0x802E6D50: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E6D74;
    }
    // 0x802E6D50: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E6D54: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E6D58: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E6D5C: jal         0x80231A24
    // 0x802E6D60: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E6D60: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E6D64: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802E6D68: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E6D6C: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E6D70: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E6D74:
    // 0x802E6D74: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E6D78: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802E6D7C: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E6D80: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802E6D84: jalr        $t9
    // 0x802E6D88: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E6D88: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E6D8C: jal         0x803183D0
    // 0x802E6D90: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    static_3_803183D0(rdram, ctx);
        goto after_2;
    // 0x802E6D90: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_2:
    // 0x802E6D94: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E6D98: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802E6D9C: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E6DA0: lh          $t8, 0x10($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X10);
    // 0x802E6DA4: jalr        $t9
    // 0x802E6DA8: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802E6DA8: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_3:
    // 0x802E6DAC: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802E6DB0: jal         0x802CF7B4
    // 0x802E6DB4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_802CF7B4(rdram, ctx);
        goto after_4;
    // 0x802E6DB4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x802E6DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E6DBC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802E6DC0: jr          $ra
    // 0x802E6DC4: nop

    return;
    // 0x802E6DC4: nop

;}
RECOMP_FUNC void D_802D8094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8114: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802D8118: jr          $ra
    // 0x802D811C: swc1        $f12, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802D811C: swc1        $f12, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802A12A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A1328: beq         $a0, $zero, L_802A134C
    if (ctx->r4 == 0) {
        // 0x802A132C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A134C;
    }
    // 0x802A132C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A1330: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A1334: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A1338: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x802A133C: beq         $t7, $zero, L_802A134C
    if (ctx->r15 == 0) {
        // 0x802A1340: sw          $t6, 0xD8($a0)
        MEM_W(0XD8, ctx->r4) = ctx->r14;
            goto L_802A134C;
    }
    // 0x802A1340: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A1344: jal         0x802C681C
    // 0x802A1348: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802A1348: nop

    after_0:
L_802A134C:
    // 0x802A134C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A1350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A1354: jr          $ra
    // 0x802A1358: nop

    return;
    // 0x802A1358: nop

;}
RECOMP_FUNC void D_802A49B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A4A34: bne         $a0, $zero, L_802A4A4C
    if (ctx->r4 != 0) {
        // 0x802A4A38: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A4A4C;
    }
    // 0x802A4A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A4A3C: jal         0x802C67EC
    // 0x802A4A40: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A4A40: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    after_0:
    // 0x802A4A44: beq         $v0, $zero, L_802A4A64
    if (ctx->r2 == 0) {
        // 0x802A4A48: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A4A64;
    }
    // 0x802A4A48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802A4A4C:
    // 0x802A4A4C: jal         0x802D1960
    // 0x802A4A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802D18E0(rdram, ctx);
        goto after_1;
    // 0x802A4A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802A4A54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A4A58: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A4A5C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A4A60: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
L_802A4A64:
    // 0x802A4A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A4A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A4A6C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A4A70: jr          $ra
    // 0x802A4A74: nop

    return;
    // 0x802A4A74: nop

;}
RECOMP_FUNC void D_8023CDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CDC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023CDC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023CDC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023CDCC: jal         0x80241760
    // 0x8023CDD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023CDD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023CDD4: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x8023CDD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023CDDC: beq         $t6, $zero, L_8023CDFC
    if (ctx->r14 == 0) {
        // 0x8023CDE0: nop
    
            goto L_8023CDFC;
    }
    // 0x8023CDE0: nop

    // 0x8023CDE4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023CDE8: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8023CDEC: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x8023CDF0: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x8023CDF4: b           L_8023CE14
    // 0x8023CDF8: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
        goto L_8023CE14;
    // 0x8023CDF8: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
L_8023CDFC:
    // 0x8023CDFC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8023CE00: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8023CE04: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x8023CE08: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x8023CE0C: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x8023CE10: sh          $t2, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r10;
L_8023CE14:
    // 0x8023CE14: jal         0x80241780
    // 0x8023CE18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x8023CE18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8023CE1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023CE20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023CE24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023CE28: jr          $ra
    // 0x8023CE2C: nop

    return;
    // 0x8023CE2C: nop

;}
RECOMP_FUNC void D_802D2DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2E68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2E6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2E70: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802D2E74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802D2E78: jal         0x803030B4
    // 0x802D2E7C: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    static_3_803030B4(rdram, ctx);
        goto after_0;
    // 0x802D2E7C: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    after_0:
    // 0x802D2E80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802D2E84: bne         $v0, $at, L_802D2EBC
    if (ctx->r2 != ctx->r1) {
        // 0x802D2E88: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_802D2EBC;
    }
    // 0x802D2E88: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802D2E8C: lw          $a1, 0x50($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X50);
    // 0x802D2E90: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D2E94: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D2E98: beq         $a1, $zero, L_802D2EAC
    if (ctx->r5 == 0) {
        // 0x802D2E9C: nop
    
            goto L_802D2EAC;
    }
    // 0x802D2E9C: nop

    // 0x802D2EA0: jal         0x80231A24
    // 0x802D2EA4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802D2EA4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x802D2EA8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_802D2EAC:
    // 0x802D2EAC: jal         0x8030336C
    // 0x802D2EB0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_8030336C(rdram, ctx);
        goto after_2;
    // 0x802D2EB0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x802D2EB4: b           L_802D2EDC
    // 0x802D2EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D2EDC;
    // 0x802D2EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D2EBC:
    // 0x802D2EBC: lw          $a1, 0x54($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X54);
    // 0x802D2EC0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D2EC4: beql        $a1, $zero, L_802D2ED8
    if (ctx->r5 == 0) {
        // 0x802D2EC8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802D2ED8;
    }
    goto skip_0;
    // 0x802D2EC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x802D2ECC: jal         0x80231A24
    // 0x802D2ED0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802D2ED0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x802D2ED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D2ED8:
    // 0x802D2ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D2EDC:
    // 0x802D2EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2EE0: jr          $ra
    // 0x802D2EE4: nop

    return;
    // 0x802D2EE4: nop

;}
RECOMP_FUNC void D_802256EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802256EC: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x802256F0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802256F4: addiu       $s3, $sp, 0xF8
    ctx->r19 = ADD32(ctx->r29, 0XF8);
    // 0x802256F8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802256FC: sw          $a0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r4;
    // 0x80225700: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80225704: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80225708: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8022570C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80225710: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80225714: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80225718: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022571C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80225720: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80225724: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x80225728: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022572C: jal         0x80225424
    // 0x80225730: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80225730: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80225734: addiu       $a0, $sp, 0x92
    ctx->r4 = ADD32(ctx->r29, 0X92);
    // 0x80225738: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022573C: jal         0x80225424
    // 0x80225740: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_1;
    // 0x80225740: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80225744: addiu       $a0, $sp, 0x93
    ctx->r4 = ADD32(ctx->r29, 0X93);
    // 0x80225748: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022574C: jal         0x80225424
    // 0x80225750: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x80225750: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80225754: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x80225758: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022575C: jal         0x80225424
    // 0x80225760: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x80225760: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80225764: lhu         $a0, 0x8C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X8C);
    // 0x80225768: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022576C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80225770: jal         0x8022B948
    // 0x80225774: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_4;
    // 0x80225774: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_4:
    // 0x80225778: lhu         $a2, 0x8C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X8C);
    // 0x8022577C: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    // 0x80225780: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225784: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x80225788: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8022578C: jal         0x8022B460
    // 0x80225790: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    func_8022B460(rdram, ctx);
        goto after_5;
    // 0x80225790: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    after_5:
    // 0x80225794: lhu         $t9, 0x8C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X8C);
    // 0x80225798: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x8022579C: lbu         $a0, 0x92($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X92);
    // 0x802257A0: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x802257A4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x802257A8: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x802257AC: sw          $t1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r9;
    // 0x802257B0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x802257B4: jal         0x8022B948
    // 0x802257B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_6;
    // 0x802257B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x802257BC: lbu         $a0, 0x92($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X92);
    // 0x802257C0: sw          $v0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r2;
    // 0x802257C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802257C8: sll         $t3, $a0, 3
    ctx->r11 = S32(ctx->r4 << 3);
    // 0x802257CC: jal         0x8022B948
    // 0x802257D0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_8022B948(rdram, ctx);
        goto after_7;
    // 0x802257D0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_7:
    // 0x802257D4: lbu         $t4, 0x92($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X92);
    // 0x802257D8: sw          $v0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r2;
    // 0x802257DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802257E0: blez        $t4, L_80225DC8
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802257E4: lui         $s7, 0xBF00
        ctx->r23 = S32(0XBF00 << 16);
            goto L_80225DC8;
    }
    // 0x802257E4: lui         $s7, 0xBF00
    ctx->r23 = S32(0XBF00 << 16);
    // 0x802257E8: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x802257EC: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x802257F0: sw          $v0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r2;
    // 0x802257F4: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802257F8: addiu       $fp, $sp, 0x91
    ctx->r30 = ADD32(ctx->r29, 0X91);
    // 0x802257FC: addiu       $s6, $sp, 0x88
    ctx->r22 = ADD32(ctx->r29, 0X88);
    // 0x80225800: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x80225804: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_80225808:
    // 0x80225808: lw          $v1, 0xA0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA0);
    // 0x8022580C: lw          $a3, 0xEC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XEC);
    // 0x80225810: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225814: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x80225818: addu        $s0, $t5, $a3
    ctx->r16 = ADD32(ctx->r13, ctx->r7);
    // 0x8022581C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x80225820: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80225824: jal         0x80225424
    // 0x80225828: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    func_80225424(rdram, ctx);
        goto after_8;
    // 0x80225828: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    after_8:
    // 0x8022582C: addiu       $a0, $s0, 0x5
    ctx->r4 = ADD32(ctx->r16, 0X5);
    // 0x80225830: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225834: jal         0x80225424
    // 0x80225838: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_9;
    // 0x80225838: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x8022583C: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x80225840: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80225844: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80225848: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8022584C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80225850: jal         0x80231C58
    // 0x80225854: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    static_3_80231C58(rdram, ctx);
        goto after_10;
    // 0x80225854: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    after_10:
    // 0x80225858: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x8022585C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80225860: lbu         $a0, 0x4($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X4);
    // 0x80225864: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x80225868: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8022586C: jal         0x8022B948
    // 0x80225870: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    func_8022B948(rdram, ctx);
        goto after_11;
    // 0x80225870: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    after_11:
    // 0x80225874: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80225878: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8022587C: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x80225880: lbu         $t0, 0x4($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X4);
    // 0x80225884: addiu       $t1, $v0, 0x5
    ctx->r9 = ADD32(ctx->r2, 0X5);
    // 0x80225888: addiu       $t2, $v0, 0x6
    ctx->r10 = ADD32(ctx->r2, 0X6);
    // 0x8022588C: blez        $t0, L_80225D80
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80225890: addiu       $t3, $v0, 0x7
        ctx->r11 = ADD32(ctx->r2, 0X7);
            goto L_80225D80;
    }
    // 0x80225890: addiu       $t3, $v0, 0x7
    ctx->r11 = ADD32(ctx->r2, 0X7);
    // 0x80225894: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80225898: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x8022589C: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x802258A0: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x802258A4: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x802258A8: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x802258AC: sw          $v1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r3;
    // 0x802258B0: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    // 0x802258B4: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
L_802258B8:
    // 0x802258B8: sb          $zero, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = 0;
    // 0x802258BC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802258C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802258C4: jal         0x80225424
    // 0x802258C8: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    func_80225424(rdram, ctx);
        goto after_12;
    // 0x802258C8: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    after_12:
    // 0x802258CC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x802258D0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802258D4: jal         0x80225424
    // 0x802258D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_13;
    // 0x802258D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x802258DC: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802258E0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802258E4: jal         0x80225424
    // 0x802258E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_14;
    // 0x802258E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x802258EC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x802258F0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802258F4: jal         0x80225424
    // 0x802258F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_15;
    // 0x802258F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x802258FC: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80225900: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225904: jal         0x80225424
    // 0x80225908: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_80225424(rdram, ctx);
        goto after_16;
    // 0x80225908: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_16:
    // 0x8022590C: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80225910: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80225914: lbu         $a0, 0x4($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X4);
    // 0x80225918: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8022591C: jal         0x8022B948
    // 0x80225920: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_17;
    // 0x80225920: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_17:
    // 0x80225924: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x80225928: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    // 0x8022592C: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
    // 0x80225930: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80225934: lw          $s5, 0xD8($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XD8);
    // 0x80225938: blezl       $t7, L_80225D0C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8022593C: lbu         $t0, 0x8F($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0X8F);
            goto L_80225D0C;
    }
    goto skip_0;
    // 0x8022593C: lbu         $t0, 0x8F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X8F);
    skip_0:
    // 0x80225940: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
L_80225944:
    // 0x80225944: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x80225948: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022594C: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x80225950: addu        $s1, $t8, $t0
    ctx->r17 = ADD32(ctx->r24, ctx->r8);
    // 0x80225954: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80225958: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8022595C: jal         0x80225424
    // 0x80225960: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_80225424(rdram, ctx);
        goto after_18;
    // 0x80225960: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_18:
    // 0x80225964: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    // 0x80225968: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022596C: jal         0x80225424
    // 0x80225970: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_19;
    // 0x80225970: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_19:
    // 0x80225974: addiu       $a0, $s1, 0x6
    ctx->r4 = ADD32(ctx->r17, 0X6);
    // 0x80225978: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022597C: jal         0x80225424
    // 0x80225980: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_20;
    // 0x80225980: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_20:
    // 0x80225984: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    // 0x80225988: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022598C: jal         0x80225424
    // 0x80225990: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_21;
    // 0x80225990: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_21:
    // 0x80225994: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x80225998: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022599C: jal         0x80225424
    // 0x802259A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_22;
    // 0x802259A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_22:
    // 0x802259A4: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x802259A8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802259AC: jal         0x80225424
    // 0x802259B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_23;
    // 0x802259B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_23:
    // 0x802259B4: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x802259B8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802259BC: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x802259C0: sll         $t2, $t1, 13
    ctx->r10 = S32(ctx->r9 << 13);
    // 0x802259C4: bgezl       $t2, L_80225B80
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802259C8: sh          $t6, 0x8($s5)
        MEM_H(0X8, ctx->r21) = ctx->r14;
            goto L_80225B80;
    }
    goto skip_1;
    // 0x802259C8: sh          $t6, 0x8($s5)
    MEM_H(0X8, ctx->r21) = ctx->r14;
    skip_1:
    // 0x802259CC: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x802259D0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802259D4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802259D8: blez        $a1, L_80225A24
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802259DC: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_80225A24;
    }
    // 0x802259DC: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x802259E0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_802259E4:
    // 0x802259E4: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x802259E8: lw          $t4, 0x2C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X2C);
    // 0x802259EC: lw          $t5, 0xCC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XCC);
    // 0x802259F0: bnel        $t3, $t4, L_80225A18
    if (ctx->r11 != ctx->r12) {
        // 0x802259F4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80225A18;
    }
    goto skip_2;
    // 0x802259F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x802259F8: lw          $t6, 0x28($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X28);
    // 0x802259FC: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x80225A00: bnel        $t5, $t6, L_80225A18
    if (ctx->r13 != ctx->r14) {
        // 0x80225A04: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80225A18;
    }
    goto skip_3;
    // 0x80225A04: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
    // 0x80225A08: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x80225A0C: beq         $t7, $t9, L_80225A24
    if (ctx->r15 == ctx->r25) {
        // 0x80225A10: nop
    
            goto L_80225A24;
    }
    // 0x80225A10: nop

    // 0x80225A14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80225A18:
    // 0x80225A18: slt         $at, $s0, $a1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80225A1C: bne         $at, $zero, L_802259E4
    if (ctx->r1 != 0) {
        // 0x80225A20: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_802259E4;
    }
    // 0x80225A20: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_80225A24:
    // 0x80225A24: bne         $s0, $a1, L_80225B70
    if (ctx->r16 != ctx->r5) {
        // 0x80225A28: subu        $t8, $t8, $a1
        ctx->r24 = SUB32(ctx->r24, ctx->r5);
            goto L_80225B70;
    }
    // 0x80225A28: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x80225A2C: lw          $t1, 0xD0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD0);
    // 0x80225A30: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80225A34: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80225A38: sra         $t4, $t1, 24
    ctx->r12 = S32(SIGNED(ctx->r9) >> 24);
    // 0x80225A3C: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80225A40: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80225A44: sra         $t6, $t1, 16
    ctx->r14 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80225A48: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80225A4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225A50: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80225A54: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x80225A58: sw          $t1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r9;
    // 0x80225A5C: sra         $t9, $t1, 8
    ctx->r25 = S32(SIGNED(ctx->r9) >> 8);
    // 0x80225A60: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225A64: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x80225A68: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80225A6C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80225A70: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80225A74: sw          $a0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r4;
    // 0x80225A78: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80225A7C: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x80225A80: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80225A84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225A88: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80225A8C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80225A90: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80225A94: sw          $t3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r11;
    // 0x80225A98: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x80225A9C: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x80225AA0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225AA4: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80225AA8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80225AAC: sra         $t4, $a0, 8
    ctx->r12 = S32(SIGNED(ctx->r4) >> 8);
    // 0x80225AB0: lw          $a3, 0x24($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X24);
    // 0x80225AB4: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x80225AB8: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80225ABC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225AC0: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80225AC4: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80225AC8: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80225ACC: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x80225AD0: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80225AD4: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80225AD8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80225ADC: sra         $t9, $a3, 16
    ctx->r25 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80225AE0: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x80225AE4: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80225AE8: sra         $t0, $a3, 8
    ctx->r8 = S32(SIGNED(ctx->r7) >> 8);
    // 0x80225AEC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225AF0: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80225AF4: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80225AF8: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x80225AFC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80225B00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225B04: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80225B08: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80225B0C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80225B10: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80225B14: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80225B18: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80225B1C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80225B20: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x80225B24: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80225B28: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225B2C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80225B30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225B34: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80225B38: nop

    // 0x80225B3C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80225B40: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80225B44: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80225B48: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80225B4C: addiu       $a0, $t2, 0x1
    ctx->r4 = ADD32(ctx->r10, 0X1);
    // 0x80225B50: jal         0x80231C58
    // 0x80225B54: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    static_3_80231C58(rdram, ctx);
        goto after_24;
    // 0x80225B54: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    after_24:
    // 0x80225B58: beq         $v0, $zero, L_80225B70
    if (ctx->r2 == 0) {
        // 0x80225B5C: lui         $t4, 0x0
        ctx->r12 = S32(0X0 << 16);
            goto L_80225B70;
    }
    // 0x80225B5C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80225B60: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80225B64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80225B68: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80225B6C: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
L_80225B70:
    // 0x80225B70: sh          $s0, 0x8($s5)
    MEM_H(0X8, ctx->r21) = ctx->r16;
    // 0x80225B74: b           L_80225B80
    // 0x80225B78: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80225B80;
    // 0x80225B78: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80225B7C: sh          $t6, 0x8($s5)
    MEM_H(0X8, ctx->r21) = ctx->r14;
L_80225B80:
    // 0x80225B80: addiu       $a0, $sp, 0x8A
    ctx->r4 = ADD32(ctx->r29, 0X8A);
    // 0x80225B84: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225B88: jal         0x80225424
    // 0x80225B8C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_25;
    // 0x80225B8C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_25:
    // 0x80225B90: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80225B94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80225B98: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x80225B9C: bgezl       $t9, L_80225BAC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80225BA0: lhu         $a0, 0x8A($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X8A);
            goto L_80225BAC;
    }
    goto skip_4;
    // 0x80225BA0: lhu         $a0, 0x8A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X8A);
    skip_4:
    // 0x80225BA4: sb          $t8, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r24;
    // 0x80225BA8: lhu         $a0, 0x8A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X8A);
L_80225BAC:
    // 0x80225BAC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80225BB0: sll         $t0, $a0, 3
    ctx->r8 = S32(ctx->r4 << 3);
    // 0x80225BB4: jal         0x8022B948
    // 0x80225BB8: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
    func_8022B948(rdram, ctx);
        goto after_26;
    // 0x80225BB8: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
    after_26:
    // 0x80225BBC: addu        $t1, $v0, $s4
    ctx->r9 = ADD32(ctx->r2, ctx->r20);
    // 0x80225BC0: sw          $t1, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r9;
    // 0x80225BC4: lhu         $t2, 0x8A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X8A);
    // 0x80225BC8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80225BCC: blez        $t2, L_80225CD0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80225BD0: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80225CD0;
    }
    // 0x80225BD0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_80225BD4:
    // 0x80225BD4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225BD8: jal         0x80225424
    // 0x80225BDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_27;
    // 0x80225BDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_27:
    // 0x80225BE0: lhu         $t3, 0x88($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X88);
    // 0x80225BE4: sll         $t5, $s0, 3
    ctx->r13 = S32(ctx->r16 << 3);
    // 0x80225BE8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80225BEC: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x80225BF0: beq         $t4, $zero, L_80225C54
    if (ctx->r12 == 0) {
        // 0x80225BF4: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80225C54;
    }
    // 0x80225BF4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225BF8: addu        $v1, $t5, $s1
    ctx->r3 = ADD32(ctx->r13, ctx->r17);
    // 0x80225BFC: sw          $s7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r23;
    // 0x80225C00: lhu         $v0, 0x88($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X88);
    // 0x80225C04: andi        $t6, $v0, 0xF00
    ctx->r14 = ctx->r2 & 0XF00;
    // 0x80225C08: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x80225C0C: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80225C10: andi        $t1, $v0, 0xF0
    ctx->r9 = ctx->r2 & 0XF0;
    // 0x80225C14: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x80225C18: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x80225C1C: mflo        $t9
    ctx->r25 = lo;
    // 0x80225C20: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80225C24: sll         $t0, $t8, 16
    ctx->r8 = S32(ctx->r24 << 16);
    // 0x80225C28: multu       $t2, $s2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80225C2C: mflo        $t3
    ctx->r11 = lo;
    // 0x80225C30: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x80225C34: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x80225C38: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80225C3C: or          $t6, $t0, $t5
    ctx->r14 = ctx->r8 | ctx->r13;
    // 0x80225C40: mflo        $t9
    ctx->r25 = lo;
    // 0x80225C44: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80225C48: or          $t1, $t6, $t8
    ctx->r9 = ctx->r14 | ctx->r24;
    // 0x80225C4C: b           L_80225CBC
    // 0x80225C50: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
        goto L_80225CBC;
    // 0x80225C50: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
L_80225C54:
    // 0x80225C54: jal         0x80225424
    // 0x80225C58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_28;
    // 0x80225C58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_28:
    // 0x80225C5C: lbu         $v0, 0x91($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X91);
    // 0x80225C60: lhu         $t2, 0x88($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X88);
    // 0x80225C64: lw          $t0, 0xF4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF4);
    // 0x80225C68: andi        $a0, $v0, 0xF0
    ctx->r4 = ctx->r2 & 0XF0;
    // 0x80225C6C: sra         $t7, $a0, 4
    ctx->r15 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80225C70: andi        $t3, $t2, 0x3FFF
    ctx->r11 = ctx->r10 & 0X3FFF;
    // 0x80225C74: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x80225C78: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x80225C7C: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x80225C80: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x80225C84: addu        $a1, $t4, $t0
    ctx->r5 = ADD32(ctx->r12, ctx->r8);
    // 0x80225C88: sll         $t4, $t7, 4
    ctx->r12 = S32(ctx->r15 << 4);
    // 0x80225C8C: andi        $t1, $t8, 0xFF
    ctx->r9 = ctx->r24 & 0XFF;
    // 0x80225C90: sll         $t5, $s0, 3
    ctx->r13 = S32(ctx->r16 << 3);
    // 0x80225C94: addu        $v1, $t5, $s1
    ctx->r3 = ADD32(ctx->r13, ctx->r17);
    // 0x80225C98: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x80225C9C: addiu       $t0, $t4, 0x10
    ctx->r8 = ADD32(ctx->r12, 0X10);
    // 0x80225CA0: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x80225CA4: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x80225CA8: andi        $t5, $t0, 0xFFFF
    ctx->r13 = ctx->r8 & 0XFFFF;
    // 0x80225CAC: or          $t7, $t3, $t5
    ctx->r15 = ctx->r11 | ctx->r13;
    // 0x80225CB0: addu        $t9, $a1, $s4
    ctx->r25 = ADD32(ctx->r5, ctx->r20);
    // 0x80225CB4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80225CB8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_80225CBC:
    // 0x80225CBC: lhu         $t6, 0x8A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X8A);
    // 0x80225CC0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225CC4: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80225CC8: bnel        $at, $zero, L_80225BD4
    if (ctx->r1 != 0) {
        // 0x80225CCC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80225BD4;
    }
    goto skip_5;
    // 0x80225CCC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_5:
L_80225CD0:
    // 0x80225CD0: lw          $v0, 0x98($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X98);
    // 0x80225CD4: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x80225CD8: addu        $v1, $t8, $s1
    ctx->r3 = ADD32(ctx->r24, ctx->r17);
    // 0x80225CDC: lui         $t1, 0xB800
    ctx->r9 = S32(0XB800 << 16);
    // 0x80225CE0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80225CE4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80225CE8: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80225CEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225CF0: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    // 0x80225CF4: lbu         $t4, 0x4($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X4);
    // 0x80225CF8: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x80225CFC: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80225D00: bnel        $at, $zero, L_80225944
    if (ctx->r1 != 0) {
        // 0x80225D04: lw          $t9, 0x98($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X98);
            goto L_80225944;
    }
    goto skip_6;
    // 0x80225D04: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    skip_6:
    // 0x80225D08: lbu         $t0, 0x8F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X8F);
L_80225D0C:
    // 0x80225D0C: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80225D10: lw          $v0, 0x9C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X9C);
    // 0x80225D14: sb          $t0, 0x20($t3)
    MEM_B(0X20, ctx->r11) = ctx->r8;
    // 0x80225D18: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80225D1C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x80225D20: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80225D24: addiu       $t7, $t5, 0x24
    ctx->r15 = ADD32(ctx->r13, 0X24);
    // 0x80225D28: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80225D2C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80225D30: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x80225D34: addiu       $t6, $t9, 0x24
    ctx->r14 = ADD32(ctx->r25, 0X24);
    // 0x80225D38: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80225D3C: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x80225D40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D44: addiu       $t3, $t0, 0x24
    ctx->r11 = ADD32(ctx->r8, 0X24);
    // 0x80225D48: addiu       $t7, $t5, 0x24
    ctx->r15 = ADD32(ctx->r13, 0X24);
    // 0x80225D4C: addiu       $t4, $t2, 0x24
    ctx->r12 = ADD32(ctx->r10, 0X24);
    // 0x80225D50: addiu       $t1, $t8, 0x24
    ctx->r9 = ADD32(ctx->r24, 0X24);
    // 0x80225D54: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x80225D58: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x80225D5C: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x80225D60: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x80225D64: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80225D68: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    // 0x80225D6C: lbu         $t6, 0x4($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X4);
    // 0x80225D70: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80225D74: bnel        $at, $zero, L_802258B8
    if (ctx->r1 != 0) {
        // 0x80225D78: lw          $a0, 0x6C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X6C);
            goto L_802258B8;
    }
    goto skip_7;
    // 0x80225D78: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    skip_7:
    // 0x80225D7C: lw          $v1, 0xE8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE8);
L_80225D80:
    // 0x80225D80: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80225D84: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225D88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80225D8C: sw          $v1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r3;
    // 0x80225D90: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x80225D94: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x80225D98: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80225D9C: jal         0x80225424
    // 0x80225DA0: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    func_80225424(rdram, ctx);
        goto after_29;
    // 0x80225DA0: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    after_29:
    // 0x80225DA4: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x80225DA8: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x80225DAC: lbu         $t9, 0x92($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X92);
    // 0x80225DB0: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x80225DB4: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x80225DB8: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80225DBC: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x80225DC0: bne         $at, $zero, L_80225808
    if (ctx->r1 != 0) {
        // 0x80225DC4: sw          $t3, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r11;
            goto L_80225808;
    }
    // 0x80225DC4: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
L_80225DC8:
    // 0x80225DC8: lbu         $a0, 0x93($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X93);
    // 0x80225DCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80225DD0: sll         $t6, $a0, 6
    ctx->r14 = S32(ctx->r4 << 6);
    // 0x80225DD4: jal         0x8022B948
    // 0x80225DD8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_30;
    // 0x80225DD8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_30:
    // 0x80225DDC: lbu         $a2, 0x93($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X93);
    // 0x80225DE0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80225DE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225DE8: sll         $t8, $a2, 6
    ctx->r24 = S32(ctx->r6 << 6);
    // 0x80225DEC: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80225DF0: jal         0x80225424
    // 0x80225DF4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80225424(rdram, ctx);
        goto after_31;
    // 0x80225DF4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_31:
    // 0x80225DF8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80225DFC: jal         0x8022B948
    // 0x80225E00: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_32;
    // 0x80225E00: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_32:
    // 0x80225E04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80225E08: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    // 0x80225E0C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225E10: jal         0x80225424
    // 0x80225E14: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_33;
    // 0x80225E14: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_33:
    // 0x80225E18: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x80225E1C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225E20: jal         0x80225424
    // 0x80225E24: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_34;
    // 0x80225E24: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_34:
    // 0x80225E28: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x80225E2C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225E30: jal         0x80225424
    // 0x80225E34: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_35;
    // 0x80225E34: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_35:
    // 0x80225E38: lw          $t1, 0xF4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF4);
    // 0x80225E3C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80225E40: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80225E44: lhu         $t2, 0x8C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X8C);
    // 0x80225E48: sh          $t2, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r10;
    // 0x80225E4C: lw          $t4, 0xEC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XEC);
    // 0x80225E50: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
    // 0x80225E54: lw          $t0, 0xE4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE4);
    // 0x80225E58: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
    // 0x80225E5C: lbu         $t5, 0x92($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X92);
    // 0x80225E60: sw          $s1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r17;
    // 0x80225E64: sb          $t5, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r13;
    // 0x80225E68: lbu         $t7, 0x93($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X93);
    // 0x80225E6C: sb          $t7, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r15;
    // 0x80225E70: lbu         $t3, 0x90($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X90);
    // 0x80225E74: sb          $t3, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r11;
    // 0x80225E78: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80225E7C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80225E80: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80225E84: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80225E88: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80225E8C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80225E90: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80225E94: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80225E98: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80225E9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80225EA0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80225EA4: jr          $ra
    // 0x80225EA8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x80225EA8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void D_802A9054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A90D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A90D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A90DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A90E0: bne         $a0, $zero, L_802A90F8
    if (ctx->r4 != 0) {
        // 0x802A90E4: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802A90F8;
    }
    // 0x802A90E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A90E8: jal         0x802C67EC
    // 0x802A90EC: addiu       $a0, $zero, 0x8D4
    ctx->r4 = ADD32(0, 0X8D4);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A90EC: addiu       $a0, $zero, 0x8D4
    ctx->r4 = ADD32(0, 0X8D4);
    after_0:
    // 0x802A90F0: beq         $v0, $zero, L_802A9134
    if (ctx->r2 == 0) {
        // 0x802A90F4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802A9134;
    }
    // 0x802A90F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802A90F8:
    // 0x802A90F8: jal         0x80317344
    // 0x802A90FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x802A90FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802A9100: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A9104: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A9108: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x802A910C: jal         0x802D3D30
    // 0x802A9110: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D3D30(rdram, ctx);
        goto after_2;
    // 0x802A9110: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_2:
    // 0x802A9114: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802A9118: addiu       $a3, $a3, 0x498C
    ctx->r7 = ADD32(ctx->r7, 0X498C);
    // 0x802A911C: addiu       $a0, $s0, 0x284
    ctx->r4 = ADD32(ctx->r16, 0X284);
    // 0x802A9120: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802A9124: jal         0x802C6930
    // 0x802A9128: addiu       $a2, $zero, 0x194
    ctx->r6 = ADD32(0, 0X194);
    static_3_802C6930(rdram, ctx);
        goto after_3;
    // 0x802A9128: addiu       $a2, $zero, 0x194
    ctx->r6 = ADD32(0, 0X194);
    after_3:
    // 0x802A912C: jal         0x802C498C
    // 0x802A9130: addiu       $a0, $s0, 0x740
    ctx->r4 = ADD32(ctx->r16, 0X740);
    static_3_802C498C(rdram, ctx);
        goto after_4;
    // 0x802A9130: addiu       $a0, $s0, 0x740
    ctx->r4 = ADD32(ctx->r16, 0X740);
    after_4:
L_802A9134:
    // 0x802A9134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A9138: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802A913C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A9140: jr          $ra
    // 0x802A9144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802A9144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802A9A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9ADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A9AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A9AE4: lw          $a2, 0x28($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X28);
    // 0x802A9AE8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802A9AEC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802A9AF0: beq         $a2, $at, L_802A9B10
    if (ctx->r6 == ctx->r1) {
        // 0x802A9AF4: sb          $zero, 0x24($a0)
        MEM_B(0X24, ctx->r4) = 0;
            goto L_802A9B10;
    }
    // 0x802A9AF4: sb          $zero, 0x24($a0)
    MEM_B(0X24, ctx->r4) = 0;
    // 0x802A9AF8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A9AFC: jal         0x8021BAE0
    // 0x802A9B00: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802A9B00: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x802A9B04: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802A9B08: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x802A9B0C: sw          $t6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r14;
L_802A9B10:
    // 0x802A9B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9B14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A9B18: jr          $ra
    // 0x802A9B1C: nop

    return;
    // 0x802A9B1C: nop

;}
RECOMP_FUNC void D_802AA7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA82C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802AA830: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AA834: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AA838: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA83C: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x802AA840: jal         0x8021ACB0
    // 0x802AA844: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AA844: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_0:
    // 0x802AA848: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AA84C: jal         0x8021B838
    // 0x802AA850: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AA850: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AA854: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AA858: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AA85C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AA860: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AA864: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x802AA868: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AA86C: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AA870: lh          $t7, 0xB8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB8);
    // 0x802AA874: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x802AA878: jalr        $t9
    // 0x802AA87C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AA87C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_2:
    // 0x802AA880: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AA884: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x802AA888: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802AA88C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AA890: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AA894: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AA898: jal         0x80317194
    // 0x802AA89C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_3;
    // 0x802AA89C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_3:
    // 0x802AA8A0: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AA8A4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x802AA8A8: jal         0x802D51DC
    // 0x802AA8AC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_4;
    // 0x802AA8AC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_4:
    // 0x802AA8B0: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AA8B4: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802AA8B8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802AA8BC: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AA8C0: jal         0x802C4A20
    // 0x802AA8C4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    static_3_802C4A20(rdram, ctx);
        goto after_5;
    // 0x802AA8C4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_5:
    // 0x802AA8C8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x802AA8CC: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AA8D0: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x802AA8D4: jal         0x802C4A20
    // 0x802AA8D8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_6;
    // 0x802AA8D8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_6:
    // 0x802AA8DC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802AA8E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AA8E4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802AA8E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AA8EC: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802AA8F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AA8F4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AA8F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AA8FC: sw          $zero, 0x664($s0)
    MEM_W(0X664, ctx->r16) = 0;
    // 0x802AA900: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AA904: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x802AA908: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x802AA90C: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    // 0x802AA910: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AA914: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AA918: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802AA91C: jr          $ra
    // 0x802AA920: nop

    return;
    // 0x802AA920: nop

;}
RECOMP_FUNC void D_80249234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249234: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024923C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80249240: jal         0x80249238
    // 0x80249244: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    static_3_80249238(rdram, ctx);
        goto after_0;
    // 0x80249244: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    after_0:
    // 0x80249248: lw          $t6, 0xC($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XC);
    // 0x8024924C: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80249250: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80249254: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80249258: sw          $t7, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r15;
    // 0x8024925C: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80249260: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80249264: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80249268: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x8024926C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80249270: bne         $a0, $at, L_80249330
    if (ctx->r4 != ctx->r1) {
        // 0x80249274: andi        $a1, $a0, 0xFF
        ctx->r5 = ctx->r4 & 0XFF;
            goto L_80249330;
    }
    // 0x80249274: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x80249278: lbu         $v0, 0x0($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X0);
    // 0x8024927C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80249280: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80249284: sw          $t9, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r25;
    // 0x80249288: bne         $v0, $at, L_802492F8
    if (ctx->r2 != ctx->r1) {
        // 0x8024928C: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_802492F8;
    }
    // 0x8024928C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80249290: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80249294: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    // 0x80249298: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x8024929C: sb          $a1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r5;
    // 0x802492A0: sb          $t0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r8;
    // 0x802492A4: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x802492A8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802492AC: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x802492B0: sw          $t7, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r15;
    // 0x802492B4: sb          $v0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r2;
    // 0x802492B8: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x802492BC: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x802492C0: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x802492C4: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x802492C8: sb          $a0, 0xB($a3)
    MEM_B(0XB, ctx->r7) = ctx->r4;
    // 0x802492CC: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x802492D0: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x802492D4: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x802492D8: sw          $t9, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r25;
    // 0x802492DC: sb          $a1, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r5;
    // 0x802492E0: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x802492E4: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x802492E8: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x802492EC: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    // 0x802492F0: b           L_80249328
    // 0x802492F4: sb          $a0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r4;
        goto L_80249328;
    // 0x802492F4: sb          $a0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r4;
L_802492F8:
    // 0x802492F8: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x802492FC: bne         $v0, $at, L_80249328
    if (ctx->r2 != ctx->r1) {
        // 0x80249300: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_80249328;
    }
    // 0x80249300: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80249304: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
    // 0x80249308: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x8024930C: sb          $a1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r5;
    // 0x80249310: sb          $t0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r8;
    // 0x80249314: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80249318: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8024931C: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80249320: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80249324: sb          $a0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r4;
L_80249328:
    // 0x80249328: b           L_802493A8
    // 0x8024932C: sh          $zero, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = 0;
        goto L_802493A8;
    // 0x8024932C: sh          $zero, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = 0;
L_80249330:
    // 0x80249330: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80249334: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x80249338: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
    // 0x8024933C: beq         $t6, $zero, L_80249364
    if (ctx->r14 == 0) {
        // 0x80249340: sw          $t1, 0x4($a3)
        MEM_W(0X4, ctx->r7) = ctx->r9;
            goto L_80249364;
    }
    // 0x80249340: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x80249344: sb          $a1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r5;
    // 0x80249348: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x8024934C: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80249350: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80249354: sw          $t7, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r15;
    // 0x80249358: sb          $a0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r4;
    // 0x8024935C: b           L_80249370
    // 0x80249360: sh          $a1, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r5;
        goto L_80249370;
    // 0x80249360: sh          $a1, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r5;
L_80249364:
    // 0x80249364: lh          $t8, 0x1A($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X1A);
    // 0x80249368: sb          $a0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r4;
    // 0x8024936C: sb          $t8, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r24;
L_80249370:
    // 0x80249370: lbu         $v0, 0x8($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X8);
    // 0x80249374: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x80249378: andi        $t9, $v0, 0xF0
    ctx->r25 = ctx->r2 & 0XF0;
    // 0x8024937C: beq         $t9, $at, L_802493A4
    if (ctx->r25 == ctx->r1) {
        // 0x80249380: addiu       $at, $zero, 0xD0
        ctx->r1 = ADD32(0, 0XD0);
            goto L_802493A4;
    }
    // 0x80249380: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x80249384: beql        $t9, $at, L_802493A8
    if (ctx->r25 == ctx->r1) {
        // 0x80249388: sb          $zero, 0xA($a3)
        MEM_B(0XA, ctx->r7) = 0;
            goto L_802493A8;
    }
    goto skip_0;
    // 0x80249388: sb          $zero, 0xA($a3)
    MEM_B(0XA, ctx->r7) = 0;
    skip_0:
    // 0x8024938C: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80249390: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80249394: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80249398: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    // 0x8024939C: b           L_802493A8
    // 0x802493A0: sb          $a0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r4;
        goto L_802493A8;
    // 0x802493A0: sb          $a0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r4;
L_802493A4:
    // 0x802493A4: sb          $zero, 0xA($a3)
    MEM_B(0XA, ctx->r7) = 0;
L_802493A8:
    // 0x802493A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802493AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802493B0: jr          $ra
    // 0x802493B4: nop

    return;
    // 0x802493B4: nop

;}
RECOMP_FUNC void D_802A1FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2074: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A2078: jr          $ra
    // 0x802A207C: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802A207C: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802A999C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A9A20: beq         $a0, $zero, L_802A9A3C
    if (ctx->r4 == 0) {
        // 0x802A9A24: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A9A3C;
    }
    // 0x802A9A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A9A28: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x802A9A2C: beql        $t6, $zero, L_802A9A40
    if (ctx->r14 == 0) {
        // 0x802A9A30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A9A40;
    }
    goto skip_0;
    // 0x802A9A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A9A34: jal         0x802C681C
    // 0x802A9A38: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802A9A38: nop

    after_0:
L_802A9A3C:
    // 0x802A9A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A9A40:
    // 0x802A9A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A9A44: jr          $ra
    // 0x802A9A48: nop

    return;
    // 0x802A9A48: nop

;}
RECOMP_FUNC void D_80249120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249120: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80249124: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80249128: blez        $a2, L_8024918C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8024912C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8024918C;
    }
    // 0x8024912C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80249130: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x80249134: beq         $a1, $zero, L_8024915C
    if (ctx->r5 == 0) {
        // 0x80249138: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8024915C;
    }
    // 0x80249138: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8024913C:
    // 0x8024913C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80249140: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80249144: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80249148: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024914C: bne         $a0, $a3, L_8024913C
    if (ctx->r4 != ctx->r7) {
        // 0x80249150: sb          $t6, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r14;
            goto L_8024913C;
    }
    // 0x80249150: sb          $t6, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r14;
    // 0x80249154: beq         $a3, $a2, L_8024918C
    if (ctx->r7 == ctx->r6) {
        // 0x80249158: nop
    
            goto L_8024918C;
    }
    // 0x80249158: nop

L_8024915C:
    // 0x8024915C: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80249160: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80249164: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80249168: sb          $t7, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r15;
    // 0x8024916C: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x80249170: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80249174: sb          $t8, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r24;
    // 0x80249178: lbu         $t9, -0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X2);
    // 0x8024917C: sb          $t9, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r25;
    // 0x80249180: lbu         $t0, -0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, -0X1);
    // 0x80249184: bne         $a3, $a2, L_8024915C
    if (ctx->r7 != ctx->r6) {
        // 0x80249188: sb          $t0, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r8;
            goto L_8024915C;
    }
    // 0x80249188: sb          $t0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r8;
L_8024918C:
    // 0x8024918C: jr          $ra
    // 0x80249190: nop

    return;
    // 0x80249190: nop

;}
RECOMP_FUNC void D_802950AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029512C: jr          $ra
    // 0x80295130: sw          $a1, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->r5;
    return;
    // 0x80295130: sw          $a1, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802C381C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C389C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802C38A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802C38A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802C38A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802C38AC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802C38B0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x802C38B4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x802C38B8: jal         0x8021E66C
    // 0x802C38BC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_0;
    // 0x802C38BC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x802C38C0: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x802C38C4: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x802C38C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802C38CC: bgezl       $a2, L_802C38DC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x802C38D0: slt         $at, $v0, $a2
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_802C38DC;
    }
    goto skip_0;
    // 0x802C38D0: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    skip_0:
    // 0x802C38D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C38D8: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
L_802C38DC:
    // 0x802C38DC: beq         $at, $zero, L_802C391C
    if (ctx->r1 == 0) {
        // 0x802C38E0: nop
    
            goto L_802C391C;
    }
    // 0x802C38E0: nop

    // 0x802C38E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802C38E8: lw          $t6, 0x158($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X158);
    // 0x802C38EC: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x802C38F0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x802C38F4: swc1        $f0, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f0.u32l;
    // 0x802C38F8: blez        $t6, L_802C3908
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802C38FC: swc1        $f0, 0xCC($s0)
        MEM_W(0XCC, ctx->r16) = ctx->f0.u32l;
            goto L_802C3908;
    }
    // 0x802C38FC: swc1        $f0, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f0.u32l;
    // 0x802C3900: subu        $t7, $v0, $v0
    ctx->r15 = SUB32(ctx->r2, ctx->r2);
    // 0x802C3904: sw          $t7, 0x158($s0)
    MEM_W(0X158, ctx->r16) = ctx->r15;
L_802C3908:
    // 0x802C3908: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802C390C: jal         0x802EA0F0
    // 0x802C3910: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    static_3_802EA0F0(rdram, ctx);
        goto after_1;
    // 0x802C3910: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    after_1:
    // 0x802C3914: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x802C3918: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
L_802C391C:
    // 0x802C391C: bne         $a2, $v0, L_802C3940
    if (ctx->r6 != ctx->r2) {
        // 0x802C3920: addiu       $a0, $sp, 0x2C
        ctx->r4 = ADD32(ctx->r29, 0X2C);
            goto L_802C3940;
    }
    // 0x802C3920: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802C3924: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C3928: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802C392C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802C3930: jal         0x8023072C
    // 0x802C3934: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    static_3_8023072C(rdram, ctx);
        goto after_2;
    // 0x802C3934: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x802C3938: b           L_802C394C
    // 0x802C393C: nop

        goto L_802C394C;
    // 0x802C393C: nop

L_802C3940:
    // 0x802C3940: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C3944: jal         0x8023072C
    // 0x802C3948: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_3;
    // 0x802C3948: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_3:
L_802C394C:
    // 0x802C394C: jal         0x8022FF90
    // 0x802C3950: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    static_3_8022FF90(rdram, ctx);
        goto after_4;
    // 0x802C3950: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x802C3954: bgez        $v0, L_802C3968
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802C3958: andi        $t8, $v0, 0x7
        ctx->r24 = ctx->r2 & 0X7;
            goto L_802C3968;
    }
    // 0x802C3958: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x802C395C: beq         $t8, $zero, L_802C3968
    if (ctx->r24 == 0) {
        // 0x802C3960: nop
    
            goto L_802C3968;
    }
    // 0x802C3960: nop

    // 0x802C3964: addiu       $t8, $t8, -0x8
    ctx->r24 = ADD32(ctx->r24, -0X8);
L_802C3968:
    // 0x802C3968: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x802C396C: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x802C3970: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x802C3974: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C3978: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C397C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C3980: jal         0x8021E708
    // 0x802C3984: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_5;
    // 0x802C3984: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
    // 0x802C3988: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x802C398C: lbu         $t1, 0x47($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X47);
    // 0x802C3990: lbu         $a1, 0x4B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X4B);
    // 0x802C3994: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x802C3998: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802C399C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x802C39A0: addu        $a0, $t1, $t3
    ctx->r4 = ADD32(ctx->r9, ctx->r11);
    // 0x802C39A4: jal         0x8021E87C
    // 0x802C39A8: addiu       $a1, $a1, -0x7
    ctx->r5 = ADD32(ctx->r5, -0X7);
    static_3_8021E87C(rdram, ctx);
        goto after_6;
    // 0x802C39A8: addiu       $a1, $a1, -0x7
    ctx->r5 = ADD32(ctx->r5, -0X7);
    after_6:
    // 0x802C39AC: jal         0x8021EC9C
    // 0x802C39B0: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_7;
    // 0x802C39B0: nop

    after_7:
    // 0x802C39B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802C39B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802C39BC: lwc1        $f6, 0xC8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x802C39C0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802C39C4: nop

    // 0x802C39C8: bc1fl       L_802C3A2C
    if (!c1cs) {
        // 0x802C39CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802C3A2C;
    }
    goto skip_1;
    // 0x802C39CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x802C39D0: lwc1        $f10, 0xCC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x802C39D4: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x802C39D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802C39DC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802C39E0: c.le.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d <= ctx->f8.d;
    // 0x802C39E4: nop

    // 0x802C39E8: bc1fl       L_802C3A2C
    if (!c1cs) {
        // 0x802C39EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802C3A2C;
    }
    goto skip_2;
    // 0x802C39EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x802C39F0: lw          $v1, 0x158($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X158);
    // 0x802C39F4: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x802C39F8: lbu         $t6, 0xC0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC0);
    // 0x802C39FC: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x802C3A00: beq         $t6, $zero, L_802C3A14
    if (ctx->r14 == 0) {
        // 0x802C3A04: sw          $t5, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r13;
            goto L_802C3A14;
    }
    // 0x802C3A04: sw          $t5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r13;
    // 0x802C3A08: jal         0x80303328
    // 0x802C3A0C: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
    static_3_80303328(rdram, ctx);
        goto after_8;
    // 0x802C3A0C: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
    after_8:
    // 0x802C3A10: lw          $v1, 0x158($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X158);
L_802C3A14:
    // 0x802C3A14: lw          $t7, 0xA0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA0);
    // 0x802C3A18: lwc1        $f18, 0xD0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x802C3A1C: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x802C3A20: sw          $t9, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r25;
    // 0x802C3A24: swc1        $f18, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f18.u32l;
    // 0x802C3A28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802C3A2C:
    // 0x802C3A2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802C3A30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802C3A34: jr          $ra
    // 0x802C3A38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802C3A38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802D8070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D80F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D80F4: jr          $ra
    // 0x802D80F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802D80F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802DFF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0018: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802E001C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E0020: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E0024: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E0028: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x802E002C: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x802E0030: jal         0x8030F66C
    // 0x802E0034: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    static_3_8030F66C(rdram, ctx);
        goto after_0;
    // 0x802E0034: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_0:
    // 0x802E0038: jal         0x8030F838
    // 0x802E003C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_8030F838(rdram, ctx);
        goto after_1;
    // 0x802E003C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_1:
    // 0x802E0040: lbu         $t6, 0x28($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X28);
    // 0x802E0044: bnel        $t6, $zero, L_802E0068
    if (ctx->r14 != 0) {
        // 0x802E0048: lw          $v1, 0x7C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X7C);
            goto L_802E0068;
    }
    goto skip_0;
    // 0x802E0048: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    skip_0:
    // 0x802E004C: jal         0x8030F500
    // 0x802E0050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8030F500(rdram, ctx);
        goto after_2;
    // 0x802E0050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802E0054: jal         0x8031034C
    // 0x802E0058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031034C(rdram, ctx);
        goto after_3;
    // 0x802E0058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802E005C: jal         0x8030FC48
    // 0x802E0060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8030FC48(rdram, ctx);
        goto after_4;
    // 0x802E0060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802E0064: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
L_802E0068:
    // 0x802E0068: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802E006C: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802E0070: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802E0074: lh          $t7, 0xB0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB0);
    // 0x802E0078: jalr        $t9
    // 0x802E007C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802E007C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_5:
    // 0x802E0080: lbu         $t8, 0x28($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X28);
    // 0x802E0084: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x802E0088: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    // 0x802E008C: beq         $t8, $zero, L_802E012C
    if (ctx->r24 == 0) {
        // 0x802E0090: lui         $a2, 0x441B
        ctx->r6 = S32(0X441B << 16);
            goto L_802E012C;
    }
    // 0x802E0090: lui         $a2, 0x441B
    ctx->r6 = S32(0X441B << 16);
    // 0x802E0094: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x802E0098: lui         $a1, 0x43AF
    ctx->r5 = S32(0X43AF << 16);
    // 0x802E009C: lui         $a2, 0xC3E1
    ctx->r6 = S32(0XC3E1 << 16);
    // 0x802E00A0: jal         0x80318E04
    // 0x802E00A4: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_6;
    // 0x802E00A4: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    after_6:
    // 0x802E00A8: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x802E00AC: jal         0x80318C9C
    // 0x802E00B0: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_7;
    // 0x802E00B0: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    after_7:
    // 0x802E00B4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802E00B8: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802E00BC: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x802E00C0: addiu       $v0, $sp, 0x3C
    ctx->r2 = ADD32(ctx->r29, 0X3C);
    // 0x802E00C4: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802E00C8: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802E00CC: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x802E00D0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x802E00D4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x802E00D8: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x802E00DC: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802E00E0: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x802E00E4: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x802E00E8: lw          $at, 0x10($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X10);
    // 0x802E00EC: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802E00F0: lw          $t3, 0x14($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X14);
    // 0x802E00F4: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x802E00F8: lw          $at, 0x18($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X18);
    // 0x802E00FC: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802E0100: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802E0104: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0108: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802E010C: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x802E0110: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802E0114: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802E0118: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802E011C: jal         0x80303778
    // 0x802E0120: nop

    static_3_80303778(rdram, ctx);
        goto after_8;
    // 0x802E0120: nop

    after_8:
    // 0x802E0124: b           L_802E01B4
    // 0x802E0128: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
        goto L_802E01B4;
    // 0x802E0128: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_802E012C:
    // 0x802E012C: jal         0x80318E04
    // 0x802E0130: lui         $a3, 0x436B
    ctx->r7 = S32(0X436B << 16);
    static_3_80318E04(rdram, ctx);
        goto after_9;
    // 0x802E0130: lui         $a3, 0x436B
    ctx->r7 = S32(0X436B << 16);
    after_9:
    // 0x802E0134: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x802E0138: jal         0x80318C9C
    // 0x802E013C: lui         $a1, 0x4384
    ctx->r5 = S32(0X4384 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_10;
    // 0x802E013C: lui         $a1, 0x4384
    ctx->r5 = S32(0X4384 << 16);
    after_10:
    // 0x802E0140: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802E0144: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802E0148: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802E014C: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x802E0150: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802E0154: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802E0158: lw          $t2, 0x4($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X4);
    // 0x802E015C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802E0160: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x802E0164: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x802E0168: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802E016C: lw          $t2, 0xC($t7)
    ctx->r10 = MEM_W(ctx->r15, 0XC);
    // 0x802E0170: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x802E0174: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x802E0178: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802E017C: lw          $t2, 0x14($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X14);
    // 0x802E0180: sw          $t2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r10;
    // 0x802E0184: lw          $at, 0x18($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X18);
    // 0x802E0188: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802E018C: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802E0190: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0194: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x802E0198: addu        $t3, $v0, $t0
    ctx->r11 = ADD32(ctx->r2, ctx->r8);
    // 0x802E019C: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802E01A0: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802E01A4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802E01A8: jal         0x80303778
    // 0x802E01AC: nop

    static_3_80303778(rdram, ctx);
        goto after_11;
    // 0x802E01AC: nop

    after_11:
    // 0x802E01B0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_802E01B4:
    // 0x802E01B4: jal         0x802AEDEC
    // 0x802E01B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_12;
    // 0x802E01B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x802E01BC: lbu         $t4, 0x28($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X28);
    // 0x802E01C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E01C4: beq         $t4, $zero, L_802E01DC
    if (ctx->r12 == 0) {
        // 0x802E01C8: nop
    
            goto L_802E01DC;
    }
    // 0x802E01C8: nop

    // 0x802E01CC: lw          $t5, 0x78($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X78);
    // 0x802E01D0: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x802E01D4: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x802E01D8: sw          $t6, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r14;
L_802E01DC:
    // 0x802E01DC: jal         0x802BCF20
    // 0x802E01E0: nop

    static_3_802BCF20(rdram, ctx);
        goto after_13;
    // 0x802E01E0: nop

    after_13:
    // 0x802E01E4: jal         0x80309B18
    // 0x802E01E8: nop

    static_3_80309B18(rdram, ctx);
        goto after_14;
    // 0x802E01E8: nop

    after_14:
    // 0x802E01EC: jal         0x803099E4
    // 0x802E01F0: nop

    static_3_803099E4(rdram, ctx);
        goto after_15;
    // 0x802E01F0: nop

    after_15:
    // 0x802E01F4: jal         0x802AEF00
    // 0x802E01F8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802AEF00(rdram, ctx);
        goto after_16;
    // 0x802E01F8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_16:
    // 0x802E01FC: lui         $a1, 0x4096
    ctx->r5 = S32(0X4096 << 16);
    // 0x802E0200: ori         $a1, $a1, 0xCBE8
    ctx->r5 = ctx->r5 | 0XCBE8;
    // 0x802E0204: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E0208: jal         0x80308FF8
    // 0x802E020C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_80308FF8(rdram, ctx);
        goto after_17;
    // 0x802E020C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_17:
    // 0x802E0210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802E0214: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E0218: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802E021C: jr          $ra
    // 0x802E0220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E0220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802CCB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCBD4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802CCBD8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802CCBDC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802CCBE0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802CCBE4: lbu         $t7, 0xA9($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XA9);
    // 0x802CCBE8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CCBEC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802CCBF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CCBF4: beq         $t7, $zero, L_802CCD5C
    if (ctx->r15 == 0) {
        // 0x802CCBF8: sw          $t6, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r14;
            goto L_802CCD5C;
    }
    // 0x802CCBF8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802CCBFC: lbu         $t8, 0x716C($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X716C);
    // 0x802CCC00: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    // 0x802CCC04: beql        $t8, $zero, L_802CCD60
    if (ctx->r24 == 0) {
        // 0x802CCC08: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802CCD60;
    }
    goto skip_0;
    // 0x802CCC08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802CCC0C: jal         0x8022970C
    // 0x802CCC10: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802CCC10: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x802CCC14: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x802CCC18: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x802CCC1C: lw          $v1, 0xC($t9)
    ctx->r3 = MEM_W(ctx->r25, 0XC);
    // 0x802CCC20: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802CCC24: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802CCC28: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    // 0x802CCC2C: jalr        $t9
    // 0x802CCC30: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802CCC30: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    after_1:
    // 0x802CCC34: addiu       $t1, $s0, 0x98
    ctx->r9 = ADD32(ctx->r16, 0X98);
    // 0x802CCC38: addiu       $t2, $s0, 0x9C
    ctx->r10 = ADD32(ctx->r16, 0X9C);
    // 0x802CCC3C: addiu       $t3, $s0, 0xA0
    ctx->r11 = ADD32(ctx->r16, 0XA0);
    // 0x802CCC40: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802CCC44: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802CCC48: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802CCC4C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802CCC50: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x802CCC54: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x802CCC58: jal         0x802CF1C8
    // 0x802CCC5C: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    static_3_802CF1C8(rdram, ctx);
        goto after_2;
    // 0x802CCC5C: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x802CCC60: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CCC64: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x802CCC68: jal         0x802AEF08
    // 0x802CCC6C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    static_3_802AEF08(rdram, ctx);
        goto after_3;
    // 0x802CCC6C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_3:
    // 0x802CCC70: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x802CCC74: jal         0x80317DA8
    // 0x802CCC78: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    static_3_80317DA8(rdram, ctx);
        goto after_4;
    // 0x802CCC78: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    after_4:
    // 0x802CCC7C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802CCC80: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802CCC84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802CCC88: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802CCC8C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CCC90: swc1        $f6, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f6.u32l;
    // 0x802CCC94: lwc1        $f2, 0xA4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x802CCC98: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802CCC9C: nop

    // 0x802CCCA0: bc1f        L_802CCCB0
    if (!c1cs) {
        // 0x802CCCA4: nop
    
            goto L_802CCCB0;
    }
    // 0x802CCCA4: nop

    // 0x802CCCA8: b           L_802CCCB0
    // 0x802CCCAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802CCCB0;
    // 0x802CCCAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802CCCB0:
    // 0x802CCCB0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802CCCB4: sb          $v0, 0xA8($s0)
    MEM_B(0XA8, ctx->r16) = ctx->r2;
    // 0x802CCCB8: bc1f        L_802CCCCC
    if (!c1cs) {
        // 0x802CCCBC: nop
    
            goto L_802CCCCC;
    }
    // 0x802CCCBC: nop

    // 0x802CCCC0: swc1        $f12, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f12.u32l;
    // 0x802CCCC4: b           L_802CCCE8
    // 0x802CCCC8: lwc1        $f2, 0xA4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA4);
        goto L_802CCCE8;
    // 0x802CCCC8: lwc1        $f2, 0xA4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA4);
L_802CCCCC:
    // 0x802CCCCC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CCCD0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802CCCD4: nop

    // 0x802CCCD8: bc1fl       L_802CCCEC
    if (!c1cs) {
        // 0x802CCCDC: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_802CCCEC;
    }
    goto skip_1;
    // 0x802CCCDC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    skip_1:
    // 0x802CCCE0: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    // 0x802CCCE4: lwc1        $f2, 0xA4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA4);
L_802CCCE8:
    // 0x802CCCE8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
L_802CCCEC:
    // 0x802CCCEC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802CCCF0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802CCCF4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802CCCF8: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x802CCCFC: nop

    // 0x802CCD00: bc1fl       L_802CCD20
    if (!c1cs) {
        // 0x802CCD04: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_802CCD20;
    }
    goto skip_2;
    // 0x802CCD04: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_2:
    // 0x802CCD08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CCD0C: nop

    // 0x802CCD10: mul.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802CCD14: b           L_802CCD24
    // 0x802CCD18: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
        goto L_802CCD24;
    // 0x802CCD18: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x802CCD1C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_802CCD20:
    // 0x802CCD20: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
L_802CCD24:
    // 0x802CCD24: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x802CCD28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802CCD2C: jal         0x8022970C
    // 0x802CCD30: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x802CCD30: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x802CCD34: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802CCD38: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x802CCD3C: jal         0x802D01D4
    // 0x802CCD40: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x802CCD40: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_6:
    // 0x802CCD44: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802CCD48: swc1        $f18, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f18.u32l;
    // 0x802CCD4C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802CCD50: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x802CCD54: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802CCD58: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
L_802CCD5C:
    // 0x802CCD5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802CCD60:
    // 0x802CCD60: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802CCD64: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802CCD68: jr          $ra
    // 0x802CCD6C: nop

    return;
    // 0x802CCD6C: nop

;}
RECOMP_FUNC void D_80237310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237310: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237314: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237318: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023731C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80237320: jal         0x80241760
    // 0x80237324: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x80237324: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80237328: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023732C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80237330: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80237334: lhu         $s1, 0x10($t6)
    ctx->r17 = MEM_HU(ctx->r14, 0X10);
    // 0x80237338: beq         $s1, $at, L_8023736C
    if (ctx->r17 == ctx->r1) {
        // 0x8023733C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8023736C;
    }
    // 0x8023733C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80237340: bne         $s1, $at, L_802373EC
    if (ctx->r17 != ctx->r1) {
        // 0x80237344: nop
    
            goto L_802373EC;
    }
    // 0x80237344: nop

    // 0x80237348: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8023734C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80237350: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80237354: sh          $t7, 0x10($t8)
    MEM_H(0X10, ctx->r24) = ctx->r15;
    // 0x80237358: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8023735C: jal         0x80241EFC
    // 0x80237360: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80241EFC(rdram, ctx);
        goto after_1;
    // 0x80237360: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80237364: b           L_802373EC
    // 0x80237368: nop

        goto L_802373EC;
    // 0x80237368: nop

L_8023736C:
    // 0x8023736C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80237370: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x80237374: beq         $t0, $zero, L_8023738C
    if (ctx->r8 == 0) {
        // 0x80237378: nop
    
            goto L_8023738C;
    }
    // 0x80237378: nop

    // 0x8023737C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80237380: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80237384: bne         $t0, $t1, L_802373B0
    if (ctx->r8 != ctx->r9) {
        // 0x80237388: nop
    
            goto L_802373B0;
    }
    // 0x80237388: nop

L_8023738C:
    // 0x8023738C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80237390: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80237394: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80237398: sh          $t2, 0x10($t3)
    MEM_H(0X10, ctx->r11) = ctx->r10;
    // 0x8023739C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802373A0: jal         0x80241EFC
    // 0x802373A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80241EFC(rdram, ctx);
        goto after_2;
    // 0x802373A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x802373A8: b           L_802373EC
    // 0x802373AC: nop

        goto L_802373EC;
    // 0x802373AC: nop

L_802373B0:
    // 0x802373B0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x802373B4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x802373B8: sh          $t4, 0x10($t5)
    MEM_H(0X10, ctx->r13) = ctx->r12;
    // 0x802373BC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x802373C0: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x802373C4: jal         0x80241EFC
    // 0x802373C8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    static_3_80241EFC(rdram, ctx);
        goto after_3;
    // 0x802373C8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_3:
    // 0x802373CC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802373D0: jal         0x80241F44
    // 0x802373D4: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    static_3_80241F44(rdram, ctx);
        goto after_4;
    // 0x802373D4: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_4:
    // 0x802373D8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802373DC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802373E0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802373E4: jal         0x80241EFC
    // 0x802373E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80241EFC(rdram, ctx);
        goto after_5;
    // 0x802373E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
L_802373EC:
    // 0x802373EC: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802373F0: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802373F4: bne         $t8, $zero, L_8023740C
    if (ctx->r24 != 0) {
        // 0x802373F8: nop
    
            goto L_8023740C;
    }
    // 0x802373F8: nop

    // 0x802373FC: jal         0x80241F54
    // 0x80237400: nop

    static_3_80241F54(rdram, ctx);
        goto after_6;
    // 0x80237400: nop

    after_6:
    // 0x80237404: b           L_80237444
    // 0x80237408: nop

        goto L_80237444;
    // 0x80237408: nop

L_8023740C:
    // 0x8023740C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80237410: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80237414: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80237418: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8023741C: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x80237420: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80237424: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80237428: beq         $at, $zero, L_80237444
    if (ctx->r1 == 0) {
        // 0x8023742C: nop
    
            goto L_80237444;
    }
    // 0x8023742C: nop

    // 0x80237430: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80237434: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80237438: sh          $t3, 0x10($t9)
    MEM_H(0X10, ctx->r25) = ctx->r11;
    // 0x8023743C: jal         0x80241DFC
    // 0x80237440: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80241DFC(rdram, ctx);
        goto after_7;
    // 0x80237440: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_7:
L_80237444:
    // 0x80237444: jal         0x80241780
    // 0x80237448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_8;
    // 0x80237448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8023744C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237450: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80237454: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80237458: jr          $ra
    // 0x8023745C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023745C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80293D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293DFC: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80293E00: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80293E04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80293E08: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80293E0C: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x80293E10: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80293E14: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x80293E18: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80293E1C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80293E20: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80293E24: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x80293E28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80293E2C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80293E30: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80293E34: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x80293E38: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x80293E3C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80293E40: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x80293E44: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80293E48: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x80293E4C: jal         0x802AD568
    // 0x80293E50: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x80293E50: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80293E54: blez        $v0, L_80293F80
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80293E58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80293F80;
    }
    // 0x80293E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293E5C: lw          $v0, 0x8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8C);
    // 0x80293E60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80293E64: beq         $v0, $at, L_80293E70
    if (ctx->r2 == ctx->r1) {
        // 0x80293E68: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80293E70;
    }
    // 0x80293E68: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80293E6C: bne         $v0, $at, L_80293E80
    if (ctx->r2 != ctx->r1) {
        // 0x80293E70: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_80293E80;
    }
L_80293E70:
    // 0x80293E70: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80293E74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80293E78: b           L_80293E90
    // 0x80293E7C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
        goto L_80293E90;
    // 0x80293E7C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
L_80293E80:
    // 0x80293E80: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80293E84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80293E88: nop

    // 0x80293E8C: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
L_80293E90:
    // 0x80293E90: jal         0x802C51D0
    // 0x80293E94: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x80293E94: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    after_1:
    // 0x80293E98: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80293E9C: lwc1        $f6, 0xA4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80293EA0: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80293EA4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80293EA8: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x80293EAC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x80293EB0: jal         0x8022970C
    // 0x80293EB4: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x80293EB4: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80293EB8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80293EBC: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80293EC0: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80293EC4: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80293EC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80293ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293ED0: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80293ED4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x80293ED8: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x80293EDC: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x80293EE0: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    // 0x80293EE4: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x80293EE8: jal         0x802C484C
    // 0x80293EEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802C484C(rdram, ctx);
        goto after_3;
    // 0x80293EEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80293EF0: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80293EF4: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80293EF8: jal         0x802D01D4
    // 0x80293EFC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x80293EFC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_4:
    // 0x80293F00: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80293F04: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80293F08: jal         0x802D01D4
    // 0x80293F0C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x80293F0C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_5:
    // 0x80293F10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80293F14: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80293F18: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80293F1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80293F20: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80293F24: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80293F28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80293F2C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80293F30: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80293F34: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80293F38: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80293F3C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80293F40: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80293F44: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80293F48: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80293F4C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80293F50: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80293F54: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80293F58: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80293F5C: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x80293F60: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x80293F64: jal         0x802AB018
    // 0x80293F68: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    static_3_802AB018(rdram, ctx);
        goto after_6;
    // 0x80293F68: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_6:
    // 0x80293F6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80293F70: jal         0x802D0CC0
    // 0x80293F74: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    static_3_802D0CC0(rdram, ctx);
        goto after_7;
    // 0x80293F74: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_7:
    // 0x80293F78: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80293F7C: swc1        $f18, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f18.u32l;
L_80293F80:
    // 0x80293F80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80293F84: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80293F88: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x80293F8C: jr          $ra
    // 0x80293F90: nop

    return;
    // 0x80293F90: nop

;}
RECOMP_FUNC void D_802CF338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF3B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CF3BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CF3C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802CF3C4: beq         $a0, $zero, L_802CF410
    if (ctx->r4 == 0) {
        // 0x802CF3C8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802CF410;
    }
    // 0x802CF3C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802CF3CC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CF3D0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802CF3D4: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802CF3D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802CF3DC: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x802CF3E0: jal         0x8028D2B8
    // 0x802CF3E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028D2B8(rdram, ctx);
        goto after_0;
    // 0x802CF3E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802CF3E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802CF3EC: jal         0x803086D4
    // 0x802CF3F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_1;
    // 0x802CF3F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802CF3F4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802CF3F8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802CF3FC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802CF400: beql        $t8, $zero, L_802CF414
    if (ctx->r24 == 0) {
        // 0x802CF404: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802CF414;
    }
    goto skip_0;
    // 0x802CF404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802CF408: jal         0x802C681C
    // 0x802CF40C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x802CF40C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_802CF410:
    // 0x802CF410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802CF414:
    // 0x802CF414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CF418: jr          $ra
    // 0x802CF41C: nop

    return;
    // 0x802CF41C: nop

;}
RECOMP_FUNC void D_802238A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802238A0: bltz        $a0, L_802238BC
    if (SIGNED(ctx->r4) < 0) {
        // 0x802238A4: slti        $at, $a0, 0x2
        ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_802238BC;
    }
    // 0x802238A4: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x802238A8: beq         $at, $zero, L_802238BC
    if (ctx->r1 == 0) {
        // 0x802238AC: sll         $t6, $a0, 4
        ctx->r14 = S32(ctx->r4 << 4);
            goto L_802238BC;
    }
    // 0x802238AC: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x802238B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802238B4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802238B8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_802238BC:
    // 0x802238BC: jr          $ra
    // 0x802238C0: nop

    return;
    // 0x802238C0: nop

;}
RECOMP_FUNC void D_8022B730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B730: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8022B734: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8022B738: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8022B73C: beq         $a2, $zero, L_8022B75C
    if (ctx->r6 == 0) {
        // 0x8022B740: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8022B75C;
    }
    // 0x8022B740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B744: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8022B748:
    // 0x8022B748: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B74C: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x8022B750: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
    // 0x8022B754: bne         $at, $zero, L_8022B748
    if (ctx->r1 != 0) {
        // 0x8022B758: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8022B748;
    }
    // 0x8022B758: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8022B75C:
    // 0x8022B75C: jr          $ra
    // 0x8022B760: nop

    return;
    // 0x8022B760: nop

;}
RECOMP_FUNC void D_802C7334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C73B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802C73B8: jr          $ra
    // 0x802C73BC: sb          $t6, 0xBF($a0)
    MEM_B(0XBF, ctx->r4) = ctx->r14;
    return;
    // 0x802C73BC: sb          $t6, 0xBF($a0)
    MEM_B(0XBF, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void D_802D12BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D133C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802D1340: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802D1344: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D134C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802D1350: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802D1354: jal         0x8028DA48
    // 0x802D1358: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028DA48(rdram, ctx);
        goto after_0;
    // 0x802D1358: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802D135C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1364: jr          $ra
    // 0x802D1368: nop

    return;
    // 0x802D1368: nop

;}
RECOMP_FUNC void D_802094B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802094B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802094BC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802094C0: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802094C4: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x802094C8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802094CC: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x802094D0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x802094D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802094D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802094DC: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802094E0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802094E4: bne         $at, $zero, L_80209500
    if (ctx->r1 != 0) {
        // 0x802094E8: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80209500;
    }
    // 0x802094E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802094EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802094F0: jal         0x80231A24
    // 0x802094F4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802094F4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802094F8: b           L_8020968C
    // 0x802094FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8020968C;
    // 0x802094FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80209500:
    // 0x80209500: blez        $v0, L_80209648
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80209504: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80209648;
    }
    // 0x80209504: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80209508: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8020950C: lui         $ra, 0x0
    ctx->r31 = S32(0X0 << 16);
    // 0x80209510: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80209514: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80209518: addiu       $ra, $ra, 0x0
    ctx->r31 = ADD32(ctx->r31, 0X0);
    // 0x8020951C: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80209520: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
    // 0x80209524: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
L_80209528:
    // 0x80209528: beq         $at, $zero, L_80209638
    if (ctx->r1 == 0) {
        // 0x8020952C: or          $t5, $s2, $zero
        ctx->r13 = ctx->r18 | 0;
            goto L_80209638;
    }
    // 0x8020952C: or          $t5, $s2, $zero
    ctx->r13 = ctx->r18 | 0;
    // 0x80209530: sll         $a1, $t5, 2
    ctx->r5 = S32(ctx->r13 << 2);
    // 0x80209534: sll         $t4, $s2, 2
    ctx->r12 = S32(ctx->r18 << 2);
L_80209538:
    // 0x80209538: lw          $a3, 0x0($ra)
    ctx->r7 = MEM_W(ctx->r31, 0X0);
    // 0x8020953C: addu        $t7, $a3, $t4
    ctx->r15 = ADD32(ctx->r7, ctx->r12);
    // 0x80209540: addu        $t8, $a3, $a1
    ctx->r24 = ADD32(ctx->r7, ctx->r5);
    // 0x80209544: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80209548: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8020954C: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80209550: nop

    // 0x80209554: bc1fl       L_8020962C
    if (!c1cs) {
        // 0x80209558: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_8020962C;
    }
    goto skip_0;
    // 0x80209558: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    skip_0:
    // 0x8020955C: multu       $s2, $s1
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80209560: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80209564: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x80209568: addu        $t6, $t0, $a1
    ctx->r14 = ADD32(ctx->r8, ctx->r5);
    // 0x8020956C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80209570: addu        $t1, $t0, $t4
    ctx->r9 = ADD32(ctx->r8, ctx->r12);
    // 0x80209574: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x80209578: mflo        $v1
    ctx->r3 = lo;
    // 0x8020957C: addu        $a0, $t9, $v1
    ctx->r4 = ADD32(ctx->r25, ctx->r3);
    // 0x80209580: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80209584: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80209588: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8020958C: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80209590: multu       $t5, $s1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80209594: lw          $a3, 0x0($ra)
    ctx->r7 = MEM_W(ctx->r31, 0X0);
    // 0x80209598: addu        $t8, $a3, $a1
    ctx->r24 = ADD32(ctx->r7, ctx->r5);
    // 0x8020959C: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x802095A0: addu        $t9, $a3, $t4
    ctx->r25 = ADD32(ctx->r7, ctx->r12);
    // 0x802095A4: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
    // 0x802095A8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x802095AC: mflo        $a2
    ctx->r6 = lo;
    // 0x802095B0: addu        $t6, $v0, $a2
    ctx->r14 = ADD32(ctx->r2, ctx->r6);
    // 0x802095B4: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802095B8: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x802095BC: swc1        $f8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f8.u32l;
    // 0x802095C0: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x802095C4: addu        $t8, $v0, $a2
    ctx->r24 = ADD32(ctx->r2, ctx->r6);
    // 0x802095C8: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x802095CC: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
    // 0x802095D0: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
    // 0x802095D4: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x802095D8: addu        $t6, $v0, $a2
    ctx->r14 = ADD32(ctx->r2, ctx->r6);
    // 0x802095DC: lwc1        $f18, 0x8($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8);
    // 0x802095E0: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x802095E4: swc1        $f18, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f18.u32l;
    // 0x802095E8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x802095EC: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x802095F0: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x802095F4: lw          $t6, 0x0($ra)
    ctx->r14 = MEM_W(ctx->r31, 0X0);
    // 0x802095F8: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x802095FC: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
    // 0x80209600: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x80209604: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x80209608: swc1        $f2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f2.u32l;
    // 0x8020960C: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x80209610: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x80209614: swc1        $f14, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f14.u32l;
    // 0x80209618: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x8020961C: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x80209620: swc1        $f16, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f16.u32l;
    // 0x80209624: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80209628: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
L_8020962C:
    // 0x8020962C: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80209630: bne         $at, $zero, L_80209538
    if (ctx->r1 != 0) {
        // 0x80209634: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_80209538;
    }
    // 0x80209634: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_80209638:
    // 0x80209638: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8020963C: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80209640: bnel        $at, $zero, L_80209528
    if (ctx->r1 != 0) {
        // 0x80209644: slt         $at, $s2, $v0
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80209528;
    }
    goto skip_1;
    // 0x80209644: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    skip_1:
L_80209648:
    // 0x80209648: beq         $v0, $zero, L_80209688
    if (ctx->r2 == 0) {
        // 0x8020964C: lui         $a3, 0x0
        ctx->r7 = S32(0X0 << 16);
            goto L_80209688;
    }
    // 0x8020964C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80209650: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80209654: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80209658: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_8020965C:
    // 0x8020965C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80209660: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x80209664: lwc1        $f4, -0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, -0X4);
    // 0x80209668: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x8020966C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80209670: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80209674: nop

    // 0x80209678: bc1fl       L_8020968C
    if (!c1cs) {
        // 0x8020967C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8020968C;
    }
    goto skip_2;
    // 0x8020967C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80209680: bne         $t8, $zero, L_8020965C
    if (ctx->r24 != 0) {
        // 0x80209684: sw          $t8, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r24;
            goto L_8020965C;
    }
    // 0x80209684: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
L_80209688:
    // 0x80209688: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8020968C:
    // 0x8020968C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80209690: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80209694: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80209698: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8020969C: jr          $ra
    // 0x802096A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802096A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802B9734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B97B4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x802B97B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802B97BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802B97C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802B97C4: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x802B97C8: sw          $t6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r14;
    // 0x802B97CC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802B97D0: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x802B97D4: lwc1        $f8, 0x58($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X58);
    // 0x802B97D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B97DC: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x802B97E0: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x802B97E4: swc1        $f6, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f6.u32l;
    // 0x802B97E8: lwc1        $f10, 0x5C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x802B97EC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802B97F0: nop

    // 0x802B97F4: bc1f        L_802B981C
    if (!c1cs) {
        // 0x802B97F8: nop
    
            goto L_802B981C;
    }
    // 0x802B97F8: nop

    // 0x802B97FC: jal         0x80320824
    // 0x802B9800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320824(rdram, ctx);
        goto after_0;
    // 0x802B9800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802B9804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B9808: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B980C: jal         0x80320964
    // 0x802B9810: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    static_3_80320964(rdram, ctx);
        goto after_1;
    // 0x802B9810: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_1:
    // 0x802B9814: b           L_802B9964
    // 0x802B9818: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
        goto L_802B9964;
    // 0x802B9818: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
L_802B981C:
    // 0x802B981C: jal         0x802C51D0
    // 0x802B9820: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    static_3_802C51D0(rdram, ctx);
        goto after_2;
    // 0x802B9820: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    after_2:
    // 0x802B9824: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B9828: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x802B982C: lui         $a2, 0x4108
    ctx->r6 = S32(0X4108 << 16);
    // 0x802B9830: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B9834: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802B9838: jal         0x8022A0D0
    // 0x802B983C: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_3;
    // 0x802B983C: nop

    after_3:
    // 0x802B9840: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B9844: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B9848: lwc1        $f2, 0x5C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802B984C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x802B9850: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802B9854: nop

    // 0x802B9858: bc1fl       L_802B9884
    if (!c1cs) {
        // 0x802B985C: lbu         $t9, 0x80($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X80);
            goto L_802B9884;
    }
    goto skip_0;
    // 0x802B985C: lbu         $t9, 0x80($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X80);
    skip_0:
    // 0x802B9860: lbu         $t7, 0x80($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X80);
    // 0x802B9864: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B9868: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802B986C: bnel        $t7, $at, L_802B9884
    if (ctx->r15 != ctx->r1) {
        // 0x802B9870: lbu         $t9, 0x80($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X80);
            goto L_802B9884;
    }
    goto skip_1;
    // 0x802B9870: lbu         $t9, 0x80($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X80);
    skip_1:
    // 0x802B9874: sb          $t8, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r24;
    // 0x802B9878: swc1        $f12, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f12.u32l;
    // 0x802B987C: lwc1        $f2, 0x5C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802B9880: lbu         $t9, 0x80($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X80);
L_802B9884:
    // 0x802B9884: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B9888: bnel        $t9, $at, L_802B98B0
    if (ctx->r25 != ctx->r1) {
        // 0x802B988C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_802B98B0;
    }
    goto skip_2;
    // 0x802B988C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_2:
    // 0x802B9890: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802B9894: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802B9898: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802B989C: jal         0x8022A210
    // 0x802B98A0: swc1        $f2, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f2.u32l;
    static_3_8022A210(rdram, ctx);
        goto after_4;
    // 0x802B98A0: swc1        $f2, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f2.u32l;
    after_4:
    // 0x802B98A4: b           L_802B98D4
    // 0x802B98A8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_802B98D4;
    // 0x802B98A8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802B98AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_802B98B0:
    // 0x802B98B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B98B4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802B98B8: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x802B98BC: sub.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x802B98C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B98C4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802B98C8: jal         0x8022A210
    // 0x802B98CC: swc1        $f0, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f0.u32l;
    static_3_8022A210(rdram, ctx);
        goto after_5;
    // 0x802B98CC: swc1        $f0, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f0.u32l;
    after_5:
    // 0x802B98D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802B98D4:
    // 0x802B98D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B98D8: jal         0x8021B4B0
    // 0x802B98DC: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    static_3_8021B4B0(rdram, ctx);
        goto after_6;
    // 0x802B98DC: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_6:
    // 0x802B98E0: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    // 0x802B98E4: jal         0x802C51D0
    // 0x802B98E8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    static_3_802C51D0(rdram, ctx);
        goto after_7;
    // 0x802B98E8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_7:
    // 0x802B98EC: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802B98F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B98F4: lwc1        $f4, 0xC8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x802B98F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B98FC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802B9900: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802B9904: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B9908: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802B990C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802B9910: jal         0x8022A0D0
    // 0x802B9914: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_8;
    // 0x802B9914: nop

    after_8:
    // 0x802B9918: lwc1        $f8, 0x54($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X54);
    // 0x802B991C: lw          $a3, 0x50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X50);
    // 0x802B9920: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B9924: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x802B9928: lw          $t0, 0x4C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4C);
    // 0x802B992C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B9930: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802B9934: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B9938: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x802B993C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x802B9940: jal         0x802AF31C
    // 0x802B9944: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    static_3_802AF31C(rdram, ctx);
        goto after_9;
    // 0x802B9944: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_9:
    // 0x802B9948: beq         $v0, $zero, L_802B9964
    if (ctx->r2 == 0) {
        // 0x802B994C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B9964;
    }
    // 0x802B994C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B9950: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B9954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B9958: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x802B995C: jal         0x802AB2EC
    // 0x802B9960: lw          $a3, 0x4C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4C);
    static_3_802AB2EC(rdram, ctx);
        goto after_10;
    // 0x802B9960: lw          $a3, 0x4C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4C);
    after_10:
L_802B9964:
    // 0x802B9964: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802B9968: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
    // 0x802B996C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802B9970: jr          $ra
    // 0x802B9974: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x802B9974: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void D_80222F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222F90: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80222F94: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x80222F98: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80222F9C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80222FA0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80222FA4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80222FA8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80222FAC: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x80222FB0: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_80222FB4:
    // 0x80222FB4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80222FB8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80222FBC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80222FC0: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80222FC4: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80222FC8: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x80222FCC: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80222FD0: bne         $t6, $t8, L_80222FB4
    if (ctx->r14 != ctx->r24) {
        // 0x80222FD4: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80222FB4;
    }
    // 0x80222FD4: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80222FD8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80222FDC: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80222FE0: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80222FE4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80222FE8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80222FEC: jal         0x80222D4C
    // 0x80222FF0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    static_3_80222D4C(rdram, ctx);
        goto after_0;
    // 0x80222FF0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_0:
    // 0x80222FF4: lbu         $t2, 0x93($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X93);
    // 0x80222FF8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80222FFC: beq         $t2, $zero, L_8022300C
    if (ctx->r10 == 0) {
        // 0x80223000: nop
    
            goto L_8022300C;
    }
    // 0x80223000: nop

    // 0x80223004: b           L_8022300C
    // 0x80223008: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
        goto L_8022300C;
    // 0x80223008: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_8022300C:
    // 0x8022300C: jal         0x80222E24
    // 0x80223010: sb          $t0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r8;
    static_3_80222E24(rdram, ctx);
        goto after_1;
    // 0x80223010: sb          $t0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r8;
    after_1:
    // 0x80223014: jal         0x802375F0
    // 0x80223018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x80223018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8022301C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80223020: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80223024: lbu         $t4, 0x4B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4B);
    // 0x80223028: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x8022302C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80223030: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x80223034: addiu       $t3, $a0, 0x8
    ctx->r11 = ADD32(ctx->r4, 0X8);
    // 0x80223038: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x8022303C: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80223040: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x80223044: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80223048: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8022304C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80223050: lhu         $a1, 0x0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X0);
    // 0x80223054: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80223058: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8022305C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80223060: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80223064: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x80223068: addu        $a2, $t6, $t9
    ctx->r6 = ADD32(ctx->r14, ctx->r25);
    // 0x8022306C: addu        $a3, $t6, $t4
    ctx->r7 = ADD32(ctx->r14, ctx->r12);
    // 0x80223070: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x80223074: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x80223078: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022307C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80223080: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80223084: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x80223088: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8022308C: jr          $ra
    // 0x80223090: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80223090: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_80230450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230450: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80230454: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80230458: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8023045C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80230460: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80230464: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80230468: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8023046C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80230470: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80230474: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80230478: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023047C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80230480: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80230484: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x80230488: bc1f        L_802304A0
    if (!c1cs) {
        // 0x8023048C: lw          $s4, 0x0($a1)
        ctx->r20 = MEM_W(ctx->r5, 0X0);
            goto L_802304A0;
    }
    // 0x8023048C: lw          $s4, 0x0($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X0);
    // 0x80230490: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80230494: sh          $t7, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r15;
    // 0x80230498: b           L_802304A4
    // 0x8023049C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_802304A4;
    // 0x8023049C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_802304A0:
    // 0x802304A0: sh          $zero, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = 0;
L_802304A4:
    // 0x802304A4: trunc.w.s   $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x802304A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802304AC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802304B0: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x802304B4: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x802304B8: lhu         $a1, 0x5E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X5E);
    // 0x802304BC: addiu       $t1, $zero, 0x2E
    ctx->r9 = ADD32(0, 0X2E);
    // 0x802304C0: beq         $v1, $zero, L_802304F8
    if (ctx->r3 == 0) {
        // 0x802304C4: or          $s3, $v1, $zero
        ctx->r19 = ctx->r3 | 0;
            goto L_802304F8;
    }
    // 0x802304C4: or          $s3, $v1, $zero
    ctx->r19 = ctx->r3 | 0;
    // 0x802304C8: blez        $v1, L_802304F0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802304CC: addiu       $s5, $zero, 0xA
        ctx->r21 = ADD32(0, 0XA);
            goto L_802304F0;
    }
    // 0x802304CC: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
L_802304D0:
    // 0x802304D0: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802304D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802304D8: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x802304DC: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x802304E0: mflo        $s0
    ctx->r16 = lo;
    // 0x802304E4: slt         $at, $s3, $s0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x802304E8: beq         $at, $zero, L_802304D0
    if (ctx->r1 == 0) {
        // 0x802304EC: nop
    
            goto L_802304D0;
    }
    // 0x802304EC: nop

L_802304F0:
    // 0x802304F0: b           L_802304FC
    // 0x802304F4: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
        goto L_802304FC;
    // 0x802304F4: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
L_802304F8:
    // 0x802304F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802304FC:
    // 0x802304FC: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x80230500: addu        $t0, $s4, $v0
    ctx->r8 = ADD32(ctx->r20, ctx->r2);
    // 0x80230504: addu        $s4, $t0, $a1
    ctx->r20 = ADD32(ctx->r8, ctx->r5);
    // 0x80230508: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023050C: addu        $t2, $a2, $s4
    ctx->r10 = ADD32(ctx->r6, ctx->r20);
    // 0x80230510: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80230514: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    // 0x80230518: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8023051C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80230520: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80230524: sub.s       $f20, $f12, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x80230528: addu        $s2, $a2, $s4
    ctx->r18 = ADD32(ctx->r6, ctx->r20);
    // 0x8023052C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80230530: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80230534:
    // 0x80230534: mul.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x80230538: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8023053C: trunc.w.s   $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x80230540: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80230544: nop

    // 0x80230548: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x8023054C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80230550: andi        $s1, $v0, 0xFFFF
    ctx->r17 = ctx->r2 & 0XFFFF;
    // 0x80230554: bgez        $t4, L_80230568
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80230558: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80230568;
    }
    // 0x80230558: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8023055C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80230560: nop

    // 0x80230564: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80230568:
    // 0x80230568: sub.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x8023056C: jal         0x802306D0
    // 0x80230570: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    static_3_802306D0(rdram, ctx);
        goto after_0;
    // 0x80230570: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    after_0:
    // 0x80230574: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230578: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8023057C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80230580: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80230584: bne         $at, $zero, L_80230534
    if (ctx->r1 != 0) {
        // 0x80230588: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80230534;
    }
    // 0x80230588: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8023058C: addiu       $s4, $s4, -0x4
    ctx->r20 = ADD32(ctx->r20, -0X4);
    // 0x80230590: addiu       $s2, $s2, -0x4
    ctx->r18 = ADD32(ctx->r18, -0X4);
    // 0x80230594: blez        $s6, L_80230620
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80230598: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80230620;
    }
    // 0x80230598: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8023059C:
    // 0x8023059C: div         $zero, $s3, $s5
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r21)));
    // 0x802305A0: mfhi        $v0
    ctx->r2 = hi;
    // 0x802305A4: andi        $s1, $v0, 0xFFFF
    ctx->r17 = ctx->r2 & 0XFFFF;
    // 0x802305A8: bne         $s5, $zero, L_802305B4
    if (ctx->r21 != 0) {
        // 0x802305AC: nop
    
            goto L_802305B4;
    }
    // 0x802305AC: nop

    // 0x802305B0: break       7
    do_break(2149778864);
L_802305B4:
    // 0x802305B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802305B8: bne         $s5, $at, L_802305CC
    if (ctx->r21 != ctx->r1) {
        // 0x802305BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802305CC;
    }
    // 0x802305BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802305C0: bne         $s3, $at, L_802305CC
    if (ctx->r19 != ctx->r1) {
        // 0x802305C4: nop
    
            goto L_802305CC;
    }
    // 0x802305C4: nop

    // 0x802305C8: break       6
    do_break(2149778888);
L_802305CC:
    // 0x802305CC: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x802305D0: jal         0x802306D0
    // 0x802305D4: nop

    static_3_802306D0(rdram, ctx);
        goto after_1;
    // 0x802305D4: nop

    after_1:
    // 0x802305D8: subu        $t5, $s3, $s1
    ctx->r13 = SUB32(ctx->r19, ctx->r17);
    // 0x802305DC: div         $zero, $t5, $s5
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r21)));
    // 0x802305E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802305E4: mflo        $s3
    ctx->r19 = lo;
    // 0x802305E8: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802305EC: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x802305F0: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x802305F4: bne         $s5, $zero, L_80230600
    if (ctx->r21 != 0) {
        // 0x802305F8: nop
    
            goto L_80230600;
    }
    // 0x802305F8: nop

    // 0x802305FC: break       7
    do_break(2149778940);
L_80230600:
    // 0x80230600: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80230604: bne         $s5, $at, L_80230618
    if (ctx->r21 != ctx->r1) {
        // 0x80230608: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80230618;
    }
    // 0x80230608: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023060C: bne         $t5, $at, L_80230618
    if (ctx->r13 != ctx->r1) {
        // 0x80230610: nop
    
            goto L_80230618;
    }
    // 0x80230610: nop

    // 0x80230614: break       6
    do_break(2149778964);
L_80230618:
    // 0x80230618: bne         $s0, $s6, L_8023059C
    if (ctx->r16 != ctx->r22) {
        // 0x8023061C: nop
    
            goto L_8023059C;
    }
    // 0x8023061C: nop

L_80230620:
    // 0x80230620: lhu         $t6, 0x5E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X5E);
    // 0x80230624: addiu       $t7, $zero, 0x2D
    ctx->r15 = ADD32(0, 0X2D);
    // 0x80230628: beql        $t6, $zero, L_8023063C
    if (ctx->r14 == 0) {
        // 0x8023062C: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_8023063C;
    }
    goto skip_0;
    // 0x8023062C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x80230630: sb          $t7, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r15;
    // 0x80230634: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x80230638: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_8023063C:
    // 0x8023063C: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x80230640: addu        $t8, $s4, $s6
    ctx->r24 = ADD32(ctx->r20, ctx->r22);
    // 0x80230644: addu        $s4, $t8, $t9
    ctx->r20 = ADD32(ctx->r24, ctx->r25);
    // 0x80230648: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8023064C: sw          $s4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r20;
    // 0x80230650: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80230654: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80230658: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8023065C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80230660: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80230664: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80230668: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023066C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80230670: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80230674: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80230678: jr          $ra
    // 0x8023067C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8023067C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_802A5E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A5F14: bne         $a0, $zero, L_802A5F2C
    if (ctx->r4 != 0) {
        // 0x802A5F18: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A5F2C;
    }
    // 0x802A5F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A5F1C: jal         0x802C67EC
    // 0x802A5F20: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A5F20: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    after_0:
    // 0x802A5F24: beq         $v0, $zero, L_802A5FA0
    if (ctx->r2 == 0) {
        // 0x802A5F28: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A5FA0;
    }
    // 0x802A5F28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802A5F2C:
    // 0x802A5F2C: jal         0x802D1960
    // 0x802A5F30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802D18E0(rdram, ctx);
        goto after_1;
    // 0x802A5F30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802A5F34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A5F38: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A5F3C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A5F40: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802A5F44: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802A5F48: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A5F4C: sw          $zero, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = 0;
    // 0x802A5F50: sb          $t7, 0xE4($a0)
    MEM_B(0XE4, ctx->r4) = ctx->r15;
    // 0x802A5F54: sb          $zero, 0xE5($a0)
    MEM_B(0XE5, ctx->r4) = 0;
    // 0x802A5F58: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x802A5F5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A5F60: bne         $v1, $at, L_802A5F74
    if (ctx->r3 != ctx->r1) {
        // 0x802A5F64: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802A5F74;
    }
    // 0x802A5F64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5F68: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5F6C: b           L_802A5FA0
    // 0x802A5F70: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
        goto L_802A5FA0;
    // 0x802A5F70: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
L_802A5F74:
    // 0x802A5F74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A5F78: bne         $v1, $at, L_802A5F8C
    if (ctx->r3 != ctx->r1) {
        // 0x802A5F7C: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802A5F8C;
    }
    // 0x802A5F7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5F80: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5F84: b           L_802A5FA0
    // 0x802A5F88: swc1        $f6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
        goto L_802A5FA0;
    // 0x802A5F88: swc1        $f6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
L_802A5F8C:
    // 0x802A5F8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A5F90: bne         $v1, $at, L_802A5FA0
    if (ctx->r3 != ctx->r1) {
        // 0x802A5F94: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802A5FA0;
    }
    // 0x802A5F94: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5F98: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5F9C: swc1        $f8, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f8.u32l;
L_802A5FA0:
    // 0x802A5FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A5FA8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A5FAC: jr          $ra
    // 0x802A5FB0: nop

    return;
    // 0x802A5FB0: nop

;}
RECOMP_FUNC void D_802191C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802191C0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802191C4: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x802191C8: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x802191CC: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802191D0: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802191D4: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802191D8: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x802191DC: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802191E0: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802191E4: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802191E8: sub.s       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x802191EC: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x802191F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802191F4: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802191F8: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x802191FC: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x80219200: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x80219204: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80219208: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021920C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80219210: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80219214: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80219218: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x8021921C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x80219220: bc1fl       L_80219268
    if (!c1cs) {
        // 0x80219224: lwc1        $f10, 0x70($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
            goto L_80219268;
    }
    goto skip_0;
    // 0x80219224: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    skip_0:
    // 0x80219228: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    // 0x8021922C: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80219230: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80219234: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80219238: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8021923C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80219240: jal         0x80216464
    // 0x80219244: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    static_3_80216464(rdram, ctx);
        goto after_0;
    // 0x80219244: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80219248: beq         $v0, $zero, L_8021925C
    if (ctx->r2 == 0) {
        // 0x8021924C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021925C;
    }
    // 0x8021924C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80219250: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80219254: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x80219258: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_8021925C:
    // 0x8021925C: b           L_802194A0
    // 0x80219260: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
        goto L_802194A0;
    // 0x80219260: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80219264: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
L_80219268:
    // 0x80219268: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8021926C: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    // 0x80219270: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219274: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80219278: sub.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8021927C: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80219280: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219284: sub.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80219288: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8021928C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x80219290: sub.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80219294: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80219298: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021929C: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802192A0: mul.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x802192A4: add.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802192A8: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802192AC: nop

    // 0x802192B0: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802192B4: add.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x802192B8: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x802192BC: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x802192C0: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802192C4: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802192C8: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802192CC: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x802192D0: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x802192D4: sub.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x802192D8: jal         0x8022AA40
    // 0x802192DC: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    static_3_8022AA40(rdram, ctx);
        goto after_1;
    // 0x802192DC: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x802192E0: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802192E4: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802192E8: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802192EC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802192F0: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x802192F4: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802192F8: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802192FC: bc1f        L_80219308
    if (!c1cs) {
        // 0x80219300: sub.s       $f0, $f6, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
            goto L_80219308;
    }
    // 0x80219300: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80219304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80219308:
    // 0x80219308: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021930C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80219310: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80219314: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80219318: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021931C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80219320: sub.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80219324: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80219328: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021932C: jal         0x8022AA40
    // 0x80219330: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_2;
    // 0x80219330: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    after_2:
    // 0x80219334: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80219338: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8021933C: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219340: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80219344: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80219348: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021934C: bc1f        L_8021936C
    if (!c1cs) {
        // 0x80219350: nop
    
            goto L_8021936C;
    }
    // 0x80219350: nop

    // 0x80219354: beq         $v0, $zero, L_8021936C
    if (ctx->r2 == 0) {
        // 0x80219358: lw          $t7, 0x98($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X98);
            goto L_8021936C;
    }
    // 0x80219358: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x8021935C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80219360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80219364: b           L_802194A0
    // 0x80219368: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
        goto L_802194A0;
    // 0x80219368: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
L_8021936C:
    // 0x8021936C: mul.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80219370: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80219374: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80219378: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021937C: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80219380: nop

    // 0x80219384: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80219388: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8021938C: nop

    // 0x80219390: bc1f        L_802193A0
    if (!c1cs) {
        // 0x80219394: nop
    
            goto L_802193A0;
    }
    // 0x80219394: nop

    // 0x80219398: b           L_802194A0
    // 0x8021939C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802194A0;
    // 0x8021939C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802193A0:
    // 0x802193A0: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802193A4: jal         0x8022AA40
    // 0x802193A8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    static_3_8022AA40(rdram, ctx);
        goto after_3;
    // 0x802193A8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    after_3:
    // 0x802193AC: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802193B0: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802193B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802193B8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802193BC: add.s       $f12, $f6, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f6.fl;
    // 0x802193C0: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x802193C4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802193C8: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802193CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802193D0: add.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x802193D4: div.s       $f14, $f4, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802193D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802193DC: div.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802193E0: c.le.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl <= ctx->f14.fl;
    // 0x802193E4: nop

    // 0x802193E8: bc1fl       L_80219410
    if (!c1cs) {
        // 0x802193EC: c.le.s      $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
            goto L_80219410;
    }
    goto skip_1;
    // 0x802193EC: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    skip_1:
    // 0x802193F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802193F4: nop

    // 0x802193F8: c.le.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl <= ctx->f10.fl;
    // 0x802193FC: nop

    // 0x80219400: bc1fl       L_80219410
    if (!c1cs) {
        // 0x80219404: c.le.s      $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
            goto L_80219410;
    }
    goto skip_2;
    // 0x80219404: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    skip_2:
    // 0x80219408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021940C: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
L_80219410:
    // 0x80219410: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80219414: bc1f        L_80219438
    if (!c1cs) {
        // 0x80219418: nop
    
            goto L_80219438;
    }
    // 0x80219418: nop

    // 0x8021941C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80219420: nop

    // 0x80219424: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x80219428: nop

    // 0x8021942C: bc1f        L_80219438
    if (!c1cs) {
        // 0x80219430: nop
    
            goto L_80219438;
    }
    // 0x80219430: nop

    // 0x80219434: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80219438:
    // 0x80219438: beq         $v0, $zero, L_80219474
    if (ctx->r2 == 0) {
        // 0x8021943C: nop
    
            goto L_80219474;
    }
    // 0x8021943C: nop

    // 0x80219440: beq         $v1, $zero, L_80219474
    if (ctx->r3 == 0) {
        // 0x80219444: nop
    
            goto L_80219474;
    }
    // 0x80219444: nop

    // 0x80219448: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8021944C: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x80219450: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x80219454: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80219458: bc1fl       L_8021946C
    if (!c1cs) {
        // 0x8021945C: swc1        $f16, 0x0($t9)
        MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
            goto L_8021946C;
    }
    goto skip_3;
    // 0x8021945C: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
    skip_3:
    // 0x80219460: b           L_802194A0
    // 0x80219464: swc1        $f14, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f14.u32l;
        goto L_802194A0;
    // 0x80219464: swc1        $f14, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f14.u32l;
    // 0x80219468: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
L_8021946C:
    // 0x8021946C: b           L_802194A0
    // 0x80219470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802194A0;
    // 0x80219470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80219474:
    // 0x80219474: beq         $v0, $zero, L_80219488
    if (ctx->r2 == 0) {
        // 0x80219478: lw          $t0, 0x98($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X98);
            goto L_80219488;
    }
    // 0x80219478: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x8021947C: swc1        $f14, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f14.u32l;
    // 0x80219480: b           L_802194A0
    // 0x80219484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802194A0;
    // 0x80219484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80219488:
    // 0x80219488: beq         $v1, $zero, L_802194A0
    if (ctx->r3 == 0) {
        // 0x8021948C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802194A0;
    }
    // 0x8021948C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219490: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x80219494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80219498: b           L_802194A0
    // 0x8021949C: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
        goto L_802194A0;
    // 0x8021949C: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
L_802194A0:
    // 0x802194A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802194A4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802194A8: jr          $ra
    // 0x802194AC: nop

    return;
    // 0x802194AC: nop

;}
RECOMP_FUNC void D_802D7F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D7FFC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8000: jr          $ra
    // 0x802D8004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802D8004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802CCF44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCFC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802CCFC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802CCFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CCFD0: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x802CCFD4: jal         0x802FFE40
    // 0x802CCFD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802FFE40(rdram, ctx);
        goto after_0;
    // 0x802CCFD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802CCFDC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802CCFE0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802CCFE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CCFE8: jal         0x802AA498
    // 0x802CCFEC: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    static_3_802AA498(rdram, ctx);
        goto after_1;
    // 0x802CCFEC: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_1:
    // 0x802CCFF0: jal         0x803183C8
    // 0x802CCFF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_803183C8(rdram, ctx);
        goto after_2;
    // 0x802CCFF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x802CCFF8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x802CCFFC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802CD000: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802CD004: swc1        $f0, -0x6500($at)
    MEM_W(-0X6500, ctx->r1) = ctx->f0.u32l;
    // 0x802CD008: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802CD00C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CD010: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802CD014: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802CD018: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802CD01C: swc1        $f6, -0x64FC($at)
    MEM_W(-0X64FC, ctx->r1) = ctx->f6.u32l;
    // 0x802CD020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CD024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802CD028: jr          $ra
    // 0x802CD02C: nop

    return;
    // 0x802CD02C: nop

;}

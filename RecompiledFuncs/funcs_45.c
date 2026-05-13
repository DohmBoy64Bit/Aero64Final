#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80227BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227BE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227BE4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80227BE8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80227BEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227BF0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227BF4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227BF8: jal         0x80223840
    // 0x80227BFC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227BFC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227C00: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227C04: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227C08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227C0C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227C10: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227C14: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227C18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227C1C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227C20: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227C24: jal         0x80223B30
    // 0x80227C28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    static_3_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227C28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80227C2C: beq         $v0, $zero, L_80227C40
    if (ctx->r2 == 0) {
        // 0x80227C30: nop
    
            goto L_80227C40;
    }
    // 0x80227C30: nop

    // 0x80227C34: jal         0x802254F4
    // 0x80227C38: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_802254F4(rdram, ctx);
        goto after_2;
    // 0x80227C38: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80227C3C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80227C40:
    // 0x80227C40: jal         0x802238F0
    // 0x80227C44: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802238F0(rdram, ctx);
        goto after_3;
    // 0x80227C44: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80227C48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227C4C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80227C50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227C54: jr          $ra
    // 0x80227C58: nop

    return;
    // 0x80227C58: nop

;}
RECOMP_FUNC void D_802390D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802390D0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802390D4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802390D8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802390DC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802390E0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802390E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802390E8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802390EC: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x802390F0: andi        $s7, $a1, 0xFFFF
    ctx->r23 = ctx->r5 & 0XFFFF;
    // 0x802390F4: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x802390F8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802390FC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80239100: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80239104: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80239108: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023910C: jal         0x802452EC
    // 0x80239110: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    static_3_802452EC(rdram, ctx);
        goto after_0;
    // 0x80239110: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80239114: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80239118: bne         $v0, $at, L_80239128
    if (ctx->r2 != ctx->r1) {
        // 0x8023911C: nop
    
            goto L_80239128;
    }
    // 0x8023911C: nop

    // 0x80239120: b           L_80239234
    // 0x80239124: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80239234;
    // 0x80239124: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80239128:
    // 0x80239128: lw          $t6, 0x50($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X50);
    // 0x8023912C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80239130: blez        $t6, L_80239224
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80239134: addiu       $s6, $sp, 0x50
        ctx->r22 = ADD32(ctx->r29, 0X50);
            goto L_80239224;
    }
    // 0x80239134: addiu       $s6, $sp, 0x50
    ctx->r22 = ADD32(ctx->r29, 0X50);
    // 0x80239138: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x8023913C: addiu       $s1, $sp, 0x60
    ctx->r17 = ADD32(ctx->r29, 0X60);
    // 0x80239140: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
L_80239144:
    // 0x80239144: lw          $t7, 0x5C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X5C);
    // 0x80239148: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8023914C: addu        $a2, $t7, $s3
    ctx->r6 = ADD32(ctx->r15, ctx->r19);
    // 0x80239150: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x80239154: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80239158: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8023915C: jal         0x80245710
    // 0x80239160: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    static_3_80245710(rdram, ctx);
        goto after_1;
    // 0x80239160: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_1:
    // 0x80239164: beq         $v0, $zero, L_80239174
    if (ctx->r2 == 0) {
        // 0x80239168: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80239174;
    }
    // 0x80239168: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023916C: b           L_80239238
    // 0x80239170: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239238;
    // 0x80239170: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80239174:
    // 0x80239174: lhu         $t9, 0x54($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X54);
    // 0x80239178: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8023917C: bne         $s7, $t9, L_80239210
    if (ctx->r23 != ctx->r25) {
        // 0x80239180: nop
    
            goto L_80239210;
    }
    // 0x80239180: nop

    // 0x80239184: bne         $t0, $fp, L_80239210
    if (ctx->r8 != ctx->r30) {
        // 0x80239188: nop
    
            goto L_80239210;
    }
    // 0x80239188: nop

    // 0x8023918C: beq         $s5, $zero, L_802391C0
    if (ctx->r21 == 0) {
        // 0x80239190: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802391C0;
    }
    // 0x80239190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80239194: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
    // 0x80239198: or          $v1, $s5, $zero
    ctx->r3 = ctx->r21 | 0;
L_8023919C:
    // 0x8023919C: lbu         $t1, 0x10($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X10);
    // 0x802391A0: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x802391A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802391A8: beq         $t1, $t2, L_802391B8
    if (ctx->r9 == ctx->r10) {
        // 0x802391AC: nop
    
            goto L_802391B8;
    }
    // 0x802391AC: nop

    // 0x802391B0: b           L_802391C0
    // 0x802391B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_802391C0;
    // 0x802391B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_802391B8:
    // 0x802391B8: bne         $v0, $s1, L_8023919C
    if (ctx->r2 != ctx->r17) {
        // 0x802391BC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8023919C;
    }
    // 0x802391BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802391C0:
    // 0x802391C0: beq         $s4, $zero, L_802391F8
    if (ctx->r20 == 0) {
        // 0x802391C4: nop
    
            goto L_802391F8;
    }
    // 0x802391C4: nop

    // 0x802391C8: bne         $a0, $zero, L_802391F8
    if (ctx->r4 != 0) {
        // 0x802391CC: addiu       $v0, $sp, 0x50
        ctx->r2 = ADD32(ctx->r29, 0X50);
            goto L_802391F8;
    }
    // 0x802391CC: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
    // 0x802391D0: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
L_802391D4:
    // 0x802391D4: lbu         $t3, 0xC($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XC);
    // 0x802391D8: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x802391DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802391E0: beq         $t3, $t4, L_802391F0
    if (ctx->r11 == ctx->r12) {
        // 0x802391E4: nop
    
            goto L_802391F0;
    }
    // 0x802391E4: nop

    // 0x802391E8: b           L_802391F8
    // 0x802391EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_802391F8;
    // 0x802391EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_802391F0:
    // 0x802391F0: bne         $v0, $s0, L_802391D4
    if (ctx->r2 != ctx->r16) {
        // 0x802391F4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802391D4;
    }
    // 0x802391F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802391F8:
    // 0x802391F8: bne         $a0, $zero, L_80239210
    if (ctx->r4 != 0) {
        // 0x802391FC: nop
    
            goto L_80239210;
    }
    // 0x802391FC: nop

    // 0x80239200: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x80239204: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80239208: b           L_80239234
    // 0x8023920C: sw          $s3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r19;
        goto L_80239234;
    // 0x8023920C: sw          $s3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r19;
L_80239210:
    // 0x80239210: lw          $t6, 0x50($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X50);
    // 0x80239214: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80239218: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8023921C: bne         $at, $zero, L_80239144
    if (ctx->r1 != 0) {
        // 0x80239220: nop
    
            goto L_80239144;
    }
    // 0x80239220: nop

L_80239224:
    // 0x80239224: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x80239228: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8023922C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239230: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_80239234:
    // 0x80239234: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80239238:
    // 0x80239238: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023923C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80239240: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80239244: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80239248: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023924C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80239250: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80239254: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80239258: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8023925C: jr          $ra
    // 0x80239260: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80239260: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void D_802D6D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D6D88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D6D8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D6D90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D6D94: bne         $a0, $zero, L_802D6DAC
    if (ctx->r4 != 0) {
        // 0x802D6D98: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802D6DAC;
    }
    // 0x802D6D98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D6D9C: jal         0x802C67EC
    // 0x802D6DA0: addiu       $a0, $zero, 0xE10
    ctx->r4 = ADD32(0, 0XE10);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D6DA0: addiu       $a0, $zero, 0xE10
    ctx->r4 = ADD32(0, 0XE10);
    after_0:
    // 0x802D6DA4: beq         $v0, $zero, L_802D6E34
    if (ctx->r2 == 0) {
        // 0x802D6DA8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802D6E34;
    }
    // 0x802D6DA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802D6DAC:
    // 0x802D6DAC: jal         0x80317344
    // 0x802D6DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x802D6DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802D6DB4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D6DB8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D6DBC: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x802D6DC0: jal         0x802D4800
    // 0x802D6DC4: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D4800(rdram, ctx);
        goto after_2;
    // 0x802D6DC4: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_2:
    // 0x802D6DC8: jal         0x802C498C
    // 0x802D6DCC: addiu       $a0, $s0, 0x494
    ctx->r4 = ADD32(ctx->r16, 0X494);
    static_3_802C498C(rdram, ctx);
        goto after_3;
    // 0x802D6DCC: addiu       $a0, $s0, 0x494
    ctx->r4 = ADD32(ctx->r16, 0X494);
    after_3:
    // 0x802D6DD0: jal         0x802C498C
    // 0x802D6DD4: addiu       $a0, $s0, 0x628
    ctx->r4 = ADD32(ctx->r16, 0X628);
    static_3_802C498C(rdram, ctx);
        goto after_4;
    // 0x802D6DD4: addiu       $a0, $s0, 0x628
    ctx->r4 = ADD32(ctx->r16, 0X628);
    after_4:
    // 0x802D6DD8: jal         0x802C498C
    // 0x802D6DDC: addiu       $a0, $s0, 0x7BC
    ctx->r4 = ADD32(ctx->r16, 0X7BC);
    static_3_802C498C(rdram, ctx);
        goto after_5;
    // 0x802D6DDC: addiu       $a0, $s0, 0x7BC
    ctx->r4 = ADD32(ctx->r16, 0X7BC);
    after_5:
    // 0x802D6DE0: jal         0x802C498C
    // 0x802D6DE4: addiu       $a0, $s0, 0x950
    ctx->r4 = ADD32(ctx->r16, 0X950);
    static_3_802C498C(rdram, ctx);
        goto after_6;
    // 0x802D6DE4: addiu       $a0, $s0, 0x950
    ctx->r4 = ADD32(ctx->r16, 0X950);
    after_6:
    // 0x802D6DE8: jal         0x802C498C
    // 0x802D6DEC: addiu       $a0, $s0, 0xAE4
    ctx->r4 = ADD32(ctx->r16, 0XAE4);
    static_3_802C498C(rdram, ctx);
        goto after_7;
    // 0x802D6DEC: addiu       $a0, $s0, 0xAE4
    ctx->r4 = ADD32(ctx->r16, 0XAE4);
    after_7:
    // 0x802D6DF0: jal         0x802C498C
    // 0x802D6DF4: addiu       $a0, $s0, 0xC78
    ctx->r4 = ADD32(ctx->r16, 0XC78);
    static_3_802C498C(rdram, ctx);
        goto after_8;
    // 0x802D6DF4: addiu       $a0, $s0, 0xC78
    ctx->r4 = ADD32(ctx->r16, 0XC78);
    after_8:
    // 0x802D6DF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D6DFC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802D6E00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D6E04: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x802D6E08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D6E0C: sb          $zero, 0x470($s0)
    MEM_B(0X470, ctx->r16) = 0;
    // 0x802D6E10: sb          $zero, 0xE0C($s0)
    MEM_B(0XE0C, ctx->r16) = 0;
    // 0x802D6E14: sb          $zero, 0x47C($s0)
    MEM_B(0X47C, ctx->r16) = 0;
    // 0x802D6E18: swc1        $f0, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f0.u32l;
    // 0x802D6E1C: swc1        $f0, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->f0.u32l;
    // 0x802D6E20: swc1        $f0, 0x474($s0)
    MEM_W(0X474, ctx->r16) = ctx->f0.u32l;
    // 0x802D6E24: swc1        $f0, 0x490($s0)
    MEM_W(0X490, ctx->r16) = ctx->f0.u32l;
    // 0x802D6E28: swc1        $f0, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->f0.u32l;
    // 0x802D6E2C: swc1        $f4, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f4.u32l;
    // 0x802D6E30: swc1        $f6, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f6.u32l;
L_802D6E34:
    // 0x802D6E34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D6E38: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802D6E3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D6E40: jr          $ra
    // 0x802D6E44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802D6E44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8023FE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FE20: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x8023FE24: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x8023FE28: subu        $v1, $t6, $a1
    ctx->r3 = SUB32(ctx->r14, ctx->r5);
    // 0x8023FE2C: bltz        $v1, L_8023FE3C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8023FE30: nop
    
            goto L_8023FE3C;
    }
    // 0x8023FE30: nop

    // 0x8023FE34: jr          $ra
    // 0x8023FE38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8023FE38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8023FE3C:
    // 0x8023FE3C: jr          $ra
    // 0x8023FE40: nop

    return;
    // 0x8023FE40: nop

;}
RECOMP_FUNC void D_802B4E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4ECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B4ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B4ED4: jal         0x802FD184
    // 0x802B4ED8: addiu       $a0, $a0, 0x498
    ctx->r4 = ADD32(ctx->r4, 0X498);
    static_3_802FD184(rdram, ctx);
        goto after_0;
    // 0x802B4ED8: addiu       $a0, $a0, 0x498
    ctx->r4 = ADD32(ctx->r4, 0X498);
    after_0:
    // 0x802B4EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B4EE4: jr          $ra
    // 0x802B4EE8: nop

    return;
    // 0x802B4EE8: nop

;}
RECOMP_FUNC void D_8022F328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022F328: lbu         $v1, 0x10($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X10);
    // 0x8022F32C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8022F330: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022F334: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8022F338: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8022F33C: lwc1        $f4, -0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, -0X4);
    // 0x8022F340: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x8022F344: nop

    // 0x8022F348: bc1f        L_8022F358
    if (!c1cs) {
        // 0x8022F34C: nop
    
            goto L_8022F358;
    }
    // 0x8022F34C: nop

    // 0x8022F350: jr          $ra
    // 0x8022F354: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    return;
    // 0x8022F354: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022F358:
    // 0x8022F358: blez        $v1, L_8022F434
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022F35C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8022F434;
    }
    // 0x8022F35C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8022F360: andi        $a3, $v1, 0x3
    ctx->r7 = ctx->r3 & 0X3;
    // 0x8022F364: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x8022F368: beq         $a3, $zero, L_8022F3A4
    if (ctx->r7 == 0) {
        // 0x8022F36C: addu        $a2, $a3, $v1
        ctx->r6 = ADD32(ctx->r7, ctx->r3);
            goto L_8022F3A4;
    }
    // 0x8022F36C: addu        $a2, $a3, $v1
    ctx->r6 = ADD32(ctx->r7, ctx->r3);
    // 0x8022F370: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8022F374: addu        $a1, $v0, $t8
    ctx->r5 = ADD32(ctx->r2, ctx->r24);
L_8022F378:
    // 0x8022F378: lwc1        $f6, -0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, -0X4);
    // 0x8022F37C: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8022F380: nop

    // 0x8022F384: bc1fl       L_8022F398
    if (!c1cs) {
        // 0x8022F388: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_8022F398;
    }
    goto skip_0;
    // 0x8022F388: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_0:
    // 0x8022F38C: jr          $ra
    // 0x8022F390: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    return;
    // 0x8022F390: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022F394: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_8022F398:
    // 0x8022F398: bne         $a2, $a0, L_8022F378
    if (ctx->r6 != ctx->r4) {
        // 0x8022F39C: addiu       $a1, $a1, -0x4
        ctx->r5 = ADD32(ctx->r5, -0X4);
            goto L_8022F378;
    }
    // 0x8022F39C: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8022F3A0: beq         $a0, $zero, L_8022F434
    if (ctx->r4 == 0) {
        // 0x8022F3A4: sll         $t9, $a0, 2
        ctx->r25 = S32(ctx->r4 << 2);
            goto L_8022F434;
    }
L_8022F3A4:
    // 0x8022F3A4: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8022F3A8: addu        $a1, $v0, $t9
    ctx->r5 = ADD32(ctx->r2, ctx->r25);
L_8022F3AC:
    // 0x8022F3AC: lwc1        $f8, -0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, -0X4);
    // 0x8022F3B0: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8022F3B4: nop

    // 0x8022F3B8: bc1fl       L_8022F3CC
    if (!c1cs) {
        // 0x8022F3BC: lwc1        $f10, -0x8($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, -0X8);
            goto L_8022F3CC;
    }
    goto skip_1;
    // 0x8022F3BC: lwc1        $f10, -0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0X8);
    skip_1:
    // 0x8022F3C0: jr          $ra
    // 0x8022F3C4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    return;
    // 0x8022F3C4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022F3C8: lwc1        $f10, -0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0X8);
L_8022F3CC:
    // 0x8022F3CC: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8022F3D0: nop

    // 0x8022F3D4: bc1f        L_8022F3E8
    if (!c1cs) {
        // 0x8022F3D8: addiu       $v0, $a0, -0x1
        ctx->r2 = ADD32(ctx->r4, -0X1);
            goto L_8022F3E8;
    }
    // 0x8022F3D8: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x8022F3DC: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x8022F3E0: jr          $ra
    // 0x8022F3E4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    return;
    // 0x8022F3E4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_8022F3E8:
    // 0x8022F3E8: lwc1        $f16, -0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, -0XC);
    // 0x8022F3EC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8022F3F0: nop

    // 0x8022F3F4: bc1f        L_8022F408
    if (!c1cs) {
        // 0x8022F3F8: addiu       $v0, $a0, -0x2
        ctx->r2 = ADD32(ctx->r4, -0X2);
            goto L_8022F408;
    }
    // 0x8022F3F8: addiu       $v0, $a0, -0x2
    ctx->r2 = ADD32(ctx->r4, -0X2);
    // 0x8022F3FC: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x8022F400: jr          $ra
    // 0x8022F404: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8022F404: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8022F408:
    // 0x8022F408: lwc1        $f18, -0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, -0X10);
    // 0x8022F40C: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x8022F410: nop

    // 0x8022F414: bc1f        L_8022F428
    if (!c1cs) {
        // 0x8022F418: addiu       $v0, $a0, -0x3
        ctx->r2 = ADD32(ctx->r4, -0X3);
            goto L_8022F428;
    }
    // 0x8022F418: addiu       $v0, $a0, -0x3
    ctx->r2 = ADD32(ctx->r4, -0X3);
    // 0x8022F41C: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8022F420: jr          $ra
    // 0x8022F424: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    return;
    // 0x8022F424: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8022F428:
    // 0x8022F428: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8022F42C: bne         $a0, $zero, L_8022F3AC
    if (ctx->r4 != 0) {
        // 0x8022F430: addiu       $a1, $a1, -0x10
        ctx->r5 = ADD32(ctx->r5, -0X10);
            goto L_8022F3AC;
    }
    // 0x8022F430: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
L_8022F434:
    // 0x8022F434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022F438: jr          $ra
    // 0x8022F43C: nop

    return;
    // 0x8022F43C: nop

;}
RECOMP_FUNC void D_80281A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281A94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281A98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281A9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80281AA0: jal         0x80317DA0
    // 0x80281AA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    static_3_80317DA0(rdram, ctx);
        goto after_0;
    // 0x80281AA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80281AA8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80281AAC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80281AB0: beql        $a0, $at, L_80281ACC
    if (ctx->r4 == ctx->r1) {
        // 0x80281AB4: lw          $v0, 0x508($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X508);
            goto L_80281ACC;
    }
    goto skip_0;
    // 0x80281AB4: lw          $v0, 0x508($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X508);
    skip_0:
    // 0x80281AB8: jal         0x8021BAE0
    // 0x80281ABC: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x80281ABC: nop

    after_1:
    // 0x80281AC0: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80281AC4: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x80281AC8: lw          $v0, 0x508($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X508);
L_80281ACC:
    // 0x80281ACC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80281AD0: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x80281AD4: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80281AD8: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x80281ADC: jalr        $t9
    // 0x80281AE0: addiu       $a0, $a0, 0x458
    ctx->r4 = ADD32(ctx->r4, 0X458);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80281AE0: addiu       $a0, $a0, 0x458
    ctx->r4 = ADD32(ctx->r4, 0X458);
    after_2:
    // 0x80281AE4: lw          $v0, 0x418($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X418);
    // 0x80281AE8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80281AEC: lh          $t8, 0x50($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X50);
    // 0x80281AF0: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80281AF4: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x80281AF8: jalr        $t9
    // 0x80281AFC: addiu       $a0, $a0, 0x368
    ctx->r4 = ADD32(ctx->r4, 0X368);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80281AFC: addiu       $a0, $a0, 0x368
    ctx->r4 = ADD32(ctx->r4, 0X368);
    after_3:
    // 0x80281B00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281B04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80281B08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281B0C: jr          $ra
    // 0x80281B10: nop

    return;
    // 0x80281B10: nop

;}
RECOMP_FUNC void D_802287C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802287C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802287CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802287D0: bltz        $a0, L_802287F0
    if (SIGNED(ctx->r4) < 0) {
        // 0x802287D4: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802287F0;
    }
    // 0x802287D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802287D8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802287DC: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x802287E0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802287E4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802287E8: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802287EC: beq         $at, $zero, L_80228804
    if (ctx->r1 == 0) {
        // 0x802287F0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80228804;
    }
L_802287F0:
    // 0x802287F0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802287F4: jal         0x80231A24
    // 0x802287F8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802287F8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802287FC: b           L_80228838
    // 0x80228800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80228838;
    // 0x80228800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228804:
    // 0x80228804: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80228808: sll         $v0, $a1, 5
    ctx->r2 = S32(ctx->r5 << 5);
    // 0x8022880C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80228810: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80228814: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x80228818: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8022881C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80228820: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80228824: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x80228828: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8022882C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80228830: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80228834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228838:
    // 0x80228838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022883C: jr          $ra
    // 0x80228840: nop

    return;
    // 0x80228840: nop

;}
RECOMP_FUNC void D_802F28CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F294C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802F2950: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802F2954: jr          $ra
    // 0x802F2958: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802F2958: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8027B5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B66C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8027B670: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027B674: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8027B678: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x8027B67C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027B680: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027B684: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x8027B688: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8027B68C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027B690: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8027B694: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x8027B698: jal         0x8022A848
    // 0x8027B69C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_0;
    // 0x8027B69C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8027B6A0: jal         0x80221B2C
    // 0x8027B6A4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    static_3_80221B2C(rdram, ctx);
        goto after_1;
    // 0x8027B6A4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x8027B6A8: jal         0x8022970C
    // 0x8027B6AC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x8027B6AC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x8027B6B0: jal         0x8022149C
    // 0x8027B6B4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    static_3_8022149C(rdram, ctx);
        goto after_3;
    // 0x8027B6B4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x8027B6B8: jal         0x802233EC
    // 0x8027B6BC: lui         $a0, 0x4C2
    ctx->r4 = S32(0X4C2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_4;
    // 0x8027B6BC: lui         $a0, 0x4C2
    ctx->r4 = S32(0X4C2 << 16);
    after_4:
    // 0x8027B6C0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B6C4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8027B6C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8027B6CC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027B6D0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8027B6D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8027B6D8: jal         0x802CECBC
    // 0x8027B6DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_802CECBC(rdram, ctx);
        goto after_5;
    // 0x8027B6DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
    // 0x8027B6E0: jal         0x8021F4E4
    // 0x8027B6E4: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_6;
    // 0x8027B6E4: nop

    after_6:
    // 0x8027B6E8: addiu       $t7, $zero, 0xAA
    ctx->r15 = ADD32(0, 0XAA);
    // 0x8027B6EC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8027B6F0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8027B6F4: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x8027B6F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027B6FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027B700: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027B704: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027B708: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027B70C: jal         0x8021F35C
    // 0x8027B710: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_7;
    // 0x8027B710: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_7:
    // 0x8027B714: addiu       $t8, $zero, 0xAA
    ctx->r24 = ADD32(0, 0XAA);
    // 0x8027B718: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8027B71C: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8027B720: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x8027B724: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027B728: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027B72C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027B730: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027B734: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027B738: jal         0x8021F35C
    // 0x8027B73C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x8027B73C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_8:
    // 0x8027B740: addiu       $t9, $zero, 0xAA
    ctx->r25 = ADD32(0, 0XAA);
    // 0x8027B744: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8027B748: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8027B74C: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    // 0x8027B750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027B754: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027B758: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027B75C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027B760: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027B764: jal         0x8021F35C
    // 0x8027B768: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x8027B768: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_9:
    // 0x8027B76C: addiu       $t0, $zero, 0xAA
    ctx->r8 = ADD32(0, 0XAA);
    // 0x8027B770: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8027B774: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8027B778: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    // 0x8027B77C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027B780: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027B784: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027B788: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027B78C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027B790: jal         0x8021F35C
    // 0x8027B794: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x8027B794: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_10:
    // 0x8027B798: jal         0x8021FCD0
    // 0x8027B79C: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_11;
    // 0x8027B79C: nop

    after_11:
    // 0x8027B7A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B7A4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8027B7A8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8027B7AC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027B7B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8027B7B4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8027B7B8: jal         0x802CEB9C
    // 0x8027B7BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_802CEB9C(rdram, ctx);
        goto after_12;
    // 0x8027B7BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_12:
    // 0x8027B7C0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8027B7C4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8027B7C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027B7CC: jal         0x8021E708
    // 0x8027B7D0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_13;
    // 0x8027B7D0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_13:
    // 0x8027B7D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B7D8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027B7DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027B7E0: jal         0x802CE360
    // 0x8027B7E4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_14;
    // 0x8027B7E4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_14:
    // 0x8027B7E8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027B7EC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027B7F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027B7F4: jal         0x8021E87C
    // 0x8027B7F8: addiu       $a1, $zero, 0x9E
    ctx->r5 = ADD32(0, 0X9E);
    static_3_8021E87C(rdram, ctx);
        goto after_15;
    // 0x8027B7F8: addiu       $a1, $zero, 0x9E
    ctx->r5 = ADD32(0, 0X9E);
    after_15:
    // 0x8027B7FC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B800: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027B804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027B808: jal         0x802CE360
    // 0x8027B80C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_16;
    // 0x8027B80C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_16:
    // 0x8027B810: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027B814: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027B818: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027B81C: jal         0x8021E87C
    // 0x8027B820: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    static_3_8021E87C(rdram, ctx);
        goto after_17;
    // 0x8027B820: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    after_17:
    // 0x8027B824: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B828: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027B82C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027B830: jal         0x802CE360
    // 0x8027B834: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_18;
    // 0x8027B834: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_18:
    // 0x8027B838: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027B83C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027B840: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027B844: jal         0x8021E87C
    // 0x8027B848: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
    static_3_8021E87C(rdram, ctx);
        goto after_19;
    // 0x8027B848: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
    after_19:
    // 0x8027B84C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B850: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027B854: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027B858: jal         0x802CE360
    // 0x8027B85C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_20;
    // 0x8027B85C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_20:
    // 0x8027B860: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027B864: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027B868: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027B86C: jal         0x8021E87C
    // 0x8027B870: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    static_3_8021E87C(rdram, ctx);
        goto after_21;
    // 0x8027B870: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    after_21:
    // 0x8027B874: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B878: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027B87C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027B880: jal         0x802CE360
    // 0x8027B884: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_22;
    // 0x8027B884: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_22:
    // 0x8027B888: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027B88C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027B890: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027B894: jal         0x8021E87C
    // 0x8027B898: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    static_3_8021E87C(rdram, ctx);
        goto after_23;
    // 0x8027B898: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    after_23:
    // 0x8027B89C: jal         0x8021EC9C
    // 0x8027B8A0: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_24;
    // 0x8027B8A0: nop

    after_24:
    // 0x8027B8A4: jal         0x802230E4
    // 0x8027B8A8: nop

    static_3_802230E4(rdram, ctx);
        goto after_25;
    // 0x8027B8A8: nop

    after_25:
    // 0x8027B8AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027B8B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x8027B8B4: jr          $ra
    // 0x8027B8B8: nop

    return;
    // 0x8027B8B8: nop

;}
RECOMP_FUNC void D_802AFB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AFB98: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x802AFB9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AFBA0: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x802AFBA4: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x802AFBA8: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x802AFBAC: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x802AFBB0: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802AFBB4: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802AFBB8: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x802AFBBC: lh          $t7, 0x40($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X40);
    // 0x802AFBC0: jalr        $t9
    // 0x802AFBC4: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802AFBC4: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_0:
    // 0x802AFBC8: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x802AFBCC: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x802AFBD0: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802AFBD4: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x802AFBD8: lh          $t0, 0x48($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X48);
    // 0x802AFBDC: jalr        $t9
    // 0x802AFBE0: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802AFBE0: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    after_1:
    // 0x802AFBE4: lw          $t1, 0xD0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD0);
    // 0x802AFBE8: lw          $v1, 0xC($t1)
    ctx->r3 = MEM_W(ctx->r9, 0XC);
    // 0x802AFBEC: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802AFBF0: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x802AFBF4: lh          $t2, 0x68($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X68);
    // 0x802AFBF8: jalr        $t9
    // 0x802AFBFC: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AFBFC: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    after_2:
    // 0x802AFC00: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x802AFC04: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x802AFC08: jal         0x802D25F4
    // 0x802AFC0C: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    static_3_802D25F4(rdram, ctx);
        goto after_3;
    // 0x802AFC0C: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    after_3:
    // 0x802AFC10: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802AFC14: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802AFC18: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802AFC1C: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802AFC20: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x802AFC24: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x802AFC28: lw          $t6, 0x7168($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X7168);
    // 0x802AFC2C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802AFC30: sb          $t7, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r15;
    // 0x802AFC34: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x802AFC38: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x802AFC3C: jal         0x80228DE0
    // 0x802AFC40: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    func_80228DE0(rdram, ctx);
        goto after_4;
    // 0x802AFC40: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_4:
    // 0x802AFC44: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802AFC48: jal         0x80228DE0
    // 0x802AFC4C: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    func_80228DE0(rdram, ctx);
        goto after_5;
    // 0x802AFC4C: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    after_5:
    // 0x802AFC50: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802AFC54: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802AFC58: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802AFC5C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x802AFC60: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802AFC64: jal         0x802D01D4
    // 0x802AFC68: nop

    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x802AFC68: nop

    after_6:
    // 0x802AFC6C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AFC70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AFC74: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802AFC78: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802AFC7C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802AFC80: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AFC84: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802AFC88: jal         0x802D01D4
    // 0x802AFC8C: nop

    static_3_802D01D4(rdram, ctx);
        goto after_7;
    // 0x802AFC8C: nop

    after_7:
    // 0x802AFC90: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AFC94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AFC98: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802AFC9C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802AFCA0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802AFCA4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802AFCA8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802AFCAC: jal         0x802D01D4
    // 0x802AFCB0: nop

    static_3_802D01D4(rdram, ctx);
        goto after_8;
    // 0x802AFCB0: nop

    after_8:
    // 0x802AFCB4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AFCB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AFCBC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802AFCC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AFCC4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802AFCC8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AFCCC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AFCD0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802AFCD4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802AFCD8: jal         0x8022A0D0
    // 0x802AFCDC: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_9;
    // 0x802AFCDC: nop

    after_9:
    // 0x802AFCE0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x802AFCE4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802AFCE8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x802AFCEC: bne         $t8, $at, L_802AFD0C
    if (ctx->r24 != ctx->r1) {
        // 0x802AFCF0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802AFD0C;
    }
    // 0x802AFCF0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AFCF4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802AFCF8: beq         $t0, $at, L_802AFD0C
    if (ctx->r8 == ctx->r1) {
        // 0x802AFCFC: nop
    
            goto L_802AFD0C;
    }
    // 0x802AFCFC: nop

    // 0x802AFD00: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AFD04: b           L_802AFD24
    // 0x802AFD08: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
        goto L_802AFD24;
    // 0x802AFD08: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
L_802AFD0C:
    // 0x802AFD0C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AFD10: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x802AFD14: jal         0x802AEF08
    // 0x802AFD18: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    static_3_802AEF08(rdram, ctx);
        goto after_10;
    // 0x802AFD18: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    after_10:
    // 0x802AFD1C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802AFD20: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
L_802AFD24:
    // 0x802AFD24: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802AFD28: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AFD2C: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x802AFD30: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AFD34: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x802AFD38: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x802AFD3C: bc1f        L_802AFD60
    if (!c1cs) {
        // 0x802AFD40: nop
    
            goto L_802AFD60;
    }
    // 0x802AFD40: nop

    // 0x802AFD44: beq         $t1, $at, L_802AFD60
    if (ctx->r9 == ctx->r1) {
        // 0x802AFD48: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802AFD60;
    }
    // 0x802AFD48: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802AFD4C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802AFD50: beq         $t2, $at, L_802AFD60
    if (ctx->r10 == ctx->r1) {
        // 0x802AFD54: nop
    
            goto L_802AFD60;
    }
    // 0x802AFD54: nop

    // 0x802AFD58: b           L_802AFD6C
    // 0x802AFD5C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_802AFD6C;
    // 0x802AFD5C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_802AFD60:
    // 0x802AFD60: jal         0x802B1904
    // 0x802AFD64: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802B1904(rdram, ctx);
        goto after_11;
    // 0x802AFD64: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_11:
    // 0x802AFD68: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802AFD6C:
    // 0x802AFD6C: beq         $v1, $zero, L_802AFD84
    if (ctx->r3 == 0) {
        // 0x802AFD70: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802AFD84;
    }
    // 0x802AFD70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AFD74: beq         $v1, $at, L_802AFD84
    if (ctx->r3 == ctx->r1) {
        // 0x802AFD78: lw          $t9, 0x2C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X2C);
            goto L_802AFD84;
    }
    // 0x802AFD78: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x802AFD7C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AFD80: bne         $t9, $at, L_802AFD90
    if (ctx->r25 != ctx->r1) {
        // 0x802AFD84: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_802AFD90;
    }
L_802AFD84:
    // 0x802AFD84: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AFD88: bnel        $v1, $at, L_802AFD98
    if (ctx->r3 != ctx->r1) {
        // 0x802AFD8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802AFD98;
    }
    goto skip_0;
    // 0x802AFD8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_802AFD90:
    // 0x802AFD90: sb          $zero, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = 0;
    // 0x802AFD94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AFD98:
    // 0x802AFD98: lbu         $v0, 0x2B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2B);
    // 0x802AFD9C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x802AFDA0: jr          $ra
    // 0x802AFDA4: nop

    return;
    // 0x802AFDA4: nop

;}
RECOMP_FUNC void D_80208894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208894: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80208898: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8020889C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802088A0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802088A4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802088A8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802088AC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802088B0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802088B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802088B8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802088BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802088C0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x802088C4: lhu         $v0, 0xC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC);
    // 0x802088C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802088CC: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x802088D0: blez        $v0, L_80208A88
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802088D4: or          $s7, $a2, $zero
        ctx->r23 = ctx->r6 | 0;
            goto L_80208A88;
    }
    // 0x802088D4: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x802088D8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x802088DC: andi        $fp, $a2, 0x200
    ctx->r30 = ctx->r6 & 0X200;
    // 0x802088E0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x802088E4: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
L_802088E8:
    // 0x802088E8: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x802088EC: addu        $s5, $t6, $s6
    ctx->r21 = ADD32(ctx->r14, ctx->r22);
    // 0x802088F0: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x802088F4: andi        $t7, $s0, 0xFFF
    ctx->r15 = ctx->r16 & 0XFFF;
    // 0x802088F8: beq         $fp, $zero, L_802089B0
    if (ctx->r30 == 0) {
        // 0x802088FC: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_802089B0;
    }
    // 0x802088FC: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80208900: bne         $t7, $at, L_80208920
    if (ctx->r15 != ctx->r1) {
        // 0x80208904: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80208920;
    }
    // 0x80208904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80208908: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8020890C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208910: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208914: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208918: b           L_80208A78
    // 0x8020891C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208A78;
    // 0x8020891C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208920:
    // 0x80208920: jal         0x802331E0
    // 0x80208924: andi        $s2, $s3, 0x1
    ctx->r18 = ctx->r19 & 0X1;
    static_3_802331E0(rdram, ctx);
        goto after_0;
    // 0x80208924: andi        $s2, $s3, 0x1
    ctx->r18 = ctx->r19 & 0X1;
    after_0:
    // 0x80208928: beq         $s2, $zero, L_80208954
    if (ctx->r18 == 0) {
        // 0x8020892C: andi        $t8, $s3, 0x2
        ctx->r24 = ctx->r19 & 0X2;
            goto L_80208954;
    }
    // 0x8020892C: andi        $t8, $s3, 0x2
    ctx->r24 = ctx->r19 & 0X2;
    // 0x80208930: beq         $v0, $s4, L_80208954
    if (ctx->r2 == ctx->r20) {
        // 0x80208934: nop
    
            goto L_80208954;
    }
    // 0x80208934: nop

    // 0x80208938: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x8020893C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80208940: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208944: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208948: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8020894C: b           L_80208A78
    // 0x80208950: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208A78;
    // 0x80208950: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208954:
    // 0x80208954: beq         $t8, $zero, L_80208980
    if (ctx->r24 == 0) {
        // 0x80208958: slt         $at, $s4, $v0
        ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208980;
    }
    // 0x80208958: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8020895C: beql        $at, $zero, L_80208984
    if (ctx->r1 == 0) {
        // 0x80208960: andi        $t9, $s3, 0x4
        ctx->r25 = ctx->r19 & 0X4;
            goto L_80208984;
    }
    goto skip_0;
    // 0x80208960: andi        $t9, $s3, 0x4
    ctx->r25 = ctx->r19 & 0X4;
    skip_0:
    // 0x80208964: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80208968: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8020896C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208970: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208974: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208978: b           L_80208A78
    // 0x8020897C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208A78;
    // 0x8020897C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208980:
    // 0x80208980: andi        $t9, $s3, 0x4
    ctx->r25 = ctx->r19 & 0X4;
L_80208984:
    // 0x80208984: beq         $t9, $zero, L_802089B0
    if (ctx->r25 == 0) {
        // 0x80208988: slt         $at, $v0, $s4
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_802089B0;
    }
    // 0x80208988: slt         $at, $v0, $s4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8020898C: beql        $at, $zero, L_802089B4
    if (ctx->r1 == 0) {
        // 0x80208990: andi        $t0, $s7, 0x400
        ctx->r8 = ctx->r23 & 0X400;
            goto L_802089B4;
    }
    goto skip_1;
    // 0x80208990: andi        $t0, $s7, 0x400
    ctx->r8 = ctx->r23 & 0X400;
    skip_1:
    // 0x80208994: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80208998: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8020899C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802089A0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802089A4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802089A8: b           L_80208A78
    // 0x802089AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208A78;
    // 0x802089AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_802089B0:
    // 0x802089B0: andi        $t0, $s7, 0x400
    ctx->r8 = ctx->r23 & 0X400;
L_802089B4:
    // 0x802089B4: beq         $t0, $zero, L_80208A44
    if (ctx->r8 == 0) {
        // 0x802089B8: andi        $t1, $s3, 0x1
        ctx->r9 = ctx->r19 & 0X1;
            goto L_80208A44;
    }
    // 0x802089B8: andi        $t1, $s3, 0x1
    ctx->r9 = ctx->r19 & 0X1;
    // 0x802089BC: beq         $t1, $zero, L_802089E8
    if (ctx->r9 == 0) {
        // 0x802089C0: andi        $t2, $s3, 0x2
        ctx->r10 = ctx->r19 & 0X2;
            goto L_802089E8;
    }
    // 0x802089C0: andi        $t2, $s3, 0x2
    ctx->r10 = ctx->r19 & 0X2;
    // 0x802089C4: beq         $s0, $s4, L_802089E8
    if (ctx->r16 == ctx->r20) {
        // 0x802089C8: nop
    
            goto L_802089E8;
    }
    // 0x802089C8: nop

    // 0x802089CC: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x802089D0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802089D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802089D8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802089DC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802089E0: b           L_80208A78
    // 0x802089E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208A78;
    // 0x802089E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_802089E8:
    // 0x802089E8: beq         $t2, $zero, L_80208A14
    if (ctx->r10 == 0) {
        // 0x802089EC: slt         $at, $s4, $s0
        ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80208A14;
    }
    // 0x802089EC: slt         $at, $s4, $s0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x802089F0: beql        $at, $zero, L_80208A18
    if (ctx->r1 == 0) {
        // 0x802089F4: andi        $t3, $s3, 0x4
        ctx->r11 = ctx->r19 & 0X4;
            goto L_80208A18;
    }
    goto skip_2;
    // 0x802089F4: andi        $t3, $s3, 0x4
    ctx->r11 = ctx->r19 & 0X4;
    skip_2:
    // 0x802089F8: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x802089FC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80208A00: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A04: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208A08: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A0C: b           L_80208A78
    // 0x80208A10: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208A78;
    // 0x80208A10: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208A14:
    // 0x80208A14: andi        $t3, $s3, 0x4
    ctx->r11 = ctx->r19 & 0X4;
L_80208A18:
    // 0x80208A18: beq         $t3, $zero, L_80208A44
    if (ctx->r11 == 0) {
        // 0x80208A1C: slt         $at, $s0, $s4
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_80208A44;
    }
    // 0x80208A1C: slt         $at, $s0, $s4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80208A20: beql        $at, $zero, L_80208A48
    if (ctx->r1 == 0) {
        // 0x80208A24: lw          $a0, 0x44($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X44);
            goto L_80208A48;
    }
    goto skip_3;
    // 0x80208A24: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x80208A28: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80208A2C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80208A30: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A34: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208A38: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A3C: b           L_80208A78
    // 0x80208A40: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208A78;
    // 0x80208A40: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208A44:
    // 0x80208A44: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
L_80208A48:
    // 0x80208A48: jal         0x80208650
    // 0x80208A4C: lw          $a1, 0xC($s5)
    ctx->r5 = MEM_W(ctx->r21, 0XC);
    static_3_80208650(rdram, ctx);
        goto after_1;
    // 0x80208A4C: lw          $a1, 0xC($s5)
    ctx->r5 = MEM_W(ctx->r21, 0XC);
    after_1:
    // 0x80208A50: beql        $v0, $zero, L_80208A64
    if (ctx->r2 == 0) {
        // 0x80208A54: lhu         $v0, 0xC($s1)
        ctx->r2 = MEM_HU(ctx->r17, 0XC);
            goto L_80208A64;
    }
    goto skip_4;
    // 0x80208A54: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    skip_4:
    // 0x80208A58: b           L_80208A8C
    // 0x80208A5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80208A8C;
    // 0x80208A5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80208A60: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
L_80208A64:
    // 0x80208A64: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80208A68: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A6C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208A70: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A74: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208A78:
    // 0x80208A78: addiu       $s6, $s6, 0x2C
    ctx->r22 = ADD32(ctx->r22, 0X2C);
    // 0x80208A7C: slt         $at, $s6, $v1
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80208A80: bnel        $at, $zero, L_802088E8
    if (ctx->r1 != 0) {
        // 0x80208A84: lw          $t6, 0x8($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X8);
            goto L_802088E8;
    }
    goto skip_5;
    // 0x80208A84: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    skip_5:
L_80208A88:
    // 0x80208A88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80208A8C:
    // 0x80208A8C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80208A90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80208A94: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80208A98: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80208A9C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80208AA0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80208AA4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80208AA8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80208AAC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80208AB0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80208AB4: jr          $ra
    // 0x80208AB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80208AB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802B2158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B21D8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802B21DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B21E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B21E4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802B21E8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802B21EC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802B21F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B21F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B21F8: bnel        $v0, $at, L_802B2240
    if (ctx->r2 != ctx->r1) {
        // 0x802B21FC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802B2240;
    }
    goto skip_0;
    // 0x802B21FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x802B2200: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x802B2204: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2208: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B220C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x802B2210: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B2214: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B2218: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802B221C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B2220: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B2224: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B2228: nop

    // 0x802B222C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802B2230: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802B2234: b           L_802B2280
    // 0x802B2238: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
        goto L_802B2280;
    // 0x802B2238: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x802B223C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_802B2240:
    // 0x802B2240: bne         $v0, $at, L_802B2280
    if (ctx->r2 != ctx->r1) {
        // 0x802B2244: nop
    
            goto L_802B2280;
    }
    // 0x802B2244: nop

    // 0x802B2248: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x802B224C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2250: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2254: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x802B2258: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B225C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B2260: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802B2264: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B2268: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802B226C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B2270: nop

    // 0x802B2274: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802B2278: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802B227C: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
L_802B2280:
    // 0x802B2280: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2284: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2288: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B228C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2290: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2294: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802B2298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B229C: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    // 0x802B22A0: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802B22A4: jal         0x80318510
    // 0x802B22A8: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
    static_3_80318510(rdram, ctx);
        goto after_0;
    // 0x802B22A8: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
    after_0:
    // 0x802B22AC: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x802B22B0: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    // 0x802B22B4: jal         0x80317EC0
    // 0x802B22B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317EC0(rdram, ctx);
        goto after_1;
    // 0x802B22B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802B22BC: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802B22C0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x802B22C4: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802B22C8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x802B22CC: jal         0x802CF4D0
    // 0x802B22D0: swc1        $f10, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f10.u32l;
    static_3_802CF4D0(rdram, ctx);
        goto after_2;
    // 0x802B22D0: swc1        $f10, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x802B22D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B22D8: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
    // 0x802B22DC: sw          $t8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r24;
    // 0x802B22E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B22E4: jal         0x8031809C
    // 0x802B22E8: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    static_3_8031809C(rdram, ctx);
        goto after_3;
    // 0x802B22E8: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    after_3:
    // 0x802B22EC: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x802B22F0: lwc1        $f12, 0xB4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802B22F4: jal         0x802CF4D0
    // 0x802B22F8: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    static_3_802CF4D0(rdram, ctx);
        goto after_4;
    // 0x802B22F8: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x802B22FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B2300: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B2304: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802B2308: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
    // 0x802B230C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B2310: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x802B2314: swc1        $f2, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f2.u32l;
    // 0x802B2318: bc1fl       L_802B232C
    if (!c1cs) {
        // 0x802B231C: lwc1        $f18, 0xA0($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_802B232C;
    }
    goto skip_1;
    // 0x802B231C: lwc1        $f18, 0xA0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA0);
    skip_1:
    // 0x802B2320: b           L_802B2350
    // 0x802B2324: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
        goto L_802B2350;
    // 0x802B2324: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
    // 0x802B2328: lwc1        $f18, 0xA0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA0);
L_802B232C:
    // 0x802B232C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B2330: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B2334: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x802B2338: nop

    // 0x802B233C: bc1fl       L_802B2354
    if (!c1cs) {
        // 0x802B2340: lwc1        $f12, 0x110($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
            goto L_802B2354;
    }
    goto skip_2;
    // 0x802B2340: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
    skip_2:
    // 0x802B2344: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B2348: nop

    // 0x802B234C: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
L_802B2350:
    // 0x802B2350: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
L_802B2354:
    // 0x802B2354: jal         0x802CF4D0
    // 0x802B2358: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    static_3_802CF4D0(rdram, ctx);
        goto after_5;
    // 0x802B2358: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    after_5:
    // 0x802B235C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802B2360: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B2364: lwc1        $f6, 0x10C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802B2368: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802B236C: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802B2370: nop

    // 0x802B2374: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802B2378: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x802B237C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x802B2380: jal         0x802D2658
    // 0x802B2384: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2658(rdram, ctx);
        goto after_6;
    // 0x802B2384: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_6:
    // 0x802B2388: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802B238C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B2390: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B2394: swc1        $f10, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f10.u32l;
    // 0x802B2398: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802B239C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B23A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B23A4: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x802B23A8: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802B23AC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802B23B0: swc1        $f2, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f2.u32l;
    // 0x802B23B4: bc1fl       L_802B23C8
    if (!c1cs) {
        // 0x802B23B8: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802B23C8;
    }
    goto skip_3;
    // 0x802B23B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_3:
    // 0x802B23BC: b           L_802B23E0
    // 0x802B23C0: swc1        $f12, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f12.u32l;
        goto L_802B23E0;
    // 0x802B23C0: swc1        $f12, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f12.u32l;
    // 0x802B23C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802B23C8:
    // 0x802B23C8: lwc1        $f18, 0x9C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802B23CC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802B23D0: nop

    // 0x802B23D4: bc1f        L_802B23E0
    if (!c1cs) {
        // 0x802B23D8: nop
    
            goto L_802B23E0;
    }
    // 0x802B23D8: nop

    // 0x802B23DC: swc1        $f0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f0.u32l;
L_802B23E0:
    // 0x802B23E0: jal         0x80317580
    // 0x802B23E4: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    static_3_80317580(rdram, ctx);
        goto after_7;
    // 0x802B23E4: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    after_7:
    // 0x802B23E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B23EC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B23F0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802B23F4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802B23F8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802B23FC: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802B2400: bc1fl       L_802B24E8
    if (!c1cs) {
        // 0x802B2404: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_802B24E8;
    }
    goto skip_4;
    // 0x802B2404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_4:
    // 0x802B2408: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802B240C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B2410: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802B2414: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802B2418: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802B241C: nop

    // 0x802B2420: bc1fl       L_802B2458
    if (!c1cs) {
        // 0x802B2424: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_802B2458;
    }
    goto skip_5;
    // 0x802B2424: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_5:
    // 0x802B2428: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B242C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B2430: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B2434: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802B2438: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B243C: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x802B2440: lwc1        $f4, 0x88($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802B2444: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802B2448: add.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802B244C: b           L_802B2530
    // 0x802B2450: swc1        $f18, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f18.u32l;
        goto L_802B2530;
    // 0x802B2450: swc1        $f18, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f18.u32l;
    // 0x802B2454: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_802B2458:
    // 0x802B2458: nop

    // 0x802B245C: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x802B2460: nop

    // 0x802B2464: bc1f        L_802B249C
    if (!c1cs) {
        // 0x802B2468: nop
    
            goto L_802B249C;
    }
    // 0x802B2468: nop

    // 0x802B246C: jal         0x80318214
    // 0x802B2470: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    static_3_80318214(rdram, ctx);
        goto after_8;
    // 0x802B2470: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    after_8:
    // 0x802B2474: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B2478: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B247C: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B2480: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802B2484: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B2488: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802B248C: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802B2490: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x802B2494: b           L_802B2530
    // 0x802B2498: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
        goto L_802B2530;
    // 0x802B2498: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
L_802B249C:
    // 0x802B249C: jal         0x80318214
    // 0x802B24A0: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    static_3_80318214(rdram, ctx);
        goto after_9;
    // 0x802B24A0: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    after_9:
    // 0x802B24A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B24A8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B24AC: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802B24B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B24B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B24B8: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802B24BC: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B24C0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802B24C4: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802B24C8: add.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802B24CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B24D0: nop

    // 0x802B24D4: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802B24D8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802B24DC: b           L_802B2530
    // 0x802B24E0: swc1        $f8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f8.u32l;
        goto L_802B2530;
    // 0x802B24E0: swc1        $f8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f8.u32l;
    // 0x802B24E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_802B24E8:
    // 0x802B24E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B24EC: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x802B24F0: nop

    // 0x802B24F4: bc1f        L_802B2524
    if (!c1cs) {
        // 0x802B24F8: nop
    
            goto L_802B2524;
    }
    // 0x802B24F8: nop

    // 0x802B24FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B2500: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B2504: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802B2508: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B250C: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802B2510: lwc1        $f10, 0x88($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802B2514: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802B2518: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802B251C: b           L_802B2530
    // 0x802B2520: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
        goto L_802B2530;
    // 0x802B2520: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
L_802B2524:
    // 0x802B2524: jal         0x802D25D4
    // 0x802B2528: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D25D4(rdram, ctx);
        goto after_10;
    // 0x802B2528: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_10:
    // 0x802B252C: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
L_802B2530:
    // 0x802B2530: lwc1        $f0, 0x8C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802B2534: lwc1        $f8, 0x98($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X98);
    // 0x802B2538: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802B253C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802B2540: nop

    // 0x802B2544: bc1fl       L_802B2554
    if (!c1cs) {
        // 0x802B2548: lwc1        $f0, 0x4C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_802B2554;
    }
    goto skip_6;
    // 0x802B2548: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    skip_6:
    // 0x802B254C: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    // 0x802B2550: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
L_802B2554:
    // 0x802B2554: lwc1        $f18, 0x938($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X938);
    // 0x802B2558: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802B255C: nop

    // 0x802B2560: bc1fl       L_802B2688
    if (!c1cs) {
        // 0x802B2564: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B2688;
    }
    goto skip_7;
    // 0x802B2564: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x802B2568: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B256C: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    // 0x802B2570: add.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x802B2574: jal         0x803183D0
    // 0x802B2578: swc1        $f6, 0x938($s0)
    MEM_W(0X938, ctx->r16) = ctx->f6.u32l;
    static_3_803183D0(rdram, ctx);
        goto after_11;
    // 0x802B2578: swc1        $f6, 0x938($s0)
    MEM_W(0X938, ctx->r16) = ctx->f6.u32l;
    after_11:
    // 0x802B257C: jal         0x802D2660
    // 0x802B2580: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_802D2660(rdram, ctx);
        goto after_12;
    // 0x802B2580: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_12:
    // 0x802B2584: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2588: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B258C: lwc1        $f4, 0x8C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802B2590: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B2594: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802B2598: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B259C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802B25A0: div.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x802B25A4: sub.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802B25A8: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x802B25AC: nop

    // 0x802B25B0: bc1f        L_802B25BC
    if (!c1cs) {
        // 0x802B25B4: nop
    
            goto L_802B25BC;
    }
    // 0x802B25B4: nop

    // 0x802B25B8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_802B25BC:
    // 0x802B25BC: jal         0x80234AF0
    // 0x802B25C0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    static_3_80234AF0(rdram, ctx);
        goto after_13;
    // 0x802B25C0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_13:
    // 0x802B25C4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802B25C8: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B25CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B25D0: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802B25D4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802B25D8: nop

    // 0x802B25DC: bc1fl       L_802B2688
    if (!c1cs) {
        // 0x802B25E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B2688;
    }
    goto skip_8;
    // 0x802B25E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x802B25E4: jal         0x80317444
    // 0x802B25E8: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    static_3_80317444(rdram, ctx);
        goto after_14;
    // 0x802B25E8: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    after_14:
    // 0x802B25EC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802B25F0: lwc1        $f2, 0x10C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802B25F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B25F8: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x802B25FC: nop

    // 0x802B2600: bc1fl       L_802B2614
    if (!c1cs) {
        // 0x802B2604: neg.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
            goto L_802B2614;
    }
    goto skip_9;
    // 0x802B2604: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    skip_9:
    // 0x802B2608: b           L_802B2614
    // 0x802B260C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_802B2614;
    // 0x802B260C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x802B2610: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
L_802B2614:
    // 0x802B2614: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2618: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B261C: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x802B2620: nop

    // 0x802B2624: bc1fl       L_802B2688
    if (!c1cs) {
        // 0x802B2628: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B2688;
    }
    goto skip_10;
    // 0x802B2628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_10:
    // 0x802B262C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2630: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802B2634: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802B2638: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802B263C: nop

    // 0x802B2640: bc1fl       L_802B2688
    if (!c1cs) {
        // 0x802B2644: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B2688;
    }
    goto skip_11;
    // 0x802B2644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_11:
    // 0x802B2648: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B264C: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x802B2650: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B2654: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802B2658: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802B265C: bc1fl       L_802B2688
    if (!c1cs) {
        // 0x802B2660: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B2688;
    }
    goto skip_12;
    // 0x802B2660: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_12:
    // 0x802B2664: lwc1        $f4, 0x8C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802B2668: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B266C: sw          $t9, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->r25;
    // 0x802B2670: sb          $t0, 0x934($s0)
    MEM_B(0X934, ctx->r16) = ctx->r8;
    // 0x802B2674: swc1        $f14, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f14.u32l;
    // 0x802B2678: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    // 0x802B267C: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
    // 0x802B2680: swc1        $f18, 0x5CC($s0)
    MEM_W(0X5CC, ctx->r16) = ctx->f18.u32l;
    // 0x802B2684: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B2688:
    // 0x802B2688: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B268C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802B2690: jr          $ra
    // 0x802B2694: nop

    return;
    // 0x802B2694: nop

;}
RECOMP_FUNC void D_802A98DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A995C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A9960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A9964: jal         0x8023499C
    // 0x802A9968: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8023499C(rdram, ctx);
        goto after_0;
    // 0x802A9968: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A996C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9970: ldc1        $f6, 0x0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X0);
    // 0x802A9974: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802A9978: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x802A997C: nop

    // 0x802A9980: bc1fl       L_802A99A0
    if (!c1cs) {
        // 0x802A9984: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A99A0;
    }
    goto skip_0;
    // 0x802A9984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A9988: jal         0x802DA3F8
    // 0x802A998C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_802DA3F8(rdram, ctx);
        goto after_1;
    // 0x802A998C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x802A9990: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802A9994: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802A9998: sb          $t6, 0x24($t7)
    MEM_B(0X24, ctx->r15) = ctx->r14;
    // 0x802A999C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A99A0:
    // 0x802A99A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A99A4: jr          $ra
    // 0x802A99A8: nop

    return;
    // 0x802A99A8: nop

;}
RECOMP_FUNC void D_8022332C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022332C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80223330: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80223334: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80223338: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022333C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223340: bne         $v1, $zero, L_8022335C
    if (ctx->r3 != 0) {
        // 0x80223344: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_8022335C;
    }
    // 0x80223344: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x80223348: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022334C: jal         0x80231A24
    // 0x80223350: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80223350: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80223354: b           L_80223390
    // 0x80223358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80223390;
    // 0x80223358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022335C:
    // 0x8022335C: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80223360: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80223364: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80223368: sb          $t6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r14;
    // 0x8022336C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80223370: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80223374: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x80223378: sh          $t9, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r25;
    // 0x8022337C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80223380: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80223384: jal         0x80220C44
    // 0x80223388: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_80220C44(rdram, ctx);
        goto after_1;
    // 0x80223388: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022338C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80223390:
    // 0x80223390: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80223394: jr          $ra
    // 0x80223398: nop

    return;
    // 0x80223398: nop

;}
RECOMP_FUNC void D_8021A418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021A418: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8021A41C: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8021A420: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8021A424: nop

    // 0x8021A428: bc1fl       L_8021A43C
    if (!c1cs) {
        // 0x8021A42C: lwc1        $f6, 0xC($a3)
        ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
            goto L_8021A43C;
    }
    goto skip_0;
    // 0x8021A42C: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    skip_0:
    // 0x8021A430: jr          $ra
    // 0x8021A434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A438: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
L_8021A43C:
    // 0x8021A43C: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8021A440: nop

    // 0x8021A444: bc1fl       L_8021A458
    if (!c1cs) {
        // 0x8021A448: lwc1        $f8, 0x4($a3)
        ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
            goto L_8021A458;
    }
    goto skip_1;
    // 0x8021A448: lwc1        $f8, 0x4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
    skip_1:
    // 0x8021A44C: jr          $ra
    // 0x8021A450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A454: lwc1        $f8, 0x4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
L_8021A458:
    // 0x8021A458: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x8021A45C: nop

    // 0x8021A460: bc1fl       L_8021A474
    if (!c1cs) {
        // 0x8021A464: lwc1        $f10, 0x10($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
            goto L_8021A474;
    }
    goto skip_2;
    // 0x8021A464: lwc1        $f10, 0x10($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
    skip_2:
    // 0x8021A468: jr          $ra
    // 0x8021A46C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A46C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A470: lwc1        $f10, 0x10($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
L_8021A474:
    // 0x8021A474: lwc1        $f16, 0x8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8021A478: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x8021A47C: nop

    // 0x8021A480: bc1fl       L_8021A494
    if (!c1cs) {
        // 0x8021A484: lwc1        $f18, 0x8($a3)
        ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
            goto L_8021A494;
    }
    goto skip_3;
    // 0x8021A484: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    skip_3:
    // 0x8021A488: jr          $ra
    // 0x8021A48C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A48C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A490: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
L_8021A494:
    // 0x8021A494: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8021A498: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8021A49C: nop

    // 0x8021A4A0: bc1fl       L_8021A4B4
    if (!c1cs) {
        // 0x8021A4A4: lwc1        $f4, 0x14($a3)
        ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
            goto L_8021A4B4;
    }
    goto skip_4;
    // 0x8021A4A4: lwc1        $f4, 0x14($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
    skip_4:
    // 0x8021A4A8: jr          $ra
    // 0x8021A4AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A4AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A4B0: lwc1        $f4, 0x14($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
L_8021A4B4:
    // 0x8021A4B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021A4B8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8021A4BC: nop

    // 0x8021A4C0: bc1f        L_8021A4D0
    if (!c1cs) {
        // 0x8021A4C4: nop
    
            goto L_8021A4D0;
    }
    // 0x8021A4C4: nop

    // 0x8021A4C8: jr          $ra
    // 0x8021A4CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A4CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021A4D0:
    // 0x8021A4D0: jr          $ra
    // 0x8021A4D4: nop

    return;
    // 0x8021A4D4: nop

;}
RECOMP_FUNC void D_80206FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80206FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80206FF4: slti        $at, $a0, 0x64
    ctx->r1 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
    // 0x80206FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80206FFC: bne         $at, $zero, L_8020701C
    if (ctx->r1 != 0) {
        // 0x80207000: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8020701C;
    }
    // 0x80207000: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80207004: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80207008: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8020700C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80207010: addiu       $t7, $t6, -0x320
    ctx->r15 = ADD32(ctx->r14, -0X320);
    // 0x80207014: b           L_80207048
    // 0x80207018: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
        goto L_80207048;
    // 0x80207018: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8020701C:
    // 0x8020701C: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x80207020: bne         $at, $zero, L_8020703C
    if (ctx->r1 != 0) {
        // 0x80207024: sll         $t9, $a1, 3
        ctx->r25 = S32(ctx->r5 << 3);
            goto L_8020703C;
    }
    // 0x80207024: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x80207028: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020702C: jal         0x80231A24
    // 0x80207030: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80207030: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80207034: b           L_80207048
    // 0x80207038: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80207048;
    // 0x80207038: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020703C:
    // 0x8020703C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80207040: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80207044: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
L_80207048:
    // 0x80207048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020704C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80207050: jr          $ra
    // 0x80207054: nop

    return;
    // 0x80207054: nop

;}
RECOMP_FUNC void D_8024A850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A850: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8024A854: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x8024A858: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024A85C: andi        $t7, $a3, 0x3
    ctx->r15 = ctx->r7 & 0X3;
    // 0x8024A860: beq         $t7, $zero, L_8024A87C
    if (ctx->r15 == 0) {
        // 0x8024A864: nop
    
            goto L_8024A87C;
    }
    // 0x8024A864: nop

L_8024A868:
    // 0x8024A868: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8024A86C: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x8024A870: andi        $t9, $a3, 0x3
    ctx->r25 = ctx->r7 & 0X3;
    // 0x8024A874: bne         $t9, $zero, L_8024A868
    if (ctx->r25 != 0) {
        // 0x8024A878: nop
    
            goto L_8024A868;
    }
    // 0x8024A878: nop

L_8024A87C:
    // 0x8024A87C: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x8024A880: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024A884: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8024A888: or          $t1, $t0, $a1
    ctx->r9 = ctx->r8 | ctx->r5;
    // 0x8024A88C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x8024A890: sw          $a2, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r6;
    // 0x8024A894: jr          $ra
    // 0x8024A898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024A898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802204E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802204E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802204E8: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802204EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802204F0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802204F4: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802204F8: lui         $t7, 0xB700
    ctx->r15 = S32(0XB700 << 16);
    // 0x802204FC: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x80220500: bc1f        L_80220510
    if (!c1cs) {
        // 0x80220504: nop
    
            goto L_80220510;
    }
    // 0x80220504: nop

    // 0x80220508: b           L_80220528
    // 0x8022050C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_80220528;
    // 0x8022050C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_80220510:
    // 0x80220510: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80220514: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80220518: nop

    // 0x8022051C: bc1fl       L_8022052C
    if (!c1cs) {
        // 0x80220520: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_8022052C;
    }
    goto skip_0;
    // 0x80220520: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_0:
    // 0x80220524: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_80220528:
    // 0x80220528: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_8022052C:
    // 0x8022052C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80220530: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80220534: swc1        $f12, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f12.u32l;
    // 0x80220538: bc1f        L_80220624
    if (!c1cs) {
        // 0x8022053C: nop
    
            goto L_80220624;
    }
    // 0x8022053C: nop

    // 0x80220540: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80220544: lui         $t1, 0xBC00
    ctx->r9 = S32(0XBC00 << 16);
    // 0x80220548: ori         $t1, $t1, 0x8
    ctx->r9 = ctx->r9 | 0X8;
    // 0x8022054C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80220550: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80220554: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80220558: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8022055C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80220560: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80220564: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80220568: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022056C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220570: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80220574: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80220578: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8022057C: addiu       $t3, $zero, 0x3E8
    ctx->r11 = ADD32(0, 0X3E8);
    // 0x80220580: lui         $t4, 0x1
    ctx->r12 = S32(0X1 << 16);
    // 0x80220584: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80220588: ori         $t4, $t4, 0xF400
    ctx->r12 = ctx->r12 | 0XF400;
    // 0x8022058C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80220590: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80220594: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80220598: nop

    // 0x8022059C: subu        $a2, $t3, $a1
    ctx->r6 = SUB32(ctx->r11, ctx->r5);
    // 0x802205A0: div         $zero, $t4, $a2
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r6)));
    // 0x802205A4: negu        $t8, $a1
    ctx->r24 = SUB32(0, ctx->r5);
    // 0x802205A8: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802205AC: addu        $t1, $t9, $t4
    ctx->r9 = ADD32(ctx->r25, ctx->r12);
    // 0x802205B0: mflo        $t5
    ctx->r13 = lo;
    // 0x802205B4: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x802205B8: bne         $a2, $zero, L_802205C4
    if (ctx->r6 != 0) {
        // 0x802205BC: nop
    
            goto L_802205C4;
    }
    // 0x802205BC: nop

    // 0x802205C0: break       7
    do_break(2149713344);
L_802205C4:
    // 0x802205C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802205C8: bne         $a2, $at, L_802205DC
    if (ctx->r6 != ctx->r1) {
        // 0x802205CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802205DC;
    }
    // 0x802205CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802205D0: bne         $t4, $at, L_802205DC
    if (ctx->r12 != ctx->r1) {
        // 0x802205D4: nop
    
            goto L_802205DC;
    }
    // 0x802205D4: nop

    // 0x802205D8: break       6
    do_break(2149713368);
L_802205DC:
    // 0x802205DC: div         $zero, $t1, $a2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r6)));
    // 0x802205E0: addu        $at, $t4, $zero
    ctx->r1 = ADD32(ctx->r12, 0);
    // 0x802205E4: mflo        $t2
    ctx->r10 = lo;
    // 0x802205E8: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x802205EC: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x802205F0: or          $t4, $t7, $t3
    ctx->r12 = ctx->r15 | ctx->r11;
    // 0x802205F4: bne         $a2, $zero, L_80220600
    if (ctx->r6 != 0) {
        // 0x802205F8: nop
    
            goto L_80220600;
    }
    // 0x802205F8: nop

    // 0x802205FC: break       7
    do_break(2149713404);
L_80220600:
    // 0x80220600: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80220604: bne         $a2, $at, L_80220618
    if (ctx->r6 != ctx->r1) {
        // 0x80220608: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80220618;
    }
    // 0x80220608: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022060C: bne         $t1, $at, L_80220618
    if (ctx->r9 != ctx->r1) {
        // 0x80220610: nop
    
            goto L_80220618;
    }
    // 0x80220610: nop

    // 0x80220614: break       6
    do_break(2149713428);
L_80220618:
    // 0x80220618: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x8022061C: jr          $ra
    // 0x80220620: nop

    return;
    // 0x80220620: nop

L_80220624:
    // 0x80220624: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80220628: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8022062C: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80220630: lui         $t6, 0xB600
    ctx->r14 = S32(0XB600 << 16);
    // 0x80220634: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x80220638: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x8022063C: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x80220640: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80220644: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80220648: jr          $ra
    // 0x8022064C: nop

    return;
    // 0x8022064C: nop

;}
RECOMP_FUNC void D_8027AB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027ABD4: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8027ABD8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8027ABDC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8027ABE0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8027ABE4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8027ABE8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8027ABEC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8027ABF0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8027ABF4: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x8027ABF8: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x8027ABFC: lbu         $v1, 0x67FC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X67FC);
    // 0x8027AC00: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8027AC04: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8027AC08: blez        $v1, L_8027AC78
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8027AC0C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8027AC78;
    }
    // 0x8027AC0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027AC10: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8027AC14: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8027AC18: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8027AC1C: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
L_8027AC20:
    // 0x8027AC20: lw          $a0, 0x67C0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X67C0);
    // 0x8027AC24: beql        $a0, $zero, L_8027AC6C
    if (ctx->r4 == 0) {
        // 0x8027AC28: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027AC6C;
    }
    goto skip_0;
    // 0x8027AC28: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8027AC2C: lbu         $t6, 0x275($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X275);
    // 0x8027AC30: beql        $t6, $zero, L_8027AC6C
    if (ctx->r14 == 0) {
        // 0x8027AC34: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027AC6C;
    }
    goto skip_1;
    // 0x8027AC34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x8027AC38: jal         0x802E98E4
    // 0x8027AC3C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802E98E4(rdram, ctx);
        goto after_0;
    // 0x8027AC3C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x8027AC40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027AC44: jal         0x802CF954
    // 0x8027AC48: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_1;
    // 0x8027AC48: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x8027AC4C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8027AC50: nop

    // 0x8027AC54: bc1fl       L_8027AC68
    if (!c1cs) {
        // 0x8027AC58: lbu         $v1, 0x67FC($s3)
        ctx->r3 = MEM_BU(ctx->r19, 0X67FC);
            goto L_8027AC68;
    }
    goto skip_2;
    // 0x8027AC58: lbu         $v1, 0x67FC($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X67FC);
    skip_2:
    // 0x8027AC5C: b           L_8027ACD4
    // 0x8027AC60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027ACD4;
    // 0x8027AC60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027AC64: lbu         $v1, 0x67FC($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X67FC);
L_8027AC68:
    // 0x8027AC68: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027AC6C:
    // 0x8027AC6C: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8027AC70: bne         $at, $zero, L_8027AC20
    if (ctx->r1 != 0) {
        // 0x8027AC74: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8027AC20;
    }
    // 0x8027AC74: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8027AC78:
    // 0x8027AC78: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8027AC7C: addiu       $t8, $s3, 0x365C
    ctx->r24 = ADD32(ctx->r19, 0X365C);
    // 0x8027AC80: addiu       $a0, $s3, 0x67C0
    ctx->r4 = ADD32(ctx->r19, 0X67C0);
    // 0x8027AC84: bne         $t7, $t8, L_8027AC94
    if (ctx->r15 != ctx->r24) {
        // 0x8027AC88: addiu       $a1, $s3, 0x67FC
        ctx->r5 = ADD32(ctx->r19, 0X67FC);
            goto L_8027AC94;
    }
    // 0x8027AC88: addiu       $a1, $s3, 0x67FC
    ctx->r5 = ADD32(ctx->r19, 0X67FC);
    // 0x8027AC8C: b           L_8027ACD4
    // 0x8027AC90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027ACD4;
    // 0x8027AC90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027AC94:
    // 0x8027AC94: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8027AC98: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8027AC9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8027ACA0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x8027ACA4: jal         0x802A37C0
    // 0x8027ACA8: addiu       $a3, $s3, 0x67FD
    ctx->r7 = ADD32(ctx->r19, 0X67FD);
    static_3_802A37C0(rdram, ctx);
        goto after_2;
    // 0x8027ACA8: addiu       $a3, $s3, 0x67FD
    ctx->r7 = ADD32(ctx->r19, 0X67FD);
    after_2:
    // 0x8027ACAC: beq         $v0, $zero, L_8027ACD0
    if (ctx->r2 == 0) {
        // 0x8027ACB0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8027ACD0;
    }
    // 0x8027ACB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027ACB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027ACB8: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x8027ACBC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8027ACC0: jal         0x802E990C
    // 0x8027ACC4: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
    static_3_802E990C(rdram, ctx);
        goto after_3;
    // 0x8027ACC4: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
    after_3:
    // 0x8027ACC8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8027ACCC: sh          $t0, 0x274($s0)
    MEM_H(0X274, ctx->r16) = ctx->r8;
L_8027ACD0:
    // 0x8027ACD0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8027ACD4:
    // 0x8027ACD4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8027ACD8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8027ACDC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8027ACE0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8027ACE4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8027ACE8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8027ACEC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8027ACF0: jr          $ra
    // 0x8027ACF4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8027ACF4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void D_802ED670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED6F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802ED6F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802ED6F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ED6FC: bne         $a0, $zero, L_802ED714
    if (ctx->r4 != 0) {
        // 0x802ED700: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802ED714;
    }
    // 0x802ED700: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802ED704: jal         0x802C67EC
    // 0x802ED708: addiu       $a0, $zero, 0x5A0
    ctx->r4 = ADD32(0, 0X5A0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ED708: addiu       $a0, $zero, 0x5A0
    ctx->r4 = ADD32(0, 0X5A0);
    after_0:
    // 0x802ED70C: beq         $v0, $zero, L_802ED788
    if (ctx->r2 == 0) {
        // 0x802ED710: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802ED788;
    }
    // 0x802ED710: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802ED714:
    // 0x802ED714: jal         0x8031C47C
    // 0x802ED718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ED718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802ED71C: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x802ED720: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802ED724: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802ED728: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802ED72C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802ED730: jal         0x802C6930
    // 0x802ED734: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802ED734: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802ED738: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802ED73C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ED740: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED744: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802ED748: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x802ED74C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802ED750: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ED754: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x802ED758: sh          $t7, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r15;
    // 0x802ED75C: sw          $t8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r24;
    // 0x802ED760: sh          $t9, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r25;
    // 0x802ED764: sh          $t0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r8;
    // 0x802ED768: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED76C: sw          $t6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r14;
    // 0x802ED770: swc1        $f0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f0.u32l;
    // 0x802ED774: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x802ED778: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802ED780: jal         0x8031DEF4
    // 0x802ED784: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    static_3_8031DEF4(rdram, ctx);
        goto after_3;
    // 0x802ED784: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    after_3:
L_802ED788:
    // 0x802ED788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED78C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802ED790: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802ED794: jr          $ra
    // 0x802ED798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802ED798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802A8CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8D7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8D84: jal         0x8028D688
    // 0x802A8D88: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D688(rdram, ctx);
        goto after_0;
    // 0x802A8D88: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802A8D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A8D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8D94: jr          $ra
    // 0x802A8D98: nop

    return;
    // 0x802A8D98: nop

;}
RECOMP_FUNC void D_802B71B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7238: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802B723C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B7240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7244: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B7248: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802B724C: jal         0x802C5200
    // 0x802B7250: addiu       $a0, $a0, 0xEDC
    ctx->r4 = ADD32(ctx->r4, 0XEDC);
    static_3_802C5200(rdram, ctx);
        goto after_0;
    // 0x802B7250: addiu       $a0, $a0, 0xEDC
    ctx->r4 = ADD32(ctx->r4, 0XEDC);
    after_0:
    // 0x802B7254: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802B7258: sb          $v0, 0xF9($t6)
    MEM_B(0XF9, ctx->r14) = ctx->r2;
    // 0x802B725C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B7264: jr          $ra
    // 0x802B7268: nop

    return;
    // 0x802B7268: nop

;}
RECOMP_FUNC void D_80201BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201BB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201BB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201BB8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201BBC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201BC0: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x80201BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201BC8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80201BCC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201BD0: bne         $at, $zero, L_80201BFC
    if (ctx->r1 != 0) {
        // 0x80201BD4: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80201BFC;
    }
    // 0x80201BD4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201BD8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201BDC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201BE0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201BE4: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    // 0x80201BE8: jal         0x80231C9C
    // 0x80201BEC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201BEC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80201BF0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201BF4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201BF8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_80201BFC:
    // 0x80201BFC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201C00: beq         $at, $zero, L_80201C80
    if (ctx->r1 == 0) {
        // 0x80201C04: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_80201C80;
    }
    // 0x80201C04: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80201C08: bgez        $t6, L_80201C24
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80201C0C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80201C24;
    }
    // 0x80201C0C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201C10: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201C14: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201C18: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201C1C: jal         0x80231C9C
    // 0x80201C20: addiu       $a2, $zero, 0x1C2
    ctx->r6 = ADD32(0, 0X1C2);
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80201C20: addiu       $a2, $zero, 0x1C2
    ctx->r6 = ADD32(0, 0X1C2);
    after_1:
L_80201C24:
    // 0x80201C24: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80201C28: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80201C2C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201C30: slt         $at, $t7, $at
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80201C34: bne         $at, $zero, L_80201C4C
    if (ctx->r1 != 0) {
        // 0x80201C38: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_80201C4C;
    }
    // 0x80201C38: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201C3C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201C40: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201C44: jal         0x80231C9C
    // 0x80201C48: addiu       $a2, $zero, 0x1C3
    ctx->r6 = ADD32(0, 0X1C3);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80201C48: addiu       $a2, $zero, 0x1C3
    ctx->r6 = ADD32(0, 0X1C3);
    after_2:
L_80201C4C:
    // 0x80201C4C: lbu         $t0, 0x23($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X23);
    // 0x80201C50: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80201C54: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80201C58: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80201C5C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80201C60: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80201C64: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80201C68: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80201C6C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80201C70: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80201C74: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80201C78: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80201C7C: sw          $t8, 0x88($t2)
    MEM_W(0X88, ctx->r10) = ctx->r24;
L_80201C80:
    // 0x80201C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201C84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201C88: jr          $ra
    // 0x80201C8C: nop

    return;
    // 0x80201C8C: nop

;}
RECOMP_FUNC void D_802AC5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC62C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802AC630: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AC634: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AC638: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AC63C: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x802AC640: jal         0x8021ACB0
    // 0x802AC644: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AC644: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    after_0:
    // 0x802AC648: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AC64C: jal         0x8021B838
    // 0x802AC650: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AC650: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AC654: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802AC658: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AC65C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AC660: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AC664: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x802AC668: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AC66C: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AC670: lh          $t7, 0xB8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB8);
    // 0x802AC674: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802AC678: jalr        $t9
    // 0x802AC67C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AC67C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_2:
    // 0x802AC680: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AC684: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x802AC688: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802AC68C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AC690: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AC694: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AC698: jal         0x80317194
    // 0x802AC69C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_3;
    // 0x802AC69C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_3:
    // 0x802AC6A0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802AC6A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AC6A8: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AC6AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AC6B0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802AC6B4: jal         0x802D51DC
    // 0x802AC6B8: nop

    static_3_802D51DC(rdram, ctx);
        goto after_4;
    // 0x802AC6B8: nop

    after_4:
    // 0x802AC6BC: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AC6C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AC6C4: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AC6C8: jal         0x802C4A20
    // 0x802AC6CC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_5;
    // 0x802AC6CC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_5:
    // 0x802AC6D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AC6D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AC6D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802AC6DC: jr          $ra
    // 0x802AC6E0: nop

    return;
    // 0x802AC6E0: nop

;}
RECOMP_FUNC void D_802ACA6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACAEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802ACAF0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802ACAF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ACAF8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802ACAFC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ACB00: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802ACB04: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ACB08: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802ACB0C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802ACB10: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ACB14: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802ACB18: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x802ACB1C: addiu       $t8, $zero, 0xB2
    ctx->r24 = ADD32(0, 0XB2);
    // 0x802ACB20: addiu       $t9, $zero, 0x8B
    ctx->r25 = ADD32(0, 0X8B);
    // 0x802ACB24: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACB28: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACB2C: sb          $t6, 0x968($a0)
    MEM_B(0X968, ctx->r4) = ctx->r14;
    // 0x802ACB30: sw          $t7, 0x944($a0)
    MEM_W(0X944, ctx->r4) = ctx->r15;
    // 0x802ACB34: sw          $t8, 0x948($a0)
    MEM_W(0X948, ctx->r4) = ctx->r24;
    // 0x802ACB38: sw          $t9, 0x94C($a0)
    MEM_W(0X94C, ctx->r4) = ctx->r25;
    // 0x802ACB3C: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    // 0x802ACB40: jal         0x803034A8
    // 0x802ACB44: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    static_3_803034A8(rdram, ctx);
        goto after_0;
    // 0x802ACB44: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_0:
    // 0x802ACB48: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACB4C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACB50: addiu       $a0, $s0, 0x9E0
    ctx->r4 = ADD32(ctx->r16, 0X9E0);
    // 0x802ACB54: jal         0x803034A8
    // 0x802ACB58: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    static_3_803034A8(rdram, ctx);
        goto after_1;
    // 0x802ACB58: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    after_1:
    // 0x802ACB5C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACB60: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACB64: addiu       $a0, $s0, 0xA54
    ctx->r4 = ADD32(ctx->r16, 0XA54);
    // 0x802ACB68: jal         0x803034A8
    // 0x802ACB6C: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    static_3_803034A8(rdram, ctx);
        goto after_2;
    // 0x802ACB6C: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    after_2:
    // 0x802ACB70: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACB74: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACB78: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    // 0x802ACB7C: jal         0x803034A8
    // 0x802ACB80: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    static_3_803034A8(rdram, ctx);
        goto after_3;
    // 0x802ACB80: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_3:
    // 0x802ACB84: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACB88: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACB8C: addiu       $a0, $s0, 0xB3C
    ctx->r4 = ADD32(ctx->r16, 0XB3C);
    // 0x802ACB90: jal         0x803034A8
    // 0x802ACB94: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    static_3_803034A8(rdram, ctx);
        goto after_4;
    // 0x802ACB94: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    after_4:
    // 0x802ACB98: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACB9C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACBA0: addiu       $a0, $s0, 0xBB0
    ctx->r4 = ADD32(ctx->r16, 0XBB0);
    // 0x802ACBA4: jal         0x803034A8
    // 0x802ACBA8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    static_3_803034A8(rdram, ctx);
        goto after_5;
    // 0x802ACBA8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_5:
    // 0x802ACBAC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACBB0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACBB4: addiu       $a0, $s0, 0xC24
    ctx->r4 = ADD32(ctx->r16, 0XC24);
    // 0x802ACBB8: jal         0x803034A8
    // 0x802ACBBC: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    static_3_803034A8(rdram, ctx);
        goto after_6;
    // 0x802ACBBC: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    after_6:
    // 0x802ACBC0: lui         $a2, 0x3EB3
    ctx->r6 = S32(0X3EB3 << 16);
    // 0x802ACBC4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACBC8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x802ACBCC: addiu       $a0, $s0, 0xD0C
    ctx->r4 = ADD32(ctx->r16, 0XD0C);
    // 0x802ACBD0: jal         0x803034A8
    // 0x802ACBD4: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    static_3_803034A8(rdram, ctx);
        goto after_7;
    // 0x802ACBD4: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    after_7:
    // 0x802ACBD8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACBDC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACBE0: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    // 0x802ACBE4: jal         0x803034A8
    // 0x802ACBE8: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    static_3_803034A8(rdram, ctx);
        goto after_8;
    // 0x802ACBE8: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    after_8:
    // 0x802ACBEC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACBF0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACBF4: addiu       $a0, $s0, 0xE68
    ctx->r4 = ADD32(ctx->r16, 0XE68);
    // 0x802ACBF8: jal         0x803034A8
    // 0x802ACBFC: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    static_3_803034A8(rdram, ctx);
        goto after_9;
    // 0x802ACBFC: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    after_9:
    // 0x802ACC00: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802ACC04: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802ACC08: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802ACC0C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802ACC10: jr          $ra
    // 0x802ACC14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802ACC14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802E876C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E87EC: jr          $ra
    // 0x802E87F0: sw          $a1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r5;
    return;
    // 0x802E87F0: sw          $a1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802ED8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED93C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x802ED940: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED944: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ED948: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802ED94C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ED950: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ED954: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x802ED958: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802ED95C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ED960: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ED964: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ED968: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ED96C: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ED970: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ED974: sh          $zero, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = 0;
    // 0x802ED978: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED97C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ED980: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ED984: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802ED988: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x802ED98C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED990: jr          $ra
    // 0x802ED994: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802ED994: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_802DE0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DE128: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802DE12C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802DE130: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802DE134: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802DE138: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
    // 0x802DE13C: jr          $ra
    // 0x802DE140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802DE140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8028CE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CEFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028CF00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028CF04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8028CF08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8028CF0C: jal         0x80318C7C
    // 0x8028CF10: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    static_3_80318C7C(rdram, ctx);
        goto after_0;
    // 0x8028CF10: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    after_0:
    // 0x8028CF14: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8028CF18: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8028CF1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028CF20: bne         $t6, $zero, L_8028CF4C
    if (ctx->r14 != 0) {
        // 0x8028CF24: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8028CF4C;
    }
    // 0x8028CF24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028CF28: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x8028CF2C: jal         0x8021B240
    // 0x8028CF30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_1;
    // 0x8028CF30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8028CF34: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8028CF38: jal         0x8021BAE0
    // 0x8028CF3C: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_2;
    // 0x8028CF3C: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    after_2:
    // 0x8028CF40: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8028CF44: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x8028CF48: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
L_8028CF4C:
    // 0x8028CF4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028CF50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028CF54: jr          $ra
    // 0x8028CF58: nop

    return;
    // 0x8028CF58: nop

;}
RECOMP_FUNC void D_8021B9CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021B9CC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021B9D0: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x8021B9D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021B9D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B9DC: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B9E0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021B9E4: beq         $at, $zero, L_8021BA04
    if (ctx->r1 == 0) {
        // 0x8021B9E8: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8021BA04;
    }
    // 0x8021B9E8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8021B9EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021B9F0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021B9F4: jal         0x80231A24
    // 0x8021B9F8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021B9F8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8021B9FC: b           L_8021BA34
    // 0x8021BA00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021BA34;
    // 0x8021BA00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BA04:
    // 0x8021BA04: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021BA08: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021BA0C: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x8021BA10: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x8021BA14: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021BA18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021BA1C: lbu         $t0, 0x8($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X8);
    // 0x8021BA20: nor         $t1, $a3, $zero
    ctx->r9 = ~(ctx->r7 | 0);
    // 0x8021BA24: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8021BA28: jal         0x8021B838
    // 0x8021BA2C: and         $a1, $t0, $t1
    ctx->r5 = ctx->r8 & ctx->r9;
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x8021BA2C: and         $a1, $t0, $t1
    ctx->r5 = ctx->r8 & ctx->r9;
    after_1:
    // 0x8021BA30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BA34:
    // 0x8021BA34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021BA38: jr          $ra
    // 0x8021BA3C: nop

    return;
    // 0x8021BA3C: nop

;}
RECOMP_FUNC void D_80247A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247A9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80247AA0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80247AA4: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80247AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80247AAC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80247AB0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80247AB4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80247AB8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80247ABC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80247AC0:
    // 0x80247AC0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80247AC4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80247AC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247ACC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80247AD0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80247AD4: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80247AD8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80247ADC: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80247AE0: bne         $at, $zero, L_80247AC0
    if (ctx->r1 != 0) {
        // 0x80247AE4: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_80247AC0;
    }
    // 0x80247AE4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80247AE8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80247AEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80247AF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247AF4: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80247AF8: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x80247AFC: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80247B00: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80247B04:
    // 0x80247B04: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80247B08: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x80247B0C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80247B10: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80247B14: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80247B18: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x80247B1C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80247B20: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80247B24: bne         $at, $zero, L_80247B04
    if (ctx->r1 != 0) {
        // 0x80247B28: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_80247B04;
    }
    // 0x80247B28: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80247B2C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80247B30: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80247B34: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80247B38: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80247B3C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80247B40: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80247B44: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80247B48: sb          $t8, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r24;
    // 0x80247B4C: sb          $t9, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r25;
    // 0x80247B50: sb          $t0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r8;
    // 0x80247B54: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x80247B58: sb          $t1, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r9;
    // 0x80247B5C: sb          $t2, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r10;
    // 0x80247B60: sb          $t3, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r11;
    // 0x80247B64: sb          $t4, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r12;
    // 0x80247B68: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x80247B6C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80247B70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80247B74: addiu       $t2, $zero, 0xFE
    ctx->r10 = ADD32(0, 0XFE);
    // 0x80247B78: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80247B7C: swl         $at, 0x0($t5)
    do_swl(rdram, 0X0, ctx->r13, ctx->r1);
    // 0x80247B80: swr         $at, 0x3($t5)
    do_swr(rdram, 0X3, ctx->r13, ctx->r1);
    // 0x80247B84: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80247B88: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80247B8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80247B90: swl         $t9, 0x4($t5)
    do_swl(rdram, 0X4, ctx->r13, ctx->r25);
    // 0x80247B94: swr         $t9, 0x7($t5)
    do_swr(rdram, 0X7, ctx->r13, ctx->r25);
    // 0x80247B98: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80247B9C: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80247BA0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80247BA4: jal         0x802465B0
    // 0x80247BA8: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
    static_3_802465B0(rdram, ctx);
        goto after_0;
    // 0x80247BA8: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
    after_0:
    // 0x80247BAC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80247BB0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80247BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80247BB8: jal         0x802374B0
    // 0x80247BBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_1;
    // 0x80247BBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80247BC0: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80247BC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247BC8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80247BCC: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x80247BD0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80247BD4: jal         0x802465B0
    // 0x80247BD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_2;
    // 0x80247BD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80247BDC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80247BE0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80247BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80247BE8: jal         0x802374B0
    // 0x80247BEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_3;
    // 0x80247BEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80247BF0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80247BF4: beq         $t4, $zero, L_80247C04
    if (ctx->r12 == 0) {
        // 0x80247BF8: nop
    
            goto L_80247C04;
    }
    // 0x80247BF8: nop

    // 0x80247BFC: b           L_80247CB0
    // 0x80247C00: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_80247CB0;
    // 0x80247C00: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_80247C04:
    // 0x80247C04: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80247C08: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80247C0C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80247C10: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80247C14:
    // 0x80247C14: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80247C18: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x80247C1C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80247C20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80247C24: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80247C28: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x80247C2C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80247C30: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80247C34: bne         $at, $zero, L_80247C14
    if (ctx->r1 != 0) {
        // 0x80247C38: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_80247C14;
    }
    // 0x80247C38: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80247C3C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80247C40: addiu       $t2, $sp, 0x1C
    ctx->r10 = ADD32(ctx->r29, 0X1C);
    // 0x80247C44: lwl         $at, 0x0($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, 0X0);
    // 0x80247C48: lwr         $at, 0x3($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0X3);
    // 0x80247C4C: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80247C50: lwl         $t4, 0x4($t1)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r9, 0X4);
    // 0x80247C54: lwr         $t4, 0x7($t1)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r9, 0X7);
    // 0x80247C58: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x80247C5C: lbu         $t8, 0x1E($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1E);
    // 0x80247C60: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80247C64: andi        $t7, $t8, 0xC0
    ctx->r15 = ctx->r24 & 0XC0;
    // 0x80247C68: sra         $t5, $t7, 4
    ctx->r13 = S32(SIGNED(ctx->r15) >> 4);
    // 0x80247C6C: sb          $t5, 0x3($t6)
    MEM_B(0X3, ctx->r14) = ctx->r13;
    // 0x80247C70: lbu         $t9, 0x21($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X21);
    // 0x80247C74: lbu         $t3, 0x20($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X20);
    // 0x80247C78: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80247C7C: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x80247C80: or          $t2, $t0, $t3
    ctx->r10 = ctx->r8 | ctx->r11;
    // 0x80247C84: sh          $t2, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r10;
    // 0x80247C88: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80247C8C: lbu         $t4, 0x22($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X22);
    // 0x80247C90: sb          $t4, 0x2($t8)
    MEM_B(0X2, ctx->r24) = ctx->r12;
    // 0x80247C94: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80247C98: lbu         $t5, 0x3($t7)
    ctx->r13 = MEM_BU(ctx->r15, 0X3);
    // 0x80247C9C: beq         $t5, $zero, L_80247CAC
    if (ctx->r13 == 0) {
        // 0x80247CA0: nop
    
            goto L_80247CAC;
    }
    // 0x80247CA0: nop

    // 0x80247CA4: b           L_80247CB0
    // 0x80247CA8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_80247CB0;
    // 0x80247CA8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_80247CAC:
    // 0x80247CAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80247CB0:
    // 0x80247CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247CB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80247CB8: jr          $ra
    // 0x80247CBC: nop

    return;
    // 0x80247CBC: nop

;}
RECOMP_FUNC void D_802D7FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D805C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8060: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D8064: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D8068: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802D806C: jr          $ra
    // 0x802D8070: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802D8070: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void D_8027A9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AA3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027AA40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027AA44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8027AA48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8027AA4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027AA50: lbu         $v0, 0x67BC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X67BC);
    // 0x8027AA54: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8027AA58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8027AA5C: blez        $v0, L_8027AAA0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8027AA60: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8027AAA0;
    }
    // 0x8027AA60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027AA64:
    // 0x8027AA64: lw          $a1, 0x67AC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X67AC);
    // 0x8027AA68: beql        $a1, $zero, L_8027AA94
    if (ctx->r5 == 0) {
        // 0x8027AA6C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8027AA94;
    }
    goto skip_0;
    // 0x8027AA6C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8027AA70: lw          $v1, 0xB8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XB8);
    // 0x8027AA74: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8027AA78: lh          $t6, 0x48($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X48);
    // 0x8027AA7C: lw          $t9, 0x4C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4C);
    // 0x8027AA80: addu        $a0, $t6, $a1
    ctx->r4 = ADD32(ctx->r14, ctx->r5);
    // 0x8027AA84: jalr        $t9
    // 0x8027AA88: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8027AA88: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8027AA8C: lbu         $v0, 0x67BC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X67BC);
    // 0x8027AA90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8027AA94:
    // 0x8027AA94: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8027AA98: bne         $at, $zero, L_8027AA64
    if (ctx->r1 != 0) {
        // 0x8027AA9C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027AA64;
    }
    // 0x8027AA9C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027AAA0:
    // 0x8027AAA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027AAA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027AAA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8027AAAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8027AAB0: jr          $ra
    // 0x8027AAB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027AAB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80205840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205840: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80205844: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80205848: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x8020584C: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80205850: lhu         $t6, 0x2E($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0X2E);
    // 0x80205854: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80205858: addiu       $s1, $zero, 0x2D8
    ctx->r17 = ADD32(0, 0X2D8);
    // 0x8020585C: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80205860: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80205864: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80205868: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8020586C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80205870: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80205874: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80205878: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8020587C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80205880: mflo        $a0
    ctx->r4 = lo;
    // 0x80205884: jal         0x8022BA58
    // 0x80205888: nop

    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x80205888: nop

    after_0:
    // 0x8020588C: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80205890: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80205894: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x80205898: jal         0x8022BA58
    // 0x8020589C: lhu         $a0, 0x30($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X30);
    static_3_8022BA58(rdram, ctx);
        goto after_1;
    // 0x8020589C: lhu         $a0, 0x30($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X30);
    after_1:
    // 0x802058A0: lhu         $t7, 0x30($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X30);
    // 0x802058A4: addiu       $s0, $zero, 0x24
    ctx->r16 = ADD32(0, 0X24);
    // 0x802058A8: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802058AC: multu       $t7, $s0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802058B0: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802058B4: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x802058B8: mflo        $a0
    ctx->r4 = lo;
    // 0x802058BC: jal         0x8022BA58
    // 0x802058C0: nop

    static_3_8022BA58(rdram, ctx);
        goto after_2;
    // 0x802058C0: nop

    after_2:
    // 0x802058C4: lhu         $t8, 0x32($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X32);
    // 0x802058C8: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x802058CC: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x802058D0: multu       $t8, $s0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802058D4: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x802058D8: mflo        $a0
    ctx->r4 = lo;
    // 0x802058DC: jal         0x8022BA58
    // 0x802058E0: nop

    static_3_8022BA58(rdram, ctx);
        goto after_3;
    // 0x802058E0: nop

    after_3:
    // 0x802058E4: lhu         $t9, 0x2E($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X2E);
    // 0x802058E8: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x802058EC: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x802058F0: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802058F4: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x802058F8: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x802058FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205900: mflo        $a2
    ctx->r6 = lo;
    // 0x80205904: jal         0x8022B780
    // 0x80205908: nop

    static_3_8022B780(rdram, ctx);
        goto after_4;
    // 0x80205908: nop

    after_4:
    // 0x8020590C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80205910: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205914: jal         0x8022B780
    // 0x80205918: lhu         $a2, 0x30($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X30);
    static_3_8022B780(rdram, ctx);
        goto after_5;
    // 0x80205918: lhu         $a2, 0x30($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X30);
    after_5:
    // 0x8020591C: lhu         $t0, 0x30($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X30);
    // 0x80205920: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80205924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205928: multu       $t0, $s0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020592C: mflo        $a2
    ctx->r6 = lo;
    // 0x80205930: jal         0x8022B780
    // 0x80205934: nop

    static_3_8022B780(rdram, ctx);
        goto after_6;
    // 0x80205934: nop

    after_6:
    // 0x80205938: lhu         $t1, 0x32($s3)
    ctx->r9 = MEM_HU(ctx->r19, 0X32);
    // 0x8020593C: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x80205940: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205944: multu       $t1, $s0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80205948: mflo        $a2
    ctx->r6 = lo;
    // 0x8020594C: jal         0x8022B780
    // 0x80205950: nop

    static_3_8022B780(rdram, ctx);
        goto after_7;
    // 0x80205950: nop

    after_7:
    // 0x80205954: lhu         $t2, 0x2E($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X2E);
    // 0x80205958: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8020595C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80205960: blez        $t2, L_80205A20
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80205964: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80205A20;
    }
    // 0x80205964: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80205968: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8020596C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80205970: addiu       $s5, $zero, 0xF0
    ctx->r21 = ADD32(0, 0XF0);
    // 0x80205974: addiu       $s4, $zero, 0x140
    ctx->r20 = ADD32(0, 0X140);
    // 0x80205978: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
L_8020597C:
    // 0x8020597C: addu        $s0, $s2, $t3
    ctx->r16 = ADD32(ctx->r18, ctx->r11);
    // 0x80205980: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80205984: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x80205988: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x8020598C: sh          $s1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r17;
    // 0x80205990: jal         0x8022970C
    // 0x80205994: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_8022970C(rdram, ctx);
        goto after_8;
    // 0x80205994: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_8:
    // 0x80205998: jal         0x8022970C
    // 0x8020599C: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    func_8022970C(rdram, ctx);
        goto after_9;
    // 0x8020599C: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    after_9:
    // 0x802059A0: jal         0x8022970C
    // 0x802059A4: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    func_8022970C(rdram, ctx);
        goto after_10;
    // 0x802059A4: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    after_10:
    // 0x802059A8: jal         0x8022970C
    // 0x802059AC: addiu       $a0, $s0, 0xC8
    ctx->r4 = ADD32(ctx->r16, 0XC8);
    func_8022970C(rdram, ctx);
        goto after_11;
    // 0x802059AC: addiu       $a0, $s0, 0xC8
    ctx->r4 = ADD32(ctx->r16, 0XC8);
    after_11:
    // 0x802059B0: swc1        $f20, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f20.u32l;
    // 0x802059B4: swc1        $f20, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f20.u32l;
    // 0x802059B8: swc1        $f20, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f20.u32l;
    // 0x802059BC: swc1        $f20, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f20.u32l;
    // 0x802059C0: swc1        $f22, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f22.u32l;
    // 0x802059C4: swc1        $f20, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f20.u32l;
    // 0x802059C8: sw          $zero, 0x2D0($s0)
    MEM_W(0X2D0, ctx->r16) = 0;
    // 0x802059CC: sw          $zero, 0x2D4($s0)
    MEM_W(0X2D4, ctx->r16) = 0;
    // 0x802059D0: swc1        $f22, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f22.u32l;
    // 0x802059D4: swc1        $f22, 0x13C($s0)
    MEM_W(0X13C, ctx->r16) = ctx->f22.u32l;
    // 0x802059D8: sh          $zero, 0x2C4($s0)
    MEM_H(0X2C4, ctx->r16) = 0;
    // 0x802059DC: sh          $s4, 0x2C6($s0)
    MEM_H(0X2C6, ctx->r16) = ctx->r20;
    // 0x802059E0: sh          $zero, 0x2C8($s0)
    MEM_H(0X2C8, ctx->r16) = 0;
    // 0x802059E4: sh          $s5, 0x2CA($s0)
    MEM_H(0X2CA, ctx->r16) = ctx->r21;
    // 0x802059E8: sw          $zero, 0x2CC($s0)
    MEM_W(0X2CC, ctx->r16) = 0;
    // 0x802059EC: andi        $t4, $s5, 0xFFFF
    ctx->r12 = ctx->r21 & 0XFFFF;
    // 0x802059F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802059F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802059F8: andi        $a1, $zero, 0xFFFF
    ctx->r5 = 0 & 0XFFFF;
    // 0x802059FC: andi        $a2, $s4, 0xFFFF
    ctx->r6 = ctx->r20 & 0XFFFF;
    // 0x80205A00: jal         0x80205D70
    // 0x80205A04: andi        $a3, $zero, 0xFFFF
    ctx->r7 = 0 & 0XFFFF;
    static_3_80205D70(rdram, ctx);
        goto after_12;
    // 0x80205A04: andi        $a3, $zero, 0xFFFF
    ctx->r7 = 0 & 0XFFFF;
    after_12:
    // 0x80205A08: lhu         $t5, 0x2E($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X2E);
    // 0x80205A0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80205A10: addiu       $s2, $s2, 0x2D8
    ctx->r18 = ADD32(ctx->r18, 0X2D8);
    // 0x80205A14: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80205A18: bnel        $at, $zero, L_8020597C
    if (ctx->r1 != 0) {
        // 0x80205A1C: lw          $t3, 0x0($s6)
        ctx->r11 = MEM_W(ctx->r22, 0X0);
            goto L_8020597C;
    }
    goto skip_0;
    // 0x80205A1C: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    skip_0:
L_80205A20:
    // 0x80205A20: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80205A24: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80205A28: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80205A2C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80205A30: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80205A34: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80205A38: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80205A3C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80205A40: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80205A44: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80205A48: jr          $ra
    // 0x80205A4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80205A4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_80224568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80224568: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022456C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80224570: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224574: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80224578: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022457C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80224580: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80224584: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80224588: jal         0x80223840
    // 0x8022458C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x8022458C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x80224590: addiu       $s3, $sp, 0x34
    ctx->r19 = ADD32(ctx->r29, 0X34);
    // 0x80224594: addiu       $s4, $sp, 0x30
    ctx->r20 = ADD32(ctx->r29, 0X30);
    // 0x80224598: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8022459C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802245A0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802245A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802245A8: jal         0x8022393C
    // 0x802245AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x802245AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x802245B0: beq         $v0, $zero, L_802245F4
    if (ctx->r2 == 0) {
        // 0x802245B4: lui         $s1, 0x0
        ctx->r17 = S32(0X0 << 16);
            goto L_802245F4;
    }
    // 0x802245B4: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802245B8: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x802245BC: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
    // 0x802245C0: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
L_802245C4:
    // 0x802245C4: bne         $v0, $s0, L_802245D8
    if (ctx->r2 != ctx->r16) {
        // 0x802245C8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802245D8;
    }
    // 0x802245C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802245CC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802245D0: jal         0x8022B460
    // 0x802245D4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8022B460(rdram, ctx);
        goto after_2;
    // 0x802245D4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
L_802245D8:
    // 0x802245D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802245DC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802245E0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802245E4: jal         0x8022393C
    // 0x802245E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x802245E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x802245EC: bne         $v0, $zero, L_802245C4
    if (ctx->r2 != 0) {
        // 0x802245F0: nop
    
            goto L_802245C4;
    }
    // 0x802245F0: nop

L_802245F4:
    // 0x802245F4: jal         0x802238F0
    // 0x802245F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802238F0(rdram, ctx);
        goto after_4;
    // 0x802245F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x802245FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80224600: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80224604: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80224608: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022460C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80224610: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80224614: jr          $ra
    // 0x80224618: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80224618: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8023CEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CEB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023CEB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023CEB8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023CEBC: jal         0x80241760
    // 0x8023CEC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023CEC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023CEC4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023CEC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023CECC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8023CED0: beq         $t7, $zero, L_8023CEEC
    if (ctx->r15 == 0) {
        // 0x8023CED4: nop
    
            goto L_8023CEEC;
    }
    // 0x8023CED4: nop

    // 0x8023CED8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023CEDC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8023CEE0: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x8023CEE4: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x8023CEE8: sw          $t0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r8;
L_8023CEEC:
    // 0x8023CEEC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023CEF0: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x8023CEF4: beq         $t2, $zero, L_8023CF14
    if (ctx->r10 == 0) {
        // 0x8023CEF8: nop
    
            goto L_8023CF14;
    }
    // 0x8023CEF8: nop

    // 0x8023CEFC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8023CF00: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x8023CF04: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x8023CF08: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x8023CF0C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8023CF10: sw          $t5, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r13;
L_8023CF14:
    // 0x8023CF14: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023CF18: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8023CF1C: beq         $t7, $zero, L_8023CF38
    if (ctx->r15 == 0) {
        // 0x8023CF20: nop
    
            goto L_8023CF38;
    }
    // 0x8023CF20: nop

    // 0x8023CF24: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8023CF28: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8023CF2C: lw          $t0, 0xC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC);
    // 0x8023CF30: ori         $t8, $t0, 0x4
    ctx->r24 = ctx->r8 | 0X4;
    // 0x8023CF34: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
L_8023CF38:
    // 0x8023CF38: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023CF3C: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x8023CF40: beq         $t2, $zero, L_8023CF60
    if (ctx->r10 == 0) {
        // 0x8023CF44: nop
    
            goto L_8023CF60;
    }
    // 0x8023CF44: nop

    // 0x8023CF48: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8023CF4C: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x8023CF50: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8023CF54: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x8023CF58: and         $t3, $t5, $at
    ctx->r11 = ctx->r13 & ctx->r1;
    // 0x8023CF5C: sw          $t3, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r11;
L_8023CF60:
    // 0x8023CF60: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023CF64: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x8023CF68: beq         $t7, $zero, L_8023CF84
    if (ctx->r15 == 0) {
        // 0x8023CF6C: nop
    
            goto L_8023CF84;
    }
    // 0x8023CF6C: nop

    // 0x8023CF70: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8023CF74: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8023CF78: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x8023CF7C: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x8023CF80: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
L_8023CF84:
    // 0x8023CF84: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023CF88: andi        $t2, $t1, 0x20
    ctx->r10 = ctx->r9 & 0X20;
    // 0x8023CF8C: beq         $t2, $zero, L_8023CFAC
    if (ctx->r10 == 0) {
        // 0x8023CF90: nop
    
            goto L_8023CFAC;
    }
    // 0x8023CF90: nop

    // 0x8023CF94: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8023CF98: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x8023CF9C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8023CFA0: lw          $t3, 0xC($t5)
    ctx->r11 = MEM_W(ctx->r13, 0XC);
    // 0x8023CFA4: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x8023CFA8: sw          $t4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r12;
L_8023CFAC:
    // 0x8023CFAC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023CFB0: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x8023CFB4: beq         $t7, $zero, L_8023CFEC
    if (ctx->r15 == 0) {
        // 0x8023CFB8: nop
    
            goto L_8023CFEC;
    }
    // 0x8023CFB8: nop

    // 0x8023CFBC: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023CFC0: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8023CFC4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8023CFC8: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8023CFCC: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x8023CFD0: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x8023CFD4: sw          $t0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r8;
    // 0x8023CFD8: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x8023CFDC: addiu       $at, $zero, -0x301
    ctx->r1 = ADD32(0, -0X301);
    // 0x8023CFE0: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8023CFE4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x8023CFE8: sw          $t3, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r11;
L_8023CFEC:
    // 0x8023CFEC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8023CFF0: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x8023CFF4: beq         $t5, $zero, L_8023D038
    if (ctx->r13 == 0) {
        // 0x8023CFF8: nop
    
            goto L_8023D038;
    }
    // 0x8023CFF8: nop

    // 0x8023CFFC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023D000: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8023D004: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x8023D008: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8023D00C: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x8023D010: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8023D014: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x8023D018: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x8023D01C: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8023D020: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x8023D024: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x8023D028: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8023D02C: andi        $t1, $t3, 0x300
    ctx->r9 = ctx->r11 & 0X300;
    // 0x8023D030: or          $t4, $t8, $t1
    ctx->r12 = ctx->r24 | ctx->r9;
    // 0x8023D034: sw          $t4, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r12;
L_8023D038:
    // 0x8023D038: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8023D03C: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x8023D040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023D044: lhu         $t7, 0x0($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0X0);
    // 0x8023D048: ori         $t9, $t7, 0x8
    ctx->r25 = ctx->r15 | 0X8;
    // 0x8023D04C: jal         0x80241780
    // 0x8023D050: sh          $t9, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r25;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x8023D050: sh          $t9, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r25;
    after_1:
    // 0x8023D054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D058: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023D05C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023D060: jr          $ra
    // 0x8023D064: nop

    return;
    // 0x8023D064: nop

;}
RECOMP_FUNC void D_802D12EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D136C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D1370: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D1374: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D1378: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D137C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D1380: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D1384: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802D1388: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802D138C: jal         0x80302DC8
    // 0x802D1390: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802D1390: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802D1394: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802D1398: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D139C: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802D13A0: jal         0x80302DC8
    // 0x802D13A4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802D13A4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802D13A8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802D13AC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D13B0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802D13B4: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x802D13B8: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802D13BC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802D13C0: jal         0x80290474
    // 0x802D13C4: nop

    static_3_80290474(rdram, ctx);
        goto after_2;
    // 0x802D13C4: nop

    after_2:
    // 0x802D13C8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D13CC: jal         0x80302980
    // 0x802D13D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_3;
    // 0x802D13D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802D13D4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D13D8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D13DC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D13E0: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802D13E4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D13E8: jal         0x80302988
    // 0x802D13EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_4;
    // 0x802D13EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802D13F0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D13F4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D13F8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D13FC: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802D1400: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D1404: jal         0x80302988
    // 0x802D1408: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802D1408: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802D140C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D1410: jal         0x80302A7C
    // 0x802D1414: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_6;
    // 0x802D1414: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802D1418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D141C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D1420: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D1424: jr          $ra
    // 0x802D1428: nop

    return;
    // 0x802D1428: nop

;}
RECOMP_FUNC void D_802A4C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4D18: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x802A4D1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802A4D20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802A4D24: sw          $a1, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r5;
    // 0x802A4D28: sw          $a2, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r6;
    // 0x802A4D2C: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x802A4D30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A4D34: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x802A4D38: bne         $t6, $zero, L_802A4D74
    if (ctx->r14 != 0) {
        // 0x802A4D3C: addiu       $a2, $zero, 0x7A
        ctx->r6 = ADD32(0, 0X7A);
            goto L_802A4D74;
    }
    // 0x802A4D3C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A4D40: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x802A4D44: jal         0x802D01D4
    // 0x802A4D48: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    static_3_802D01D4(rdram, ctx);
        goto after_0;
    // 0x802A4D48: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A4D4C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802A4D50: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x802A4D54: jal         0x802D01D4
    // 0x802A4D58: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_1;
    // 0x802A4D58: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_1:
    // 0x802A4D5C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802A4D60: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x802A4D64: jal         0x802D01D4
    // 0x802A4D68: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802A4D68: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_2:
    // 0x802A4D6C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802A4D70: sw          $t7, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r15;
L_802A4D74:
    // 0x802A4D74: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A4D78: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802A4D7C: lwc1        $f2, 0xE0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x802A4D80: addiu       $t8, $s0, 0x2C
    ctx->r24 = ADD32(ctx->r16, 0X2C);
    // 0x802A4D84: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A4D88: mul.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802A4D8C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802A4D90: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    // 0x802A4D94: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x802A4D98: bc1fl       L_802A4DA8
    if (!c1cs) {
        // 0x802A4D9C: lbu         $t9, 0xA8($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XA8);
            goto L_802A4DA8;
    }
    goto skip_0;
    // 0x802A4D9C: lbu         $t9, 0xA8($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XA8);
    skip_0:
    // 0x802A4DA0: swc1        $f2, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f2.u32l;
    // 0x802A4DA4: lbu         $t9, 0xA8($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XA8);
L_802A4DA8:
    // 0x802A4DA8: bnel        $t9, $zero, L_802A5C34
    if (ctx->r25 != 0) {
        // 0x802A4DAC: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_802A5C34;
    }
    goto skip_1;
    // 0x802A4DAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_1:
    // 0x802A4DB0: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A4DB4: lwc1        $f12, 0x98($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X98);
    // 0x802A4DB8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802A4DBC: nop

    // 0x802A4DC0: bc1fl       L_802A4DD4
    if (!c1cs) {
        // 0x802A4DC4: lwc1        $f14, 0xA0($s0)
        ctx->f14.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_802A4DD4;
    }
    goto skip_2;
    // 0x802A4DC4: lwc1        $f14, 0xA0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XA0);
    skip_2:
    // 0x802A4DC8: swc1        $f12, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f12.u32l;
    // 0x802A4DCC: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A4DD0: lwc1        $f14, 0xA0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XA0);
L_802A4DD4:
    // 0x802A4DD4: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802A4DD8: nop

    // 0x802A4DDC: bc1fl       L_802A4DF4
    if (!c1cs) {
        // 0x802A4DE0: lwc1        $f0, 0x9C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X9C);
            goto L_802A4DF4;
    }
    goto skip_3;
    // 0x802A4DE0: lwc1        $f0, 0x9C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X9C);
    skip_3:
    // 0x802A4DE4: lwc1        $f10, 0x94($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X94);
    // 0x802A4DE8: b           L_802A4E24
    // 0x802A4DEC: swc1        $f10, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f10.u32l;
        goto L_802A4E24;
    // 0x802A4DEC: swc1        $f10, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f10.u32l;
    // 0x802A4DF0: lwc1        $f0, 0x9C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X9C);
L_802A4DF4:
    // 0x802A4DF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A4DF8: lwc1        $f10, 0x94($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X94);
    // 0x802A4DFC: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802A4E00: sub.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x802A4E04: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A4E08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4E0C: nop

    // 0x802A4E10: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802A4E14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4E18: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802A4E1C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802A4E20: swc1        $f8, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f8.u32l;
L_802A4E24:
    // 0x802A4E24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A4E28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A4E2C: lwc1        $f6, 0x180($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802A4E30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A4E34: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x802A4E38: nop

    // 0x802A4E3C: bc1fl       L_802A4E54
    if (!c1cs) {
        // 0x802A4E40: lwc1        $f18, 0x14($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
            goto L_802A4E54;
    }
    goto skip_4;
    // 0x802A4E40: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    skip_4:
    // 0x802A4E44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4E48: nop

    // 0x802A4E4C: swc1        $f4, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f4.u32l;
    // 0x802A4E50: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
L_802A4E54:
    // 0x802A4E54: lwc1        $f16, 0x8C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802A4E58: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    // 0x802A4E5C: nop

    // 0x802A4E60: bc1tl       L_802A4F2C
    if (c1cs) {
        // 0x802A4E64: lw          $t0, 0xF0($s0)
        ctx->r8 = MEM_W(ctx->r16, 0XF0);
            goto L_802A4F2C;
    }
    goto skip_5;
    // 0x802A4E64: lw          $t0, 0xF0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XF0);
    skip_5:
    // 0x802A4E68: sub.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x802A4E6C: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x802A4E70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A4E74: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x802A4E78: bne         $v0, $at, L_802A4E98
    if (ctx->r2 != ctx->r1) {
        // 0x802A4E7C: swc1        $f8, 0x88($s0)
        MEM_W(0X88, ctx->r16) = ctx->f8.u32l;
            goto L_802A4E98;
    }
    // 0x802A4E7C: swc1        $f8, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f8.u32l;
    // 0x802A4E80: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802A4E84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A4E88: nop

    // 0x802A4E8C: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802A4E90: b           L_802A4EB8
    // 0x802A4E94: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
        goto L_802A4EB8;
    // 0x802A4E94: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
L_802A4E98:
    // 0x802A4E98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A4E9C: bne         $v0, $at, L_802A4EB4
    if (ctx->r2 != ctx->r1) {
        // 0x802A4EA0: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_802A4EB4;
    }
    // 0x802A4EA0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802A4EA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A4EA8: nop

    // 0x802A4EAC: mul.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802A4EB0: nop

L_802A4EB4:
    // 0x802A4EB4: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
L_802A4EB8:
    // 0x802A4EB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A4EBC: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A4EC0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802A4EC4: mul.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802A4EC8: bc1fl       L_802A4EDC
    if (!c1cs) {
        // 0x802A4ECC: neg.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
            goto L_802A4EDC;
    }
    goto skip_6;
    // 0x802A4ECC: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    skip_6:
    // 0x802A4ED0: b           L_802A4EDC
    // 0x802A4ED4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_802A4EDC;
    // 0x802A4ED4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x802A4ED8: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
L_802A4EDC:
    // 0x802A4EDC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x802A4EE0: nop

    // 0x802A4EE4: bc1fl       L_802A4F20
    if (!c1cs) {
        // 0x802A4EE8: swc1        $f18, 0x8C($s0)
        MEM_W(0X8C, ctx->r16) = ctx->f18.u32l;
            goto L_802A4F20;
    }
    goto skip_7;
    // 0x802A4EE8: swc1        $f18, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f18.u32l;
    skip_7:
    // 0x802A4EEC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802A4EF0: nop

    // 0x802A4EF4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802A4EF8: nop

    // 0x802A4EFC: bc1fl       L_802A4F14
    if (!c1cs) {
        // 0x802A4F00: sub.s       $f4, $f16, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f12.fl;
            goto L_802A4F14;
    }
    goto skip_8;
    // 0x802A4F00: sub.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f12.fl;
    skip_8:
    // 0x802A4F04: add.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x802A4F08: b           L_802A4F20
    // 0x802A4F0C: swc1        $f10, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f10.u32l;
        goto L_802A4F20;
    // 0x802A4F0C: swc1        $f10, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f10.u32l;
    // 0x802A4F10: sub.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f12.fl;
L_802A4F14:
    // 0x802A4F14: b           L_802A4F20
    // 0x802A4F18: swc1        $f4, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f4.u32l;
        goto L_802A4F20;
    // 0x802A4F18: swc1        $f4, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f4.u32l;
    // 0x802A4F1C: swc1        $f18, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f18.u32l;
L_802A4F20:
    // 0x802A4F20: lwc1        $f12, 0x98($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X98);
    // 0x802A4F24: lwc1        $f16, 0x8C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802A4F28: lw          $t0, 0xF0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XF0);
L_802A4F2C:
    // 0x802A4F2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A4F30: bne         $t0, $at, L_802A4F5C
    if (ctx->r8 != ctx->r1) {
        // 0x802A4F34: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_802A4F5C;
    }
    // 0x802A4F34: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A4F38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A4F3C: nop

    // 0x802A4F40: mul.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x802A4F44: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802A4F48: nop

    // 0x802A4F4C: bc1f        L_802A4F70
    if (!c1cs) {
        // 0x802A4F50: nop
    
            goto L_802A4F70;
    }
    // 0x802A4F50: nop

    // 0x802A4F54: b           L_802A4F70
    // 0x802A4F58: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
        goto L_802A4F70;
    // 0x802A4F58: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
L_802A4F5C:
    // 0x802A4F5C: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x802A4F60: nop

    // 0x802A4F64: bc1f        L_802A4F70
    if (!c1cs) {
        // 0x802A4F68: nop
    
            goto L_802A4F70;
    }
    // 0x802A4F68: nop

    // 0x802A4F6C: swc1        $f12, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f12.u32l;
L_802A4F70:
    // 0x802A4F70: jal         0x80234B48
    // 0x802A4F74: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    static_3_80234B48(rdram, ctx);
        goto after_3;
    // 0x802A4F74: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    after_3:
    // 0x802A4F78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A4F7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A4F80: lwc1        $f4, 0x94($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X94);
    // 0x802A4F84: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802A4F88: sub.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802A4F8C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A4F90: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802A4F94: div.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802A4F98: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802A4F9C: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802A4FA0: lwc1        $f10, 0x8C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802A4FA4: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802A4FA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4FAC: lwc1        $f8, 0xF4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x802A4FB0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A4FB4: mul.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802A4FB8: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802A4FBC: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x802A4FC0: nop

    // 0x802A4FC4: bc1fl       L_802A4FD8
    if (!c1cs) {
        // 0x802A4FC8: neg.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
            goto L_802A4FD8;
    }
    goto skip_9;
    // 0x802A4FC8: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    skip_9:
    // 0x802A4FCC: b           L_802A4FD8
    // 0x802A4FD0: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
        goto L_802A4FD8;
    // 0x802A4FD0: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x802A4FD4: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
L_802A4FD8:
    // 0x802A4FD8: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x802A4FDC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802A4FE0: sub.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x802A4FE4: bnel        $v1, $v0, L_802A5018
    if (ctx->r3 != ctx->r2) {
        // 0x802A4FE8: lwc1        $f12, 0x98($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X98);
            goto L_802A5018;
    }
    goto skip_10;
    // 0x802A4FE8: lwc1        $f12, 0x98($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X98);
    skip_10:
    // 0x802A4FEC: lwc1        $f10, 0x98($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X98);
    // 0x802A4FF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A4FF4: nop

    // 0x802A4FF8: mul.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A4FFC: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802A5000: nop

    // 0x802A5004: bc1fl       L_802A5030
    if (!c1cs) {
        // 0x802A5008: lwc1        $f2, 0x10($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
            goto L_802A5030;
    }
    goto skip_11;
    // 0x802A5008: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    skip_11:
    // 0x802A500C: b           L_802A502C
    // 0x802A5010: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
        goto L_802A502C;
    // 0x802A5010: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x802A5014: lwc1        $f12, 0x98($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X98);
L_802A5018:
    // 0x802A5018: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x802A501C: nop

    // 0x802A5020: bc1fl       L_802A5030
    if (!c1cs) {
        // 0x802A5024: lwc1        $f2, 0x10($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
            goto L_802A5030;
    }
    goto skip_12;
    // 0x802A5024: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    skip_12:
    // 0x802A5028: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
L_802A502C:
    // 0x802A502C: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
L_802A5030:
    // 0x802A5030: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x802A5034: nop

    // 0x802A5038: bc1tl       L_802A50FC
    if (c1cs) {
        // 0x802A503C: lwc1        $f12, 0x24($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X24);
            goto L_802A50FC;
    }
    goto skip_13;
    // 0x802A503C: lwc1        $f12, 0x24($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X24);
    skip_13:
    // 0x802A5040: sub.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x802A5044: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A5048: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    // 0x802A504C: bne         $v0, $at, L_802A506C
    if (ctx->r2 != ctx->r1) {
        // 0x802A5050: swc1        $f8, 0x88($s0)
        MEM_W(0X88, ctx->r16) = ctx->f8.u32l;
            goto L_802A506C;
    }
    // 0x802A5050: swc1        $f8, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f8.u32l;
    // 0x802A5054: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A5058: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A505C: nop

    // 0x802A5060: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802A5064: b           L_802A5088
    // 0x802A5068: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
        goto L_802A5088;
    // 0x802A5068: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
L_802A506C:
    // 0x802A506C: bne         $v1, $v0, L_802A5084
    if (ctx->r3 != ctx->r2) {
        // 0x802A5070: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802A5084;
    }
    // 0x802A5070: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A5074: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A5078: nop

    // 0x802A507C: mul.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x802A5080: nop

L_802A5084:
    // 0x802A5084: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
L_802A5088:
    // 0x802A5088: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A508C: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802A5090: lwc1        $f4, 0x198($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A5094: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x802A5098: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802A509C: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802A50A0: bc1fl       L_802A50B4
    if (!c1cs) {
        // 0x802A50A4: neg.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
            goto L_802A50B4;
    }
    goto skip_14;
    // 0x802A50A4: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    skip_14:
    // 0x802A50A8: b           L_802A50B4
    // 0x802A50AC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_802A50B4;
    // 0x802A50AC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x802A50B0: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
L_802A50B4:
    // 0x802A50B4: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x802A50B8: nop

    // 0x802A50BC: bc1fl       L_802A50F8
    if (!c1cs) {
        // 0x802A50C0: swc1        $f16, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
            goto L_802A50F8;
    }
    goto skip_15;
    // 0x802A50C0: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    skip_15:
    // 0x802A50C4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802A50C8: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A50CC: bc1f        L_802A50E4
    if (!c1cs) {
        // 0x802A50D0: nop
    
            goto L_802A50E4;
    }
    // 0x802A50D0: nop

    // 0x802A50D4: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802A50D8: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x802A50DC: b           L_802A50F8
    // 0x802A50E0: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
        goto L_802A50F8;
    // 0x802A50E0: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
L_802A50E4:
    // 0x802A50E4: mul.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x802A50E8: sub.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x802A50EC: b           L_802A50F8
    // 0x802A50F0: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
        goto L_802A50F8;
    // 0x802A50F0: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x802A50F4: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
L_802A50F8:
    // 0x802A50F8: lwc1        $f12, 0x24($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X24);
L_802A50FC:
    // 0x802A50FC: swc1        $f16, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f16.u32l;
    // 0x802A5100: jal         0x80300424
    // 0x802A5104: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_80300424(rdram, ctx);
        goto after_4;
    // 0x802A5104: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_4:
    // 0x802A5108: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A510C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A5110: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A5114: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802A5118: lwc1        $f16, 0x178($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802A511C: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A5120: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5124: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5128: lhu         $t1, 0xAA($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XAA);
    // 0x802A512C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A5130: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802A5134: add.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x802A5138: sub.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x802A513C: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x802A5140: add.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x802A5144: bne         $t1, $at, L_802A515C
    if (ctx->r9 != ctx->r1) {
        // 0x802A5148: swc1        $f4, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
            goto L_802A515C;
    }
    // 0x802A5148: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x802A514C: lbu         $t2, 0x1F($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1F);
    // 0x802A5150: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5154: beql        $t2, $zero, L_802A56F8
    if (ctx->r10 == 0) {
        // 0x802A5158: lwc1        $f10, 0x24($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
            goto L_802A56F8;
    }
    goto skip_16;
    // 0x802A5158: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    skip_16:
L_802A515C:
    // 0x802A515C: lwc1        $f0, 0x180($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802A5160: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A5164: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A5168: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802A516C: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802A5170: jal         0x8022AA40
    // 0x802A5174: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    static_3_8022AA40(rdram, ctx);
        goto after_5;
    // 0x802A5174: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    after_5:
    // 0x802A5178: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A517C: ldc1        $f4, 0x0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X0);
    // 0x802A5180: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802A5184: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A5188: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x802A518C: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802A5190: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x802A5194: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5198: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x802A519C: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    // 0x802A51A0: mul.s       $f16, $f14, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x802A51A4: swc1        $f14, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f14.u32l;
    // 0x802A51A8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A51AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A51B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A51B4: mul.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x802A51B8: nop

    // 0x802A51BC: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802A51C0: nop

    // 0x802A51C4: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x802A51C8: swc1        $f18, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f18.u32l;
    // 0x802A51CC: jal         0x8022AA40
    // 0x802A51D0: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_6;
    // 0x802A51D0: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_6:
    // 0x802A51D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A51D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A51DC: lwc1        $f18, 0x158($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X158);
    // 0x802A51E0: div.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A51E4: mul.s       $f12, $f18, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x802A51E8: jal         0x8022AE1C
    // 0x802A51EC: nop

    static_3_8022AE1C(rdram, ctx);
        goto after_7;
    // 0x802A51EC: nop

    after_7:
    // 0x802A51F0: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802A51F4: lwc1        $f12, 0xA4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x802A51F8: lwc1        $f4, 0x198($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A51FC: sub.s       $f14, $f0, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x802A5200: mul.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x802A5204: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A5208: nop

    // 0x802A520C: bc1fl       L_802A5220
    if (!c1cs) {
        // 0x802A5210: neg.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
            goto L_802A5220;
    }
    goto skip_17;
    // 0x802A5210: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    skip_17:
    // 0x802A5214: b           L_802A5234
    // 0x802A5218: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_802A5234;
    // 0x802A5218: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x802A521C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_802A5220:
    // 0x802A5220: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802A5224: nop

    // 0x802A5228: bc1fl       L_802A5238
    if (!c1cs) {
        // 0x802A522C: lwc1        $f16, 0xE4($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0XE4);
            goto L_802A5238;
    }
    goto skip_18;
    // 0x802A522C: lwc1        $f16, 0xE4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XE4);
    skip_18:
    // 0x802A5230: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_802A5234:
    // 0x802A5234: lwc1        $f16, 0xE4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XE4);
L_802A5238:
    // 0x802A5238: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A523C: lwc1        $f12, 0xE8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x802A5240: sub.s       $f8, $f2, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x802A5244: div.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802A5248: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802A524C: nop

    // 0x802A5250: bc1fl       L_802A5264
    if (!c1cs) {
        // 0x802A5254: neg.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
            goto L_802A5264;
    }
    goto skip_19;
    // 0x802A5254: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    skip_19:
    // 0x802A5258: b           L_802A5278
    // 0x802A525C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_802A5278;
    // 0x802A525C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x802A5260: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
L_802A5264:
    // 0x802A5264: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802A5268: nop

    // 0x802A526C: bc1f        L_802A5278
    if (!c1cs) {
        // 0x802A5270: nop
    
            goto L_802A5278;
    }
    // 0x802A5270: nop

    // 0x802A5274: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802A5278:
    // 0x802A5278: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A527C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5280: add.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x802A5284: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802A5288: swc1        $f2, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f2.u32l;
    // 0x802A528C: add.s       $f14, $f8, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x802A5290: swc1        $f14, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f14.u32l;
    // 0x802A5294: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5298: jal         0x80300424
    // 0x802A529C: add.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f10.fl;
    static_3_80300424(rdram, ctx);
        goto after_8;
    // 0x802A529C: add.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f10.fl;
    after_8:
    // 0x802A52A0: lwc1        $f12, 0x84($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802A52A4: jal         0x80300424
    // 0x802A52A8: swc1        $f0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f0.u32l;
    static_3_80300424(rdram, ctx);
        goto after_9;
    // 0x802A52A8: swc1        $f0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x802A52AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A52B0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A52B4: lwc1        $f14, 0x168($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X168);
    // 0x802A52B8: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A52BC: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802A52C0: lwc1        $f16, 0x6C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802A52C4: mul.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x802A52C8: div.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802A52CC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x802A52D0: swc1        $f12, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f12.u32l;
    // 0x802A52D4: bc1fl       L_802A52F0
    if (!c1cs) {
        // 0x802A52D8: lwc1        $f14, 0x70($s0)
        ctx->f14.u32l = MEM_W(ctx->r16, 0X70);
            goto L_802A52F0;
    }
    goto skip_20;
    // 0x802A52D8: lwc1        $f14, 0x70($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X70);
    skip_20:
    // 0x802A52DC: swc1        $f16, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f16.u32l;
    // 0x802A52E0: lwc1        $f14, 0x70($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X70);
    // 0x802A52E4: b           L_802A5310
    // 0x802A52E8: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
        goto L_802A5310;
    // 0x802A52E8: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A52EC: lwc1        $f14, 0x70($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X70);
L_802A52F0:
    // 0x802A52F0: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x802A52F4: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x802A52F8: nop

    // 0x802A52FC: bc1f        L_802A5310
    if (!c1cs) {
        // 0x802A5300: nop
    
            goto L_802A5310;
    }
    // 0x802A5300: nop

    // 0x802A5304: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x802A5308: lwc1        $f14, 0x70($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X70);
    // 0x802A530C: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
L_802A5310:
    // 0x802A5310: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x802A5314: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A5318: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A531C: div.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802A5320: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802A5324: jal         0x8022AA40
    // 0x802A5328: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_10;
    // 0x802A5328: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    after_10:
    // 0x802A532C: swc1        $f0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f0.u32l;
    // 0x802A5330: lwc1        $f4, 0x180($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802A5334: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802A5338: nop

    // 0x802A533C: bc1fl       L_802A534C
    if (!c1cs) {
        // 0x802A5340: lwc1        $f12, 0x78($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
            goto L_802A534C;
    }
    goto skip_21;
    // 0x802A5340: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    skip_21:
    // 0x802A5344: swc1        $f4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f4.u32l;
    // 0x802A5348: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
L_802A534C:
    // 0x802A534C: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A5350: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802A5354: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A5358: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802A535C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802A5360: nop

    // 0x802A5364: bc1fl       L_802A5378
    if (!c1cs) {
        // 0x802A5368: neg.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
            goto L_802A5378;
    }
    goto skip_22;
    // 0x802A5368: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    skip_22:
    // 0x802A536C: b           L_802A5378
    // 0x802A5370: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_802A5378;
    // 0x802A5370: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x802A5374: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
L_802A5378:
    // 0x802A5378: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x802A537C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802A5380: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x802A5384: nop

    // 0x802A5388: bc1fl       L_802A53BC
    if (!c1cs) {
        // 0x802A538C: swc1        $f2, 0x78($s0)
        MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
            goto L_802A53BC;
    }
    goto skip_23;
    // 0x802A538C: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
    skip_23:
    // 0x802A5390: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802A5394: nop

    // 0x802A5398: bc1fl       L_802A53B0
    if (!c1cs) {
        // 0x802A539C: add.s       $f4, $f12, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f16.fl;
            goto L_802A53B0;
    }
    goto skip_24;
    // 0x802A539C: add.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f16.fl;
    skip_24:
    // 0x802A53A0: sub.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x802A53A4: b           L_802A53BC
    // 0x802A53A8: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
        goto L_802A53BC;
    // 0x802A53A8: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x802A53AC: add.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f16.fl;
L_802A53B0:
    // 0x802A53B0: b           L_802A53BC
    // 0x802A53B4: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
        goto L_802A53BC;
    // 0x802A53B4: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x802A53B8: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
L_802A53BC:
    // 0x802A53BC: jal         0x8022AA40
    // 0x802A53C0: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    static_3_8022AA40(rdram, ctx);
        goto after_11;
    // 0x802A53C0: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    after_11:
    // 0x802A53C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A53C8: ldc1        $f10, 0x0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X0);
    // 0x802A53CC: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x802A53D0: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A53D4: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x802A53D8: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802A53DC: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x802A53E0: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802A53E4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A53E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A53EC: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x802A53F0: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    // 0x802A53F4: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x802A53F8: nop

    // 0x802A53FC: bc1fl       L_802A5414
    if (!c1cs) {
        // 0x802A5400: neg.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
            goto L_802A5414;
    }
    goto skip_25;
    // 0x802A5400: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    skip_25:
    // 0x802A5404: swc1        $f14, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f14.u32l;
    // 0x802A5408: b           L_802A542C
    // 0x802A540C: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
        goto L_802A542C;
    // 0x802A540C: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802A5410: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_802A5414:
    // 0x802A5414: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802A5418: nop

    // 0x802A541C: bc1fl       L_802A5430
    if (!c1cs) {
        // 0x802A5420: lwc1        $f0, 0x64($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
            goto L_802A5430;
    }
    goto skip_26;
    // 0x802A5420: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    skip_26:
    // 0x802A5424: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x802A5428: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
L_802A542C:
    // 0x802A542C: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
L_802A5430:
    // 0x802A5430: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5434: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802A5438: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802A543C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A5440: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A5444: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802A5448: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A544C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A5450: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x802A5454: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A5458: swc1        $f4, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f4.u32l;
    // 0x802A545C: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x802A5460: swc1        $f10, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f10.u32l;
    // 0x802A5464: lw          $t4, 0x7168($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X7168);
    // 0x802A5468: bne         $t4, $at, L_802A5488
    if (ctx->r12 != ctx->r1) {
        // 0x802A546C: lui         $at, 0xBFC0
        ctx->r1 = S32(0XBFC0 << 16);
            goto L_802A5488;
    }
    // 0x802A546C: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x802A5470: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A5474: nop

    // 0x802A5478: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A547C: nop

    // 0x802A5480: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x802A5484: swc1        $f10, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f10.u32l;
L_802A5488:
    // 0x802A5488: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A548C: lwc1        $f10, 0x80($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A5490: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A5494: lwc1        $f4, 0x138($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X138);
    // 0x802A5498: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802A549C: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802A54A0: sub.s       $f16, $f4, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x802A54A4: bc1f        L_802A54E0
    if (!c1cs) {
        // 0x802A54A8: sub.s       $f18, $f6, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f2.fl;
            goto L_802A54E0;
    }
    // 0x802A54A8: sub.s       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x802A54AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A54B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A54B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A54B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A54BC: mul.s       $f2, $f16, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802A54C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A54C4: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x802A54C8: nop

    // 0x802A54CC: bc1f        L_802A5514
    if (!c1cs) {
        // 0x802A54D0: nop
    
            goto L_802A5514;
    }
    // 0x802A54D0: nop

    // 0x802A54D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A54D8: b           L_802A5514
    // 0x802A54DC: nop

        goto L_802A5514;
    // 0x802A54DC: nop

L_802A54E0:
    // 0x802A54E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A54E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A54E8: neg.s       $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = -ctx->f18.fl;
    // 0x802A54EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A54F0: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802A54F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A54F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A54FC: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x802A5500: nop

    // 0x802A5504: bc1f        L_802A5514
    if (!c1cs) {
        // 0x802A5508: nop
    
            goto L_802A5514;
    }
    // 0x802A5508: nop

    // 0x802A550C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A5510: nop

L_802A5514:
    // 0x802A5514: mul.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802A5518: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A551C: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x802A5520: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802A5524: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x802A5528: nop

    // 0x802A552C: bc1fl       L_802A555C
    if (!c1cs) {
        // 0x802A5530: c.lt.s      $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
            goto L_802A555C;
    }
    goto skip_27;
    // 0x802A5530: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    skip_27:
    // 0x802A5534: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802A5538: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A553C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x802A5540: nop

    // 0x802A5544: bc1fl       L_802A555C
    if (!c1cs) {
        // 0x802A5548: c.lt.s      $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
            goto L_802A555C;
    }
    goto skip_28;
    // 0x802A5548: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    skip_28:
    // 0x802A554C: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x802A5550: b           L_802A5584
    // 0x802A5554: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
        goto L_802A5584;
    // 0x802A5554: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802A5558: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
L_802A555C:
    // 0x802A555C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802A5560: bc1fl       L_802A5588
    if (!c1cs) {
        // 0x802A5564: c.eq.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
            goto L_802A5588;
    }
    goto skip_29;
    // 0x802A5564: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    skip_29:
    // 0x802A5568: lwc1        $f10, 0x80($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A556C: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    // 0x802A5570: nop

    // 0x802A5574: bc1fl       L_802A5588
    if (!c1cs) {
        // 0x802A5578: c.eq.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
            goto L_802A5588;
    }
    goto skip_30;
    // 0x802A5578: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    skip_30:
    // 0x802A557C: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x802A5580: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
L_802A5584:
    // 0x802A5584: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
L_802A5588:
    // 0x802A5588: neg.s       $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = -ctx->f12.fl;
    // 0x802A558C: bc1fl       L_802A559C
    if (!c1cs) {
        // 0x802A5590: div.s       $f8, $f6, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
            goto L_802A559C;
    }
    goto skip_31;
    // 0x802A5590: div.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
    skip_31:
    // 0x802A5594: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5598: div.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
L_802A559C:
    // 0x802A559C: lwc1        $f0, 0x180($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802A55A0: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
    // 0x802A55A4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802A55A8: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802A55AC: swc1        $f6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f6.u32l;
    // 0x802A55B0: lwc1        $f8, 0x90($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X90);
    // 0x802A55B4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802A55B8: nop

    // 0x802A55BC: bc1fl       L_802A55CC
    if (!c1cs) {
        // 0x802A55C0: lwc1        $f0, 0x84($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
            goto L_802A55CC;
    }
    goto skip_32;
    // 0x802A55C0: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    skip_32:
    // 0x802A55C4: swc1        $f0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f0.u32l;
    // 0x802A55C8: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
L_802A55CC:
    // 0x802A55CC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A55D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A55D4: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x802A55D8: lwc1        $f4, 0x198($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A55DC: lwc1        $f8, 0x70($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X70);
    // 0x802A55E0: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802A55E4: mul.s       $f14, $f4, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802A55E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A55EC: mul.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x802A55F0: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802A55F4: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x802A55F8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A55FC: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x802A5600: jal         0x80300424
    // 0x802A5604: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
    static_3_80300424(rdram, ctx);
        goto after_12;
    // 0x802A5604: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
    after_12:
    // 0x802A5608: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A560C: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5610: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A5614: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A5618: lwc1        $f2, 0xF4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x802A561C: lwc1        $f4, 0x198($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A5620: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802A5624: mul.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x802A5628: nop

    // 0x802A562C: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802A5630: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802A5634: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A5638: nop

    // 0x802A563C: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x802A5640: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A5644: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A5648: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802A564C: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x802A5650: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x802A5654: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A5658: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802A565C: lwc1        $f8, 0x98($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X98);
    // 0x802A5660: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802A5664: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x802A5668: bc1f        L_802A56B8
    if (!c1cs) {
        // 0x802A566C: nop
    
            goto L_802A56B8;
    }
    // 0x802A566C: nop

    // 0x802A5670: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802A5674: nop

    // 0x802A5678: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x802A567C: nop

    // 0x802A5680: bc1fl       L_802A5694
    if (!c1cs) {
        // 0x802A5684: neg.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
            goto L_802A5694;
    }
    goto skip_33;
    // 0x802A5684: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    skip_33:
    // 0x802A5688: b           L_802A5694
    // 0x802A568C: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
        goto L_802A5694;
    // 0x802A568C: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x802A5690: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
L_802A5694:
    // 0x802A5694: neg.s       $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = -ctx->f14.fl;
    // 0x802A5698: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A569C: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802A56A0: nop

    // 0x802A56A4: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802A56A8: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A56AC: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x802A56B0: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802A56B4: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
L_802A56B8:
    // 0x802A56B8: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A56BC: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x802A56C0: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802A56C4: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x802A56C8: nop

    // 0x802A56CC: bc1fl       L_802A56E0
    if (!c1cs) {
        // 0x802A56D0: c.lt.s      $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
            goto L_802A56E0;
    }
    goto skip_34;
    // 0x802A56D0: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    skip_34:
    // 0x802A56D4: b           L_802A5C70
    // 0x802A56D8: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
        goto L_802A5C70;
    // 0x802A56D8: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x802A56DC: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
L_802A56E0:
    // 0x802A56E0: nop

    // 0x802A56E4: bc1fl       L_802A5C74
    if (!c1cs) {
        // 0x802A56E8: lhu         $t2, 0xAA($s0)
        ctx->r10 = MEM_HU(ctx->r16, 0XAA);
            goto L_802A5C74;
    }
    goto skip_35;
    // 0x802A56E8: lhu         $t2, 0xAA($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XAA);
    skip_35:
    // 0x802A56EC: b           L_802A5C70
    // 0x802A56F0: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
        goto L_802A5C70;
    // 0x802A56F0: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x802A56F4: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
L_802A56F8:
    // 0x802A56F8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A56FC: jal         0x80300424
    // 0x802A5700: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    static_3_80300424(rdram, ctx);
        goto after_13;
    // 0x802A5700: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_13:
    // 0x802A5704: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5708: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A570C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A5710: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5714: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802A5718: div.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802A571C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5720: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x802A5724: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802A5728: jal         0x80300424
    // 0x802A572C: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    static_3_80300424(rdram, ctx);
        goto after_14;
    // 0x802A572C: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    after_14:
    // 0x802A5730: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802A5734: lwc1        $f12, 0x28($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802A5738: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802A573C: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x802A5740: jal         0x80300424
    // 0x802A5744: sdc1        $f18, 0x118($sp)
    CHECK_FR(ctx, 18);
    SD(ctx->f18.u64, 0X118, ctx->r29);
    static_3_80300424(rdram, ctx);
        goto after_15;
    // 0x802A5744: sdc1        $f18, 0x118($sp)
    CHECK_FR(ctx, 18);
    SD(ctx->f18.u64, 0X118, ctx->r29);
    after_15:
    // 0x802A5748: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A574C: lwc1        $f12, 0x98($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X98);
    // 0x802A5750: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A5754: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A5758: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802A575C: ldc1        $f18, 0x118($sp)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r29, 0X118);
    // 0x802A5760: bc1fl       L_802A5774
    if (!c1cs) {
        // 0x802A5764: lwc1        $f4, 0xF4($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XF4);
            goto L_802A5774;
    }
    goto skip_36;
    // 0x802A5764: lwc1        $f4, 0xF4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XF4);
    skip_36:
    // 0x802A5768: div.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    // 0x802A576C: swc1        $f6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f6.u32l;
    // 0x802A5770: lwc1        $f4, 0xF4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XF4);
L_802A5774:
    // 0x802A5774: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x802A5778: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A577C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802A5780: lwc1        $f4, 0x180($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802A5784: div.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802A5788: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A578C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5790: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802A5794: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5798: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A579C: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802A57A0: nop

    // 0x802A57A4: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A57A8: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802A57AC: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802A57B0: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x802A57B4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802A57B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A57BC: add.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f8.d + ctx->f4.d;
    // 0x802A57C0: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A57C4: sdc1        $f10, 0x120($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X120, ctx->r29);
    // 0x802A57C8: mul.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802A57CC: lwc1        $f12, 0xEC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x802A57D0: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A57D4: sub.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802A57D8: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x802A57DC: nop

    // 0x802A57E0: bc1f        L_802A57F8
    if (!c1cs) {
        // 0x802A57E4: nop
    
            goto L_802A57F8;
    }
    // 0x802A57E4: nop

    // 0x802A57E8: add.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x802A57EC: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    // 0x802A57F0: b           L_802A5824
    // 0x802A57F4: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
        goto L_802A5824;
    // 0x802A57F4: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
L_802A57F8:
    // 0x802A57F8: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x802A57FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A5800: lwc1        $f6, 0x198($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A5804: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A5808: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x802A580C: nop

    // 0x802A5810: bc1fl       L_802A5828
    if (!c1cs) {
        // 0x802A5814: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_802A5828;
    }
    goto skip_37;
    // 0x802A5814: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_37:
    // 0x802A5818: sub.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x802A581C: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    // 0x802A5820: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
L_802A5824:
    // 0x802A5824: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_802A5828:
    // 0x802A5828: swc1        $f2, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f2.u32l;
    // 0x802A582C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5830: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802A5834: nop

    // 0x802A5838: bc1fl       L_802A5854
    if (!c1cs) {
        // 0x802A583C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802A5854;
    }
    goto skip_38;
    // 0x802A583C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_38:
    // 0x802A5840: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5844: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802A5848: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    // 0x802A584C: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A5850: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802A5854:
    // 0x802A5854: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A5858: lwc1        $f4, 0x180($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802A585C: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x802A5860: lwc1        $f12, 0x28($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802A5864: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x802A5868: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A586C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5870: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802A5874: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802A5878: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A587C: swc1        $f0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f0.u32l;
    // 0x802A5880: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5884: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802A5888: div.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802A588C: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x802A5890: add.d       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f18.d + ctx->f8.d;
    // 0x802A5894: jal         0x80300424
    // 0x802A5898: sdc1        $f18, 0x118($sp)
    CHECK_FR(ctx, 18);
    SD(ctx->f18.u64, 0X118, ctx->r29);
    static_3_80300424(rdram, ctx);
        goto after_16;
    // 0x802A5898: sdc1        $f18, 0x118($sp)
    CHECK_FR(ctx, 18);
    SD(ctx->f18.u64, 0X118, ctx->r29);
    after_16:
    // 0x802A589C: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802A58A0: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x802A58A4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A58A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802A58AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A58B0: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802A58B4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A58B8: lwc1        $f16, 0xE4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x802A58BC: ldc1        $f18, 0x118($sp)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r29, 0X118);
    // 0x802A58C0: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802A58C4: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x802A58C8: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802A58CC: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x802A58D0: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x802A58D4: sub.d       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f12.d = ctx->f2.d - ctx->f8.d;
    // 0x802A58D8: c.lt.d      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.d < ctx->f12.d;
    // 0x802A58DC: nop

    // 0x802A58E0: bc1fl       L_802A58F8
    if (!c1cs) {
        // 0x802A58E4: neg.s       $f4, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = -ctx->f14.fl;
            goto L_802A58F8;
    }
    goto skip_39;
    // 0x802A58E4: neg.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = -ctx->f14.fl;
    skip_39:
    // 0x802A58E8: add.s       $f6, $f16, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x802A58EC: b           L_802A5914
    // 0x802A58F0: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
        goto L_802A5914;
    // 0x802A58F0: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x802A58F4: neg.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = -ctx->f14.fl;
L_802A58F8:
    // 0x802A58F8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x802A58FC: c.lt.d      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.d < ctx->f8.d;
    // 0x802A5900: nop

    // 0x802A5904: bc1fl       L_802A5918
    if (!c1cs) {
        // 0x802A5908: cvt.s.d     $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
            goto L_802A5918;
    }
    goto skip_40;
    // 0x802A5908: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    skip_40:
    // 0x802A590C: sub.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x802A5910: cvt.d.s     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f2.d = CVT_D_S(ctx->f10.fl);
L_802A5914:
    // 0x802A5914: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
L_802A5918:
    // 0x802A5918: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802A591C: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x802A5920: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x802A5924: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x802A5928: swc1        $f6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f6.u32l;
    // 0x802A592C: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    // 0x802A5930: ldc1        $f6, 0x120($sp)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r29, 0X120);
    // 0x802A5934: swc1        $f4, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f4.u32l;
    // 0x802A5938: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x802A593C: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A5940: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x802A5944: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x802A5948: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x802A594C: jal         0x80234B80
    // 0x802A5950: swc1        $f8, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f8.u32l;
    static_3_80234B80(rdram, ctx);
        goto after_17;
    // 0x802A5950: swc1        $f8, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x802A5954: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A5958: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x802A595C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A5960: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x802A5964: nop

    // 0x802A5968: bc1tl       L_802A5A68
    if (c1cs) {
        // 0x802A596C: addiu       $a1, $sp, 0x10C
        ctx->r5 = ADD32(ctx->r29, 0X10C);
            goto L_802A5A68;
    }
    goto skip_41;
    // 0x802A596C: addiu       $a1, $sp, 0x10C
    ctx->r5 = ADD32(ctx->r29, 0X10C);
    skip_41:
    // 0x802A5970: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A5974: addiu       $a0, $sp, 0xDC
    ctx->r4 = ADD32(ctx->r29, 0XDC);
    // 0x802A5978: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    // 0x802A597C: div.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A5980: swc1        $f14, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f14.u32l;
    // 0x802A5984: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802A5988: jal         0x80234D04
    // 0x802A598C: nop

    static_3_80234D04(rdram, ctx);
        goto after_18;
    // 0x802A598C: nop

    after_18:
    // 0x802A5990: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A5994: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A5998: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A599C: lwc1        $f14, 0xFC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x802A59A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A59A4: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802A59A8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A59AC: mul.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x802A59B0: swc1        $f14, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f14.u32l;
    // 0x802A59B4: jal         0x80300424
    // 0x802A59B8: add.s       $f12, $f14, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f6.fl;
    static_3_80300424(rdram, ctx);
        goto after_19;
    // 0x802A59B8: add.s       $f12, $f14, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f6.fl;
    after_19:
    // 0x802A59BC: lwc1        $f12, 0xFC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x802A59C0: jal         0x80300424
    // 0x802A59C4: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    static_3_80300424(rdram, ctx);
        goto after_20;
    // 0x802A59C4: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    after_20:
    // 0x802A59C8: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802A59CC: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802A59D0: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x802A59D4: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A59D8: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x802A59DC: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802A59E0: lwc1        $f10, 0xF8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x802A59E4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802A59E8: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A59EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802A59F0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802A59F4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802A59F8: jal         0x8022A918
    // 0x802A59FC: nop

    static_3_8022A918(rdram, ctx);
        goto after_21;
    // 0x802A59FC: nop

    after_21:
    // 0x802A5A00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802A5A04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A5A08: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A5A0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A5A10: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x802A5A14: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x802A5A18: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x802A5A1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A5A20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802A5A24: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A5A28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A5A2C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x802A5A30: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x802A5A34: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x802A5A38: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x802A5A3C: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x802A5A40: jal         0x8022A47C
    // 0x802A5A44: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    static_3_8022A47C(rdram, ctx);
        goto after_22;
    // 0x802A5A44: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    after_22:
    // 0x802A5A48: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x802A5A4C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A5A50: jal         0x802297A8
    // 0x802A5A54: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    static_3_802297A8(rdram, ctx);
        goto after_23;
    // 0x802A5A54: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_23:
    // 0x802A5A58: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802A5A5C: jal         0x80228E64
    // 0x802A5A60: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    static_3_80228E64(rdram, ctx);
        goto after_24;
    // 0x802A5A60: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_24:
    // 0x802A5A64: addiu       $a1, $sp, 0x10C
    ctx->r5 = ADD32(ctx->r29, 0X10C);
L_802A5A68:
    // 0x802A5A68: addiu       $t5, $s0, 0x20
    ctx->r13 = ADD32(ctx->r16, 0X20);
    // 0x802A5A6C: addiu       $t6, $s0, 0x24
    ctx->r14 = ADD32(ctx->r16, 0X24);
    // 0x802A5A70: addiu       $t7, $s0, 0x28
    ctx->r15 = ADD32(ctx->r16, 0X28);
    // 0x802A5A74: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802A5A78: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802A5A7C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802A5A80: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802A5A84: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802A5A88: jal         0x802CF1C8
    // 0x802A5A8C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    static_3_802CF1C8(rdram, ctx);
        goto after_25;
    // 0x802A5A8C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_25:
    // 0x802A5A90: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802A5A94: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A5A98: lwc1        $f10, 0x184($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802A5A9C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802A5AA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A5AA4: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x802A5AA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5AAC: bc1fl       L_802A5ABC
    if (!c1cs) {
        // 0x802A5AB0: lwc1        $f4, 0x184($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X184);
            goto L_802A5ABC;
    }
    goto skip_42;
    // 0x802A5AB0: lwc1        $f4, 0x184($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X184);
    skip_42:
    // 0x802A5AB4: swc1        $f2, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f2.u32l;
    // 0x802A5AB8: lwc1        $f4, 0x184($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X184);
L_802A5ABC:
    // 0x802A5ABC: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x802A5AC0: nop

    // 0x802A5AC4: bc1f        L_802A5B00
    if (!c1cs) {
        // 0x802A5AC8: nop
    
            goto L_802A5B00;
    }
    // 0x802A5AC8: nop

    // 0x802A5ACC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5AD0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5AD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5AD8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5ADC: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x802A5AE0: mul.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A5AE4: jal         0x8022AA40
    // 0x802A5AE8: nop

    static_3_8022AA40(rdram, ctx);
        goto after_26;
    // 0x802A5AE8: nop

    after_26:
    // 0x802A5AEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5AF0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5AF4: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802A5AF8: b           L_802A5B08
    // 0x802A5AFC: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
        goto L_802A5B08;
    // 0x802A5AFC: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
L_802A5B00:
    // 0x802A5B00: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5B04: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
L_802A5B08:
    // 0x802A5B08: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x802A5B0C: nop

    // 0x802A5B10: bc1f        L_802A5B44
    if (!c1cs) {
        // 0x802A5B14: nop
    
            goto L_802A5B44;
    }
    // 0x802A5B14: nop

    // 0x802A5B18: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x802A5B1C: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x802A5B20: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x802A5B24: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802A5B28: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x802A5B2C: lw          $a2, 0x184($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X184);
    // 0x802A5B30: lwc1        $f14, 0x188($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802A5B34: lwc1        $f12, 0x18C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x802A5B38: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x802A5B3C: jal         0x802CF27C
    // 0x802A5B40: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_802CF27C(rdram, ctx);
        goto after_27;
    // 0x802A5B40: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_27:
L_802A5B44:
    // 0x802A5B44: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802A5B48: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x802A5B4C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A5B50: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802A5B54: lw          $t0, 0x7168($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X7168);
    // 0x802A5B58: bne         $t0, $at, L_802A5C14
    if (ctx->r8 != ctx->r1) {
        // 0x802A5B5C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802A5C14;
    }
    // 0x802A5B5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A5B60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A5B64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A5B68: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802A5B6C: nop

    // 0x802A5B70: bc1fl       L_802A5B88
    if (!c1cs) {
        // 0x802A5B74: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_802A5B88;
    }
    goto skip_43;
    // 0x802A5B74: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    skip_43:
    // 0x802A5B78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A5B7C: nop

    // 0x802A5B80: swc1        $f4, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f4.u32l;
    // 0x802A5B84: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
L_802A5B88:
    // 0x802A5B88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A5B8C: lwc1        $f10, 0x184($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802A5B90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5B94: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x802A5B98: nop

    // 0x802A5B9C: bc1f        L_802A5BD0
    if (!c1cs) {
        // 0x802A5BA0: nop
    
            goto L_802A5BD0;
    }
    // 0x802A5BA0: nop

    // 0x802A5BA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5BA8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5BAC: mul.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802A5BB0: jal         0x8022AA40
    // 0x802A5BB4: nop

    static_3_8022AA40(rdram, ctx);
        goto after_28;
    // 0x802A5BB4: nop

    after_28:
    // 0x802A5BB8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5BBC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5BC0: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A5BC4: mul.s       $f16, $f0, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A5BC8: b           L_802A5BDC
    // 0x802A5BCC: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
        goto L_802A5BDC;
    // 0x802A5BCC: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
L_802A5BD0:
    // 0x802A5BD0: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5BD4: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A5BD8: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
L_802A5BDC:
    // 0x802A5BDC: nop

    // 0x802A5BE0: bc1fl       L_802A5C18
    if (!c1cs) {
        // 0x802A5BE4: lwc1        $f10, 0x18C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X18C);
            goto L_802A5C18;
    }
    goto skip_44;
    // 0x802A5BE4: lwc1        $f10, 0x18C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18C);
    skip_44:
    // 0x802A5BE8: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x802A5BEC: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x802A5BF0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x802A5BF4: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802A5BF8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x802A5BFC: lw          $a2, 0x184($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X184);
    // 0x802A5C00: lwc1        $f14, 0x188($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802A5C04: lwc1        $f12, 0x18C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x802A5C08: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802A5C0C: jal         0x802CF27C
    // 0x802A5C10: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    static_3_802CF27C(rdram, ctx);
        goto after_29;
    // 0x802A5C10: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_29:
L_802A5C14:
    // 0x802A5C14: lwc1        $f10, 0x18C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18C);
L_802A5C18:
    // 0x802A5C18: swc1        $f10, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f10.u32l;
    // 0x802A5C1C: lwc1        $f8, 0x188($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802A5C20: swc1        $f8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f8.u32l;
    // 0x802A5C24: lwc1        $f4, 0x184($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802A5C28: b           L_802A5C70
    // 0x802A5C2C: swc1        $f4, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f4.u32l;
        goto L_802A5C70;
    // 0x802A5C2C: swc1        $f4, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f4.u32l;
    // 0x802A5C30: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_802A5C34:
    // 0x802A5C34: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A5C38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A5C3C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x802A5C40: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A5C44: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802A5C48: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802A5C4C: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802A5C50: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A5C54: lwc1        $f6, 0x80($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A5C58: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802A5C5C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A5C60: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x802A5C64: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x802A5C68: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x802A5C6C: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
L_802A5C70:
    // 0x802A5C70: lhu         $t2, 0xAA($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XAA);
L_802A5C74:
    // 0x802A5C74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A5C78: bnel        $t2, $at, L_802A5C9C
    if (ctx->r10 != ctx->r1) {
        // 0x802A5C7C: lwc1        $f4, 0x5C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
            goto L_802A5C9C;
    }
    goto skip_45;
    // 0x802A5C7C: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    skip_45:
    // 0x802A5C80: lbu         $t3, 0xA8($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XA8);
    // 0x802A5C84: bnel        $t3, $zero, L_802A5C9C
    if (ctx->r11 != 0) {
        // 0x802A5C88: lwc1        $f4, 0x5C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
            goto L_802A5C9C;
    }
    goto skip_46;
    // 0x802A5C88: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    skip_46:
    // 0x802A5C8C: lbu         $t4, 0x1F($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1F);
    // 0x802A5C90: beql        $t4, $zero, L_802A5D04
    if (ctx->r12 == 0) {
        // 0x802A5C94: lwc1        $f8, 0x10($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
            goto L_802A5D04;
    }
    goto skip_47;
    // 0x802A5C94: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    skip_47:
    // 0x802A5C98: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
L_802A5C9C:
    // 0x802A5C9C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802A5CA0: swc1        $f4, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f4.u32l;
    // 0x802A5CA4: lwc1        $f6, 0x60($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X60);
    // 0x802A5CA8: swc1        $f6, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f6.u32l;
    // 0x802A5CAC: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A5CB0: jal         0x8022970C
    // 0x802A5CB4: swc1        $f8, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f8.u32l;
    func_8022970C(rdram, ctx);
        goto after_30;
    // 0x802A5CB4: swc1        $f8, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f8.u32l;
    after_30:
    // 0x802A5CB8: lwc1        $f10, 0x18C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x802A5CBC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x802A5CC0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A5CC4: swc1        $f10, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f10.u32l;
    // 0x802A5CC8: lwc1        $f4, 0x188($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802A5CCC: swc1        $f4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f4.u32l;
    // 0x802A5CD0: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802A5CD4: swc1        $f6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f6.u32l;
    // 0x802A5CD8: jal         0x802D01D4
    // 0x802A5CDC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    static_3_802D01D4(rdram, ctx);
        goto after_31;
    // 0x802A5CDC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_31:
    // 0x802A5CE0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802A5CE4: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x802A5CE8: jal         0x802D01D4
    // 0x802A5CEC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_32;
    // 0x802A5CEC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_32:
    // 0x802A5CF0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802A5CF4: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x802A5CF8: jal         0x802D01D4
    // 0x802A5CFC: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    static_3_802D01D4(rdram, ctx);
        goto after_33;
    // 0x802A5CFC: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_33:
    // 0x802A5D00: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
L_802A5D04:
    // 0x802A5D04: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802A5D08: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802A5D0C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A5D10: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802A5D14: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802A5D18: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802A5D1C: jal         0x8022A0D0
    // 0x802A5D20: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_34;
    // 0x802A5D20: nop

    after_34:
    // 0x802A5D24: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A5D28: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A5D2C: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x802A5D30: jal         0x802AEF08
    // 0x802A5D34: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    static_3_802AEF08(rdram, ctx);
        goto after_35;
    // 0x802A5D34: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    after_35:
    // 0x802A5D38: lwc1        $f6, 0x64($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A5D3C: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x802A5D40: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802A5D44: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x802A5D48: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802A5D4C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802A5D50: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    // 0x802A5D54: jr          $ra
    // 0x802A5D58: nop

    return;
    // 0x802A5D58: nop

;}
RECOMP_FUNC void D_8023FECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FECC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8023FED0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023FED4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023FED8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023FEDC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023FEE0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023FEE4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023FEE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023FEEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023FEF0: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x8023FEF4: lw          $s6, 0x10($a1)
    ctx->r22 = MEM_W(ctx->r5, 0X10);
    // 0x8023FEF8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8023FEFC: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x8023FF00: lbu         $t6, 0x34($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X34);
    // 0x8023FF04: bnel        $t6, $zero, L_8023FF70
    if (ctx->r14 != 0) {
        // 0x8023FF08: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_8023FF70;
    }
    goto skip_0;
    // 0x8023FF08: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_0:
    // 0x8023FF0C: lw          $s0, 0x50($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X50);
    // 0x8023FF10: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x8023FF14: beql        $s0, $zero, L_8023FF70
    if (ctx->r16 == 0) {
        // 0x8023FF18: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_8023FF70;
    }
    goto skip_1;
    // 0x8023FF18: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_1:
L_8023FF1C:
    // 0x8023FF1C: lh          $t7, 0xC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC);
    // 0x8023FF20: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8023FF24: bne         $s3, $t7, L_8023FF64
    if (ctx->r19 != ctx->r15) {
        // 0x8023FF28: nop
    
            goto L_8023FF64;
    }
    // 0x8023FF28: nop

    // 0x8023FF2C: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x8023FF30: bne         $s5, $t8, L_8023FF64
    if (ctx->r21 != ctx->r24) {
        // 0x8023FF34: nop
    
            goto L_8023FF64;
    }
    // 0x8023FF34: nop

    // 0x8023FF38: beq         $s1, $zero, L_8023FF50
    if (ctx->r17 == 0) {
        // 0x8023FF3C: addiu       $s2, $s4, 0x48
        ctx->r18 = ADD32(ctx->r20, 0X48);
            goto L_8023FF50;
    }
    // 0x8023FF3C: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    // 0x8023FF40: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x8023FF44: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x8023FF48: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8023FF4C: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
L_8023FF50:
    // 0x8023FF50: jal         0x80237120
    // 0x8023FF54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237120(rdram, ctx);
        goto after_0;
    // 0x8023FF54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8023FF58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023FF5C: jal         0x80237150
    // 0x8023FF60: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80237150(rdram, ctx);
        goto after_1;
    // 0x8023FF60: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
L_8023FF64:
    // 0x8023FF64: bne         $s1, $zero, L_8023FF1C
    if (ctx->r17 != 0) {
        // 0x8023FF68: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8023FF1C;
    }
    // 0x8023FF68: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8023FF6C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_8023FF70:
    // 0x8023FF70: sb          $zero, 0x33($s6)
    MEM_B(0X33, ctx->r22) = 0;
    // 0x8023FF74: sb          $t2, 0x34($s6)
    MEM_B(0X34, ctx->r22) = ctx->r10;
    // 0x8023FF78: sb          $zero, 0x30($s6)
    MEM_B(0X30, ctx->r22) = 0;
    // 0x8023FF7C: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8023FF80: lw          $t3, 0x1C($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X1C);
    // 0x8023FF84: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8023FF88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023FF8C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8023FF90: sw          $t5, 0x24($s6)
    MEM_W(0X24, ctx->r22) = ctx->r13;
    // 0x8023FF94: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x8023FF98: jal         0x80249810
    // 0x8023FF9C: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    static_3_80249810(rdram, ctx);
        goto after_2;
    // 0x8023FF9C: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    after_2:
    // 0x8023FFA0: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x8023FFA4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8023FFA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023FFAC: jal         0x8023F940
    // 0x8023FFB0: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    static_3_8023F940(rdram, ctx);
        goto after_3;
    // 0x8023FFB0: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    after_3:
    // 0x8023FFB4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8023FFB8: sh          $t6, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r14;
    // 0x8023FFBC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8023FFC0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023FFC4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8023FFC8: jal         0x8023F37C
    // 0x8023FFCC: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    static_3_8023F37C(rdram, ctx);
        goto after_4;
    // 0x8023FFCC: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    after_4:
    // 0x8023FFD0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023FFD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023FFD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FFDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023FFE0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023FFE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023FFE8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8023FFEC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023FFF0: jr          $ra
    // 0x8023FFF4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8023FFF4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_802CB820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CB8A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CB8A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CB8A8: beq         $a0, $zero, L_802CB8D4
    if (ctx->r4 == 0) {
        // 0x802CB8AC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802CB8D4;
    }
    // 0x802CB8AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802CB8B0: jal         0x802FC314
    // 0x802CB8B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802FC314(rdram, ctx);
        goto after_0;
    // 0x802CB8B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802CB8B8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802CB8BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802CB8C0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802CB8C4: beql        $t7, $zero, L_802CB8D8
    if (ctx->r15 == 0) {
        // 0x802CB8C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802CB8D8;
    }
    goto skip_0;
    // 0x802CB8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802CB8CC: jal         0x802C681C
    // 0x802CB8D0: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802CB8D0: nop

    after_1:
L_802CB8D4:
    // 0x802CB8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802CB8D8:
    // 0x802CB8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CB8DC: jr          $ra
    // 0x802CB8E0: nop

    return;
    // 0x802CB8E0: nop

;}
RECOMP_FUNC void D_802D8FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9048: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D904C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802D9050: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D9054: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D9058: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x802D905C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802D9060: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D9064: beq         $v0, $v1, L_802D908C
    if (ctx->r2 == ctx->r3) {
        // 0x802D9068: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_802D908C;
    }
    // 0x802D9068: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802D906C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802D9070: beq         $v0, $a0, L_802D9134
    if (ctx->r2 == ctx->r4) {
        // 0x802D9074: addiu       $a3, $zero, 0x3
        ctx->r7 = ADD32(0, 0X3);
            goto L_802D9134;
    }
    // 0x802D9074: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x802D9078: beq         $v0, $a3, L_802D91D8
    if (ctx->r2 == ctx->r7) {
        // 0x802D907C: nop
    
            goto L_802D91D8;
    }
    // 0x802D907C: nop

    // 0x802D9080: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D9084: jr          $ra
    // 0x802D9088: nop

    return;
    // 0x802D9088: nop

L_802D908C:
    // 0x802D908C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802D9090: beq         $a1, $a0, L_802D90A8
    if (ctx->r5 == ctx->r4) {
        // 0x802D9094: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_802D90A8;
    }
    // 0x802D9094: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802D9098: beq         $a1, $at, L_802D90A8
    if (ctx->r5 == ctx->r1) {
        // 0x802D909C: addiu       $a3, $zero, 0x3
        ctx->r7 = ADD32(0, 0X3);
            goto L_802D90A8;
    }
    // 0x802D909C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x802D90A0: bne         $a1, $a3, L_802D90DC
    if (ctx->r5 != ctx->r7) {
        // 0x802D90A4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802D90DC;
    }
    // 0x802D90A4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_802D90A8:
    // 0x802D90A8: beq         $a2, $zero, L_802D90C8
    if (ctx->r6 == 0) {
        // 0x802D90AC: lui         $at, 0x41C8
        ctx->r1 = S32(0X41C8 << 16);
            goto L_802D90C8;
    }
    // 0x802D90AC: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x802D90B0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802D90B4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D90B8: nop

    // 0x802D90BC: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D90C0: jr          $ra
    // 0x802D90C4: nop

    return;
    // 0x802D90C4: nop

L_802D90C8:
    // 0x802D90C8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D90CC: nop

    // 0x802D90D0: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D90D4: jr          $ra
    // 0x802D90D8: nop

    return;
    // 0x802D90D8: nop

L_802D90DC:
    // 0x802D90DC: bne         $a1, $at, L_802D90F8
    if (ctx->r5 != ctx->r1) {
        // 0x802D90E0: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_802D90F8;
    }
    // 0x802D90E0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802D90E4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D90E8: nop

    // 0x802D90EC: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D90F0: jr          $ra
    // 0x802D90F4: nop

    return;
    // 0x802D90F4: nop

L_802D90F8:
    // 0x802D90F8: bne         $a1, $v1, L_802D9270
    if (ctx->r5 != ctx->r3) {
        // 0x802D90FC: nop
    
            goto L_802D9270;
    }
    // 0x802D90FC: nop

    // 0x802D9100: beq         $a2, $zero, L_802D9120
    if (ctx->r6 == 0) {
        // 0x802D9104: lui         $at, 0x40E0
        ctx->r1 = S32(0X40E0 << 16);
            goto L_802D9120;
    }
    // 0x802D9104: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802D9108: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802D910C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D9110: nop

    // 0x802D9114: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D9118: jr          $ra
    // 0x802D911C: nop

    return;
    // 0x802D911C: nop

L_802D9120:
    // 0x802D9120: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D9124: nop

    // 0x802D9128: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D912C: jr          $ra
    // 0x802D9130: nop

    return;
    // 0x802D9130: nop

L_802D9134:
    // 0x802D9134: beq         $a1, $a0, L_802D914C
    if (ctx->r5 == ctx->r4) {
        // 0x802D9138: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_802D914C;
    }
    // 0x802D9138: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802D913C: beq         $a1, $at, L_802D914C
    if (ctx->r5 == ctx->r1) {
        // 0x802D9140: addiu       $a3, $zero, 0x3
        ctx->r7 = ADD32(0, 0X3);
            goto L_802D914C;
    }
    // 0x802D9140: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x802D9144: bne         $a1, $a3, L_802D9180
    if (ctx->r5 != ctx->r7) {
        // 0x802D9148: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802D9180;
    }
    // 0x802D9148: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_802D914C:
    // 0x802D914C: beq         $a2, $zero, L_802D916C
    if (ctx->r6 == 0) {
        // 0x802D9150: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_802D916C;
    }
    // 0x802D9150: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802D9154: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D9158: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D915C: nop

    // 0x802D9160: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D9164: jr          $ra
    // 0x802D9168: nop

    return;
    // 0x802D9168: nop

L_802D916C:
    // 0x802D916C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D9170: nop

    // 0x802D9174: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D9178: jr          $ra
    // 0x802D917C: nop

    return;
    // 0x802D917C: nop

L_802D9180:
    // 0x802D9180: bne         $a1, $at, L_802D919C
    if (ctx->r5 != ctx->r1) {
        // 0x802D9184: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802D919C;
    }
    // 0x802D9184: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D9188: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D918C: nop

    // 0x802D9190: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D9194: jr          $ra
    // 0x802D9198: nop

    return;
    // 0x802D9198: nop

L_802D919C:
    // 0x802D919C: bne         $a1, $v1, L_802D9270
    if (ctx->r5 != ctx->r3) {
        // 0x802D91A0: nop
    
            goto L_802D9270;
    }
    // 0x802D91A0: nop

    // 0x802D91A4: beq         $a2, $zero, L_802D91C4
    if (ctx->r6 == 0) {
        // 0x802D91A8: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802D91C4;
    }
    // 0x802D91A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D91AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D91B0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D91B4: nop

    // 0x802D91B8: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D91BC: jr          $ra
    // 0x802D91C0: nop

    return;
    // 0x802D91C0: nop

L_802D91C4:
    // 0x802D91C4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D91C8: nop

    // 0x802D91CC: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D91D0: jr          $ra
    // 0x802D91D4: nop

    return;
    // 0x802D91D4: nop

L_802D91D8:
    // 0x802D91D8: beq         $a1, $a0, L_802D91F0
    if (ctx->r5 == ctx->r4) {
        // 0x802D91DC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_802D91F0;
    }
    // 0x802D91DC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802D91E0: beq         $a1, $at, L_802D91F0
    if (ctx->r5 == ctx->r1) {
        // 0x802D91E4: nop
    
            goto L_802D91F0;
    }
    // 0x802D91E4: nop

    // 0x802D91E8: bne         $a1, $a3, L_802D9224
    if (ctx->r5 != ctx->r7) {
        // 0x802D91EC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802D9224;
    }
    // 0x802D91EC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_802D91F0:
    // 0x802D91F0: beq         $a2, $zero, L_802D9210
    if (ctx->r6 == 0) {
        // 0x802D91F4: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802D9210;
    }
    // 0x802D91F4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802D91F8: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x802D91FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D9200: nop

    // 0x802D9204: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D9208: jr          $ra
    // 0x802D920C: nop

    return;
    // 0x802D920C: nop

L_802D9210:
    // 0x802D9210: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D9214: nop

    // 0x802D9218: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D921C: jr          $ra
    // 0x802D9220: nop

    return;
    // 0x802D9220: nop

L_802D9224:
    // 0x802D9224: bne         $a1, $at, L_802D9240
    if (ctx->r5 != ctx->r1) {
        // 0x802D9228: lui         $at, 0x4130
        ctx->r1 = S32(0X4130 << 16);
            goto L_802D9240;
    }
    // 0x802D9228: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x802D922C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D9230: nop

    // 0x802D9234: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D9238: jr          $ra
    // 0x802D923C: nop

    return;
    // 0x802D923C: nop

L_802D9240:
    // 0x802D9240: bne         $a1, $v1, L_802D9270
    if (ctx->r5 != ctx->r3) {
        // 0x802D9244: nop
    
            goto L_802D9270;
    }
    // 0x802D9244: nop

    // 0x802D9248: beq         $a2, $zero, L_802D9268
    if (ctx->r6 == 0) {
        // 0x802D924C: lui         $at, 0x4150
        ctx->r1 = S32(0X4150 << 16);
            goto L_802D9268;
    }
    // 0x802D924C: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x802D9250: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x802D9254: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D9258: nop

    // 0x802D925C: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D9260: jr          $ra
    // 0x802D9264: nop

    return;
    // 0x802D9264: nop

L_802D9268:
    // 0x802D9268: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D926C: nop

L_802D9270:
    // 0x802D9270: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802D9274: jr          $ra
    // 0x802D9278: nop

    return;
    // 0x802D9278: nop

;}
RECOMP_FUNC void D_802D2878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D28F8: jr          $ra
    // 0x802D28FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802D28FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802D2D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2DEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802D2DF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802D2DF4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x802D2DF8: sb          $zero, 0x48($a0)
    MEM_B(0X48, ctx->r4) = 0;
    // 0x802D2DFC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802D2E00: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x802D2E04: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x802D2E08: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x802D2E0C: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x802D2E10: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x802D2E14: jr          $ra
    // 0x802D2E18: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    return;
    // 0x802D2E18: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void D_802D6A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D6AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D6AF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D6AF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D6AF8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6AFC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6B00: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802D6B04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D6B08: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802D6B0C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802D6B10: jal         0x803025D8
    // 0x802D6B14: addiu       $a1, $a1, 0x384
    ctx->r5 = ADD32(ctx->r5, 0X384);
    static_3_803025D8(rdram, ctx);
        goto after_0;
    // 0x802D6B14: addiu       $a1, $a1, 0x384
    ctx->r5 = ADD32(ctx->r5, 0X384);
    after_0:
    // 0x802D6B18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6B1C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6B20: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802D6B24: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802D6B28: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802D6B2C: jal         0x803025D8
    // 0x802D6B30: addiu       $a1, $a1, 0x38C
    ctx->r5 = ADD32(ctx->r5, 0X38C);
    static_3_803025D8(rdram, ctx);
        goto after_1;
    // 0x802D6B30: addiu       $a1, $a1, 0x38C
    ctx->r5 = ADD32(ctx->r5, 0X38C);
    after_1:
    // 0x802D6B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D6B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D6B3C: jr          $ra
    // 0x802D6B40: nop

    return;
    // 0x802D6B40: nop

;}
RECOMP_FUNC void D_80220864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80220864: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80220868: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x8022086C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80220870: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80220874: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80220878: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8022087C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80220880: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x80220884: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_80220888:
    // 0x80220888: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8022088C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80220890: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80220894: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80220898: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8022089C: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x802208A0: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x802208A4: bne         $t6, $t8, L_80220888
    if (ctx->r14 != ctx->r24) {
        // 0x802208A8: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80220888;
    }
    // 0x802208A8: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x802208AC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802208B0: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x802208B4: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x802208B8: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x802208BC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x802208C0: jal         0x80222D4C
    // 0x802208C4: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    static_3_80222D4C(rdram, ctx);
        goto after_0;
    // 0x802208C4: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_0:
    // 0x802208C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802208CC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802208D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802208D4: lui         $t1, 0x103
    ctx->r9 = S32(0X103 << 16);
    // 0x802208D8: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x802208DC: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x802208E0: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x802208E4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x802208E8: jal         0x80222E24
    // 0x802208EC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    static_3_80222E24(rdram, ctx);
        goto after_1;
    // 0x802208EC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x802208F0: jal         0x802375F0
    // 0x802208F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x802208F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x802208F8: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x802208FC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80220900: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80220904: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x80220908: lhu         $t3, 0x0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X0);
    // 0x8022090C: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80220910: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80220914: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80220918: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x8022091C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80220920: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80220924: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80220928: jr          $ra
    // 0x8022092C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    return;
    // 0x8022092C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void D_802E7B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7C0C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802E7C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802E7C14: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802E7C18: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x802E7C1C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802E7C20: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802E7C24: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802E7C28: nop

    // 0x802E7C2C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802E7C30: beql        $v0, $zero, L_802E7C98
    if (ctx->r2 == 0) {
        // 0x802E7C34: mfc1        $v0, $f6
        ctx->r2 = (int32_t)ctx->f6.u32l;
            goto L_802E7C98;
    }
    goto skip_0;
    // 0x802E7C34: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x802E7C38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802E7C3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802E7C40: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802E7C44: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802E7C48: nop

    // 0x802E7C4C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802E7C50: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802E7C54: nop

    // 0x802E7C58: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802E7C5C: bnel        $v0, $zero, L_802E7C84
    if (ctx->r2 != 0) {
        // 0x802E7C60: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802E7C84;
    }
    goto skip_1;
    // 0x802E7C60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x802E7C64: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x802E7C68: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802E7C6C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802E7C70: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x802E7C74: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x802E7C78: jr          $ra
    // 0x802E7C7C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x802E7C7C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_802E7C80:
    // 0x802E7C80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802E7C84:
    // 0x802E7C84: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x802E7C88: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802E7C8C: jr          $ra
    // 0x802E7C90: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x802E7C90: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x802E7C94: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
L_802E7C98:
    // 0x802E7C98: nop

    // 0x802E7C9C: bltz        $v0, L_802E7C80
    if (SIGNED(ctx->r2) < 0) {
        // 0x802E7CA0: andi        $t7, $v0, 0xFF
        ctx->r15 = ctx->r2 & 0XFF;
            goto L_802E7C80;
    }
    // 0x802E7CA0: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x802E7CA4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802E7CA8: jr          $ra
    // 0x802E7CAC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x802E7CAC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
;}
RECOMP_FUNC void D_802D767C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D76FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D7700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D7704: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x802D7708: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802D770C: lh          $t6, 0x78($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X78);
    // 0x802D7710: lw          $t9, 0x7C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X7C);
    // 0x802D7714: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802D7718: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802D771C: jalr        $t9
    // 0x802D7720: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D7720: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x802D7724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D7728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D772C: jr          $ra
    // 0x802D7730: nop

    return;
    // 0x802D7730: nop

;}
RECOMP_FUNC void D_80287FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288078: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8028807C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80288080: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80288084: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80288088: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8028808C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80288090: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80288094: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80288098: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8028809C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x802880A0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x802880A4: jal         0x8022331C
    // 0x802880A8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802880A8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x802880AC: jal         0x802233EC
    // 0x802880B0: lui         $a0, 0x4C0
    ctx->r4 = S32(0X4C0 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_1;
    // 0x802880B0: lui         $a0, 0x4C0
    ctx->r4 = S32(0X4C0 << 16);
    after_1:
    // 0x802880B4: jal         0x80223468
    // 0x802880B8: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    static_3_80223468(rdram, ctx);
        goto after_2;
    // 0x802880B8: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    after_2:
    // 0x802880BC: lbu         $v0, 0x93($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X93);
    // 0x802880C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802880C4: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x802880C8: bne         $v0, $at, L_8028836C
    if (ctx->r2 != ctx->r1) {
        // 0x802880CC: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_8028836C;
    }
    // 0x802880CC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802880D0: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802880D4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802880D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802880DC: bne         $t6, $at, L_802880EC
    if (ctx->r14 != ctx->r1) {
        // 0x802880E0: lw          $t0, 0x6C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X6C);
            goto L_802880EC;
    }
    // 0x802880E0: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x802880E4: b           L_802880EC
    // 0x802880E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802880EC;
    // 0x802880E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802880EC:
    // 0x802880EC: beq         $v0, $zero, L_802881F0
    if (ctx->r2 == 0) {
        // 0x802880F0: lw          $a1, 0x68($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X68);
            goto L_802881F0;
    }
    // 0x802880F0: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802880F4: bgez        $v1, L_80288104
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802880F8: sra         $v0, $v1, 1
        ctx->r2 = S32(SIGNED(ctx->r3) >> 1);
            goto L_80288104;
    }
    // 0x802880F8: sra         $v0, $v1, 1
    ctx->r2 = S32(SIGNED(ctx->r3) >> 1);
    // 0x802880FC: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x80288100: sra         $v0, $at, 1
    ctx->r2 = S32(SIGNED(ctx->r1) >> 1);
L_80288104:
    // 0x80288104: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80288108: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028810C: bgez        $a1, L_8028811C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80288110: sra         $t7, $a1, 1
        ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
            goto L_8028811C;
    }
    // 0x80288110: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x80288114: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x80288118: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_8028811C:
    // 0x8028811C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80288120: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x80288124: lw          $t1, 0xC($t9)
    ctx->r9 = MEM_W(ctx->r25, 0XC);
    // 0x80288128: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x8028812C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80288130: bnel        $t1, $zero, L_8028819C
    if (ctx->r9 != 0) {
        // 0x80288134: mtc1        $t0, $f8
        ctx->f8.u32l = ctx->r8;
            goto L_8028819C;
    }
    goto skip_0;
    // 0x80288134: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    skip_0:
    // 0x80288138: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x8028813C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80288140: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x80288144: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80288148: bgez        $v0, L_80288158
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8028814C: sra         $t2, $v0, 1
        ctx->r10 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80288158;
    }
    // 0x8028814C: sra         $t2, $v0, 1
    ctx->r10 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80288150: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x80288154: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_80288158:
    // 0x80288158: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028815C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80288160: addiu       $t3, $t2, 0x70
    ctx->r11 = ADD32(ctx->r10, 0X70);
    // 0x80288164: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x80288168: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8028816C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80288170: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x80288174: nop

    // 0x80288178: bgez        $t5, L_80288188
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8028817C: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_80288188;
    }
    // 0x8028817C: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x80288180: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x80288184: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_80288188:
    // 0x80288188: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8028818C: addiu       $t8, $t7, 0x70
    ctx->r24 = ADD32(ctx->r15, 0X70);
    // 0x80288190: b           L_8028822C
    // 0x80288194: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
        goto L_8028822C;
    // 0x80288194: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80288198: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
L_8028819C:
    // 0x8028819C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x802881A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802881A4: bgez        $v0, L_802881B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802881A8: sra         $t9, $v0, 1
        ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
            goto L_802881B4;
    }
    // 0x802881A8: sra         $t9, $v0, 1
    ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
    // 0x802881AC: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x802881B0: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_802881B4:
    // 0x802881B4: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802881B8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x802881BC: addiu       $a2, $t9, 0x8
    ctx->r6 = ADD32(ctx->r25, 0X8);
    // 0x802881C0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802881C4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802881C8: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802881CC: nop

    // 0x802881D0: bgez        $t2, L_802881E0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802881D4: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_802881E0;
    }
    // 0x802881D4: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x802881D8: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x802881DC: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_802881E0:
    // 0x802881E0: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x802881E4: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x802881E8: b           L_8028822C
    // 0x802881EC: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
        goto L_8028822C;
    // 0x802881EC: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
L_802881F0:
    // 0x802881F0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x802881F4: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802881F8: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x802881FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80288200: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80288204: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80288208: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8028820C: addu        $t6, $v1, $a1
    ctx->r14 = ADD32(ctx->r3, ctx->r5);
    // 0x80288210: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x80288214: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80288218: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028821C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80288220: nop

    // 0x80288224: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80288228: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
L_8028822C:
    // 0x8028822C: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80288230: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80288234: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x80288238: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x8028823C: jal         0x80221F44
    // 0x80288240: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    static_3_80221F44(rdram, ctx);
        goto after_3;
    // 0x80288240: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    after_3:
    // 0x80288244: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80288248: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028824C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80288250: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80288254: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80288258: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x8028825C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80288260: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80288264: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80288268: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x8028826C: jal         0x8021F6F8
    // 0x80288270: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    static_3_8021F6F8(rdram, ctx);
        goto after_4;
    // 0x80288270: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x80288274: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80288278: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028827C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80288280: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80288284: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80288288: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x8028828C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80288290: bc1f        L_802884F0
    if (!c1cs) {
        // 0x80288294: nop
    
            goto L_802884F0;
    }
    // 0x80288294: nop

    // 0x80288298: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x8028829C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802882A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802882A4: bne         $t1, $at, L_802882B4
    if (ctx->r9 != ctx->r1) {
        // 0x802882A8: lw          $t2, 0x58($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X58);
            goto L_802882B4;
    }
    // 0x802882A8: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x802882AC: b           L_802882B4
    // 0x802882B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802882B4;
    // 0x802882B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802882B4:
    // 0x802882B4: beq         $v0, $zero, L_80288310
    if (ctx->r2 == 0) {
        // 0x802882B8: lw          $t1, 0x48($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X48);
            goto L_80288310;
    }
    // 0x802882B8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x802882BC: lw          $t3, 0xC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC);
    // 0x802882C0: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x802882C4: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x802882C8: bnel        $t3, $zero, L_802882F4
    if (ctx->r11 != 0) {
        // 0x802882CC: sw          $t7, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r15;
            goto L_802882F4;
    }
    goto skip_1;
    // 0x802882CC: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    skip_1:
    // 0x802882D0: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x802882D4: bgez        $t0, L_802882E4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802882D8: sra         $t5, $t0, 1
        ctx->r13 = S32(SIGNED(ctx->r8) >> 1);
            goto L_802882E4;
    }
    // 0x802882D8: sra         $t5, $t0, 1
    ctx->r13 = S32(SIGNED(ctx->r8) >> 1);
    // 0x802882DC: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x802882E0: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_802882E4:
    // 0x802882E4: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x802882E8: b           L_8028831C
    // 0x802882EC: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
        goto L_8028831C;
    // 0x802882EC: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x802882F0: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
L_802882F4:
    // 0x802882F4: bgez        $t0, L_80288304
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802882F8: sra         $t8, $t0, 1
        ctx->r24 = S32(SIGNED(ctx->r8) >> 1);
            goto L_80288304;
    }
    // 0x802882F8: sra         $t8, $t0, 1
    ctx->r24 = S32(SIGNED(ctx->r8) >> 1);
    // 0x802882FC: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x80288300: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_80288304:
    // 0x80288304: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x80288308: b           L_8028831C
    // 0x8028830C: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
        goto L_8028831C;
    // 0x8028830C: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
L_80288310:
    // 0x80288310: addu        $t2, $a2, $t0
    ctx->r10 = ADD32(ctx->r6, ctx->r8);
    // 0x80288314: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x80288318: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
L_8028831C:
    // 0x8028831C: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80288320: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80288324: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x80288328: lw          $a3, 0x8C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8C);
    // 0x8028832C: jal         0x80221F44
    // 0x80288330: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    static_3_80221F44(rdram, ctx);
        goto after_5;
    // 0x80288330: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    after_5:
    // 0x80288334: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80288338: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028833C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80288340: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80288344: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80288348: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8028834C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80288350: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80288354: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80288358: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x8028835C: jal         0x8021F6F8
    // 0x80288360: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    static_3_8021F6F8(rdram, ctx);
        goto after_6;
    // 0x80288360: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x80288364: b           L_802884F0
    // 0x80288368: nop

        goto L_802884F0;
    // 0x80288368: nop

L_8028836C:
    // 0x8028836C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80288370: bne         $v0, $at, L_802883AC
    if (ctx->r2 != ctx->r1) {
        // 0x80288374: lw          $a1, 0x68($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X68);
            goto L_802883AC;
    }
    // 0x80288374: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80288378: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8028837C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80288380: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80288384: mtc1        $a1, $f10
    ctx->f10.u32l = ctx->r5;
    // 0x80288388: nop

    // 0x8028838C: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80288390: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80288394: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80288398: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8028839C: nop

    // 0x802883A0: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x802883A4: b           L_802883D4
    // 0x802883A8: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
        goto L_802883D4;
    // 0x802883A8: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
L_802883AC:
    // 0x802883AC: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x802883B0: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802883B4: addu        $t8, $v1, $a1
    ctx->r24 = ADD32(ctx->r3, ctx->r5);
    // 0x802883B8: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802883BC: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x802883C0: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802883C4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802883C8: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x802883CC: nop

    // 0x802883D0: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
L_802883D4:
    // 0x802883D4: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802883D8: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802883DC: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x802883E0: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x802883E4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x802883E8: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x802883EC: jal         0x80221F44
    // 0x802883F0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    static_3_80221F44(rdram, ctx);
        goto after_7;
    // 0x802883F0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x802883F4: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x802883F8: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x802883FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80288400: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80288404: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80288408: addu        $a3, $a2, $t0
    ctx->r7 = ADD32(ctx->r6, ctx->r8);
    // 0x8028840C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80288410: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80288414: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80288418: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x8028841C: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x80288420: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x80288424: jal         0x8021F6F8
    // 0x80288428: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    static_3_8021F6F8(rdram, ctx);
        goto after_8;
    // 0x80288428: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x8028842C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80288430: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80288434: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80288438: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8028843C: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x80288440: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80288444: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80288448: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028844C: bc1f        L_802884F0
    if (!c1cs) {
        // 0x80288450: nop
    
            goto L_802884F0;
    }
    // 0x80288450: nop

    // 0x80288454: bnel        $v0, $at, L_8028848C
    if (ctx->r2 != ctx->r1) {
        // 0x80288458: lwc1        $f6, 0x3C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_8028848C;
    }
    goto skip_2;
    // 0x80288458: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    skip_2:
    // 0x8028845C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80288460: nop

    // 0x80288464: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80288468: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8028846C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80288470: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80288474: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80288478: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x8028847C: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x80288480: b           L_802884A4
    // 0x80288484: addu        $a1, $v1, $t4
    ctx->r5 = ADD32(ctx->r3, ctx->r12);
        goto L_802884A4;
    // 0x80288484: addu        $a1, $v1, $t4
    ctx->r5 = ADD32(ctx->r3, ctx->r12);
    // 0x80288488: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
L_8028848C:
    // 0x8028848C: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x80288490: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80288494: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80288498: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8028849C: nop

    // 0x802884A0: addu        $a1, $v1, $t6
    ctx->r5 = ADD32(ctx->r3, ctx->r14);
L_802884A4:
    // 0x802884A4: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802884A8: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802884AC: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x802884B0: lw          $a3, 0x8C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8C);
    // 0x802884B4: jal         0x80221F44
    // 0x802884B8: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    static_3_80221F44(rdram, ctx);
        goto after_9;
    // 0x802884B8: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    after_9:
    // 0x802884BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802884C0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802884C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802884C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802884CC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x802884D0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802884D4: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x802884D8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x802884DC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x802884E0: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x802884E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x802884E8: jal         0x8021F6F8
    // 0x802884EC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    static_3_8021F6F8(rdram, ctx);
        goto after_10;
    // 0x802884EC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_10:
L_802884F0:
    // 0x802884F0: jal         0x8022337C
    // 0x802884F4: nop

    static_3_8022337C(rdram, ctx);
        goto after_11;
    // 0x802884F4: nop

    after_11:
    // 0x802884F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802884FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80288500: jr          $ra
    // 0x80288504: nop

    return;
    // 0x80288504: nop

;}
RECOMP_FUNC void D_80237778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237778: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023777C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80237780: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80237784: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80237788: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023778C: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x80237790: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80237794: addiu       $s2, $a0, 0x4
    ctx->r18 = ADD32(ctx->r4, 0X4);
    // 0x80237798: beql        $s0, $zero, L_802377C4
    if (ctx->r16 == 0) {
        // 0x8023779C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802377C4;
    }
    goto skip_0;
    // 0x8023779C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_802377A0:
    // 0x802377A0: jal         0x80237120
    // 0x802377A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237120(rdram, ctx);
        goto after_0;
    // 0x802377A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802377A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802377AC: jal         0x80237150
    // 0x802377B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80237150(rdram, ctx);
        goto after_1;
    // 0x802377B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x802377B4: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x802377B8: bne         $s0, $zero, L_802377A0
    if (ctx->r16 != 0) {
        // 0x802377BC: nop
    
            goto L_802377A0;
    }
    // 0x802377BC: nop

    // 0x802377C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802377C4:
    // 0x802377C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802377C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802377CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802377D0: jr          $ra
    // 0x802377D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802377D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}

#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80292E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292ED4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80292ED8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80292EDC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80292EE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80292EE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80292EE8: lw          $t6, 0x8C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8C);
    // 0x80292EEC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80292EF0: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x80292EF4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80292EF8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80292EFC: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x80292F00: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80292F04: jal         0x802AA36C
    // 0x80292F08: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    static_3_802AA36C(rdram, ctx);
        goto after_0;
    // 0x80292F08: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80292F0C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80292F10: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80292F14: swc1        $f4, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->f4.u32l;
    // 0x80292F18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80292F1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80292F20: jr          $ra
    // 0x80292F24: nop

    return;
    // 0x80292F24: nop

;}
RECOMP_FUNC void D_802472B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802472B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802472BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802472C0: jal         0x80241760
    // 0x802472C4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x802472C4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x802472C8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802472CC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802472D0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x802472D4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x802472D8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x802472DC: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x802472E0: lw          $t1, 0x14($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X14);
    // 0x802472E4: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x802472E8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x802472EC: beq         $t7, $t6, L_80247394
    if (ctx->r15 == ctx->r14) {
        // 0x802472F0: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_80247394;
    }
    // 0x802472F0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x802472F4: lw          $t2, 0x10($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X10);
    // 0x802472F8: lw          $t3, 0x14($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X14);
    // 0x802472FC: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x80247300: bne         $at, $zero, L_80247394
    if (ctx->r1 != 0) {
        // 0x80247304: sltu        $at, $t2, $t0
        ctx->r1 = ctx->r10 < ctx->r8 ? 1 : 0;
            goto L_80247394;
    }
    // 0x80247304: sltu        $at, $t2, $t0
    ctx->r1 = ctx->r10 < ctx->r8 ? 1 : 0;
    // 0x80247308: bne         $at, $zero, L_80247318
    if (ctx->r1 != 0) {
        // 0x8024730C: sltu        $at, $t3, $t1
        ctx->r1 = ctx->r11 < ctx->r9 ? 1 : 0;
            goto L_80247318;
    }
    // 0x8024730C: sltu        $at, $t3, $t1
    ctx->r1 = ctx->r11 < ctx->r9 ? 1 : 0;
    // 0x80247310: beq         $at, $zero, L_80247394
    if (ctx->r1 == 0) {
        // 0x80247314: nop
    
            goto L_80247394;
    }
    // 0x80247314: nop

L_80247318:
    // 0x80247318: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x8024731C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80247320: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80247324: lw          $t5, 0x4($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X4);
    // 0x80247328: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x8024732C: lw          $t7, 0x14($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X14);
    // 0x80247330: lw          $t6, 0x10($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X10);
    // 0x80247334: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80247338: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x8024733C: subu        $t0, $t4, $t6
    ctx->r8 = SUB32(ctx->r12, ctx->r14);
    // 0x80247340: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x80247344: subu        $t1, $t5, $t7
    ctx->r9 = SUB32(ctx->r13, ctx->r15);
    // 0x80247348: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x8024734C: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x80247350: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80247354: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80247358: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8024735C: beq         $t3, $t8, L_80247394
    if (ctx->r11 == ctx->r24) {
        // 0x80247360: sw          $t3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r11;
            goto L_80247394;
    }
    // 0x80247360: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80247364: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80247368: lw          $t6, 0x10($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X10);
    // 0x8024736C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80247370: lw          $t7, 0x14($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X14);
    // 0x80247374: sltu        $at, $t6, $t4
    ctx->r1 = ctx->r14 < ctx->r12 ? 1 : 0;
    // 0x80247378: bne         $at, $zero, L_80247318
    if (ctx->r1 != 0) {
        // 0x8024737C: nop
    
            goto L_80247318;
    }
    // 0x8024737C: nop

    // 0x80247380: sltu        $at, $t4, $t6
    ctx->r1 = ctx->r12 < ctx->r14 ? 1 : 0;
    // 0x80247384: bne         $at, $zero, L_80247394
    if (ctx->r1 != 0) {
        // 0x80247388: sltu        $at, $t7, $t5
        ctx->r1 = ctx->r15 < ctx->r13 ? 1 : 0;
            goto L_80247394;
    }
    // 0x80247388: sltu        $at, $t7, $t5
    ctx->r1 = ctx->r15 < ctx->r13 ? 1 : 0;
    // 0x8024738C: bne         $at, $zero, L_80247318
    if (ctx->r1 != 0) {
        // 0x80247390: nop
    
            goto L_80247318;
    }
    // 0x80247390: nop

L_80247394:
    // 0x80247394: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80247398: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8024739C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802473A0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802473A4: sw          $t0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r8;
    // 0x802473A8: sw          $t1, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r9;
    // 0x802473AC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802473B0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x802473B4: beq         $t2, $t8, L_802473EC
    if (ctx->r10 == ctx->r24) {
        // 0x802473B8: nop
    
            goto L_802473EC;
    }
    // 0x802473B8: nop

    // 0x802473BC: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x802473C0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802473C4: lw          $t5, 0x14($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X14);
    // 0x802473C8: lw          $t4, 0x10($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X10);
    // 0x802473CC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x802473D0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802473D4: subu        $t0, $t4, $t6
    ctx->r8 = SUB32(ctx->r12, ctx->r14);
    // 0x802473D8: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x802473DC: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x802473E0: subu        $t1, $t5, $t7
    ctx->r9 = SUB32(ctx->r13, ctx->r15);
    // 0x802473E4: sw          $t1, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r9;
    // 0x802473E8: sw          $t0, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r8;
L_802473EC:
    // 0x802473EC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x802473F0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x802473F4: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x802473F8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x802473FC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80247400: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x80247404: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80247408: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8024740C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80247410: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80247414: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80247418: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8024741C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80247420: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80247424: jal         0x80241780
    // 0x80247428: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x80247428: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x8024742C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247430: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80247434: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80247438: jr          $ra
    // 0x8024743C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8024743C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80248260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248260: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80248264: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80248268: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8024826C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80248270: bne         $t6, $zero, L_80248280
    if (ctx->r14 != 0) {
        // 0x80248274: nop
    
            goto L_80248280;
    }
    // 0x80248274: nop

    // 0x80248278: b           L_80248934
    // 0x8024827C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80248934;
    // 0x8024827C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80248280:
    // 0x80248280: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80248284: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80248288: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8024828C: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x80248290: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80248294: lhu         $t9, 0x1A($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X1A);
    // 0x80248298: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8024829C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802482A0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802482A4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x802482A8: addiu       $t2, $t1, 0x18
    ctx->r10 = ADD32(ctx->r9, 0X18);
    // 0x802482AC: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x802482B0: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x802482B4: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x802482B8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x802482BC: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802482C0: beq         $t6, $zero, L_80248394
    if (ctx->r14 == 0) {
        // 0x802482C4: nop
    
            goto L_80248394;
    }
    // 0x802482C4: nop

    // 0x802482C8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x802482CC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802482D0: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x802482D4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802482D8: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x802482DC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802482E0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x802482E4: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x802482E8: beq         $t2, $zero, L_8024830C
    if (ctx->r10 == 0) {
        // 0x802482EC: nop
    
            goto L_8024830C;
    }
    // 0x802482EC: nop

L_802482F0:
    // 0x802482F0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802482F4: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x802482F8: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x802482FC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80248300: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x80248304: bne         $t6, $zero, L_802482F0
    if (ctx->r14 != 0) {
        // 0x80248308: nop
    
            goto L_802482F0;
    }
    // 0x80248308: nop

L_8024830C:
    // 0x8024830C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80248310: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x80248314: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x80248318: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8024831C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80248320: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x80248324: beq         $t0, $zero, L_8024837C
    if (ctx->r8 == 0) {
        // 0x80248328: nop
    
            goto L_8024837C;
    }
    // 0x80248328: nop

    // 0x8024832C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80248330: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80248334: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80248338: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8024833C: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x80248340: beq         $t4, $zero, L_80248364
    if (ctx->r12 == 0) {
        // 0x80248344: nop
    
            goto L_80248364;
    }
    // 0x80248344: nop

L_80248348:
    // 0x80248348: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8024834C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80248350: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80248354: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80248358: andi        $t9, $t7, 0x2
    ctx->r25 = ctx->r15 & 0X2;
    // 0x8024835C: bne         $t9, $zero, L_80248348
    if (ctx->r25 != 0) {
        // 0x80248360: nop
    
            goto L_80248348;
    }
    // 0x80248360: nop

L_80248364:
    // 0x80248364: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80248368: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x8024836C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80248370: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x80248374: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x80248378: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_8024837C:
    // 0x8024837C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80248380: addiu       $t3, $zero, 0x4B
    ctx->r11 = ADD32(0, 0X4B);
    // 0x80248384: jal         0x80248994
    // 0x80248388: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    static_3_80248994(rdram, ctx);
        goto after_0;
    // 0x80248388: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    after_0:
    // 0x8024838C: b           L_80248934
    // 0x80248390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x80248390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248394:
    // 0x80248394: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80248398: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8024839C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x802483A0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x802483A4: andi        $t9, $t7, 0x2
    ctx->r25 = ctx->r15 & 0X2;
    // 0x802483A8: beq         $t9, $zero, L_802483CC
    if (ctx->r25 == 0) {
        // 0x802483AC: nop
    
            goto L_802483CC;
    }
    // 0x802483AC: nop

L_802483B0:
    // 0x802483B0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802483B4: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x802483B8: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802483BC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x802483C0: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x802483C4: bne         $t2, $zero, L_802483B0
    if (ctx->r10 != 0) {
        // 0x802483C8: nop
    
            goto L_802483B0;
    }
    // 0x802483C8: nop

L_802483CC:
    // 0x802483CC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802483D0: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x802483D4: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x802483D8: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x802483DC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x802483E0: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x802483E4: beq         $t6, $zero, L_8024844C
    if (ctx->r14 == 0) {
        // 0x802483E8: nop
    
            goto L_8024844C;
    }
    // 0x802483E8: nop

    // 0x802483EC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802483F0: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x802483F4: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x802483F8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x802483FC: andi        $t0, $t8, 0x2
    ctx->r8 = ctx->r24 & 0X2;
    // 0x80248400: beq         $t0, $zero, L_80248424
    if (ctx->r8 == 0) {
        // 0x80248404: nop
    
            goto L_80248424;
    }
    // 0x80248404: nop

L_80248408:
    // 0x80248408: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8024840C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80248410: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80248414: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80248418: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x8024841C: bne         $t4, $zero, L_80248408
    if (ctx->r12 != 0) {
        // 0x80248420: nop
    
            goto L_80248408;
    }
    // 0x80248420: nop

L_80248424:
    // 0x80248424: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80248428: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x8024842C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80248430: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x80248434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80248438: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8024843C: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x80248440: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80248444: b           L_80248934
    // 0x80248448: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
        goto L_80248934;
    // 0x80248448: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
L_8024844C:
    // 0x8024844C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80248450: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80248454: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80248458: beq         $t1, $zero, L_802484A0
    if (ctx->r9 == 0) {
        // 0x8024845C: nop
    
            goto L_802484A0;
    }
    // 0x8024845C: nop

    // 0x80248460: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80248464: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80248468: jal         0x80248A7C
    // 0x8024846C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    static_3_80248A7C(rdram, ctx);
        goto after_1;
    // 0x8024846C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    after_1:
    // 0x80248470: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80248474: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80248478: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8024847C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80248480: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80248484: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x80248488: ori         $at, $at, 0x401
    ctx->r1 = ctx->r1 | 0X401;
    // 0x8024848C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80248490: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80248494: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x80248498: b           L_80248934
    // 0x8024849C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x8024849C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802484A0:
    // 0x802484A0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x802484A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802484A8: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x802484AC: bne         $t8, $at, L_8024859C
    if (ctx->r24 != ctx->r1) {
        // 0x802484B0: nop
    
            goto L_8024859C;
    }
    // 0x802484B0: nop

    // 0x802484B4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x802484B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802484BC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x802484C0: bne         $t1, $zero, L_80248548
    if (ctx->r9 != 0) {
        // 0x802484C4: nop
    
            goto L_80248548;
    }
    // 0x802484C4: nop

    // 0x802484C8: lhu         $t4, 0x4($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X4);
    // 0x802484CC: lw          $t2, 0x8($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X8);
    // 0x802484D0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802484D4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802484D8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802484DC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802484E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802484E4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802484E8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802484EC: beq         $t3, $t5, L_8024850C
    if (ctx->r11 == ctx->r13) {
        // 0x802484F0: nop
    
            goto L_8024850C;
    }
    // 0x802484F0: nop

    // 0x802484F4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802484F8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x802484FC: jal         0x80248994
    // 0x80248500: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    static_3_80248994(rdram, ctx);
        goto after_2;
    // 0x80248500: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    after_2:
    // 0x80248504: b           L_80248934
    // 0x80248508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x80248508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024850C:
    // 0x8024850C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80248510: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80248514: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80248518: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8024851C: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80248520: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x80248524: ori         $at, $at, 0x401
    ctx->r1 = ctx->r1 | 0X401;
    // 0x80248528: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x8024852C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80248530: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80248534: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x80248538: jal         0x80248A7C
    // 0x8024853C: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    static_3_80248A7C(rdram, ctx);
        goto after_3;
    // 0x8024853C: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    after_3:
    // 0x80248540: b           L_80248934
    // 0x80248544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x80248544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248548:
    // 0x80248548: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8024854C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80248550: lui         $a2, 0x500
    ctx->r6 = S32(0X500 << 16);
    // 0x80248554: lw          $t3, 0x4($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X4);
    // 0x80248558: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x8024855C: ori         $a2, $a2, 0x400
    ctx->r6 = ctx->r6 | 0X400;
    // 0x80248560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80248564: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80248568: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x8024856C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80248570: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x80248574: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x80248578: sw          $t0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r8;
    // 0x8024857C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80248580: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80248584: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x80248588: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x8024858C: jal         0x80248C50
    // 0x80248590: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    static_3_80248C50(rdram, ctx);
        goto after_4;
    // 0x80248590: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_4:
    // 0x80248594: b           L_80248934
    // 0x80248598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x80248598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024859C:
    // 0x8024859C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x802485A0: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x802485A4: bne         $t3, $zero, L_80248920
    if (ctx->r11 != 0) {
        // 0x802485A8: nop
    
            goto L_80248920;
    }
    // 0x802485A8: nop

    // 0x802485AC: lhu         $t5, 0x4($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0X4);
    // 0x802485B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802485B4: bne         $t5, $at, L_80248614
    if (ctx->r13 != ctx->r1) {
        // 0x802485B8: nop
    
            goto L_80248614;
    }
    // 0x802485B8: nop

    // 0x802485BC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x802485C0: lw          $t6, 0x8($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X8);
    // 0x802485C4: lw          $t8, 0x10($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X10);
    // 0x802485C8: addiu       $t0, $t8, 0x11
    ctx->r8 = ADD32(ctx->r24, 0X11);
    // 0x802485CC: slt         $at, $t0, $t6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802485D0: beq         $at, $zero, L_802485E8
    if (ctx->r1 == 0) {
        // 0x802485D4: nop
    
            goto L_802485E8;
    }
    // 0x802485D4: nop

    // 0x802485D8: jal         0x80248994
    // 0x802485DC: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    static_3_80248994(rdram, ctx);
        goto after_5;
    // 0x802485DC: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    after_5:
    // 0x802485E0: b           L_80248934
    // 0x802485E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x802485E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802485E8:
    // 0x802485E8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x802485EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802485F0: and         $t1, $t7, $at
    ctx->r9 = ctx->r15 & ctx->r1;
    // 0x802485F4: bne         $t1, $zero, L_80248628
    if (ctx->r9 != 0) {
        // 0x802485F8: nop
    
            goto L_80248628;
    }
    // 0x802485F8: nop

    // 0x802485FC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80248600: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x80248604: jal         0x80248994
    // 0x80248608: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    static_3_80248994(rdram, ctx);
        goto after_6;
    // 0x80248608: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    after_6:
    // 0x8024860C: b           L_80248934
    // 0x80248610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x80248610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248614:
    // 0x80248614: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80248618: lw          $t9, 0x4($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X4);
    // 0x8024861C: lw          $t8, 0xC($t5)
    ctx->r24 = MEM_W(ctx->r13, 0XC);
    // 0x80248620: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x80248624: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
L_80248628:
    // 0x80248628: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8024862C: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x80248630: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x80248634: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x80248638: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8024863C: and         $t1, $t7, $at
    ctx->r9 = ctx->r15 & ctx->r1;
    // 0x80248640: beq         $t1, $zero, L_80248654
    if (ctx->r9 == 0) {
        // 0x80248644: lui         $at, 0x40
        ctx->r1 = S32(0X40 << 16);
            goto L_80248654;
    }
    // 0x80248644: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x80248648: and         $t2, $t7, $at
    ctx->r10 = ctx->r15 & ctx->r1;
    // 0x8024864C: bne         $t2, $zero, L_80248668
    if (ctx->r10 != 0) {
        // 0x80248650: nop
    
            goto L_80248668;
    }
    // 0x80248650: nop

L_80248654:
    // 0x80248654: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80248658: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x8024865C: and         $t9, $t3, $at
    ctx->r25 = ctx->r11 & ctx->r1;
    // 0x80248660: beq         $t9, $zero, L_802486EC
    if (ctx->r25 == 0) {
        // 0x80248664: nop
    
            goto L_802486EC;
    }
    // 0x80248664: nop

L_80248668:
    // 0x80248668: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8024866C: lw          $t6, 0x10($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X10);
    // 0x80248670: sltiu       $at, $t6, 0x4
    ctx->r1 = ctx->r14 < 0X4 ? 1 : 0;
    // 0x80248674: bne         $at, $zero, L_802486B8
    if (ctx->r1 != 0) {
        // 0x80248678: nop
    
            goto L_802486B8;
    }
    // 0x80248678: nop

    // 0x8024867C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80248680: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80248684: lhu         $t0, 0x4($t5)
    ctx->r8 = MEM_HU(ctx->r13, 0X4);
    // 0x80248688: bne         $t0, $at, L_802486A0
    if (ctx->r8 != ctx->r1) {
        // 0x8024868C: nop
    
            goto L_802486A0;
    }
    // 0x8024868C: nop

    // 0x80248690: lw          $t4, 0x8($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X8);
    // 0x80248694: slti        $at, $t4, 0x53
    ctx->r1 = SIGNED(ctx->r12) < 0X53 ? 1 : 0;
    // 0x80248698: bne         $at, $zero, L_802486DC
    if (ctx->r1 != 0) {
        // 0x8024869C: nop
    
            goto L_802486DC;
    }
    // 0x8024869C: nop

L_802486A0:
    // 0x802486A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802486A4: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x802486A8: jal         0x80248994
    // 0x802486AC: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    static_3_80248994(rdram, ctx);
        goto after_7;
    // 0x802486AC: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    after_7:
    // 0x802486B0: b           L_80248934
    // 0x802486B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x802486B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802486B8:
    // 0x802486B8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x802486BC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x802486C0: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x802486C4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x802486C8: lw          $t8, 0x8($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X8);
    // 0x802486CC: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x802486D0: addu        $t5, $t2, $t0
    ctx->r13 = ADD32(ctx->r10, ctx->r8);
    // 0x802486D4: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x802486D8: sw          $t6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->r14;
L_802486DC:
    // 0x802486DC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x802486E0: lw          $t1, 0x10($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X10);
    // 0x802486E4: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x802486E8: sw          $t7, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r15;
L_802486EC:
    // 0x802486EC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x802486F0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802486F4: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x802486F8: beq         $t8, $zero, L_802487D0
    if (ctx->r24 == 0) {
        // 0x802486FC: nop
    
            goto L_802487D0;
    }
    // 0x802486FC: nop

    // 0x80248700: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80248704: addiu       $at, $zero, 0x57
    ctx->r1 = ADD32(0, 0X57);
    // 0x80248708: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x8024870C: beq         $t2, $at, L_80248724
    if (ctx->r10 == ctx->r1) {
        // 0x80248710: nop
    
            goto L_80248724;
    }
    // 0x80248710: nop

    // 0x80248714: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80248718: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x8024871C: jal         0x80248994
    // 0x80248720: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
    static_3_80248994(rdram, ctx);
        goto after_8;
    // 0x80248720: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
    after_8:
L_80248724:
    // 0x80248724: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80248728: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024872C: lhu         $t1, 0x4($t5)
    ctx->r9 = MEM_HU(ctx->r13, 0X4);
    // 0x80248730: bne         $t1, $at, L_80248770
    if (ctx->r9 != ctx->r1) {
        // 0x80248734: nop
    
            goto L_80248770;
    }
    // 0x80248734: nop

    // 0x80248738: lhu         $t7, 0x6($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0X6);
    // 0x8024873C: bne         $t7, $zero, L_80248770
    if (ctx->r15 != 0) {
        // 0x80248740: nop
    
            goto L_80248770;
    }
    // 0x80248740: nop

    // 0x80248744: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80248748: sh          $t4, 0x6($t5)
    MEM_H(0X6, ctx->r13) = ctx->r12;
    // 0x8024874C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80248750: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80248754: sw          $t9, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r25;
    // 0x80248758: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8024875C: lw          $t2, 0x40($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X40);
    // 0x80248760: lw          $t0, 0x48($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X48);
    // 0x80248764: subu        $t6, $t2, $t0
    ctx->r14 = SUB32(ctx->r10, ctx->r8);
    // 0x80248768: b           L_80248798
    // 0x8024876C: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
        goto L_80248798;
    // 0x8024876C: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
L_80248770:
    // 0x80248770: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80248774: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80248778: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    // 0x8024877C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80248780: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80248784: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x80248788: ori         $at, $at, 0x401
    ctx->r1 = ctx->r1 | 0X401;
    // 0x8024878C: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80248790: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80248794: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
L_80248798:
    // 0x80248798: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8024879C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802487A0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802487A4: lw          $t8, 0xC($t9)
    ctx->r24 = MEM_W(ctx->r25, 0XC);
    // 0x802487A8: lw          $a3, 0x8($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X8);
    // 0x802487AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802487B0: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x802487B4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802487B8: jal         0x80248C50
    // 0x802487BC: lui         $a2, 0x500
    ctx->r6 = S32(0X500 << 16);
    static_3_80248C50(rdram, ctx);
        goto after_9;
    // 0x802487BC: lui         $a2, 0x500
    ctx->r6 = S32(0X500 << 16);
    after_9:
    // 0x802487C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x802487C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802487C8: b           L_80248934
    // 0x802487CC: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
        goto L_80248934;
    // 0x802487CC: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
L_802487D0:
    // 0x802487D0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x802487D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802487D8: lw          $t3, 0x8($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X8);
    // 0x802487DC: bne         $t3, $at, L_80248864
    if (ctx->r11 != ctx->r1) {
        // 0x802487E0: nop
    
            goto L_80248864;
    }
    // 0x802487E0: nop

    // 0x802487E4: lhu         $t1, 0x4($t6)
    ctx->r9 = MEM_HU(ctx->r14, 0X4);
    // 0x802487E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802487EC: bne         $t1, $at, L_80248864
    if (ctx->r9 != ctx->r1) {
        // 0x802487F0: nop
    
            goto L_80248864;
    }
    // 0x802487F0: nop

    // 0x802487F4: lhu         $t7, 0x6($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X6);
    // 0x802487F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802487FC: bne         $t7, $at, L_80248864
    if (ctx->r15 != ctx->r1) {
        // 0x80248800: nop
    
            goto L_80248864;
    }
    // 0x80248800: nop

    // 0x80248804: addiu       $t4, $t6, 0x18
    ctx->r12 = ADD32(ctx->r14, 0X18);
    // 0x80248808: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8024880C: lw          $t5, 0x28($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X28);
    // 0x80248810: bne         $t5, $zero, L_80248858
    if (ctx->r13 != 0) {
        // 0x80248814: nop
    
            goto L_80248858;
    }
    // 0x80248814: nop

    // 0x80248818: lw          $t9, 0x20($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X20);
    // 0x8024881C: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x80248820: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x80248824: lw          $t3, 0x8($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X8);
    // 0x80248828: lw          $t7, 0xC($t9)
    ctx->r15 = MEM_W(ctx->r25, 0XC);
    // 0x8024882C: or          $t0, $t8, $t2
    ctx->r8 = ctx->r24 | ctx->r10;
    // 0x80248830: or          $t1, $t0, $t3
    ctx->r9 = ctx->r8 | ctx->r11;
    // 0x80248834: or          $t4, $t7, $t1
    ctx->r12 = ctx->r15 | ctx->r9;
    // 0x80248838: beq         $t4, $zero, L_80248858
    if (ctx->r12 == 0) {
        // 0x8024883C: nop
    
            goto L_80248858;
    }
    // 0x8024883C: nop

    // 0x80248840: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80248844: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80248848: jal         0x80248994
    // 0x8024884C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    static_3_80248994(rdram, ctx);
        goto after_10;
    // 0x8024884C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    after_10:
    // 0x80248850: b           L_80248934
    // 0x80248854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x80248854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248858:
    // 0x80248858: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8024885C: jal         0x80248A7C
    // 0x80248860: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    static_3_80248A7C(rdram, ctx);
        goto after_11;
    // 0x80248860: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    after_11:
L_80248864:
    // 0x80248864: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80248868: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8024886C: lw          $t0, 0x8($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X8);
    // 0x80248870: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x80248874: sw          $t3, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r11;
    // 0x80248878: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8024887C: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x80248880: beq         $t7, $zero, L_802488EC
    if (ctx->r15 == 0) {
        // 0x80248884: nop
    
            goto L_802488EC;
    }
    // 0x80248884: nop

    // 0x80248888: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8024888C: lw          $t4, 0x8($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X8);
    // 0x80248890: slti        $at, $t4, 0x55
    ctx->r1 = SIGNED(ctx->r12) < 0X55 ? 1 : 0;
    // 0x80248894: bne         $at, $zero, L_802488B4
    if (ctx->r1 != 0) {
        // 0x80248898: nop
    
            goto L_802488B4;
    }
    // 0x80248898: nop

    // 0x8024889C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x802488A0: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x802488A4: jal         0x80248994
    // 0x802488A8: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    static_3_80248994(rdram, ctx);
        goto after_12;
    // 0x802488A8: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    after_12:
    // 0x802488AC: b           L_80248934
    // 0x802488B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x802488B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802488B4:
    // 0x802488B4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x802488B8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802488BC: lui         $a2, 0x500
    ctx->r6 = S32(0X500 << 16);
    // 0x802488C0: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x802488C4: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x802488C8: ori         $a2, $a2, 0x400
    ctx->r6 = ctx->r6 | 0X400;
    // 0x802488CC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802488D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802488D4: jal         0x80248C50
    // 0x802488D8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    static_3_80248C50(rdram, ctx);
        goto after_13;
    // 0x802488D8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_13:
    // 0x802488DC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x802488E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802488E4: b           L_80248934
    // 0x802488E8: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
        goto L_80248934;
    // 0x802488E8: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
L_802488EC:
    // 0x802488EC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802488F0: lw          $t9, 0x8($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X8);
    // 0x802488F4: slti        $at, $t9, 0x55
    ctx->r1 = SIGNED(ctx->r25) < 0X55 ? 1 : 0;
    // 0x802488F8: beq         $at, $zero, L_80248918
    if (ctx->r1 == 0) {
        // 0x802488FC: nop
    
            goto L_80248918;
    }
    // 0x802488FC: nop

    // 0x80248900: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80248904: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80248908: jal         0x80248994
    // 0x8024890C: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    static_3_80248994(rdram, ctx);
        goto after_14;
    // 0x8024890C: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    after_14:
    // 0x80248910: b           L_80248934
    // 0x80248914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x80248914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248918:
    // 0x80248918: b           L_80248934
    // 0x8024891C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248934;
    // 0x8024891C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248920:
    // 0x80248920: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80248924: addiu       $t4, $zero, 0x4B
    ctx->r12 = ADD32(0, 0X4B);
    // 0x80248928: jal         0x80248994
    // 0x8024892C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    static_3_80248994(rdram, ctx);
        goto after_15;
    // 0x8024892C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    after_15:
    // 0x80248930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248934:
    // 0x80248934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80248938: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8024893C: jr          $ra
    // 0x80248940: nop

    return;
    // 0x80248940: nop

;}
RECOMP_FUNC void D_80293624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802936A4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x802936A8: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x802936AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802936B0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802936B4: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x802936B8: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x802936BC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802936C0: addiu       $t6, $sp, 0x98
    ctx->r14 = ADD32(ctx->r29, 0X98);
    // 0x802936C4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802936C8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802936CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802936D0: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x802936D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802936D8: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x802936DC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802936E0: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x802936E4: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    // 0x802936E8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x802936EC: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x802936F0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x802936F4: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x802936F8: jal         0x802AD568
    // 0x802936FC: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x802936FC: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80293700: blez        $v0, L_80293828
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80293704: addiu       $s1, $sp, 0x54
        ctx->r17 = ADD32(ctx->r29, 0X54);
            goto L_80293828;
    }
    // 0x80293704: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
    // 0x80293708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029370C: jal         0x802C51D0
    // 0x80293710: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x80293710: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80293714: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80293718: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029371C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293720: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80293724: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80293728: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8029372C: jal         0x8022A0D0
    // 0x80293730: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x80293730: nop

    after_2:
    // 0x80293734: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80293738: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8029373C: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80293740: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293744: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x80293748: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x8029374C: jal         0x8022970C
    // 0x80293750: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x80293750: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80293754: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80293758: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8029375C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80293760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293764: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x80293768: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x8029376C: jal         0x802C4838
    // 0x80293770: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    static_3_802C4838(rdram, ctx);
        goto after_4;
    // 0x80293770: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80293774: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80293778: lwc1        $f18, 0x104($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X104);
    // 0x8029377C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293780: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80293784: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80293788: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8029378C: jal         0x802D01D4
    // 0x80293790: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x80293790: nop

    after_5:
    // 0x80293794: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80293798: lwc1        $f8, 0x108($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X108);
    // 0x8029379C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802937A0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802937A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802937A8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802937AC: jal         0x802D01D4
    // 0x802937B0: nop

    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x802937B0: nop

    after_6:
    // 0x802937B4: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x802937B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802937BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802937C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802937C4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802937C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802937CC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802937D0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802937D4: lw          $a3, 0xE0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XE0);
    // 0x802937D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802937DC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x802937E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x802937E4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802937E8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x802937EC: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x802937F0: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x802937F4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802937F8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x802937FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80293800: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80293804: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80293808: addiu       $a2, $zero, 0x53
    ctx->r6 = ADD32(0, 0X53);
    // 0x8029380C: jal         0x802AB018
    // 0x80293810: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    static_3_802AB018(rdram, ctx);
        goto after_7;
    // 0x80293810: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_7:
    // 0x80293814: lw          $t1, 0x18C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18C);
    // 0x80293818: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8029381C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80293820: sw          $t2, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = ctx->r10;
    // 0x80293824: swc1        $f8, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f8.u32l;
L_80293828:
    // 0x80293828: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8029382C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80293830: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80293834: jr          $ra
    // 0x80293838: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80293838: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void D_802EFEA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFF24: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802EFF28: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802EFF2C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802EFF30: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EFF34: swc1        $f12, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f12.u32l;
    // 0x802EFF38: swc1        $f14, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f14.u32l;
    // 0x802EFF3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802EFF40: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802EFF44: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802EFF48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802EFF4C: mul.s       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802EFF50: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EFF54: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802EFF58: swc1        $f0, 0x13C($a0)
    MEM_W(0X13C, ctx->r4) = ctx->f0.u32l;
    // 0x802EFF5C: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802EFF60: nop

    // 0x802EFF64: mul.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x802EFF68: nop

    // 0x802EFF6C: mul.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x802EFF70: swc1        $f2, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f2.u32l;
    // 0x802EFF74: swc1        $f2, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->f2.u32l;
    // 0x802EFF78: swc1        $f10, 0x134($a0)
    MEM_W(0X134, ctx->r4) = ctx->f10.u32l;
    // 0x802EFF7C: jr          $ra
    // 0x802EFF80: swc1        $f18, 0x138($a0)
    MEM_W(0X138, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x802EFF80: swc1        $f18, 0x138($a0)
    MEM_W(0X138, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void D_80205ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205AC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80205AC4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80205AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205ACC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80205AD0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80205AD4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80205AD8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80205ADC: jal         0x80231C58
    // 0x80205AE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205AE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80205AE4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80205AE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80205AEC: bne         $v0, $zero, L_80205B5C
    if (ctx->r2 != 0) {
        // 0x80205AF0: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_80205B5C;
    }
    // 0x80205AF0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80205AF4: beq         $v1, $zero, L_80205B34
    if (ctx->r3 == 0) {
        // 0x80205AF8: lui         $t9, 0x0
        ctx->r25 = S32(0X0 << 16);
            goto L_80205B34;
    }
    // 0x80205AF8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80205AFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80205B00: bne         $v1, $at, L_80205B5C
    if (ctx->r3 != ctx->r1) {
        // 0x80205B04: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_80205B5C;
    }
    // 0x80205B04: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80205B08: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80205B0C: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205B10: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205B14: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205B18: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80205B1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80205B20: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205B24: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205B28: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80205B2C: b           L_80205B5C
    // 0x80205B30: sw          $a1, 0x2D4($t8)
    MEM_W(0X2D4, ctx->r24) = ctx->r5;
        goto L_80205B5C;
    // 0x80205B30: sw          $a1, 0x2D4($t8)
    MEM_W(0X2D4, ctx->r24) = ctx->r5;
L_80205B34:
    // 0x80205B34: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80205B38: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80205B3C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80205B40: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80205B44: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80205B48: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80205B4C: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80205B50: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80205B54: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80205B58: sw          $a1, 0x2D0($t1)
    MEM_W(0X2D0, ctx->r9) = ctx->r5;
L_80205B5C:
    // 0x80205B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80205B60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205B64: jr          $ra
    // 0x80205B68: nop

    return;
    // 0x80205B68: nop

;}
RECOMP_FUNC void D_8022B038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B038: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022B03C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8022B040: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8022B044: ori         $at, $at, 0xA801
    ctx->r1 = ctx->r1 | 0XA801;
    // 0x8022B048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B04C: sltu        $at, $a1, $at
    ctx->r1 = ctx->r5 < ctx->r1 ? 1 : 0;
    // 0x8022B050: beq         $at, $zero, L_8022B084
    if (ctx->r1 == 0) {
        // 0x8022B054: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022B084;
    }
    // 0x8022B054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B058: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8022B05C: ori         $a0, $a0, 0xA800
    ctx->r4 = ctx->r4 | 0XA800;
    // 0x8022B060: sltu        $at, $a1, $a0
    ctx->r1 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x8022B064: beq         $at, $zero, L_8022B0B8
    if (ctx->r1 == 0) {
        // 0x8022B068: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8022B0B8;
    }
    // 0x8022B068: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8022B06C:
    // 0x8022B06C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B070: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022B074: bne         $at, $zero, L_8022B06C
    if (ctx->r1 != 0) {
        // 0x8022B078: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B06C;
    }
    // 0x8022B078: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8022B07C: b           L_8022B0B8
    // 0x8022B080: nop

        goto L_8022B0B8;
    // 0x8022B080: nop

L_8022B084:
    // 0x8022B084: jal         0x80204530
    // 0x8022B088: nop

    static_3_80204530(rdram, ctx);
        goto after_0;
    // 0x8022B088: nop

    after_0:
    // 0x8022B08C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022B090: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x8022B094: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8022B098: ori         $a0, $a0, 0xA800
    ctx->r4 = ctx->r4 | 0XA800;
    // 0x8022B09C: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x8022B0A0: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022B0A4: beq         $at, $zero, L_8022B0B8
    if (ctx->r1 == 0) {
        // 0x8022B0A8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8022B0B8;
    }
L_8022B0A8:
    // 0x8022B0A8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B0AC: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022B0B0: bne         $at, $zero, L_8022B0A8
    if (ctx->r1 != 0) {
        // 0x8022B0B4: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B0A8;
    }
    // 0x8022B0B4: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
L_8022B0B8:
    // 0x8022B0B8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022B0BC: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8022B0C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8022B0C4: ori         $at, $at, 0x5801
    ctx->r1 = ctx->r1 | 0X5801;
    // 0x8022B0C8: sltu        $at, $a1, $at
    ctx->r1 = ctx->r5 < ctx->r1 ? 1 : 0;
    // 0x8022B0CC: bne         $at, $zero, L_8022B108
    if (ctx->r1 != 0) {
        // 0x8022B0D0: lui         $v0, 0x8020
        ctx->r2 = S32(0X8020 << 16);
            goto L_8022B108;
    }
    // 0x8022B0D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B0D4: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x8022B0D8: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022B0DC: beq         $at, $zero, L_8022B108
    if (ctx->r1 == 0) {
        // 0x8022B0E0: sltu        $at, $a1, $v0
        ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
            goto L_8022B108;
    }
    // 0x8022B0E0: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022B0E4: beq         $at, $zero, L_8022B134
    if (ctx->r1 == 0) {
        // 0x8022B0E8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8022B134;
    }
    // 0x8022B0E8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8022B0EC:
    // 0x8022B0EC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B0F0: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022B0F4: bne         $at, $zero, L_8022B0EC
    if (ctx->r1 != 0) {
        // 0x8022B0F8: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B0EC;
    }
    // 0x8022B0F8: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8022B0FC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022B100: b           L_8022B134
    // 0x8022B104: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_8022B134;
    // 0x8022B104: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_8022B108:
    // 0x8022B108: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B10C: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x8022B110: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8022B114: beq         $v0, $zero, L_8022B134
    if (ctx->r2 == 0) {
        // 0x8022B118: ori         $v1, $v1, 0x5800
        ctx->r3 = ctx->r3 | 0X5800;
            goto L_8022B134;
    }
    // 0x8022B118: ori         $v1, $v1, 0x5800
    ctx->r3 = ctx->r3 | 0X5800;
L_8022B11C:
    // 0x8022B11C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B120: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022B124: bne         $at, $zero, L_8022B11C
    if (ctx->r1 != 0) {
        // 0x8022B128: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B11C;
    }
    // 0x8022B128: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8022B12C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022B130: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_8022B134:
    // 0x8022B134: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022B138: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B13C: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022B140: bne         $at, $zero, L_8022B174
    if (ctx->r1 != 0) {
        // 0x8022B144: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_8022B174;
    }
    // 0x8022B144: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022B148: lui         $v0, 0x803D
    ctx->r2 = S32(0X803D << 16);
    // 0x8022B14C: ori         $v0, $v0, 0xA800
    ctx->r2 = ctx->r2 | 0XA800;
    // 0x8022B150: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022B154: beq         $at, $zero, L_8022B194
    if (ctx->r1 == 0) {
        // 0x8022B158: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8022B194;
    }
    // 0x8022B158: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8022B15C:
    // 0x8022B15C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B160: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022B164: bne         $at, $zero, L_8022B15C
    if (ctx->r1 != 0) {
        // 0x8022B168: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B15C;
    }
    // 0x8022B168: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8022B16C: b           L_8022B198
    // 0x8022B170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022B198;
    // 0x8022B170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022B174:
    // 0x8022B174: beq         $v0, $zero, L_8022B194
    if (ctx->r2 == 0) {
        // 0x8022B178: addiu       $v1, $v1, 0x0
        ctx->r3 = ADD32(ctx->r3, 0X0);
            goto L_8022B194;
    }
    // 0x8022B178: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022B17C: lui         $v0, 0x803D
    ctx->r2 = S32(0X803D << 16);
    // 0x8022B180: ori         $v0, $v0, 0xA800
    ctx->r2 = ctx->r2 | 0XA800;
L_8022B184:
    // 0x8022B184: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B188: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022B18C: bne         $at, $zero, L_8022B184
    if (ctx->r1 != 0) {
        // 0x8022B190: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B184;
    }
    // 0x8022B190: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
L_8022B194:
    // 0x8022B194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022B198:
    // 0x8022B198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022B19C: jr          $ra
    // 0x8022B1A0: nop

    return;
    // 0x8022B1A0: nop

;}
RECOMP_FUNC void D_802D1CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1D3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D1D40: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802D1D44: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802D1D48: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802D1D4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D1D50: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802D1D54:
    // 0x802D1D54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802D1D58: jal         0x80301DE0
    // 0x802D1D5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80301DE0(rdram, ctx);
        goto after_0;
    // 0x802D1D5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x802D1D60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802D1D64: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x802D1D68: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x802D1D6C: bne         $at, $zero, L_802D1D54
    if (ctx->r1 != 0) {
        // 0x802D1D70: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_802D1D54;
    }
    // 0x802D1D70: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x802D1D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1D78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802D1D7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802D1D80: jr          $ra
    // 0x802D1D84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802D1D84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802070E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802070E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802070E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802070E8: jal         0x80207040
    // 0x802070EC: nop

    static_3_80207040(rdram, ctx);
        goto after_0;
    // 0x802070EC: nop

    after_0:
    // 0x802070F0: bne         $v0, $zero, L_80207108
    if (ctx->r2 != 0) {
        // 0x802070F4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80207108;
    }
    // 0x802070F4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802070F8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x802070FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80207100: b           L_802071B4
    // 0x80207104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802071B4;
    // 0x80207104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207108:
    // 0x80207108: jal         0x802070D4
    // 0x8020710C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_802070D4(rdram, ctx);
        goto after_1;
    // 0x8020710C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x80207110: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80207114: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80207118: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8020711C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80207120: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80207124: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80207128: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8020712C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80207130: bgez        $t8, L_80207148
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80207134: cvt.d.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.d = CVT_D_W(ctx->f4.u32l);
            goto L_80207148;
    }
    // 0x80207134: cvt.d.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.d = CVT_D_W(ctx->f4.u32l);
    // 0x80207138: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8020713C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80207140: nop

    // 0x80207144: add.d       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f2.d = ctx->f2.d + ctx->f6.d;
L_80207148:
    // 0x80207148: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8020714C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80207150: ldc1        $f8, 0x0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X0);
    // 0x80207154: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80207158: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8020715C: mul.d       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f8.d);
    // 0x80207160: bgez        $t9, L_80207178
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80207164: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_80207178;
    }
    // 0x80207164: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80207168: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8020716C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80207170: nop

    // 0x80207174: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_80207178:
    // 0x80207178: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x8020717C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80207180: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80207184: bgez        $t0, L_8020719C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80207188: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_8020719C;
    }
    // 0x80207188: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8020718C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80207190: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80207194: nop

    // 0x80207198: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_8020719C:
    // 0x8020719C: sub.d       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f16.d - ctx->f6.d;
    // 0x802071A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802071A4: ldc1        $f18, 0x0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X0);
    // 0x802071A8: div.d       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x802071AC: add.d       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f2.d + ctx->f12.d;
    // 0x802071B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802071B4:
    // 0x802071B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802071B8: jr          $ra
    // 0x802071BC: nop

    return;
    // 0x802071BC: nop

;}
RECOMP_FUNC void D_802E3B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3BA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E3BA4: bne         $a0, $zero, L_802E3BBC
    if (ctx->r4 != 0) {
        // 0x802E3BA8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802E3BBC;
    }
    // 0x802E3BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E3BAC: jal         0x802C67EC
    // 0x802E3BB0: addiu       $a0, $zero, 0x1A0
    ctx->r4 = ADD32(0, 0X1A0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802E3BB0: addiu       $a0, $zero, 0x1A0
    ctx->r4 = ADD32(0, 0X1A0);
    after_0:
    // 0x802E3BB4: beq         $v0, $zero, L_802E3BC8
    if (ctx->r2 == 0) {
        // 0x802E3BB8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802E3BC8;
    }
    // 0x802E3BB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802E3BBC:
    // 0x802E3BBC: jal         0x802C498C
    // 0x802E3BC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802C498C(rdram, ctx);
        goto after_1;
    // 0x802E3BC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802E3BC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802E3BC8:
    // 0x802E3BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E3BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E3BD0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802E3BD4: jr          $ra
    // 0x802E3BD8: nop

    return;
    // 0x802E3BD8: nop

;}
RECOMP_FUNC void D_80247440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247440: bne         $a0, $zero, L_80247450
    if (ctx->r4 != 0) {
        // 0x80247444: nop
    
            goto L_80247450;
    }
    // 0x80247444: nop

    // 0x80247448: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8024744C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
L_80247450:
    // 0x80247450: jr          $ra
    // 0x80247454: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    return;
    // 0x80247454: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void func_802D18E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1960: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D1964: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802D1968: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802D196C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802D1970: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802D1974: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802D1978: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D197C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802D1980:
    // 0x802D1980: sll         $t6, $s0, 5
    ctx->r14 = S32(ctx->r16 << 5);
    // 0x802D1984: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x802D1988: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802D198C: c.le.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl <= ctx->f4.fl;
    // 0x802D1990: nop

    // 0x802D1994: bc1fl       L_802D19B0
    if (!c1cs) {
        // 0x802D1998: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802D19B0;
    }
    goto skip_0;
    // 0x802D1998: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x802D199C: jal         0x80201FB8
    // 0x802D19A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80201FB8(rdram, ctx);
        goto after_0;
    // 0x802D19A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802D19A4: jal         0x80201448
    // 0x802D19A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80201448(rdram, ctx);
        goto after_1;
    // 0x802D19A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802D19AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_802D19B0:
    // 0x802D19B0: jal         0x80301CA0
    // 0x802D19B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80301CA0(rdram, ctx);
        goto after_2;
    // 0x802D19B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x802D19B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802D19BC: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x802D19C0: slti        $at, $t8, 0xFF
    ctx->r1 = SIGNED(ctx->r24) < 0XFF ? 1 : 0;
    // 0x802D19C4: bne         $at, $zero, L_802D1980
    if (ctx->r1 != 0) {
        // 0x802D19C8: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_802D1980;
    }
    // 0x802D19C8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x802D19CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802D19D0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802D19D4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802D19D8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802D19DC: jr          $ra
    // 0x802D19E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802D19E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80245098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245098: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8024509C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802450A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802450A4: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x802450A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802450AC: beq         $t6, $zero, L_802450CC
    if (ctx->r14 == 0) {
        // 0x802450B0: nop
    
            goto L_802450CC;
    }
    // 0x802450B0: nop

    // 0x802450B4: jal         0x802456A0
    // 0x802450B8: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_0;
    // 0x802450B8: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x802450BC: beq         $v0, $zero, L_802450CC
    if (ctx->r2 == 0) {
        // 0x802450C0: nop
    
            goto L_802450CC;
    }
    // 0x802450C0: nop

    // 0x802450C4: b           L_80245290
    // 0x802450C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80245290;
    // 0x802450C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802450CC:
    // 0x802450CC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802450D0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x802450D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802450D8: jal         0x80245710
    // 0x802450DC: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    static_3_80245710(rdram, ctx);
        goto after_1;
    // 0x802450DC: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x802450E0: beq         $v0, $zero, L_802450F0
    if (ctx->r2 == 0) {
        // 0x802450E4: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_802450F0;
    }
    // 0x802450E4: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x802450E8: b           L_80245290
    // 0x802450EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80245290;
    // 0x802450EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802450F0:
    // 0x802450F0: addiu       $a1, $sp, 0x82
    ctx->r5 = ADD32(ctx->r29, 0X82);
    // 0x802450F4: jal         0x80244B3C
    // 0x802450F8: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    static_3_80244B3C(rdram, ctx);
        goto after_2;
    // 0x802450F8: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_2:
    // 0x802450FC: lhu         $t7, 0x82($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X82);
    // 0x80245100: lhu         $t8, 0x7C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X7C);
    // 0x80245104: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80245108: bne         $t7, $t8, L_80245124
    if (ctx->r15 != ctx->r24) {
        // 0x8024510C: sw          $a1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r5;
            goto L_80245124;
    }
    // 0x8024510C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80245110: lhu         $t9, 0x80($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X80);
    // 0x80245114: lhu         $t1, 0x7E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X7E);
    // 0x80245118: nop

    // 0x8024511C: beq         $t9, $t1, L_80245174
    if (ctx->r25 == ctx->r9) {
        // 0x80245120: lw          $t3, 0x38($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X38);
            goto L_80245174;
    }
    // 0x80245120: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
L_80245124:
    // 0x80245124: jal         0x80244F84
    // 0x80245128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80244F84(rdram, ctx);
        goto after_3;
    // 0x80245128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8024512C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80245130: bne         $v0, $at, L_80245160
    if (ctx->r2 != ctx->r1) {
        // 0x80245134: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80245160;
    }
    // 0x80245134: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80245138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024513C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80245140: jal         0x80244C38
    // 0x80245144: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    static_3_80244C38(rdram, ctx);
        goto after_4;
    // 0x80245144: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x80245148: beq         $v0, $zero, L_80245158
    if (ctx->r2 == 0) {
        // 0x8024514C: addiu       $t2, $sp, 0x40
        ctx->r10 = ADD32(ctx->r29, 0X40);
            goto L_80245158;
    }
    // 0x8024514C: addiu       $t2, $sp, 0x40
    ctx->r10 = ADD32(ctx->r29, 0X40);
    // 0x80245150: b           L_80245290
    // 0x80245154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80245290;
    // 0x80245154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80245158:
    // 0x80245158: b           L_80245170
    // 0x8024515C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
        goto L_80245170;
    // 0x8024515C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
L_80245160:
    // 0x80245160: beq         $v0, $zero, L_80245174
    if (ctx->r2 == 0) {
        // 0x80245164: lw          $t3, 0x38($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X38);
            goto L_80245174;
    }
    // 0x80245164: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80245168: b           L_8024528C
    // 0x8024516C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8024528C;
    // 0x8024516C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80245170:
    // 0x80245170: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
L_80245174:
    // 0x80245174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80245178: lhu         $t4, 0x18($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X18);
    // 0x8024517C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80245180: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80245184: bne         $t5, $zero, L_802451C4
    if (ctx->r13 != 0) {
        // 0x80245188: lw          $v1, 0x38($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X38);
            goto L_802451C4;
    }
    // 0x80245188: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8024518C: jal         0x80244C38
    // 0x80245190: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    static_3_80244C38(rdram, ctx);
        goto after_5;
    // 0x80245190: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_5:
    // 0x80245194: beq         $v0, $zero, L_802451A8
    if (ctx->r2 == 0) {
        // 0x80245198: lhu         $t7, 0x58($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X58);
            goto L_802451A8;
    }
    // 0x80245198: lhu         $t7, 0x58($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X58);
    // 0x8024519C: b           L_80245290
    // 0x802451A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80245290;
    // 0x802451A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802451A4: lhu         $t7, 0x58($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X58);
L_802451A8:
    // 0x802451A8: addiu       $t6, $sp, 0x40
    ctx->r14 = ADD32(ctx->r29, 0X40);
    // 0x802451AC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802451B0: bne         $t8, $zero, L_802451C0
    if (ctx->r24 != 0) {
        // 0x802451B4: sw          $t6, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r14;
            goto L_802451C0;
    }
    // 0x802451B4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x802451B8: b           L_8024528C
    // 0x802451BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8024528C;
    // 0x802451BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_802451C0:
    // 0x802451C0: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
L_802451C4:
    // 0x802451C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802451C8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802451CC: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x802451D0: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x802451D4: addiu       $a2, $v1, 0x2
    ctx->r6 = ADD32(ctx->r3, 0X2);
    // 0x802451D8: addiu       $a3, $v1, 0x3
    ctx->r7 = ADD32(ctx->r3, 0X3);
L_802451DC:
    // 0x802451DC: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x802451E0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802451E4: sb          $t9, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r25;
    // 0x802451E8: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x802451EC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802451F0: sb          $t1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r9;
    // 0x802451F4: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    // 0x802451F8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802451FC: sb          $t2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r10;
    // 0x80245200: lbu         $t4, 0x0($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X0);
    // 0x80245204: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80245208: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8024520C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80245210: bne         $a0, $t0, L_802451DC
    if (ctx->r4 != ctx->r8) {
        // 0x80245214: sb          $t4, 0xB($v0)
        MEM_B(0XB, ctx->r2) = ctx->r12;
            goto L_802451DC;
    }
    // 0x80245214: sb          $t4, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r12;
    // 0x80245218: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8024521C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80245220: lbu         $t3, 0x1B($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X1B);
    // 0x80245224: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80245228: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x8024522C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80245230: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80245234: lbu         $t7, 0x1A($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1A);
    // 0x80245238: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8024523C: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x80245240: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80245244: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80245248: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x8024524C: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x80245250: addu        $t4, $t0, $v1
    ctx->r12 = ADD32(ctx->r8, ctx->r3);
    // 0x80245254: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x80245258: sw          $t1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r9;
    // 0x8024525C: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    // 0x80245260: sw          $t0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r8;
    // 0x80245264: sw          $t4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r12;
    // 0x80245268: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8024526C: addiu       $a3, $s0, 0x2C
    ctx->r7 = ADD32(ctx->r16, 0X2C);
    // 0x80245270: jal         0x80245710
    // 0x80245274: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    static_3_80245710(rdram, ctx);
        goto after_6;
    // 0x80245274: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    after_6:
    // 0x80245278: beq         $v0, $zero, L_80245288
    if (ctx->r2 == 0) {
        // 0x8024527C: nop
    
            goto L_80245288;
    }
    // 0x8024527C: nop

    // 0x80245280: b           L_80245290
    // 0x80245284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80245290;
    // 0x80245284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80245288:
    // 0x80245288: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024528C:
    // 0x8024528C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80245290:
    // 0x80245290: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80245294: jr          $ra
    // 0x80245298: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80245298: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void D_802E1D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1E04: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802E1E08: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802E1E0C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802E1E10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E1E14: beq         $v0, $at, L_802E1E38
    if (ctx->r2 == ctx->r1) {
        // 0x802E1E18: sw          $a0, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r4;
            goto L_802E1E38;
    }
    // 0x802E1E18: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x802E1E1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802E1E20: beq         $v0, $at, L_802E1E48
    if (ctx->r2 == ctx->r1) {
        // 0x802E1E24: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802E1E48;
    }
    // 0x802E1E24: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802E1E28: beql        $v0, $at, L_802E1E5C
    if (ctx->r2 == ctx->r1) {
        // 0x802E1E2C: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_802E1E5C;
    }
    goto skip_0;
    // 0x802E1E2C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    skip_0:
    // 0x802E1E30: b           L_802E1E6C
    // 0x802E1E34: lwc1        $f0, 0x4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4);
        goto L_802E1E6C;
    // 0x802E1E34: lwc1        $f0, 0x4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4);
L_802E1E38:
    // 0x802E1E38: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x802E1E3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802E1E40: b           L_802E1E68
    // 0x802E1E44: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
        goto L_802E1E68;
    // 0x802E1E44: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
L_802E1E48:
    // 0x802E1E48: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802E1E4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802E1E50: b           L_802E1E68
    // 0x802E1E54: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
        goto L_802E1E68;
    // 0x802E1E54: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x802E1E58: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_802E1E5C:
    // 0x802E1E5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802E1E60: nop

    // 0x802E1E64: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
L_802E1E68:
    // 0x802E1E68: lwc1        $f0, 0x4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4);
L_802E1E6C:
    // 0x802E1E6C: jr          $ra
    // 0x802E1E70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802E1E70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_802EBC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EBCD8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802EBCDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802EBCE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EBCE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EBCE8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802EBCEC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802EBCF0: swc1        $f0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f0.u32l;
    // 0x802EBCF4: bc1fl       L_802EBD0C
    if (!c1cs) {
        // 0x802EBCF8: swc1        $f0, 0xD0($a0)
        MEM_W(0XD0, ctx->r4) = ctx->f0.u32l;
            goto L_802EBD0C;
    }
    goto skip_0;
    // 0x802EBCF8: swc1        $f0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f0.u32l;
    skip_0:
    // 0x802EBCFC: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    // 0x802EBD00: b           L_802EBD0C
    // 0x802EBD04: swc1        $f4, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f4.u32l;
        goto L_802EBD0C;
    // 0x802EBD04: swc1        $f4, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f4.u32l;
    // 0x802EBD08: swc1        $f0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f0.u32l;
L_802EBD0C:
    // 0x802EBD0C: jal         0x8031AC64
    // 0x802EBD10: nop

    static_3_8031AC64(rdram, ctx);
        goto after_0;
    // 0x802EBD10: nop

    after_0:
    // 0x802EBD14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EBD18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EBD1C: jr          $ra
    // 0x802EBD20: nop

    return;
    // 0x802EBD20: nop

;}
RECOMP_FUNC void D_802319F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802319F0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802319F4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802319F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802319FC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80231A00: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80231A04: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80231A08: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80231A0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80231A10: bne         $t6, $zero, L_80231B08
    if (ctx->r14 != 0) {
        // 0x80231A14: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80231B08;
    }
    // 0x80231A14: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80231A18: bgez        $s1, L_80231A2C
    if (SIGNED(ctx->r17) >= 0) {
        // 0x80231A1C: andi        $t7, $s1, 0x7
        ctx->r15 = ctx->r17 & 0X7;
            goto L_80231A2C;
    }
    // 0x80231A1C: andi        $t7, $s1, 0x7
    ctx->r15 = ctx->r17 & 0X7;
    // 0x80231A20: beq         $t7, $zero, L_80231A2C
    if (ctx->r15 == 0) {
        // 0x80231A24: nop
    
            goto L_80231A2C;
    }
    // 0x80231A24: nop

    // 0x80231A28: addiu       $t7, $t7, -0x8
    ctx->r15 = ADD32(ctx->r15, -0X8);
L_80231A2C:
    // 0x80231A2C: beq         $t7, $zero, L_80231A48
    if (ctx->r15 == 0) {
        // 0x80231A30: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80231A48;
    }
    // 0x80231A30: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231A34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80231A38: jal         0x80231A24
    // 0x80231A3C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80231A3C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80231A40: b           L_80231B0C
    // 0x80231A44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80231B0C;
    // 0x80231A44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80231A48:
    // 0x80231A48: bgez        $a3, L_80231A5C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80231A4C: andi        $t8, $a3, 0x1
        ctx->r24 = ctx->r7 & 0X1;
            goto L_80231A5C;
    }
    // 0x80231A4C: andi        $t8, $a3, 0x1
    ctx->r24 = ctx->r7 & 0X1;
    // 0x80231A50: beq         $t8, $zero, L_80231A5C
    if (ctx->r24 == 0) {
        // 0x80231A54: nop
    
            goto L_80231A5C;
    }
    // 0x80231A54: nop

    // 0x80231A58: addiu       $t8, $t8, -0x2
    ctx->r24 = ADD32(ctx->r24, -0X2);
L_80231A5C:
    // 0x80231A5C: beq         $t8, $zero, L_80231A7C
    if (ctx->r24 == 0) {
        // 0x80231A60: lui         $t9, 0x0
        ctx->r25 = S32(0X0 << 16);
            goto L_80231A7C;
    }
    // 0x80231A60: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80231A64: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231A68: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80231A6C: jal         0x80231A24
    // 0x80231A70: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80231A70: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80231A74: b           L_80231B0C
    // 0x80231A78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80231B0C;
    // 0x80231A78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80231A7C:
    // 0x80231A7C: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80231A80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80231A84: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x80231A88: sltu        $at, $t9, $s0
    ctx->r1 = ctx->r25 < ctx->r16 ? 1 : 0;
    // 0x80231A8C: beq         $at, $zero, L_80231AA8
    if (ctx->r1 == 0) {
        // 0x80231A90: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80231AA8;
    }
    // 0x80231A90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80231A94: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231A98: jal         0x80231A24
    // 0x80231A9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80231A9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x80231AA0: b           L_80231B0C
    // 0x80231AA4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80231B0C;
    // 0x80231AA4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80231AA8:
    // 0x80231AA8: beq         $t0, $zero, L_80231ABC
    if (ctx->r8 == 0) {
        // 0x80231AAC: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_80231ABC;
    }
    // 0x80231AAC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80231AB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80231AB4: and         $t1, $s0, $at
    ctx->r9 = ctx->r16 & ctx->r1;
    // 0x80231AB8: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
L_80231ABC:
    // 0x80231ABC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80231AC0: jal         0x8023CE80
    // 0x80231AC4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_8023CE80(rdram, ctx);
        goto after_3;
    // 0x80231AC4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_3:
    // 0x80231AC8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80231ACC: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80231AD0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231AD4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80231AD8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80231ADC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80231AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80231AE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80231AE8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80231AEC: jal         0x80237E10
    // 0x80231AF0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80237E10(rdram, ctx);
        goto after_4;
    // 0x80231AF0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_4:
    // 0x80231AF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80231AF8: jal         0x8023F020
    // 0x80231AFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023F020(rdram, ctx);
        goto after_5;
    // 0x80231AFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80231B00: jal         0x80230F68
    // 0x80231B04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80230F68(rdram, ctx);
        goto after_6;
    // 0x80231B04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
L_80231B08:
    // 0x80231B08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80231B0C:
    // 0x80231B0C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80231B10: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80231B14: jr          $ra
    // 0x80231B18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80231B18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_80291938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802919B8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802919BC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802919C0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802919C4: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x802919C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802919CC: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x802919D0: jal         0x802C51D0
    // 0x802919D4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x802919D4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x802919D8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802919DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802919E0: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    // 0x802919E4: jal         0x8022A0D0
    // 0x802919E8: lui         $a3, 0xC000
    ctx->r7 = S32(0XC000 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802919E8: lui         $a3, 0xC000
    ctx->r7 = S32(0XC000 << 16);
    after_1:
    // 0x802919EC: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x802919F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802919F4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802919F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802919FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80291A00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80291A04: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80291A08: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    // 0x80291A0C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80291A10: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80291A14: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80291A18: lw          $t6, 0x8C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8C);
    // 0x80291A1C: lui         $a3, 0x44DA
    ctx->r7 = S32(0X44DA << 16);
    // 0x80291A20: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80291A24: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80291A28: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80291A2C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80291A30: jal         0x802AB4C8
    // 0x80291A34: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_802AB4C8(rdram, ctx);
        goto after_2;
    // 0x80291A34: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_2:
    // 0x80291A38: beq         $v0, $zero, L_80291A88
    if (ctx->r2 == 0) {
        // 0x80291A3C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80291A88;
    }
    // 0x80291A3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80291A40: lui         $a1, 0x40D0
    ctx->r5 = S32(0X40D0 << 16);
    // 0x80291A44: jal         0x8029FB34
    // 0x80291A48: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    static_3_8029FB34(rdram, ctx);
        goto after_3;
    // 0x80291A48: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_3:
    // 0x80291A4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80291A50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80291A54: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80291A58: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80291A5C: lui         $a1, 0x3F59
    ctx->r5 = S32(0X3F59 << 16);
    // 0x80291A60: lui         $a2, 0x3EE6
    ctx->r6 = S32(0X3EE6 << 16);
    // 0x80291A64: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x80291A68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80291A6C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80291A70: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80291A74: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80291A78: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80291A7C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80291A80: jal         0x8029FA7C
    // 0x80291A84: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    static_3_8029FA7C(rdram, ctx);
        goto after_4;
    // 0x80291A84: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_4:
L_80291A88:
    // 0x80291A88: lw          $t8, 0xF8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XF8);
    // 0x80291A8C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80291A90: blez        $t9, L_80291AA4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80291A94: sw          $t9, 0xF8($s0)
        MEM_W(0XF8, ctx->r16) = ctx->r25;
            goto L_80291AA4;
    }
    // 0x80291A94: sw          $t9, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r25;
    // 0x80291A98: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80291A9C: sw          $zero, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = 0;
    // 0x80291AA0: swc1        $f16, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f16.u32l;
L_80291AA4:
    // 0x80291AA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80291AA8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80291AAC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80291AB0: jr          $ra
    // 0x80291AB4: nop

    return;
    // 0x80291AB4: nop

;}
RECOMP_FUNC void D_802E1AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1B30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802E1B34: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802E1B38: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x802E1B3C: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x802E1B40: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x802E1B44: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x802E1B48: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802E1B4C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802E1B50: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x802E1B54: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802E1B58: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802E1B5C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x802E1B60: lw          $s4, 0x374($a0)
    ctx->r20 = MEM_W(ctx->r4, 0X374);
    // 0x802E1B64: lw          $v0, 0x300($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X300);
    // 0x802E1B68: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802E1B6C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802E1B70: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x802E1B74: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x802E1B78: and         $t6, $s4, $at
    ctx->r14 = ctx->r20 & ctx->r1;
    // 0x802E1B7C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802E1B80: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x802E1B84: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x802E1B88: blez        $v0, L_802E1C3C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802E1B8C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_802E1C3C;
    }
    // 0x802E1B8C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802E1B90: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802E1B94: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802E1B98: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x802E1B9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_802E1BA0:
    // 0x802E1BA0: lw          $t7, 0x290($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X290);
    // 0x802E1BA4: bnel        $s4, $t7, L_802E1C2C
    if (ctx->r20 != ctx->r15) {
        // 0x802E1BA8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802E1C2C;
    }
    goto skip_0;
    // 0x802E1BA8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x802E1BAC: lwc1        $f4, 0x2AC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x802E1BB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E1BB4: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x802E1BB8: nop

    // 0x802E1BBC: bc1fl       L_802E1C2C
    if (!c1cs) {
        // 0x802E1BC0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802E1C2C;
    }
    goto skip_1;
    // 0x802E1BC0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x802E1BC4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E1BC8: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x802E1BCC: jal         0x80316B90
    // 0x802E1BD0: lw          $a1, 0x2C8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C8);
    static_3_80316B90(rdram, ctx);
        goto after_0;
    // 0x802E1BD0: lw          $a1, 0x2C8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C8);
    after_0:
    // 0x802E1BD4: lwc1        $f6, 0x2AC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x802E1BD8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E1BDC: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802E1BE0: swc1        $f8, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f8.u32l;
    // 0x802E1BE4: lwc1        $f10, 0x2AC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x802E1BE8: c.le.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl <= ctx->f20.fl;
    // 0x802E1BEC: nop

    // 0x802E1BF0: bc1fl       L_802E1C28
    if (!c1cs) {
        // 0x802E1BF4: lw          $v0, 0x300($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X300);
            goto L_802E1C28;
    }
    goto skip_2;
    // 0x802E1BF4: lw          $v0, 0x300($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X300);
    skip_2:
    // 0x802E1BF8: swc1        $f20, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f20.u32l;
    // 0x802E1BFC: lw          $a0, 0x290($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X290);
    // 0x802E1C00: jal         0x8021BA1C
    // 0x802E1C04: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    static_3_8021BA1C(rdram, ctx);
        goto after_1;
    // 0x802E1C04: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    after_1:
    // 0x802E1C08: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802E1C0C: lw          $a1, 0x2E4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2E4);
    // 0x802E1C10: jal         0x802AFE00
    // 0x802E1C14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AFE00(rdram, ctx);
        goto after_2;
    // 0x802E1C14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802E1C18: lw          $t8, 0x378($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X378);
    // 0x802E1C1C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x802E1C20: sw          $t9, 0x378($s1)
    MEM_W(0X378, ctx->r17) = ctx->r25;
    // 0x802E1C24: lw          $v0, 0x300($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X300);
L_802E1C28:
    // 0x802E1C28: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802E1C2C:
    // 0x802E1C2C: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802E1C30: bne         $at, $zero, L_802E1BA0
    if (ctx->r1 != 0) {
        // 0x802E1C34: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E1BA0;
    }
    // 0x802E1C34: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E1C38: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802E1C3C:
    // 0x802E1C3C: lw          $t0, 0x280($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X280);
    // 0x802E1C40: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802E1C44: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802E1C48: bne         $s4, $t0, L_802E1CC8
    if (ctx->r20 != ctx->r8) {
        // 0x802E1C4C: addiu       $s3, $s3, 0x0
        ctx->r19 = ADD32(ctx->r19, 0X0);
            goto L_802E1CC8;
    }
    // 0x802E1C4C: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x802E1C50: lwc1        $f16, 0x284($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X284);
    // 0x802E1C54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E1C58: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x802E1C5C: nop

    // 0x802E1C60: bc1fl       L_802E1CCC
    if (!c1cs) {
        // 0x802E1C64: lw          $v0, 0x370($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X370);
            goto L_802E1CCC;
    }
    goto skip_3;
    // 0x802E1C64: lw          $v0, 0x370($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X370);
    skip_3:
    // 0x802E1C68: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802E1C6C: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x802E1C70: jal         0x80316B90
    // 0x802E1C74: lw          $a1, 0x288($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X288);
    static_3_80316B90(rdram, ctx);
        goto after_3;
    // 0x802E1C74: lw          $a1, 0x288($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X288);
    after_3:
    // 0x802E1C78: lwc1        $f18, 0x284($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X284);
    // 0x802E1C7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E1C80: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x802E1C84: swc1        $f4, 0x284($s1)
    MEM_W(0X284, ctx->r17) = ctx->f4.u32l;
    // 0x802E1C88: lwc1        $f6, 0x284($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X284);
    // 0x802E1C8C: c.le.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl <= ctx->f20.fl;
    // 0x802E1C90: nop

    // 0x802E1C94: bc1fl       L_802E1CCC
    if (!c1cs) {
        // 0x802E1C98: lw          $v0, 0x370($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X370);
            goto L_802E1CCC;
    }
    goto skip_4;
    // 0x802E1C98: lw          $v0, 0x370($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X370);
    skip_4:
    // 0x802E1C9C: swc1        $f20, 0x284($s1)
    MEM_W(0X284, ctx->r17) = ctx->f20.u32l;
    // 0x802E1CA0: lw          $a0, 0x280($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X280);
    // 0x802E1CA4: jal         0x8021BA1C
    // 0x802E1CA8: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    static_3_8021BA1C(rdram, ctx);
        goto after_4;
    // 0x802E1CA8: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    after_4:
    // 0x802E1CAC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802E1CB0: lw          $a1, 0x28C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X28C);
    // 0x802E1CB4: jal         0x802AFE00
    // 0x802E1CB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AFE00(rdram, ctx);
        goto after_5;
    // 0x802E1CB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x802E1CBC: lw          $t1, 0x378($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X378);
    // 0x802E1CC0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x802E1CC4: sw          $t2, 0x378($s1)
    MEM_W(0X378, ctx->r17) = ctx->r10;
L_802E1CC8:
    // 0x802E1CC8: lw          $v0, 0x370($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X370);
L_802E1CCC:
    // 0x802E1CCC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x802E1CD0: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
    // 0x802E1CD4: blez        $v0, L_802E1D14
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802E1CD8: nop
    
            goto L_802E1D14;
    }
    // 0x802E1CD8: nop

L_802E1CDC:
    // 0x802E1CDC: lw          $a0, 0x304($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X304);
    // 0x802E1CE0: bnel        $s4, $a0, L_802E1D08
    if (ctx->r20 != ctx->r4) {
        // 0x802E1CE4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802E1D08;
    }
    goto skip_5;
    // 0x802E1CE4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x802E1CE8: jal         0x8021BAE0
    // 0x802E1CEC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    static_3_8021BAE0(rdram, ctx);
        goto after_6;
    // 0x802E1CEC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    after_6:
    // 0x802E1CF0: sw          $s3, 0x304($s0)
    MEM_W(0X304, ctx->r16) = ctx->r19;
    // 0x802E1CF4: lw          $t3, 0x378($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X378);
    // 0x802E1CF8: lw          $v0, 0x370($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X370);
    // 0x802E1CFC: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x802E1D00: sw          $t4, 0x378($s1)
    MEM_W(0X378, ctx->r17) = ctx->r12;
    // 0x802E1D04: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802E1D08:
    // 0x802E1D08: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802E1D0C: bne         $at, $zero, L_802E1CDC
    if (ctx->r1 != 0) {
        // 0x802E1D10: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E1CDC;
    }
    // 0x802E1D10: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802E1D14:
    // 0x802E1D14: jal         0x80311770
    // 0x802E1D18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80311770(rdram, ctx);
        goto after_7;
    // 0x802E1D18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x802E1D1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E1D20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802E1D24: swc1        $f0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f0.u32l;
    // 0x802E1D28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E1D2C: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x802E1D30: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x802E1D34: bc1fl       L_802E1D48
    if (!c1cs) {
        // 0x802E1D38: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_802E1D48;
    }
    goto skip_6;
    // 0x802E1D38: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_6:
    // 0x802E1D3C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E1D40: swc1        $f10, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f10.u32l;
    // 0x802E1D44: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802E1D48:
    // 0x802E1D48: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802E1D4C: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x802E1D50: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x802E1D54: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802E1D58: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802E1D5C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x802E1D60: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x802E1D64: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x802E1D68: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x802E1D6C: jr          $ra
    // 0x802E1D70: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x802E1D70: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802DD61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD69C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DD6A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802DD6A4: jr          $ra
    // 0x802DD6A8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802DD6A8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802963D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80296454: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80296458: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029645C: bne         $a0, $zero, L_80296474
    if (ctx->r4 != 0) {
        // 0x80296460: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80296474;
    }
    // 0x80296460: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80296464: jal         0x802C67EC
    // 0x80296468: ori         $a0, $zero, 0x95B8
    ctx->r4 = 0 | 0X95B8;
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80296468: ori         $a0, $zero, 0x95B8
    ctx->r4 = 0 | 0X95B8;
    after_0:
    // 0x8029646C: beq         $v0, $zero, L_802964F0
    if (ctx->r2 == 0) {
        // 0x80296470: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802964F0;
    }
    // 0x80296470: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80296474:
    // 0x80296474: jal         0x80308668
    // 0x80296478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x80296478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8029647C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80296480: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80296484: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x80296488: jal         0x802BF7EC
    // 0x8029648C: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    static_3_802BF7EC(rdram, ctx);
        goto after_2;
    // 0x8029648C: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    after_2:
    // 0x80296490: jal         0x802C498C
    // 0x80296494: addiu       $a0, $s0, 0x1128
    ctx->r4 = ADD32(ctx->r16, 0X1128);
    static_3_802C498C(rdram, ctx);
        goto after_3;
    // 0x80296494: addiu       $a0, $s0, 0x1128
    ctx->r4 = ADD32(ctx->r16, 0X1128);
    after_3:
    // 0x80296498: jal         0x802C498C
    // 0x8029649C: addiu       $a0, $s0, 0x12BC
    ctx->r4 = ADD32(ctx->r16, 0X12BC);
    static_3_802C498C(rdram, ctx);
        goto after_4;
    // 0x8029649C: addiu       $a0, $s0, 0x12BC
    ctx->r4 = ADD32(ctx->r16, 0X12BC);
    after_4:
    // 0x802964A0: jal         0x802C498C
    // 0x802964A4: addiu       $a0, $s0, 0x1450
    ctx->r4 = ADD32(ctx->r16, 0X1450);
    static_3_802C498C(rdram, ctx);
        goto after_5;
    // 0x802964A4: addiu       $a0, $s0, 0x1450
    ctx->r4 = ADD32(ctx->r16, 0X1450);
    after_5:
    // 0x802964A8: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802964AC: addiu       $a3, $a3, 0x2D1C
    ctx->r7 = ADD32(ctx->r7, 0X2D1C);
    // 0x802964B0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802964B4: addiu       $a0, $s0, 0x15E4
    ctx->r4 = ADD32(ctx->r16, 0X15E4);
    // 0x802964B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802964BC: jal         0x802C6930
    // 0x802964C0: addiu       $a2, $zero, 0x414
    ctx->r6 = ADD32(0, 0X414);
    static_3_802C6930(rdram, ctx);
        goto after_6;
    // 0x802964C0: addiu       $a2, $zero, 0x414
    ctx->r6 = ADD32(0, 0X414);
    after_6:
    // 0x802964C4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802964C8: addiu       $a0, $s0, 0x2634
    ctx->r4 = ADD32(ctx->r16, 0X2634);
    // 0x802964CC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802964D0: jal         0x802C6930
    // 0x802964D4: addiu       $a2, $zero, 0x414
    ctx->r6 = ADD32(0, 0X414);
    static_3_802C6930(rdram, ctx);
        goto after_7;
    // 0x802964D4: addiu       $a2, $zero, 0x414
    ctx->r6 = ADD32(0, 0X414);
    after_7:
    // 0x802964D8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802964DC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802964E0: addiu       $a0, $s0, 0x3EAC
    ctx->r4 = ADD32(ctx->r16, 0X3EAC);
    // 0x802964E4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802964E8: jal         0x802C6930
    // 0x802964EC: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    static_3_802C6930(rdram, ctx);
        goto after_8;
    // 0x802964EC: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    after_8:
L_802964F0:
    // 0x802964F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802964F4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802964F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802964FC: jr          $ra
    // 0x80296500: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80296500: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802458D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802458D4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802458D8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802458DC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802458E0: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802458E4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802458E8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802458EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802458F0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802458F4: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x802458F8: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802458FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
L_80245900:
    // 0x80245900: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80245904: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80245908: bne         $at, $zero, L_80245900
    if (ctx->r1 != 0) {
        // 0x8024590C: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_80245900;
    }
    // 0x8024590C: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x80245910: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80245914: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80245918: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8024591C: addiu       $t9, $zero, 0x21
    ctx->r25 = ADD32(0, 0X21);
    // 0x80245920: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80245924: lhu         $a0, 0x56($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X56);
    // 0x80245928: sw          $t6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r14;
    // 0x8024592C: sb          $t7, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r15;
    // 0x80245930: sb          $t8, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r24;
    // 0x80245934: sb          $t9, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r25;
    // 0x80245938: sb          $t1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r9;
    // 0x8024593C: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x80245940: jal         0x8024A590
    // 0x80245944: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    static_3_8024A590(rdram, ctx);
        goto after_0;
    // 0x80245944: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    after_0:
    // 0x80245948: lhu         $t2, 0x56($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X56);
    // 0x8024594C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80245950: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x80245954: or          $t4, $v0, $t3
    ctx->r12 = ctx->r2 | ctx->r11;
    // 0x80245958: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x8024595C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x80245960: sh          $t4, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r12;
    // 0x80245964: sb          $t5, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r13;
    // 0x80245968: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8024596C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80245970: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
L_80245974:
    // 0x80245974: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80245978: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x8024597C: bne         $at, $zero, L_80245974
    if (ctx->r1 != 0) {
        // 0x80245980: sb          $v0, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r2;
            goto L_80245974;
    }
    // 0x80245980: sb          $v0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r2;
    // 0x80245984: beq         $a3, $zero, L_802459D0
    if (ctx->r7 == 0) {
        // 0x80245988: addiu       $t6, $sp, 0x24
        ctx->r14 = ADD32(ctx->r29, 0X24);
            goto L_802459D0;
    }
    // 0x80245988: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x8024598C: blez        $a3, L_802459D0
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80245990: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802459D0;
    }
    // 0x80245990: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80245994: andi        $a0, $a3, 0x3
    ctx->r4 = ctx->r7 & 0X3;
    // 0x80245998: beq         $a0, $zero, L_802459B4
    if (ctx->r4 == 0) {
        // 0x8024599C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_802459B4;
    }
    // 0x8024599C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802459A0:
    // 0x802459A0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802459A4: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x802459A8: bne         $v0, $a2, L_802459A0
    if (ctx->r2 != ctx->r6) {
        // 0x802459AC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802459A0;
    }
    // 0x802459AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802459B0: beq         $a2, $a3, L_802459D0
    if (ctx->r6 == ctx->r7) {
        // 0x802459B4: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_802459D0;
    }
L_802459B4:
    // 0x802459B4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x802459B8: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x802459BC: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x802459C0: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x802459C4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802459C8: bne         $a2, $a3, L_802459B4
    if (ctx->r6 != ctx->r7) {
        // 0x802459CC: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_802459B4;
    }
    // 0x802459CC: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
L_802459D0:
    // 0x802459D0: or          $t9, $v1, $zero
    ctx->r25 = ctx->r3 | 0;
    // 0x802459D4: addiu       $t8, $t6, 0x24
    ctx->r24 = ADD32(ctx->r14, 0X24);
L_802459D8:
    // 0x802459D8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802459DC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802459E0: swl         $at, 0x0($t9)
    do_swl(rdram, 0X0, ctx->r25, ctx->r1);
    // 0x802459E4: swr         $at, 0x3($t9)
    do_swr(rdram, 0X3, ctx->r25, ctx->r1);
    // 0x802459E8: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x802459EC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x802459F0: swl         $at, -0x8($t9)
    do_swl(rdram, -0X8, ctx->r25, ctx->r1);
    // 0x802459F4: swr         $at, -0x5($t9)
    do_swr(rdram, -0X5, ctx->r25, ctx->r1);
    // 0x802459F8: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x802459FC: nop

    // 0x80245A00: swl         $at, -0x4($t9)
    do_swl(rdram, -0X4, ctx->r25, ctx->r1);
    // 0x80245A04: bne         $t6, $t8, L_802459D8
    if (ctx->r14 != ctx->r24) {
        // 0x80245A08: swr         $at, -0x1($t9)
        do_swr(rdram, -0X1, ctx->r25, ctx->r1);
            goto L_802459D8;
    }
    // 0x80245A08: swr         $at, -0x1($t9)
    do_swr(rdram, -0X1, ctx->r25, ctx->r1);
    // 0x80245A0C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80245A10: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x80245A14: swl         $at, 0x0($t9)
    do_swl(rdram, 0X0, ctx->r25, ctx->r1);
    // 0x80245A18: swr         $at, 0x3($t9)
    do_swr(rdram, 0X3, ctx->r25, ctx->r1);
    // 0x80245A1C: sb          $t1, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r9;
    // 0x80245A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245A24: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x80245A28: jr          $ra
    // 0x80245A2C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80245A2C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_8027E600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E678: jr          $ra
    // 0x8027E67C: lwc1        $f0, 0x32A8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32A8);
    return;
    // 0x8027E67C: lwc1        $f0, 0x32A8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32A8);
;}
RECOMP_FUNC void D_8029F518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F598: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8029F59C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029F5A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029F5A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8029F5A8: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8029F5AC: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8029F5B0: lwc1        $f2, 0x14($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8029F5B4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8029F5B8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8029F5BC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8029F5C0: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8029F5C4: jal         0x8022AA40
    // 0x8029F5C8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8029F5C8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x8029F5CC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8029F5D0: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8029F5D4: lwc1        $f14, 0x14($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8029F5D8: jal         0x8022AE1C
    // 0x8029F5DC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_8022AE1C(rdram, ctx);
        goto after_1;
    // 0x8029F5DC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x8029F5E0: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8029F5E4: jal         0x8022AE1C
    // 0x8029F5E8: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    static_3_8022AE1C(rdram, ctx);
        goto after_2;
    // 0x8029F5E8: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8029F5EC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8029F5F0: lwc1        $f14, 0x28($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8029F5F4: jal         0x8022AE1C
    // 0x8029F5F8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_8022AE1C(rdram, ctx);
        goto after_3;
    // 0x8029F5F8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_3:
    // 0x8029F5FC: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8029F600: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x8029F604: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x8029F608: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8029F60C: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8029F610: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x8029F614: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8029F618: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8029F61C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x8029F620: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8029F624: lwc1        $f16, 0x34($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8029F628: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8029F62C: lwc1        $f2, 0x30($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8029F630: sub.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8029F634: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8029F638: sub.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x8029F63C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8029F640: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8029F644: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x8029F648: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x8029F64C: jal         0x802D05CC
    // 0x8029F650: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    static_3_802D05CC(rdram, ctx);
        goto after_4;
    // 0x8029F650: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x8029F654: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8029F658: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8029F65C: jal         0x8022ADA8
    // 0x8029F660: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    static_3_8022ADA8(rdram, ctx);
        goto after_5;
    // 0x8029F660: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x8029F664: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8029F668: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8029F66C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8029F670: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8029F674: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    // 0x8029F678: nop

    // 0x8029F67C: bc1fl       L_8029F6A0
    if (!c1cs) {
        // 0x8029F680: c.eq.s      $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
            goto L_8029F6A0;
    }
    goto skip_0;
    // 0x8029F680: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    skip_0:
    // 0x8029F684: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x8029F688: nop

    // 0x8029F68C: bc1fl       L_8029F6A0
    if (!c1cs) {
        // 0x8029F690: c.eq.s      $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
            goto L_8029F6A0;
    }
    goto skip_1;
    // 0x8029F690: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    skip_1:
    // 0x8029F694: b           L_8029F6D4
    // 0x8029F698: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
        goto L_8029F6D4;
    // 0x8029F698: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
    // 0x8029F69C: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
L_8029F6A0:
    // 0x8029F6A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F6A4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8029F6A8: bc1fl       L_8029F6BC
    if (!c1cs) {
        // 0x8029F6AC: div.s       $f12, $f8, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
            goto L_8029F6BC;
    }
    goto skip_2;
    // 0x8029F6AC: div.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    skip_2:
    // 0x8029F6B0: b           L_8029F6D4
    // 0x8029F6B4: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
        goto L_8029F6D4;
    // 0x8029F6B4: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F6B8: div.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
L_8029F6BC:
    // 0x8029F6BC: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x8029F6C0: jal         0x8022AE1C
    // 0x8029F6C4: div.s       $f14, $f18, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_6;
    // 0x8029F6C4: div.s       $f14, $f18, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    after_6:
    // 0x8029F6C8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8029F6CC: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8029F6D0: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_8029F6D4:
    // 0x8029F6D4: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x8029F6D8: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8029F6DC: bc1fl       L_8029F700
    if (!c1cs) {
        // 0x8029F6E0: c.eq.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
            goto L_8029F700;
    }
    goto skip_3;
    // 0x8029F6E0: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    skip_3:
    // 0x8029F6E4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x8029F6E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F6EC: bc1fl       L_8029F700
    if (!c1cs) {
        // 0x8029F6F0: c.eq.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
            goto L_8029F700;
    }
    goto skip_4;
    // 0x8029F6F0: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    skip_4:
    // 0x8029F6F4: b           L_8029F734
    // 0x8029F6F8: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
        goto L_8029F734;
    // 0x8029F6F8: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F6FC: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
L_8029F700:
    // 0x8029F700: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F704: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8029F708: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8029F70C: bc1fl       L_8029F720
    if (!c1cs) {
        // 0x8029F710: div.s       $f12, $f4, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
            goto L_8029F720;
    }
    goto skip_5;
    // 0x8029F710: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    skip_5:
    // 0x8029F714: b           L_8029F734
    // 0x8029F718: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
        goto L_8029F734;
    // 0x8029F718: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F71C: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_8029F720:
    // 0x8029F720: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x8029F724: jal         0x8022AE1C
    // 0x8029F728: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_7;
    // 0x8029F728: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    after_7:
    // 0x8029F72C: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8029F730: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8029F734:
    // 0x8029F734: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029F738: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x8029F73C: jal         0x8022970C
    // 0x8029F740: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    func_8022970C(rdram, ctx);
        goto after_8;
    // 0x8029F740: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x8029F744: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8029F748: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8029F74C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029F750: swc1        $f6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f6.u32l;
    // 0x8029F754: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8029F758: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8029F75C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x8029F760: swc1        $f8, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f8.u32l;
    // 0x8029F764: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8029F768: jal         0x802D01D4
    // 0x8029F76C: swc1        $f10, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f10.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_9;
    // 0x8029F76C: swc1        $f10, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f10.u32l;
    after_9:
    // 0x8029F770: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8029F774: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029F778: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x8029F77C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8029F780: jal         0x802D01D4
    // 0x8029F784: nop

    static_3_802D01D4(rdram, ctx);
        goto after_10;
    // 0x8029F784: nop

    after_10:
    // 0x8029F788: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8029F78C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029F790: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x8029F794: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8029F798: jal         0x8022A0D0
    // 0x8029F79C: lui         $a3, 0x4170
    ctx->r7 = S32(0X4170 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_11;
    // 0x8029F79C: lui         $a3, 0x4170
    ctx->r7 = S32(0X4170 << 16);
    after_11:
    // 0x8029F7A0: lui         $a1, 0xBDB2
    ctx->r5 = S32(0XBDB2 << 16);
    // 0x8029F7A4: ori         $a1, $a1, 0xB8C7
    ctx->r5 = ctx->r5 | 0XB8C7;
    // 0x8029F7A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029F7AC: jal         0x802D01D4
    // 0x8029F7B0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_12;
    // 0x8029F7B0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_12:
    // 0x8029F7B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029F7B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029F7BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029F7C0: jr          $ra
    // 0x8029F7C4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8029F7C4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_802422B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802422B0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802422B4: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x802422B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802422BC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802422C0: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x802422C4: beq         $t7, $zero, L_802422D4
    if (ctx->r15 == 0) {
        // 0x802422C8: nop
    
            goto L_802422D4;
    }
    // 0x802422C8: nop

    // 0x802422CC: b           L_802422D8
    // 0x802422D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802422D8;
    // 0x802422D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802422D4:
    // 0x802422D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802422D8:
    // 0x802422D8: jr          $ra
    // 0x802422DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802422DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_802D5640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D56C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D56C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D56C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D56CC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D56D0: lbu         $t7, 0xC41($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XC41);
    // 0x802D56D4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802D56D8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802D56DC: beq         $t7, $at, L_802D575C
    if (ctx->r15 == ctx->r1) {
        // 0x802D56E0: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_802D575C;
    }
    // 0x802D56E0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802D56E4: beq         $t6, $zero, L_802D574C
    if (ctx->r14 == 0) {
        // 0x802D56E8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802D574C;
    }
    // 0x802D56E8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D56EC: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x802D56F0: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802D56F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D56F8: jal         0x80305E90
    // 0x802D56FC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    static_3_80305E90(rdram, ctx);
        goto after_0;
    // 0x802D56FC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x802D5700: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x802D5704: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D5708: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D570C: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802D5710: addiu       $a1, $v1, 0xC4C
    ctx->r5 = ADD32(ctx->r3, 0XC4C);
    // 0x802D5714: lbu         $a2, 0xC41($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0XC41);
    // 0x802D5718: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x802D571C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802D5720: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802D5724: jal         0x80302238
    // 0x802D5728: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x802D5728: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802D572C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D5730: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D5734: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802D5738: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x802D573C: jal         0x803025D8
    // 0x802D5740: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_2;
    // 0x802D5740: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802D5744: b           L_802D5760
    // 0x802D5748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802D5760;
    // 0x802D5748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D574C:
    // 0x802D574C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D5750: addiu       $a1, $a3, 0xC4C
    ctx->r5 = ADD32(ctx->r7, 0XC4C);
    // 0x802D5754: jal         0x80302414
    // 0x802D5758: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_3;
    // 0x802D5758: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
L_802D575C:
    // 0x802D575C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D5760:
    // 0x802D5760: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D5764: jr          $ra
    // 0x802D5768: nop

    return;
    // 0x802D5768: nop

;}
RECOMP_FUNC void D_802D2B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2BCC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802D2BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2BD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2BD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D2BDC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802D2BE0: jal         0x8030303C
    // 0x802D2BE4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    static_3_8030303C(rdram, ctx);
        goto after_0;
    // 0x802D2BE4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x802D2BE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802D2BEC: bnel        $v0, $at, L_802D2C08
    if (ctx->r2 != ctx->r1) {
        // 0x802D2BF0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802D2C08;
    }
    goto skip_0;
    // 0x802D2BF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x802D2BF4: jal         0x803031B0
    // 0x802D2BF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_803031B0(rdram, ctx);
        goto after_1;
    // 0x802D2BF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x802D2BFC: b           L_802D2C0C
    // 0x802D2C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D2C0C;
    // 0x802D2C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2C04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D2C08:
    // 0x802D2C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D2C0C:
    // 0x802D2C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2C10: jr          $ra
    // 0x802D2C14: nop

    return;
    // 0x802D2C14: nop

;}
RECOMP_FUNC void D_80279D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279D80: sw          $a1, 0x6F00($a0)
    MEM_W(0X6F00, ctx->r4) = ctx->r5;
    // 0x80279D84: jr          $ra
    // 0x80279D88: sw          $a2, 0x6FBC($a0)
    MEM_W(0X6FBC, ctx->r4) = ctx->r6;
    return;
    // 0x80279D88: sw          $a2, 0x6FBC($a0)
    MEM_W(0X6FBC, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void D_80227D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227D98: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80227D9C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80227DA0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80227DA4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80227DA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80227DAC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80227DB0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80227DB4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80227DB8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80227DBC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80227DC0: jal         0x80223840
    // 0x80227DC4: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227DC4: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80227DC8: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x80227DCC: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x80227DD0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80227DD4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227DD8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227DDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227DE0: jal         0x8022393C
    // 0x80227DE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80227DE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80227DE8: beq         $v0, $zero, L_80227E24
    if (ctx->r2 == 0) {
        // 0x80227DEC: lui         $s0, 0x434F
        ctx->r16 = S32(0X434F << 16);
            goto L_80227E24;
    }
    // 0x80227DEC: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x80227DF0: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
L_80227DF4:
    // 0x80227DF4: bnel        $v0, $s0, L_80227E0C
    if (ctx->r2 != ctx->r16) {
        // 0x80227DF8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80227E0C;
    }
    goto skip_0;
    // 0x80227DF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80227DFC: jal         0x80226790
    // 0x80227E00: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_80226790(rdram, ctx);
        goto after_2;
    // 0x80227E00: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x80227E04: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227E08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80227E0C:
    // 0x80227E0C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227E10: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227E14: jal         0x8022393C
    // 0x80227E18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80227E18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80227E1C: bne         $v0, $zero, L_80227DF4
    if (ctx->r2 != 0) {
        // 0x80227E20: nop
    
            goto L_80227DF4;
    }
    // 0x80227E20: nop

L_80227E24:
    // 0x80227E24: jal         0x802238F0
    // 0x80227E28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802238F0(rdram, ctx);
        goto after_4;
    // 0x80227E28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80227E2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80227E30: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80227E34: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80227E38: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80227E3C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80227E40: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80227E44: jr          $ra
    // 0x80227E48: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80227E48: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802E1324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E13A4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E13A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E13AC: jr          $ra
    // 0x802E13B0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E13B0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80276BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276C4C: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80276C50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80276C54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80276C58: lbu         $t6, 0x3343($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3343);
    // 0x80276C5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80276C60: bnel        $t6, $zero, L_80277084
    if (ctx->r14 != 0) {
        // 0x80276C64: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80277084;
    }
    goto skip_0;
    // 0x80276C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80276C68: lbu         $t7, 0x35E0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X35E0);
    // 0x80276C6C: bnel        $t7, $zero, L_80277084
    if (ctx->r15 != 0) {
        // 0x80276C70: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80277084;
    }
    goto skip_1;
    // 0x80276C70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80276C74: jal         0x802FA288
    // 0x80276C78: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA288(rdram, ctx);
        goto after_0;
    // 0x80276C78: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x80276C7C: bnel        $v0, $zero, L_80276D48
    if (ctx->r2 != 0) {
        // 0x80276C80: lbu         $v0, 0x4E38($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
            goto L_80276D48;
    }
    goto skip_2;
    // 0x80276C80: lbu         $v0, 0x4E38($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
    skip_2:
    // 0x80276C84: lw          $t8, 0x4E18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4E18);
    // 0x80276C88: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80276C8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80276C90: beql        $t8, $at, L_80276D48
    if (ctx->r24 == ctx->r1) {
        // 0x80276C94: lbu         $v0, 0x4E38($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
            goto L_80276D48;
    }
    goto skip_3;
    // 0x80276C94: lbu         $v0, 0x4E38($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
    skip_3:
    // 0x80276C98: jal         0x80223FC4
    // 0x80276C9C: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_1;
    // 0x80276C9C: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_1:
    // 0x80276CA0: bne         $v0, $zero, L_80276CC4
    if (ctx->r2 != 0) {
        // 0x80276CA4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80276CC4;
    }
    // 0x80276CA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80276CA8: jal         0x80223FC4
    // 0x80276CAC: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    static_3_80223FC4(rdram, ctx);
        goto after_2;
    // 0x80276CAC: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_2:
    // 0x80276CB0: beq         $v0, $zero, L_80276CDC
    if (ctx->r2 == 0) {
        // 0x80276CB4: lui         $t3, 0x0
        ctx->r11 = S32(0X0 << 16);
            goto L_80276CDC;
    }
    // 0x80276CB4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80276CB8: lbu         $t9, 0x4E38($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4E38);
    // 0x80276CBC: beq         $t9, $zero, L_80276CDC
    if (ctx->r25 == 0) {
        // 0x80276CC0: nop
    
            goto L_80276CDC;
    }
    // 0x80276CC0: nop

L_80276CC4:
    // 0x80276CC4: lbu         $t0, 0x4E38($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X4E38);
    // 0x80276CC8: sb          $zero, 0x8DE($s0)
    MEM_B(0X8DE, ctx->r16) = 0;
    // 0x80276CCC: sltu        $t1, $zero, $t0
    ctx->r9 = 0 < ctx->r8 ? 1 : 0;
    // 0x80276CD0: sltiu       $t2, $t1, 0x1
    ctx->r10 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x80276CD4: b           L_80276D44
    // 0x80276CD8: sb          $t2, 0x4E38($s0)
    MEM_B(0X4E38, ctx->r16) = ctx->r10;
        goto L_80276D44;
    // 0x80276CD8: sb          $t2, 0x4E38($s0)
    MEM_B(0X4E38, ctx->r16) = ctx->r10;
L_80276CDC:
    // 0x80276CDC: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x80276CE0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80276CE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80276CE8: bne         $t3, $at, L_80276CF8
    if (ctx->r11 != ctx->r1) {
        // 0x80276CEC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80276CF8;
    }
    // 0x80276CEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80276CF0: b           L_80276CF8
    // 0x80276CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80276CF8;
    // 0x80276CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80276CF8:
    // 0x80276CF8: beql        $v0, $zero, L_80276D48
    if (ctx->r2 == 0) {
        // 0x80276CFC: lbu         $v0, 0x4E38($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
            goto L_80276D48;
    }
    goto skip_4;
    // 0x80276CFC: lbu         $v0, 0x4E38($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
    skip_4:
    // 0x80276D00: jal         0x80223FC4
    // 0x80276D04: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_3;
    // 0x80276D04: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_3:
    // 0x80276D08: bne         $v0, $zero, L_80276D2C
    if (ctx->r2 != 0) {
        // 0x80276D0C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80276D2C;
    }
    // 0x80276D0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80276D10: jal         0x80223FC4
    // 0x80276D14: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    static_3_80223FC4(rdram, ctx);
        goto after_4;
    // 0x80276D14: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_4:
    // 0x80276D18: beql        $v0, $zero, L_80276D48
    if (ctx->r2 == 0) {
        // 0x80276D1C: lbu         $v0, 0x4E38($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
            goto L_80276D48;
    }
    goto skip_5;
    // 0x80276D1C: lbu         $v0, 0x4E38($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
    skip_5:
    // 0x80276D20: lbu         $t4, 0x4E38($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X4E38);
    // 0x80276D24: beql        $t4, $zero, L_80276D48
    if (ctx->r12 == 0) {
        // 0x80276D28: lbu         $v0, 0x4E38($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
            goto L_80276D48;
    }
    goto skip_6;
    // 0x80276D28: lbu         $v0, 0x4E38($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
    skip_6:
L_80276D2C:
    // 0x80276D2C: lbu         $t6, 0x4E38($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4E38);
    // 0x80276D30: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80276D34: sb          $t5, 0x8DE($s0)
    MEM_B(0X8DE, ctx->r16) = ctx->r13;
    // 0x80276D38: sltu        $t7, $zero, $t6
    ctx->r15 = 0 < ctx->r14 ? 1 : 0;
    // 0x80276D3C: sltiu       $t8, $t7, 0x1
    ctx->r24 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x80276D40: sb          $t8, 0x4E38($s0)
    MEM_B(0X4E38, ctx->r16) = ctx->r24;
L_80276D44:
    // 0x80276D44: lbu         $v0, 0x4E38($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
L_80276D48:
    // 0x80276D48: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80276D4C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80276D50: beq         $v0, $zero, L_80276E30
    if (ctx->r2 == 0) {
        // 0x80276D54: nop
    
            goto L_80276E30;
    }
    // 0x80276D54: nop

    // 0x80276D58: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x80276D5C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80276D60: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80276D64: bne         $t9, $zero, L_80276E30
    if (ctx->r25 != 0) {
        // 0x80276D68: addiu       $t1, $t1, 0x0
        ctx->r9 = ADD32(ctx->r9, 0X0);
            goto L_80276E30;
    }
    // 0x80276D68: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80276D6C: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x80276D70: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80276D74: addiu       $v0, $sp, 0x58
    ctx->r2 = ADD32(ctx->r29, 0X58);
    // 0x80276D78: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80276D7C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x80276D80: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x80276D84: addiu       $a0, $s0, 0x6B8
    ctx->r4 = ADD32(ctx->r16, 0X6B8);
    // 0x80276D88: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80276D8C: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x80276D90: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x80276D94: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x80276D98: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x80276D9C: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x80276DA0: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x80276DA4: lw          $t3, 0x14($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X14);
    // 0x80276DA8: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x80276DAC: lw          $at, 0x18($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X18);
    // 0x80276DB0: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x80276DB4: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x80276DB8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80276DBC: ldc1        $f6, 0x0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X0);
    // 0x80276DC0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80276DC4: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80276DC8: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80276DCC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80276DD0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80276DD4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80276DD8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80276DDC: jal         0x803036BC
    // 0x80276DE0: nop

    static_3_803036BC(rdram, ctx);
        goto after_5;
    // 0x80276DE0: nop

    after_5:
    // 0x80276DE4: addiu       $a0, $s0, 0x8F4
    ctx->r4 = ADD32(ctx->r16, 0X8F4);
    // 0x80276DE8: jal         0x80302B30
    // 0x80276DEC: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    static_3_80302B30(rdram, ctx);
        goto after_6;
    // 0x80276DEC: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_6:
    // 0x80276DF0: jal         0x8030244C
    // 0x80276DF4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8030244C(rdram, ctx);
        goto after_7;
    // 0x80276DF4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x80276DF8: lbu         $a1, 0x8DE($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8DE);
    // 0x80276DFC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80276E00: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80276E04: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80276E08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80276E0C: jal         0x802CFED8
    // 0x80276E10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802CFED8(rdram, ctx);
        goto after_8;
    // 0x80276E10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x80276E14: jal         0x802333A0
    // 0x80276E18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802333A0(rdram, ctx);
        goto after_9;
    // 0x80276E18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80276E1C: jal         0x802B18BC
    // 0x80276E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B18BC(rdram, ctx);
        goto after_10;
    // 0x80276E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80276E24: jal         0x8022C314
    // 0x80276E28: nop

    static_3_8022C314(rdram, ctx);
        goto after_11;
    // 0x80276E28: nop

    after_11:
    // 0x80276E2C: lbu         $v0, 0x4E38($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
L_80276E30:
    // 0x80276E30: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80276E34: bne         $v0, $zero, L_80277064
    if (ctx->r2 != 0) {
        // 0x80276E38: addiu       $v1, $v1, 0x0
        ctx->r3 = ADD32(ctx->r3, 0X0);
            goto L_80277064;
    }
    // 0x80276E38: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80276E3C: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x80276E40: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80276E44: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80276E48: beq         $t8, $zero, L_80277064
    if (ctx->r24 == 0) {
        // 0x80276E4C: nop
    
            goto L_80277064;
    }
    // 0x80276E4C: nop

    // 0x80276E50: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x80276E54: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80276E58: addiu       $v0, $sp, 0x3C
    ctx->r2 = ADD32(ctx->r29, 0X3C);
    // 0x80276E5C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80276E60: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x80276E64: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x80276E68: addiu       $a0, $s0, 0x6B8
    ctx->r4 = ADD32(ctx->r16, 0X6B8);
    // 0x80276E6C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80276E70: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x80276E74: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x80276E78: lw          $t2, 0xC($t9)
    ctx->r10 = MEM_W(ctx->r25, 0XC);
    // 0x80276E7C: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80276E80: lw          $at, 0x10($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X10);
    // 0x80276E84: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x80276E88: lw          $t2, 0x14($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X14);
    // 0x80276E8C: sw          $t2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r10;
    // 0x80276E90: lw          $at, 0x18($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X18);
    // 0x80276E94: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x80276E98: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x80276E9C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80276EA0: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x80276EA4: lwc1        $f0, 0x0($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80276EA8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80276EAC: jal         0x803036BC
    // 0x80276EB0: nop

    static_3_803036BC(rdram, ctx);
        goto after_12;
    // 0x80276EB0: nop

    after_12:
    // 0x80276EB4: lbu         $v0, 0x8DD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8DD);
    // 0x80276EB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276EBC: beq         $v0, $zero, L_80277048
    if (ctx->r2 == 0) {
        // 0x80276EC0: nop
    
            goto L_80277048;
    }
    // 0x80276EC0: nop

    // 0x80276EC4: bne         $v0, $at, L_80277048
    if (ctx->r2 != ctx->r1) {
        // 0x80276EC8: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_80277048;
    }
    // 0x80276EC8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80276ECC: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x80276ED0: addiu       $t5, $s0, 0x8F4
    ctx->r13 = ADD32(ctx->r16, 0X8F4);
    // 0x80276ED4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80276ED8: bne         $t6, $at, L_80276F04
    if (ctx->r14 != ctx->r1) {
        // 0x80276EDC: sw          $t5, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r13;
            goto L_80276F04;
    }
    // 0x80276EDC: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80276EE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80276EE4: jal         0x80205AA0
    // 0x80276EE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80205AA0(rdram, ctx);
        goto after_13;
    // 0x80276EE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80276EEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80276EF0: jal         0x80205AA0
    // 0x80276EF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80205AA0(rdram, ctx);
        goto after_14;
    // 0x80276EF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80276EF8: addiu       $a0, $s0, 0x6368
    ctx->r4 = ADD32(ctx->r16, 0X6368);
    // 0x80276EFC: jal         0x802BCECC
    // 0x80276F00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802BCECC(rdram, ctx);
        goto after_15;
    // 0x80276F00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
L_80276F04:
    // 0x80276F04: jal         0x8022970C
    // 0x80276F08: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x80276F08: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    after_16:
    // 0x80276F0C: jal         0x803024E0
    // 0x80276F10: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_803024E0(rdram, ctx);
        goto after_17;
    // 0x80276F10: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_17:
    // 0x80276F14: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80276F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80276F1C: jal         0x80302498
    // 0x80276F20: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    static_3_80302498(rdram, ctx);
        goto after_18;
    // 0x80276F20: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_18:
    // 0x80276F24: lw          $v1, 0x65FC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X65FC);
    // 0x80276F28: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
    // 0x80276F2C: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80276F30: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x80276F34: jalr        $t9
    // 0x80276F38: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x80276F38: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_19:
    // 0x80276F3C: lw          $v1, 0x65FC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X65FC);
    // 0x80276F40: beq         $v1, $zero, L_80276F60
    if (ctx->r3 == 0) {
        // 0x80276F44: nop
    
            goto L_80276F60;
    }
    // 0x80276F44: nop

    // 0x80276F48: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
    // 0x80276F4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80276F50: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x80276F54: lh          $t8, 0x8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8);
    // 0x80276F58: jalr        $t9
    // 0x80276F5C: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x80276F5C: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    after_20:
L_80276F60:
    // 0x80276F60: jal         0x8022C314
    // 0x80276F64: nop

    static_3_8022C314(rdram, ctx);
        goto after_21;
    // 0x80276F64: nop

    after_21:
    // 0x80276F68: sw          $zero, 0x65FC($s0)
    MEM_W(0X65FC, ctx->r16) = 0;
    // 0x80276F6C: jal         0x802B0B44
    // 0x80276F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B0B44(rdram, ctx);
        goto after_22;
    // 0x80276F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80276F74: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80276F78: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80276F7C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80276F80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80276F84: lbu         $t2, 0x8F0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X8F0);
    // 0x80276F88: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80276F8C: beq         $t2, $zero, L_80276F9C
    if (ctx->r10 == 0) {
        // 0x80276F90: nop
    
            goto L_80276F9C;
    }
    // 0x80276F90: nop

    // 0x80276F94: jal         0x80231A24
    // 0x80276F98: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_23;
    // 0x80276F98: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_23:
L_80276F9C:
    // 0x80276F9C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80276FA0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80276FA4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80276FA8: jal         0x80231A24
    // 0x80276FAC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_24;
    // 0x80276FAC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_24:
    // 0x80276FB0: jal         0x8022BD80
    // 0x80276FB4: nop

    static_3_8022BD80(rdram, ctx);
        goto after_25;
    // 0x80276FB4: nop

    after_25:
    // 0x80276FB8: jal         0x80224CA8
    // 0x80276FBC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    static_3_80224CA8(rdram, ctx);
        goto after_26;
    // 0x80276FBC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_26:
    // 0x80276FC0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80276FC4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80276FC8: jal         0x802AEE54
    // 0x80276FCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_27;
    // 0x80276FCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x80276FD0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80276FD4: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80276FD8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80276FDC: beq         $v1, $at, L_80277010
    if (ctx->r3 == ctx->r1) {
        // 0x80276FE0: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80277010;
    }
    // 0x80276FE0: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80276FE4: beq         $v1, $at, L_80277010
    if (ctx->r3 == ctx->r1) {
        // 0x80276FE8: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_80277010;
    }
    // 0x80276FE8: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80276FEC: beq         $v1, $at, L_80277010
    if (ctx->r3 == ctx->r1) {
        // 0x80276FF0: lui         $t1, 0x0
        ctx->r9 = S32(0X0 << 16);
            goto L_80277010;
    }
    // 0x80276FF0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80276FF4: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x80276FF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80276FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277000: jal         0x802AEE18
    // 0x80277004: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    static_3_802AEE18(rdram, ctx);
        goto after_28;
    // 0x80277004: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    after_28:
    // 0x80277008: jal         0x8030CE60
    // 0x8027700C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_8030CE60(rdram, ctx);
        goto after_29;
    // 0x8027700C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_29:
L_80277010:
    // 0x80277010: jal         0x8030C020
    // 0x80277014: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8030C020(rdram, ctx);
        goto after_30;
    // 0x80277014: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_30:
    // 0x80277018: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8027701C: sw          $t3, 0x32A4($s0)
    MEM_W(0X32A4, ctx->r16) = ctx->r11;
    // 0x80277020: jal         0x802AF7EC
    // 0x80277024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802AF7EC(rdram, ctx);
        goto after_31;
    // 0x80277024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80277028: addiu       $a0, $s0, 0x32BC
    ctx->r4 = ADD32(ctx->r16, 0X32BC);
    // 0x8027702C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80277030: addiu       $a2, $s0, 0x3350
    ctx->r6 = ADD32(ctx->r16, 0X3350);
    // 0x80277034: jal         0x802CD478
    // 0x80277038: addiu       $a3, $s0, 0x340C
    ctx->r7 = ADD32(ctx->r16, 0X340C);
    static_3_802CD478(rdram, ctx);
        goto after_32;
    // 0x80277038: addiu       $a3, $s0, 0x340C
    ctx->r7 = ADD32(ctx->r16, 0X340C);
    after_32:
    // 0x8027703C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80277040: jal         0x80223E48
    // 0x80277044: sb          $t4, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = ctx->r12;
    static_3_80223E48(rdram, ctx);
        goto after_33;
    // 0x80277044: sb          $t4, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = ctx->r12;
    after_33:
L_80277048:
    // 0x80277048: jal         0x802CFF40
    // 0x8027704C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802CFF40(rdram, ctx);
        goto after_34;
    // 0x8027704C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_34:
    // 0x80277050: jal         0x802B18BC
    // 0x80277054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B18BC(rdram, ctx);
        goto after_35;
    // 0x80277054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x80277058: jal         0x802333A0
    // 0x8027705C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802333A0(rdram, ctx);
        goto after_36;
    // 0x8027705C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_36:
    // 0x80277060: lbu         $v0, 0x4E38($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E38);
L_80277064:
    // 0x80277064: beql        $v0, $zero, L_80277084
    if (ctx->r2 == 0) {
        // 0x80277068: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80277084;
    }
    goto skip_7;
    // 0x80277068: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
    // 0x8027706C: jal         0x80223E48
    // 0x80277070: nop

    static_3_80223E48(rdram, ctx);
        goto after_37;
    // 0x80277070: nop

    after_37:
    // 0x80277074: jal         0x802CFF48
    // 0x80277078: lbu         $a0, 0x8DE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8DE);
    static_3_802CFF48(rdram, ctx);
        goto after_38;
    // 0x80277078: lbu         $a0, 0x8DE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8DE);
    after_38:
    // 0x8027707C: sb          $v0, 0x8DD($s0)
    MEM_B(0X8DD, ctx->r16) = ctx->r2;
    // 0x80277080: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80277084:
    // 0x80277084: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80277088: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x8027708C: jr          $ra
    // 0x80277090: nop

    return;
    // 0x80277090: nop

;}
RECOMP_FUNC void D_802ED5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED658: beq         $a0, $zero, L_802ED688
    if (ctx->r4 == 0) {
        // 0x802ED65C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ED688;
    }
    // 0x802ED65C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ED660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ED664: jal         0x8031C514
    // 0x802ED668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ED668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ED66C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED670: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED674: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ED678: beql        $t7, $zero, L_802ED68C
    if (ctx->r15 == 0) {
        // 0x802ED67C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ED68C;
    }
    goto skip_0;
    // 0x802ED67C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ED680: jal         0x802C681C
    // 0x802ED684: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ED684: nop

    after_1:
L_802ED688:
    // 0x802ED688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ED68C:
    // 0x802ED68C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED690: jr          $ra
    // 0x802ED694: nop

    return;
    // 0x802ED694: nop

;}
RECOMP_FUNC void func_8021E6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E6EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021E6F0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021E6F4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8021E6F8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021E6FC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021E700: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x8021E704: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021E708: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021E70C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021E710: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021E714: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021E718: jal         0x8022FF90
    // 0x8021E71C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_8022FF90(rdram, ctx);
        goto after_0;
    // 0x8021E71C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8021E720: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8021E724: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021E728: blez        $v0, L_8021E7A4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021E72C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021E7A4;
    }
    // 0x8021E72C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021E730: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x8021E734: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x8021E738: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x8021E73C: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_8021E740:
    // 0x8021E740: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x8021E744: bne         $a1, $zero, L_8021E754
    if (ctx->r5 != 0) {
        // 0x8021E748: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_8021E754;
    }
    // 0x8021E748: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8021E74C: b           L_8021E7C4
    // 0x8021E750: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8021E7C4;
    // 0x8021E750: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8021E754:
    // 0x8021E754: beql        $s4, $v0, L_8021E798
    if (ctx->r20 == ctx->r2) {
        // 0x8021E758: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8021E798;
    }
    goto skip_0;
    // 0x8021E758: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8021E75C: jal         0x8022FF40
    // 0x8021E760: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    func_8022FF40(rdram, ctx);
        goto after_1;
    // 0x8021E760: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_1:
    // 0x8021E764: beql        $v0, $zero, L_8021E790
    if (ctx->r2 == 0) {
        // 0x8021E768: lw          $t2, 0x0($s5)
        ctx->r10 = MEM_W(ctx->r21, 0X0);
            goto L_8021E790;
    }
    goto skip_1;
    // 0x8021E768: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    skip_1:
    // 0x8021E76C: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8021E770: lw          $t6, 0xC($s3)
    ctx->r14 = MEM_W(ctx->r19, 0XC);
    // 0x8021E774: subu        $t8, $v0, $t7
    ctx->r24 = SUB32(ctx->r2, ctx->r15);
    // 0x8021E778: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8021E77C: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x8021E780: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x8021E784: b           L_8021E794
    // 0x8021E788: addu        $s0, $s0, $t1
    ctx->r16 = ADD32(ctx->r16, ctx->r9);
        goto L_8021E794;
    // 0x8021E788: addu        $s0, $s0, $t1
    ctx->r16 = ADD32(ctx->r16, ctx->r9);
    // 0x8021E78C: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
L_8021E790:
    // 0x8021E790: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
L_8021E794:
    // 0x8021E794: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8021E798:
    // 0x8021E798: slt         $at, $s1, $s6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8021E79C: bne         $at, $zero, L_8021E740
    if (ctx->r1 != 0) {
        // 0x8021E7A0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8021E740;
    }
    // 0x8021E7A0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8021E7A4:
    // 0x8021E7A4: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x8021E7A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E7AC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8021E7B0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021E7B4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021E7B8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8021E7BC: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8021E7C0: nop

L_8021E7C4:
    // 0x8021E7C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8021E7C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021E7CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E7D0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021E7D4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021E7D8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021E7DC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021E7E0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021E7E4: jr          $ra
    // 0x8021E7E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8021E7E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_8020119C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020119C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802011A0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802011A4: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802011A8: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802011AC: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x802011B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802011B4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802011B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802011BC: bne         $t6, $zero, L_80201204
    if (ctx->r14 != 0) {
        // 0x802011C0: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80201204;
    }
    // 0x802011C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802011C4: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802011C8: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x802011CC: lhu         $t7, 0x3A($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X3A);
    // 0x802011D0: addiu       $s0, $zero, 0xB4
    ctx->r16 = ADD32(0, 0XB4);
    // 0x802011D4: multu       $t7, $s0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802011D8: mflo        $a0
    ctx->r4 = lo;
    // 0x802011DC: jal         0x8022BA58
    // 0x802011E0: nop

    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x802011E0: nop

    after_0:
    // 0x802011E4: lhu         $t8, 0x3A($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X3A);
    // 0x802011E8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x802011EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802011F0: multu       $t8, $s0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802011F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802011F8: mflo        $a2
    ctx->r6 = lo;
    // 0x802011FC: jal         0x8022B780
    // 0x80201200: nop

    static_3_8022B780(rdram, ctx);
        goto after_1;
    // 0x80201200: nop

    after_1:
L_80201204:
    // 0x80201204: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80201208: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x8020120C: lhu         $t9, 0x3A($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X3A);
    // 0x80201210: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80201214: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80201218: blez        $t9, L_80201244
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8020121C: nop
    
            goto L_80201244;
    }
    // 0x8020121C: nop

    // 0x80201220: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
L_80201224:
    // 0x80201224: jal         0x802012BC
    // 0x80201228: addu        $a0, $s1, $t0
    ctx->r4 = ADD32(ctx->r17, ctx->r8);
    static_3_802012BC(rdram, ctx);
        goto after_2;
    // 0x80201228: addu        $a0, $s1, $t0
    ctx->r4 = ADD32(ctx->r17, ctx->r8);
    after_2:
    // 0x8020122C: lhu         $t1, 0x3A($s3)
    ctx->r9 = MEM_HU(ctx->r19, 0X3A);
    // 0x80201230: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80201234: addiu       $s1, $s1, 0xB4
    ctx->r17 = ADD32(ctx->r17, 0XB4);
    // 0x80201238: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8020123C: bnel        $at, $zero, L_80201224
    if (ctx->r1 != 0) {
        // 0x80201240: lw          $t0, 0x0($s2)
        ctx->r8 = MEM_W(ctx->r18, 0X0);
            goto L_80201224;
    }
    goto skip_0;
    // 0x80201240: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    skip_0:
L_80201244:
    // 0x80201244: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201248: jal         0x802012BC
    // 0x8020124C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802012BC(rdram, ctx);
        goto after_3;
    // 0x8020124C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x80201250: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80201254: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80201258: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8020125C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80201260: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80201264: jr          $ra
    // 0x80201268: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80201268: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802015FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802015FC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201600: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201604: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201608: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x8020160C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201614: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201618: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8020161C: bne         $at, $zero, L_80201654
    if (ctx->r1 != 0) {
        // 0x80201620: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_80201654;
    }
    // 0x80201620: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x80201624: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201628: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8020162C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201630: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201634: addiu       $a2, $zero, 0x13F
    ctx->r6 = ADD32(0, 0X13F);
    // 0x80201638: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8020163C: jal         0x80231C9C
    // 0x80201640: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201640: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    after_0:
    // 0x80201644: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201648: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8020164C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80201650: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
L_80201654:
    // 0x80201654: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201658: beq         $at, $zero, L_8020168C
    if (ctx->r1 == 0) {
        // 0x8020165C: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_8020168C;
    }
    // 0x8020165C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80201660: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80201664: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80201668: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8020166C: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80201670: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201674: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80201678: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x8020167C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201680: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80201684: jal         0x80228DE0
    // 0x80201688: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80201688: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_1:
L_8020168C:
    // 0x8020168C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201694: jr          $ra
    // 0x80201698: nop

    return;
    // 0x80201698: nop

;}
RECOMP_FUNC void D_8023DAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DAD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DAD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DAD8: jal         0x80241760
    // 0x8023DADC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023DADC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023DAE0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023DAE4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8023DAE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023DAEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023DAF0: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8023DAF4: jal         0x80241780
    // 0x8023DAF8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x8023DAF8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_1:
    // 0x8023DAFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DB00: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8023DB04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DB08: jr          $ra
    // 0x8023DB0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023DB0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80238800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238800: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80238804: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80238808: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8023880C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80238810: bgez        $a2, L_80238824
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80238814: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80238824;
    }
    // 0x80238814: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80238818: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8023881C: nop

    // 0x80238820: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80238824:
    // 0x80238824: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80238828: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8023882C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80238830: lw          $t7, 0x40($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X40);
    // 0x80238834: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80238838: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8023883C: bgez        $t7, L_80238850
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80238840: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80238850;
    }
    // 0x80238840: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80238844: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80238848: nop

    // 0x8023884C: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_80238850:
    // 0x80238850: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80238854: ldc1        $f18, 0x0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X0);
    // 0x80238858: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x8023885C: mul.d       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80238860: div.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x80238864: jr          $ra
    // 0x80238868: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    return;
    // 0x80238868: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
;}
RECOMP_FUNC void D_80239EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239EE0: addiu       $sp, $sp, -0x2A8
    ctx->r29 = ADD32(ctx->r29, -0X2A8);
    // 0x80239EE4: sw          $a1, 0x2AC($sp)
    MEM_W(0X2AC, ctx->r29) = ctx->r5;
    // 0x80239EE8: lhu         $t6, 0x2AE($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2AE);
    // 0x80239EEC: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80239EF0: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80239EF4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80239EF8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80239EFC: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x80239F00: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80239F04: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80239F08: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80239F0C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80239F10: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80239F14: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80239F18: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80239F1C: sw          $a2, 0x2B0($sp)
    MEM_W(0X2B0, ctx->r29) = ctx->r6;
    // 0x80239F20: sw          $zero, 0x298($sp)
    MEM_W(0X298, ctx->r29) = 0;
    // 0x80239F24: sb          $zero, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = 0;
    // 0x80239F28: beq         $t6, $zero, L_80239F38
    if (ctx->r14 == 0) {
        // 0x80239F2C: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_80239F38;
    }
    // 0x80239F2C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80239F30: bne         $a2, $zero, L_80239F44
    if (ctx->r6 != 0) {
        // 0x80239F34: lw          $s1, 0x2BC($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X2BC);
            goto L_80239F44;
    }
    // 0x80239F34: lw          $s1, 0x2BC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2BC);
L_80239F38:
    // 0x80239F38: b           L_8023A2A4
    // 0x80239F3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8023A2A4;
    // 0x80239F3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239F40: lw          $s1, 0x2BC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2BC);
L_80239F44:
    // 0x80239F44: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80239F48: addiu       $s0, $s1, 0xFF
    ctx->r16 = ADD32(ctx->r17, 0XFF);
    // 0x80239F4C: bgez        $s0, L_80239F5C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80239F50: sra         $t8, $s0, 8
        ctx->r24 = S32(SIGNED(ctx->r16) >> 8);
            goto L_80239F5C;
    }
    // 0x80239F50: sra         $t8, $s0, 8
    ctx->r24 = S32(SIGNED(ctx->r16) >> 8);
    // 0x80239F54: addiu       $at, $s0, 0xFF
    ctx->r1 = ADD32(ctx->r16, 0XFF);
    // 0x80239F58: sra         $t8, $at, 8
    ctx->r24 = S32(SIGNED(ctx->r1) >> 8);
L_80239F5C:
    // 0x80239F5C: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x80239F60: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80239F64: bne         $t1, $zero, L_80239F74
    if (ctx->r9 != 0) {
        // 0x80239F68: or          $s3, $t8, $zero
        ctx->r19 = ctx->r24 | 0;
            goto L_80239F74;
    }
    // 0x80239F68: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x80239F6C: b           L_8023A2A4
    // 0x80239F70: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8023A2A4;
    // 0x80239F70: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239F74:
    // 0x80239F74: jal         0x802452EC
    // 0x80239F78: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    static_3_802452EC(rdram, ctx);
        goto after_0;
    // 0x80239F78: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x80239F7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80239F80: bne         $v0, $at, L_80239F90
    if (ctx->r2 != ctx->r1) {
        // 0x80239F84: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80239F90;
    }
    // 0x80239F84: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80239F88: b           L_8023A2A4
    // 0x80239F8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8023A2A4;
    // 0x80239F8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80239F90:
    // 0x80239F90: lw          $s2, 0x2B8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2B8);
    // 0x80239F94: lw          $t2, 0x2C0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C0);
    // 0x80239F98: lhu         $a1, 0x2AE($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2AE);
    // 0x80239F9C: lw          $a2, 0x2B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2B0);
    // 0x80239FA0: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x80239FA4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80239FA8: jal         0x80239120
    // 0x80239FAC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    static_3_80239120(rdram, ctx);
        goto after_1;
    // 0x80239FAC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_1:
    // 0x80239FB0: beq         $v0, $zero, L_80239FC8
    if (ctx->r2 == 0) {
        // 0x80239FB4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80239FC8;
    }
    // 0x80239FB4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80239FB8: beq         $v0, $at, L_80239FCC
    if (ctx->r2 == ctx->r1) {
        // 0x80239FBC: lw          $t3, 0x2C0($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X2C0);
            goto L_80239FCC;
    }
    // 0x80239FBC: lw          $t3, 0x2C0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C0);
    // 0x80239FC0: b           L_8023A2A8
    // 0x80239FC4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2A8;
    // 0x80239FC4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_80239FC8:
    // 0x80239FC8: lw          $t3, 0x2C0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C0);
L_80239FCC:
    // 0x80239FCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80239FD0: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80239FD4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80239FD8: beq         $t4, $at, L_80239FE8
    if (ctx->r12 == ctx->r1) {
        // 0x80239FDC: nop
    
            goto L_80239FE8;
    }
    // 0x80239FDC: nop

    // 0x80239FE0: b           L_8023A2A4
    // 0x80239FE4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8023A2A4;
    // 0x80239FE4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80239FE8:
    // 0x80239FE8: jal         0x802469D0
    // 0x80239FEC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    static_3_802469D0(rdram, ctx);
        goto after_2;
    // 0x80239FEC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x80239FF0: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x80239FF4: nop

    // 0x80239FF8: slt         $at, $t5, $s1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80239FFC: beq         $at, $zero, L_8023A00C
    if (ctx->r1 == 0) {
        // 0x8023A000: nop
    
            goto L_8023A00C;
    }
    // 0x8023A000: nop

    // 0x8023A004: b           L_8023A2A4
    // 0x8023A008: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8023A2A4;
    // 0x8023A008: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8023A00C:
    // 0x8023A00C: beq         $s0, $zero, L_8023A2A4
    if (ctx->r16 == 0) {
        // 0x8023A010: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023A2A4;
    }
    // 0x8023A010: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023A014: lw          $t6, 0x2C0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C0);
    // 0x8023A018: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023A01C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023A020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023A024: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8023A028: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023A02C: jal         0x80239120
    // 0x8023A030: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    static_3_80239120(rdram, ctx);
        goto after_3;
    // 0x8023A030: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_3:
    // 0x8023A034: beq         $v0, $zero, L_8023A04C
    if (ctx->r2 == 0) {
        // 0x8023A038: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8023A04C;
    }
    // 0x8023A038: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8023A03C: beq         $v0, $at, L_8023A050
    if (ctx->r2 == ctx->r1) {
        // 0x8023A040: lw          $t7, 0x2C0($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X2C0);
            goto L_8023A050;
    }
    // 0x8023A040: lw          $t7, 0x2C0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C0);
    // 0x8023A044: b           L_8023A2A8
    // 0x8023A048: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2A8;
    // 0x8023A048: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A04C:
    // 0x8023A04C: lw          $t7, 0x2C0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C0);
L_8023A050:
    // 0x8023A050: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023A054: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8023A058: nop

    // 0x8023A05C: bne         $t8, $at, L_8023A06C
    if (ctx->r24 != ctx->r1) {
        // 0x8023A060: nop
    
            goto L_8023A06C;
    }
    // 0x8023A060: nop

    // 0x8023A064: b           L_8023A2A4
    // 0x8023A068: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8023A2A4;
    // 0x8023A068: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8023A06C:
    // 0x8023A06C: lbu         $t9, 0x64($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X64);
    // 0x8023A070: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8023A074: blez        $t9, L_8023A1AC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8023A078: addiu       $s6, $sp, 0x8C
        ctx->r22 = ADD32(ctx->r29, 0X8C);
            goto L_8023A1AC;
    }
    // 0x8023A078: addiu       $s6, $sp, 0x8C
    ctx->r22 = ADD32(ctx->r29, 0X8C);
    // 0x8023A07C: addiu       $s4, $sp, 0x18C
    ctx->r20 = ADD32(ctx->r29, 0X18C);
    // 0x8023A080: addiu       $s0, $sp, 0x28C
    ctx->r16 = ADD32(ctx->r29, 0X28C);
L_8023A084:
    // 0x8023A084: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023A088: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8023A08C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023A090: jal         0x80245404
    // 0x8023A094: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    static_3_80245404(rdram, ctx);
        goto after_4;
    // 0x8023A094: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    after_4:
    // 0x8023A098: beq         $v0, $zero, L_8023A0A8
    if (ctx->r2 == 0) {
        // 0x8023A09C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8023A0A8;
    }
    // 0x8023A09C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023A0A0: b           L_8023A2A8
    // 0x8023A0A4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2A8;
    // 0x8023A0A4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A0A8:
    // 0x8023A0A8: addiu       $t1, $sp, 0x2A0
    ctx->r9 = ADD32(ctx->r29, 0X2A0);
    // 0x8023A0AC: addiu       $t2, $sp, 0x29C
    ctx->r10 = ADD32(ctx->r29, 0X29C);
    // 0x8023A0B0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8023A0B4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8023A0B8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8023A0BC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8023A0C0: addiu       $a3, $sp, 0x2A4
    ctx->r7 = ADD32(ctx->r29, 0X2A4);
    // 0x8023A0C4: jal         0x8023A324
    // 0x8023A0C8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    static_3_8023A324(rdram, ctx);
        goto after_5;
    // 0x8023A0C8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_5:
    // 0x8023A0CC: beq         $v0, $zero, L_8023A0E0
    if (ctx->r2 == 0) {
        // 0x8023A0D0: lw          $t0, 0x2A4($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2A4);
            goto L_8023A0E0;
    }
    // 0x8023A0D0: lw          $t0, 0x2A4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A4);
    // 0x8023A0D4: b           L_8023A2A8
    // 0x8023A0D8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2A8;
    // 0x8023A0D8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8023A0DC: lw          $t0, 0x2A4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A4);
L_8023A0E0:
    // 0x8023A0E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023A0E4: beq         $t0, $at, L_8023A194
    if (ctx->r8 == ctx->r1) {
        // 0x8023A0E8: nop
    
            goto L_8023A194;
    }
    // 0x8023A0E8: nop

    // 0x8023A0EC: bne         $s7, $zero, L_8023A100
    if (ctx->r23 != 0) {
        // 0x8023A0F0: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8023A100;
    }
    // 0x8023A0F0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023A0F4: sb          $t0, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r8;
    // 0x8023A0F8: b           L_8023A134
    // 0x8023A0FC: sb          $s1, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r17;
        goto L_8023A134;
    // 0x8023A0FC: sb          $s1, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r17;
L_8023A100:
    // 0x8023A100: lw          $t3, 0x298($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X298);
    // 0x8023A104: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8023A108: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8023A10C: addu        $v0, $s6, $t4
    ctx->r2 = ADD32(ctx->r22, ctx->r12);
    // 0x8023A110: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x8023A114: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x8023A118: lbu         $a3, 0x6A($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X6A);
    // 0x8023A11C: jal         0x80245404
    // 0x8023A120: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80245404(rdram, ctx);
        goto after_6;
    // 0x8023A120: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8023A124: beq         $v0, $zero, L_8023A138
    if (ctx->r2 == 0) {
        // 0x8023A128: addiu       $v1, $sp, 0x8C
        ctx->r3 = ADD32(ctx->r29, 0X8C);
            goto L_8023A138;
    }
    // 0x8023A128: addiu       $v1, $sp, 0x8C
    ctx->r3 = ADD32(ctx->r29, 0X8C);
    // 0x8023A12C: b           L_8023A2A8
    // 0x8023A130: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2A8;
    // 0x8023A130: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A134:
    // 0x8023A134: addiu       $v1, $sp, 0x8C
    ctx->r3 = ADD32(ctx->r29, 0X8C);
L_8023A138:
    // 0x8023A138: addiu       $v0, $sp, 0x18C
    ctx->r2 = ADD32(ctx->r29, 0X18C);
L_8023A13C:
    // 0x8023A13C: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x8023A140: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x8023A144: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x8023A148: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x8023A14C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023A150: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8023A154: sh          $t6, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r14;
    // 0x8023A158: sh          $t7, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r15;
    // 0x8023A15C: sh          $t8, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r24;
    // 0x8023A160: bne         $v0, $s0, L_8023A13C
    if (ctx->r2 != ctx->r16) {
        // 0x8023A164: sh          $t5, -0x8($v1)
        MEM_H(-0X8, ctx->r3) = ctx->r13;
            goto L_8023A13C;
    }
    // 0x8023A164: sh          $t5, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r13;
    // 0x8023A168: lw          $v0, 0x2A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2A0);
    // 0x8023A16C: lw          $t9, 0x29C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X29C);
    // 0x8023A170: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8023A174: sb          $s1, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r17;
    // 0x8023A178: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8023A17C: beq         $at, $zero, L_8023A18C
    if (ctx->r1 == 0) {
        // 0x8023A180: sw          $t9, 0x298($sp)
        MEM_W(0X298, ctx->r29) = ctx->r25;
            goto L_8023A18C;
    }
    // 0x8023A180: sw          $t9, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r25;
    // 0x8023A184: b           L_8023A194
    // 0x8023A188: subu        $s3, $s3, $v0
    ctx->r19 = SUB32(ctx->r19, ctx->r2);
        goto L_8023A194;
    // 0x8023A188: subu        $s3, $s3, $v0
    ctx->r19 = SUB32(ctx->r19, ctx->r2);
L_8023A18C:
    // 0x8023A18C: b           L_8023A1AC
    // 0x8023A190: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_8023A1AC;
    // 0x8023A190: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8023A194:
    // 0x8023A194: lbu         $t2, 0x64($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X64);
    // 0x8023A198: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023A19C: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x8023A1A0: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8023A1A4: bne         $at, $zero, L_8023A084
    if (ctx->r1 != 0) {
        // 0x8023A1A8: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_8023A084;
    }
    // 0x8023A1A8: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
L_8023A1AC:
    // 0x8023A1AC: lw          $t0, 0x2A4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A4);
    // 0x8023A1B0: bgtz        $s3, L_8023A1C4
    if (SIGNED(ctx->r19) > 0) {
        // 0x8023A1B4: addiu       $s6, $sp, 0x8C
        ctx->r22 = ADD32(ctx->r29, 0X8C);
            goto L_8023A1C4;
    }
    // 0x8023A1B4: addiu       $s6, $sp, 0x8C
    ctx->r22 = ADD32(ctx->r29, 0X8C);
    // 0x8023A1B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023A1BC: bne         $t0, $at, L_8023A1CC
    if (ctx->r8 != ctx->r1) {
        // 0x8023A1C0: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8023A1CC;
    }
    // 0x8023A1C0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8023A1C4:
    // 0x8023A1C4: b           L_8023A2A4
    // 0x8023A1C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8023A2A4;
    // 0x8023A1C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023A1CC:
    // 0x8023A1CC: lw          $t3, 0x298($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X298);
    // 0x8023A1D0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8023A1D4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8023A1D8: addu        $v0, $s6, $t4
    ctx->r2 = ADD32(ctx->r22, ctx->r12);
    // 0x8023A1DC: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x8023A1E0: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x8023A1E4: lbu         $a3, 0x6A($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X6A);
    // 0x8023A1E8: jal         0x80245404
    // 0x8023A1EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80245404(rdram, ctx);
        goto after_7;
    // 0x8023A1EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8023A1F0: beq         $v0, $zero, L_8023A200
    if (ctx->r2 == 0) {
        // 0x8023A1F4: addiu       $v1, $sp, 0x7C
        ctx->r3 = ADD32(ctx->r29, 0X7C);
            goto L_8023A200;
    }
    // 0x8023A1F4: addiu       $v1, $sp, 0x7C
    ctx->r3 = ADD32(ctx->r29, 0X7C);
    // 0x8023A1F8: b           L_8023A2A8
    // 0x8023A1FC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2A8;
    // 0x8023A1FC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A200:
    // 0x8023A200: lhu         $t5, 0x5C($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X5C);
    // 0x8023A204: lhu         $t6, 0x2AE($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2AE);
    // 0x8023A208: lw          $t7, 0x2B0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2B0);
    // 0x8023A20C: sh          $zero, 0x76($sp)
    MEM_H(0X76, ctx->r29) = 0;
    // 0x8023A210: addiu       $v0, $sp, 0x6C
    ctx->r2 = ADD32(ctx->r29, 0X6C);
    // 0x8023A214: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    // 0x8023A218: sh          $t6, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r14;
    // 0x8023A21C: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
L_8023A220:
    // 0x8023A220: lbu         $t8, 0x0($fp)
    ctx->r24 = MEM_BU(ctx->r30, 0X0);
    // 0x8023A224: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A228: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023A22C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x8023A230: bne         $at, $zero, L_8023A220
    if (ctx->r1 != 0) {
        // 0x8023A234: sb          $t8, 0xF($v0)
        MEM_B(0XF, ctx->r2) = ctx->r24;
            goto L_8023A220;
    }
    // 0x8023A234: sb          $t8, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r24;
    // 0x8023A238: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x8023A23C: lw          $t4, 0x2C0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C0);
    // 0x8023A240: sb          $t9, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r25;
    // 0x8023A244: lbu         $t1, 0x1($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X1);
    // 0x8023A248: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
    // 0x8023A24C: sb          $t1, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r9;
    // 0x8023A250: lbu         $t2, -0x1($s2)
    ctx->r10 = MEM_BU(ctx->r18, -0X1);
    // 0x8023A254: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    // 0x8023A258: sb          $t2, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r10;
    // 0x8023A25C: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    // 0x8023A260: nop

    // 0x8023A264: sb          $t3, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r11;
    // 0x8023A268: lw          $t6, 0x5C($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X5C);
    // 0x8023A26C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8023A270: lw          $a1, 0x8($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X8);
    // 0x8023A274: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x8023A278: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x8023A27C: lw          $a0, 0x4($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X4);
    // 0x8023A280: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023A284: jal         0x80246660
    // 0x8023A288: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    static_3_80246660(rdram, ctx);
        goto after_8;
    // 0x8023A288: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_8:
    // 0x8023A28C: beq         $v0, $zero, L_8023A29C
    if (ctx->r2 == 0) {
        // 0x8023A290: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8023A29C;
    }
    // 0x8023A290: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023A294: b           L_8023A2A8
    // 0x8023A298: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2A8;
    // 0x8023A298: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A29C:
    // 0x8023A29C: b           L_8023A2A4
    // 0x8023A2A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8023A2A4;
    // 0x8023A2A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8023A2A4:
    // 0x8023A2A4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A2A8:
    // 0x8023A2A8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023A2AC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023A2B0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023A2B4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8023A2B8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8023A2BC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8023A2C0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8023A2C4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8023A2C8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8023A2CC: jr          $ra
    // 0x8023A2D0: addiu       $sp, $sp, 0x2A8
    ctx->r29 = ADD32(ctx->r29, 0X2A8);
    return;
    // 0x8023A2D0: addiu       $sp, $sp, 0x2A8
    ctx->r29 = ADD32(ctx->r29, 0X2A8);
;}
RECOMP_FUNC void D_802AA32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA3AC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802AA3B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802AA3B4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802AA3B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA3BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AA3C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802AA3C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802AA3C8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AA3CC: jal         0x802AEE54
    // 0x802AA3D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_0;
    // 0x802AA3D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802AA3D4: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x802AA3D8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x802AA3DC: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x802AA3E0: lh          $t6, 0x60($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X60);
    // 0x802AA3E4: jalr        $t9
    // 0x802AA3E8: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802AA3E8: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_1:
    // 0x802AA3EC: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x802AA3F0: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802AA3F4: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x802AA3F8: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802AA3FC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802AA400: jal         0x8022ADA8
    // 0x802AA404: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    static_3_8022ADA8(rdram, ctx);
        goto after_2;
    // 0x802AA404: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_2:
    // 0x802AA408: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802AA40C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AA410: nop

    // 0x802AA414: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x802AA418: nop

    // 0x802AA41C: bc1tl       L_802AA468
    if (c1cs) {
        // 0x802AA420: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802AA468;
    }
    goto skip_0;
    // 0x802AA420: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802AA424: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x802AA428: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802AA42C: addiu       $s2, $zero, 0x90
    ctx->r18 = ADD32(0, 0X90);
    // 0x802AA430: blezl       $t7, L_802AA468
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802AA434: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802AA468;
    }
    goto skip_1;
    // 0x802AA434: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
L_802AA438:
    // 0x802AA438: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AA43C: mflo        $t8
    ctx->r24 = lo;
    // 0x802AA440: addu        $a0, $s1, $t8
    ctx->r4 = ADD32(ctx->r17, ctx->r24);
    // 0x802AA444: jal         0x802DA230
    // 0x802AA448: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    static_3_802DA230(rdram, ctx);
        goto after_3;
    // 0x802AA448: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_3:
    // 0x802AA44C: lbu         $t1, 0x0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X0);
    // 0x802AA450: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802AA454: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x802AA458: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802AA45C: bne         $at, $zero, L_802AA438
    if (ctx->r1 != 0) {
        // 0x802AA460: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_802AA438;
    }
    // 0x802AA460: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x802AA464: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AA468:
    // 0x802AA468: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AA46C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802AA470: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802AA474: jr          $ra
    // 0x802AA478: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x802AA478: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_802EFA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFAAC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802EFAB0: jr          $ra
    // 0x802EFAB4: sh          $a1, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r5;
    return;
    // 0x802EFAB4: sh          $a1, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802DCFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD038: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802DD03C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x802DD040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DD044: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802DD048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DD04C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802DD050: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802DD054: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x802DD058: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x802DD05C: jal         0x802D5010
    // 0x802DD060: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802D5010(rdram, ctx);
        goto after_0;
    // 0x802DD060: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x802DD064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DD068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802DD06C: jr          $ra
    // 0x802DD070: nop

    return;
    // 0x802DD070: nop

;}
RECOMP_FUNC void D_802B7FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B8060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B8064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B8068: bne         $a0, $zero, L_802B8080
    if (ctx->r4 != 0) {
        // 0x802B806C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802B8080;
    }
    // 0x802B806C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802B8070: jal         0x802C67EC
    // 0x802B8074: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802B8074: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_0:
    // 0x802B8078: beq         $v0, $zero, L_802B8090
    if (ctx->r2 == 0) {
        // 0x802B807C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802B8090;
    }
    // 0x802B807C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802B8080:
    // 0x802B8080: addiu       $a0, $a1, 0x8
    ctx->r4 = ADD32(ctx->r5, 0X8);
    // 0x802B8084: jal         0x8031E338
    // 0x802B8088: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8031E338(rdram, ctx);
        goto after_1;
    // 0x802B8088: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802B808C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802B8090:
    // 0x802B8090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B8094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B8098: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802B809C: jr          $ra
    // 0x802B80A0: nop

    return;
    // 0x802B80A0: nop

;}
RECOMP_FUNC void D_8023F080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F080: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F084: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023F088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F08C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8023F090: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8023F094: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8023F098: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8023F09C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8023F0A0: jal         0x8023D1CC
    // 0x8023F0A4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    static_3_8023D1CC(rdram, ctx);
        goto after_0;
    // 0x8023F0A4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x8023F0A8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023F0AC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8023F0B0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8023F0B4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8023F0B8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F0BC: jal         0x8023D228
    // 0x8023F0C0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    static_3_8023D228(rdram, ctx);
        goto after_1;
    // 0x8023F0C0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_1:
    // 0x8023F0C4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8023F0C8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8023F0CC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8023F0D0: subu        $t8, $t6, $v0
    ctx->r24 = SUB32(ctx->r14, ctx->r2);
    // 0x8023F0D4: sltu        $at, $t7, $v1
    ctx->r1 = ctx->r15 < ctx->r3 ? 1 : 0;
    // 0x8023F0D8: subu        $t8, $t8, $at
    ctx->r24 = SUB32(ctx->r24, ctx->r1);
    // 0x8023F0DC: subu        $t9, $t7, $v1
    ctx->r25 = SUB32(ctx->r15, ctx->r3);
    // 0x8023F0E0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8023F0E4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8023F0E8: bgtz        $t0, L_8023F148
    if (SIGNED(ctx->r8) > 0) {
        // 0x8023F0EC: lw          $t1, 0x24($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X24);
            goto L_8023F148;
    }
    // 0x8023F0EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8023F0F0: bltz        $t0, L_8023F100
    if (SIGNED(ctx->r8) < 0) {
        // 0x8023F0F4: nop
    
            goto L_8023F100;
    }
    // 0x8023F0F4: nop

    // 0x8023F0F8: b           L_8023F14C
    // 0x8023F0FC: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
        goto L_8023F14C;
    // 0x8023F0FC: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
L_8023F100:
    // 0x8023F100: bltzl       $t8, L_8023F14C
    if (SIGNED(ctx->r24) < 0) {
        // 0x8023F104: addiu       $t0, $sp, 0x20
        ctx->r8 = ADD32(ctx->r29, 0X20);
            goto L_8023F14C;
    }
    goto skip_0;
    // 0x8023F104: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    skip_0:
    // 0x8023F108: bgtz        $t8, L_8023F118
    if (SIGNED(ctx->r24) > 0) {
        // 0x8023F10C: addiu       $t3, $t1, 0x1
        ctx->r11 = ADD32(ctx->r9, 0X1);
            goto L_8023F118;
    }
    // 0x8023F10C: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8023F110: beql        $t9, $zero, L_8023F14C
    if (ctx->r25 == 0) {
        // 0x8023F114: addiu       $t0, $sp, 0x20
        ctx->r8 = ADD32(ctx->r29, 0X20);
            goto L_8023F14C;
    }
    goto skip_1;
    // 0x8023F114: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    skip_1:
L_8023F118:
    // 0x8023F118: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8023F11C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8023F120: sltiu       $at, $t3, 0x1
    ctx->r1 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x8023F124: addu        $t2, $t0, $at
    ctx->r10 = ADD32(ctx->r8, ctx->r1);
    // 0x8023F128: subu        $t6, $t8, $t4
    ctx->r14 = SUB32(ctx->r24, ctx->r12);
    // 0x8023F12C: sltu        $at, $t9, $t5
    ctx->r1 = ctx->r25 < ctx->r13 ? 1 : 0;
    // 0x8023F130: subu        $t6, $t6, $at
    ctx->r14 = SUB32(ctx->r14, ctx->r1);
    // 0x8023F134: subu        $t7, $t9, $t5
    ctx->r15 = SUB32(ctx->r25, ctx->r13);
    // 0x8023F138: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8023F13C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8023F140: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8023F144: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_8023F148:
    // 0x8023F148: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
L_8023F14C:
    // 0x8023F14C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8023F150: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8023F154: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x8023F158: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8023F15C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8023F160: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x8023F164: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x8023F168: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x8023F16C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x8023F170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023F174: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023F178: jr          $ra
    // 0x8023F17C: nop

    return;
    // 0x8023F17C: nop

;}
RECOMP_FUNC void D_802CCFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CD030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CD034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CD038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802CD03C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802CD040: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    // 0x802CD044: jal         0x802AA584
    // 0x802CD048: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    static_3_802AA584(rdram, ctx);
        goto after_0;
    // 0x802CD048: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    after_0:
    // 0x802CD04C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802CD050: addiu       $a1, $zero, 0xDD
    ctx->r5 = ADD32(0, 0XDD);
    // 0x802CD054: addiu       $a2, $zero, 0xE1
    ctx->r6 = ADD32(0, 0XE1);
    // 0x802CD058: jal         0x802AA584
    // 0x802CD05C: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    static_3_802AA584(rdram, ctx);
        goto after_1;
    // 0x802CD05C: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_1:
    // 0x802CD060: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x802CD064: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802CD068: addiu       $a2, $zero, 0xE2
    ctx->r6 = ADD32(0, 0XE2);
    // 0x802CD06C: jal         0x802AA584
    // 0x802CD070: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    static_3_802AA584(rdram, ctx);
        goto after_2;
    // 0x802CD070: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    after_2:
    // 0x802CD074: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x802CD078: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    // 0x802CD07C: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    // 0x802CD080: jal         0x802AA584
    // 0x802CD084: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    static_3_802AA584(rdram, ctx);
        goto after_3;
    // 0x802CD084: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    after_3:
    // 0x802CD088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CD08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CD090: jr          $ra
    // 0x802CD094: nop

    return;
    // 0x802CD094: nop

;}
RECOMP_FUNC void D_8029D028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D0A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029D0AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029D0B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8029D0B4: lbu         $v0, 0x18($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X18);
    // 0x8029D0B8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8029D0BC: beql        $v0, $zero, L_8029D104
    if (ctx->r2 == 0) {
        // 0x8029D0C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029D104;
    }
    goto skip_0;
    // 0x8029D0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8029D0C4: beql        $v0, $at, L_8029D104
    if (ctx->r2 == ctx->r1) {
        // 0x8029D0C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029D104;
    }
    goto skip_1;
    // 0x8029D0C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8029D0CC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8029D0D0: lui         $a3, 0x437F
    ctx->r7 = S32(0X437F << 16);
    // 0x8029D0D4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8029D0D8: jal         0x80221F44
    // 0x8029D0DC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    static_3_80221F44(rdram, ctx);
        goto after_0;
    // 0x8029D0DC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x8029D0E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029D0E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029D0E8: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8029D0EC: jal         0x8021FB54
    // 0x8029D0F0: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    static_3_8021FB54(rdram, ctx);
        goto after_1;
    // 0x8029D0F0: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_1:
    // 0x8029D0F4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8029D0F8: jal         0x8023413C
    // 0x8029D0FC: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    static_3_8023413C(rdram, ctx);
        goto after_2;
    // 0x8029D0FC: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_2:
    // 0x8029D100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029D104:
    // 0x8029D104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029D108: jr          $ra
    // 0x8029D10C: nop

    return;
    // 0x8029D10C: nop

;}
RECOMP_FUNC void D_802E3AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3B54: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E3B58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E3B5C: jr          $ra
    // 0x802E3B60: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E3B60: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802E01B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0234: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x802E0238: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802E023C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x802E0240: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x802E0244: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x802E0248: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x802E024C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x802E0250: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802E0254: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802E0258: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x802E025C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x802E0260: sw          $a1, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r5;
    // 0x802E0264: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802E0268: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802E026C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802E0270: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802E0274: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x802E0278: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802E027C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x802E0280: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802E0284: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x802E0288: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802E028C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802E0290: nop

    // 0x802E0294: bc1f        L_802E044C
    if (!c1cs) {
        // 0x802E0298: nop
    
            goto L_802E044C;
    }
    // 0x802E0298: nop

    // 0x802E029C: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x802E02A0: bne         $t6, $zero, L_802E044C
    if (ctx->r14 != 0) {
        // 0x802E02A4: nop
    
            goto L_802E044C;
    }
    // 0x802E02A4: nop

    // 0x802E02A8: jal         0x802AEE80
    // 0x802E02AC: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    static_3_802AEE80(rdram, ctx);
        goto after_0;
    // 0x802E02AC: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x802E02B0: beq         $v0, $zero, L_802E0444
    if (ctx->r2 == 0) {
        // 0x802E02B4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802E0444;
    }
    // 0x802E02B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E02B8: jal         0x802AEE54
    // 0x802E02BC: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    static_3_802AEE54(rdram, ctx);
        goto after_1;
    // 0x802E02BC: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    after_1:
    // 0x802E02C0: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E02C4: jal         0x802AEE80
    // 0x802E02C8: sw          $v0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r2;
    static_3_802AEE80(rdram, ctx);
        goto after_2;
    // 0x802E02C8: sw          $v0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r2;
    after_2:
    // 0x802E02CC: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x802E02D0: jal         0x80318180
    // 0x802E02D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80318180(rdram, ctx);
        goto after_3;
    // 0x802E02D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x802E02D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802E02DC: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E02E0: addiu       $a2, $sp, 0x164
    ctx->r6 = ADD32(ctx->r29, 0X164);
    // 0x802E02E4: jal         0x802B0330
    // 0x802E02E8: addiu       $a3, $sp, 0x160
    ctx->r7 = ADD32(ctx->r29, 0X160);
    static_3_802B0330(rdram, ctx);
        goto after_4;
    // 0x802E02E8: addiu       $a3, $sp, 0x160
    ctx->r7 = ADD32(ctx->r29, 0X160);
    after_4:
    // 0x802E02EC: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E02F0: jal         0x802AEE54
    // 0x802E02F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_5;
    // 0x802E02F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x802E02F8: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E02FC: jal         0x802AEE80
    // 0x802E0300: sw          $v0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r2;
    static_3_802AEE80(rdram, ctx);
        goto after_6;
    // 0x802E0300: sw          $v0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r2;
    after_6:
    // 0x802E0304: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x802E0308: jal         0x803192A0
    // 0x802E030C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_803192A0(rdram, ctx);
        goto after_7;
    // 0x802E030C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_7:
    // 0x802E0310: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802E0314: jal         0x802B0260
    // 0x802E0318: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    static_3_802B0260(rdram, ctx);
        goto after_8;
    // 0x802E0318: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    after_8:
    // 0x802E031C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802E0320: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0324: jal         0x802AEE54
    // 0x802E0328: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_9;
    // 0x802E0328: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x802E032C: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0330: jal         0x802AEE80
    // 0x802E0334: sw          $v0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r2;
    static_3_802AEE80(rdram, ctx);
        goto after_10;
    // 0x802E0334: sw          $v0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r2;
    after_10:
    // 0x802E0338: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x802E033C: jal         0x80318510
    // 0x802E0340: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80318510(rdram, ctx);
        goto after_11;
    // 0x802E0340: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_11:
    // 0x802E0344: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802E0348: jal         0x802B0084
    // 0x802E034C: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    static_3_802B0084(rdram, ctx);
        goto after_12;
    // 0x802E034C: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    after_12:
    // 0x802E0350: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0354: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802E0358: jal         0x80302980
    // 0x802E035C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_13;
    // 0x802E035C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_13:
    // 0x802E0360: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E0364: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E0368: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E036C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802E0370: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0374: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E0378: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E037C: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    // 0x802E0380: jal         0x80302988
    // 0x802E0384: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_14;
    // 0x802E0384: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_14:
    // 0x802E0388: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E038C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E0390: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E0394: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802E0398: jal         0x80302988
    // 0x802E039C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_15;
    // 0x802E039C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_15:
    // 0x802E03A0: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E03A4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E03A8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E03AC: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x802E03B0: jal         0x80302988
    // 0x802E03B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_16;
    // 0x802E03B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_16:
    // 0x802E03B8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802E03BC: beq         $s0, $at, L_802E03F0
    if (ctx->r16 == ctx->r1) {
        // 0x802E03C0: addiu       $a1, $zero, 0x97
        ctx->r5 = ADD32(0, 0X97);
            goto L_802E03F0;
    }
    // 0x802E03C0: addiu       $a1, $zero, 0x97
    ctx->r5 = ADD32(0, 0X97);
    // 0x802E03C4: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E03C8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E03CC: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E03D0: jal         0x80302988
    // 0x802E03D4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_17;
    // 0x802E03D4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_17:
    // 0x802E03D8: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E03DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E03E0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E03E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E03E8: jal         0x80302988
    // 0x802E03EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_18;
    // 0x802E03EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_18:
L_802E03F0:
    // 0x802E03F0: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E03F4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E03F8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E03FC: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x802E0400: jal         0x80302988
    // 0x802E0404: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_19;
    // 0x802E0404: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_19:
    // 0x802E0408: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E040C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E0410: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E0414: lw          $a1, 0x164($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X164);
    // 0x802E0418: jal         0x80302988
    // 0x802E041C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_20;
    // 0x802E041C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_20:
    // 0x802E0420: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0424: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E0428: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E042C: lw          $a1, 0x160($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X160);
    // 0x802E0430: jal         0x80302988
    // 0x802E0434: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_21;
    // 0x802E0434: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_21:
    // 0x802E0438: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E043C: jal         0x80302A7C
    // 0x802E0440: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_22;
    // 0x802E0440: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_22:
L_802E0444:
    // 0x802E0444: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802E0448: sb          $t7, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r15;
L_802E044C:
    // 0x802E044C: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802E0450: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x802E0454: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E0458: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x802E045C: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E0460: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E0464: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802E0468: bne         $t8, $zero, L_802E04DC
    if (ctx->r24 != 0) {
        // 0x802E046C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802E04DC;
    }
    // 0x802E046C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E0470: jal         0x802AEE54
    // 0x802E0474: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    static_3_802AEE54(rdram, ctx);
        goto after_23;
    // 0x802E0474: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    after_23:
    // 0x802E0478: jal         0x80318D0C
    // 0x802E047C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80318D0C(rdram, ctx);
        goto after_24;
    // 0x802E047C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_24:
    // 0x802E0480: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E0484: bnel        $v0, $at, L_802E04D8
    if (ctx->r2 != ctx->r1) {
        // 0x802E0488: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_802E04D8;
    }
    goto skip_0;
    // 0x802E0488: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    skip_0:
    // 0x802E048C: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0490: jal         0x80302980
    // 0x802E0494: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_25;
    // 0x802E0494: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_25:
    // 0x802E0498: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E049C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E04A0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E04A4: addiu       $a1, $zero, 0x83
    ctx->r5 = ADD32(0, 0X83);
    // 0x802E04A8: jal         0x80302988
    // 0x802E04AC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_26;
    // 0x802E04AC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_26:
    // 0x802E04B0: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E04B4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E04B8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E04BC: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    // 0x802E04C0: jal         0x80302988
    // 0x802E04C4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_27;
    // 0x802E04C4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_27:
    // 0x802E04C8: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E04CC: jal         0x80302A7C
    // 0x802E04D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_28;
    // 0x802E04D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_28:
    // 0x802E04D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_802E04D8:
    // 0x802E04D8: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
L_802E04DC:
    // 0x802E04DC: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x802E04E0: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x802E04E4: lbu         $t0, 0x0($s6)
    ctx->r8 = MEM_BU(ctx->r22, 0X0);
    // 0x802E04E8: addiu       $s0, $sp, 0x114
    ctx->r16 = ADD32(ctx->r29, 0X114);
    // 0x802E04EC: bnel        $t0, $zero, L_802E06F4
    if (ctx->r8 != 0) {
        // 0x802E04F0: lbu         $t0, 0xB98($s5)
        ctx->r8 = MEM_BU(ctx->r21, 0XB98);
            goto L_802E06F4;
    }
    goto skip_1;
    // 0x802E04F0: lbu         $t0, 0xB98($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0XB98);
    skip_1:
    // 0x802E04F4: jal         0x8022970C
    // 0x802E04F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_29;
    // 0x802E04F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x802E04FC: jal         0x802AED58
    // 0x802E0500: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    static_3_802AED58(rdram, ctx);
        goto after_30;
    // 0x802E0500: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    after_30:
    // 0x802E0504: beql        $v0, $zero, L_802E06F4
    if (ctx->r2 == 0) {
        // 0x802E0508: lbu         $t0, 0xB98($s5)
        ctx->r8 = MEM_BU(ctx->r21, 0XB98);
            goto L_802E06F4;
    }
    goto skip_2;
    // 0x802E0508: lbu         $t0, 0xB98($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0XB98);
    skip_2:
    // 0x802E050C: jal         0x802AED58
    // 0x802E0510: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    static_3_802AED58(rdram, ctx);
        goto after_31;
    // 0x802E0510: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    after_31:
    // 0x802E0514: jal         0x803183D0
    // 0x802E0518: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_32;
    // 0x802E0518: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_32:
    // 0x802E051C: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E0520: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E0524: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E0528: lh          $t1, 0x10($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X10);
    // 0x802E052C: jalr        $t9
    // 0x802E0530: addu        $a0, $t1, $v0
    ctx->r4 = ADD32(ctx->r9, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x802E0530: addu        $a0, $t1, $v0
    ctx->r4 = ADD32(ctx->r9, ctx->r2);
    after_33:
    // 0x802E0534: addiu       $t2, $sp, 0xF8
    ctx->r10 = ADD32(ctx->r29, 0XF8);
    // 0x802E0538: addiu       $t3, $sp, 0xFC
    ctx->r11 = ADD32(ctx->r29, 0XFC);
    // 0x802E053C: addiu       $t4, $sp, 0x100
    ctx->r12 = ADD32(ctx->r29, 0X100);
    // 0x802E0540: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802E0544: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802E0548: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802E054C: lwc1        $f12, 0x144($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X144);
    // 0x802E0550: lwc1        $f14, 0x148($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X148);
    // 0x802E0554: lw          $a2, 0x14C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14C);
    // 0x802E0558: jal         0x80214E7C
    // 0x802E055C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    static_3_80214E7C(rdram, ctx);
        goto after_34;
    // 0x802E055C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_34:
    // 0x802E0560: sw          $v0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r2;
    // 0x802E0564: blez        $v0, L_802E06F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802E0568: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802E06F0;
    }
    // 0x802E0568: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802E056C: addiu       $s4, $zero, 0x3500
    ctx->r20 = ADD32(0, 0X3500);
    // 0x802E0570: lbu         $v0, 0x0($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X0);
L_802E0574:
    // 0x802E0574: bne         $v0, $zero, L_802E0644
    if (ctx->r2 != 0) {
        // 0x802E0578: nop
    
            goto L_802E0644;
    }
    // 0x802E0578: nop

    // 0x802E057C: lw          $v1, 0x14($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X14);
    // 0x802E0580: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802E0584: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E0588: lbu         $t5, 0x6FB8($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X6FB8);
    // 0x802E058C: blez        $t5, L_802E0644
    if (SIGNED(ctx->r13) <= 0) {
        // 0x802E0590: addu        $t6, $v1, $s0
        ctx->r14 = ADD32(ctx->r3, ctx->r16);
            goto L_802E0644;
    }
    // 0x802E0590: addu        $t6, $v1, $s0
    ctx->r14 = ADD32(ctx->r3, ctx->r16);
L_802E0594:
    // 0x802E0594: lw          $v0, 0x6F94($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X6F94);
    // 0x802E0598: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x802E059C: beql        $v0, $zero, L_802E0628
    if (ctx->r2 == 0) {
        // 0x802E05A0: lw          $v1, 0x14($s5)
        ctx->r3 = MEM_W(ctx->r21, 0X14);
            goto L_802E0628;
    }
    goto skip_3;
    // 0x802E05A0: lw          $v1, 0x14($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X14);
    skip_3:
    // 0x802E05A4: lw          $a2, 0x1A0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1A0);
    // 0x802E05A8: sll         $t0, $s3, 2
    ctx->r8 = S32(ctx->r19 << 2);
    // 0x802E05AC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x802E05B0: lw          $t9, 0x8C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8C);
    // 0x802E05B4: lh          $t7, 0x88($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X88);
    // 0x802E05B8: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x802E05BC: jalr        $t9
    // 0x802E05C0: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x802E05C0: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    after_35:
    // 0x802E05C4: beql        $v0, $zero, L_802E0628
    if (ctx->r2 == 0) {
        // 0x802E05C8: lw          $v1, 0x14($s5)
        ctx->r3 = MEM_W(ctx->r21, 0X14);
            goto L_802E0628;
    }
    goto skip_4;
    // 0x802E05C8: lw          $v1, 0x14($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X14);
    skip_4:
    // 0x802E05CC: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E05D0: jal         0x80302980
    // 0x802E05D4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_36;
    // 0x802E05D4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_36:
    // 0x802E05D8: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E05DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E05E0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E05E4: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    // 0x802E05E8: jal         0x80302988
    // 0x802E05EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_37;
    // 0x802E05EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_37:
    // 0x802E05F0: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E05F4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E05F8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E05FC: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x802E0600: jal         0x80302988
    // 0x802E0604: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_38;
    // 0x802E0604: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_38:
    // 0x802E0608: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E060C: jal         0x80302A7C
    // 0x802E0610: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_39;
    // 0x802E0610: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_39:
    // 0x802E0614: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802E0618: sb          $t2, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r10;
    // 0x802E061C: b           L_802E0644
    // 0x802E0620: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
        goto L_802E0644;
    // 0x802E0620: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x802E0624: lw          $v1, 0x14($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X14);
L_802E0628:
    // 0x802E0628: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802E062C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E0630: lbu         $t3, 0x6FB8($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X6FB8);
    // 0x802E0634: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802E0638: bnel        $at, $zero, L_802E0594
    if (ctx->r1 != 0) {
        // 0x802E063C: addu        $t6, $v1, $s0
        ctx->r14 = ADD32(ctx->r3, ctx->r16);
            goto L_802E0594;
    }
    goto skip_5;
    // 0x802E063C: addu        $t6, $v1, $s0
    ctx->r14 = ADD32(ctx->r3, ctx->r16);
    skip_5:
    // 0x802E0640: lbu         $v0, 0x0($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X0);
L_802E0644:
    // 0x802E0644: bne         $v0, $zero, L_802E06DC
    if (ctx->r2 != 0) {
        // 0x802E0648: sll         $s2, $s3, 2
        ctx->r18 = S32(ctx->r19 << 2);
            goto L_802E06DC;
    }
    // 0x802E0648: sll         $s2, $s3, 2
    ctx->r18 = S32(ctx->r19 << 2);
    // 0x802E064C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802E0650: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_802E0654:
    // 0x802E0654: lw          $a2, 0x16CC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X16CC);
    // 0x802E0658: lw          $t5, 0xF8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF8);
    // 0x802E065C: lh          $t4, 0x88($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X88);
    // 0x802E0660: lw          $t9, 0x8C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8C);
    // 0x802E0664: addu        $t6, $t5, $s2
    ctx->r14 = ADD32(ctx->r13, ctx->r18);
    // 0x802E0668: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802E066C: addiu       $a0, $a0, 0x152C
    ctx->r4 = ADD32(ctx->r4, 0X152C);
    // 0x802E0670: jalr        $t9
    // 0x802E0674: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x802E0674: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    after_40:
    // 0x802E0678: beq         $v0, $zero, L_802E06D4
    if (ctx->r2 == 0) {
        // 0x802E067C: addiu       $s1, $s1, 0x6A0
        ctx->r17 = ADD32(ctx->r17, 0X6A0);
            goto L_802E06D4;
    }
    // 0x802E067C: addiu       $s1, $s1, 0x6A0
    ctx->r17 = ADD32(ctx->r17, 0X6A0);
    // 0x802E0680: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0684: jal         0x80302980
    // 0x802E0688: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_41;
    // 0x802E0688: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_41:
    // 0x802E068C: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0690: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E0694: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E0698: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    // 0x802E069C: jal         0x80302988
    // 0x802E06A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_42;
    // 0x802E06A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_42:
    // 0x802E06A4: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E06A8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E06AC: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E06B0: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x802E06B4: jal         0x80302988
    // 0x802E06B8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_43;
    // 0x802E06B8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_43:
    // 0x802E06BC: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E06C0: jal         0x80302A7C
    // 0x802E06C4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_44;
    // 0x802E06C4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_44:
    // 0x802E06C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802E06CC: b           L_802E06DC
    // 0x802E06D0: sb          $t7, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r15;
        goto L_802E06DC;
    // 0x802E06D0: sb          $t7, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r15;
L_802E06D4:
    // 0x802E06D4: bne         $s1, $s4, L_802E0654
    if (ctx->r17 != ctx->r20) {
        // 0x802E06D8: addiu       $s0, $s0, 0x6A0
        ctx->r16 = ADD32(ctx->r16, 0X6A0);
            goto L_802E0654;
    }
    // 0x802E06D8: addiu       $s0, $s0, 0x6A0
    ctx->r16 = ADD32(ctx->r16, 0X6A0);
L_802E06DC:
    // 0x802E06DC: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x802E06E0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802E06E4: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802E06E8: bnel        $at, $zero, L_802E0574
    if (ctx->r1 != 0) {
        // 0x802E06EC: lbu         $v0, 0x0($s6)
        ctx->r2 = MEM_BU(ctx->r22, 0X0);
            goto L_802E0574;
    }
    goto skip_6;
    // 0x802E06EC: lbu         $v0, 0x0($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X0);
    skip_6:
L_802E06F0:
    // 0x802E06F0: lbu         $t0, 0xB98($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0XB98);
L_802E06F4:
    // 0x802E06F4: beql        $t0, $zero, L_802E095C
    if (ctx->r8 == 0) {
        // 0x802E06F8: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_802E095C;
    }
    goto skip_7;
    // 0x802E06F8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_7:
    // 0x802E06FC: lw          $a2, 0x8BC($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X8BC);
    // 0x802E0700: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x802E0704: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802E0708: lh          $t1, 0x60($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X60);
    // 0x802E070C: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x802E0710: addu        $a0, $t1, $s5
    ctx->r4 = ADD32(ctx->r9, ctx->r21);
    // 0x802E0714: jalr        $t9
    // 0x802E0718: addiu       $a0, $a0, 0x71C
    ctx->r4 = ADD32(ctx->r4, 0X71C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x802E0718: addiu       $a0, $a0, 0x71C
    ctx->r4 = ADD32(ctx->r4, 0X71C);
    after_45:
    // 0x802E071C: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x802E0720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0724: jal         0x80228DE0
    // 0x802E0728: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80228DE0(rdram, ctx);
        goto after_46;
    // 0x802E0728: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_46:
    // 0x802E072C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0730: lw          $a1, 0x4A2C($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X4A2C);
    // 0x802E0734: jal         0x802D01D4
    // 0x802E0738: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_47;
    // 0x802E0738: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_47:
    // 0x802E073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0740: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802E0744: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x802E0748: jal         0x8022A0D0
    // 0x802E074C: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_48;
    // 0x802E074C: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_48:
    // 0x802E0750: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802E0754: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0758: addiu       $a1, $s5, 0x71C
    ctx->r5 = ADD32(ctx->r21, 0X71C);
    // 0x802E075C: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x802E0760: lw          $a3, 0xDC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XDC);
    // 0x802E0764: jal         0x802AFF70
    // 0x802E0768: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_49;
    // 0x802E0768: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_49:
    // 0x802E076C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E0770: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E0774: lwc1        $f18, 0x4A2C($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X4A2C);
    // 0x802E0778: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E077C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802E0780: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802E0784: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802E0788: swc1        $f6, 0x4A2C($s5)
    MEM_W(0X4A2C, ctx->r21) = ctx->f6.u32l;
    // 0x802E078C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E0790: lwc1        $f8, 0x4A2C($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X4A2C);
    // 0x802E0794: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802E0798: nop

    // 0x802E079C: bc1fl       L_802E08BC
    if (!c1cs) {
        // 0x802E07A0: lbu         $t4, 0x4A31($s5)
        ctx->r12 = MEM_BU(ctx->r21, 0X4A31);
            goto L_802E08BC;
    }
    goto skip_8;
    // 0x802E07A0: lbu         $t4, 0x4A31($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X4A31);
    skip_8:
    // 0x802E07A4: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x802E07A8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802E07AC: bnel        $t2, $zero, L_802E08BC
    if (ctx->r10 != 0) {
        // 0x802E07B0: lbu         $t4, 0x4A31($s5)
        ctx->r12 = MEM_BU(ctx->r21, 0X4A31);
            goto L_802E08BC;
    }
    goto skip_9;
    // 0x802E07B0: lbu         $t4, 0x4A31($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X4A31);
    skip_9:
    // 0x802E07B4: jal         0x8023499C
    // 0x802E07B8: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    static_3_8023499C(rdram, ctx);
        goto after_50;
    // 0x802E07B8: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    after_50:
    // 0x802E07BC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802E07C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802E07C4: nop

    // 0x802E07C8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802E07CC: nop

    // 0x802E07D0: bc1fl       L_802E0844
    if (!c1cs) {
        // 0x802E07D4: lw          $a0, 0x14($s5)
        ctx->r4 = MEM_W(ctx->r21, 0X14);
            goto L_802E0844;
    }
    goto skip_10;
    // 0x802E07D4: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    skip_10:
    // 0x802E07D8: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E07DC: jal         0x80302980
    // 0x802E07E0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_51;
    // 0x802E07E0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_51:
    // 0x802E07E4: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E07E8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E07EC: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E07F0: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x802E07F4: jal         0x80302988
    // 0x802E07F8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_52;
    // 0x802E07F8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_52:
    // 0x802E07FC: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0800: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E0804: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E0808: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    // 0x802E080C: jal         0x80302988
    // 0x802E0810: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_53;
    // 0x802E0810: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_53:
    // 0x802E0814: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0818: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E081C: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E0820: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    // 0x802E0824: jal         0x80302988
    // 0x802E0828: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_54;
    // 0x802E0828: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_54:
    // 0x802E082C: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0830: jal         0x80302A7C
    // 0x802E0834: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_55;
    // 0x802E0834: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_55:
    // 0x802E0838: b           L_802E08BC
    // 0x802E083C: lbu         $t4, 0x4A31($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X4A31);
        goto L_802E08BC;
    // 0x802E083C: lbu         $t4, 0x4A31($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X4A31);
    // 0x802E0840: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
L_802E0844:
    // 0x802E0844: jal         0x80302980
    // 0x802E0848: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_56;
    // 0x802E0848: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_56:
    // 0x802E084C: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0850: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E0854: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E0858: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x802E085C: jal         0x80302988
    // 0x802E0860: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_57;
    // 0x802E0860: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_57:
    // 0x802E0864: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0868: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E086C: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E0870: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    // 0x802E0874: jal         0x80302988
    // 0x802E0878: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_58;
    // 0x802E0878: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_58:
    // 0x802E087C: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0880: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E0884: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E0888: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    // 0x802E088C: jal         0x80302988
    // 0x802E0890: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_59;
    // 0x802E0890: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_59:
    // 0x802E0894: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E0898: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802E089C: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802E08A0: addiu       $a1, $zero, 0x8F
    ctx->r5 = ADD32(0, 0X8F);
    // 0x802E08A4: jal         0x80302988
    // 0x802E08A8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_60;
    // 0x802E08A8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_60:
    // 0x802E08AC: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x802E08B0: jal         0x80302A7C
    // 0x802E08B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_61;
    // 0x802E08B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_61:
    // 0x802E08B8: lbu         $t4, 0x4A31($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X4A31);
L_802E08BC:
    // 0x802E08BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802E08C0: lwc1        $f8, 0x174($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802E08C4: bnel        $t4, $zero, L_802E0900
    if (ctx->r12 != 0) {
        // 0x802E08C8: lwc1        $f10, 0x4A34($s5)
        ctx->f10.u32l = MEM_W(ctx->r21, 0X4A34);
            goto L_802E0900;
    }
    goto skip_11;
    // 0x802E08C8: lwc1        $f10, 0x4A34($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X4A34);
    skip_11:
    // 0x802E08CC: sb          $t5, 0x4A31($s5)
    MEM_B(0X4A31, ctx->r21) = ctx->r13;
    // 0x802E08D0: lwc1        $f18, 0x174($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802E08D4: swc1        $f18, 0x4A34($s5)
    MEM_W(0X4A34, ctx->r21) = ctx->f18.u32l;
    // 0x802E08D8: jal         0x80309740
    // 0x802E08DC: lwc1        $f12, 0x174($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X174);
    static_3_80309740(rdram, ctx);
        goto after_62;
    // 0x802E08DC: lwc1        $f12, 0x174($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X174);
    after_62:
    // 0x802E08E0: lw          $v1, 0x14($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X14);
    // 0x802E08E4: lwc1        $f4, 0x174($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802E08E8: lwc1        $f0, 0x32AC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X32AC);
    // 0x802E08EC: addiu       $v0, $v1, 0x6D0
    ctx->r2 = ADD32(ctx->r3, 0X6D0);
    // 0x802E08F0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802E08F4: b           L_802E0958
    // 0x802E08F8: swc1        $f6, 0x170($v0)
    MEM_W(0X170, ctx->r2) = ctx->f6.u32l;
        goto L_802E0958;
    // 0x802E08F8: swc1        $f6, 0x170($v0)
    MEM_W(0X170, ctx->r2) = ctx->f6.u32l;
    // 0x802E08FC: lwc1        $f10, 0x4A34($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X4A34);
L_802E0900:
    // 0x802E0900: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802E0904: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802E0908: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802E090C: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x802E0910: nop

    // 0x802E0914: bc1fl       L_802E095C
    if (!c1cs) {
        // 0x802E0918: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_802E095C;
    }
    goto skip_12;
    // 0x802E0918: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_12:
    // 0x802E091C: lbu         $t6, 0x4A30($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X4A30);
    // 0x802E0920: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802E0924: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802E0928: bne         $t6, $zero, L_802E0958
    if (ctx->r14 != 0) {
        // 0x802E092C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802E0958;
    }
    // 0x802E092C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E0930: sb          $t7, 0x4A30($s5)
    MEM_B(0X4A30, ctx->r21) = ctx->r15;
    // 0x802E0934: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x802E0938: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802E093C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802E0940: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802E0944: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x802E0948: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802E094C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802E0950: jal         0x8030890C
    // 0x802E0954: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8030890C(rdram, ctx);
        goto after_63;
    // 0x802E0954: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_63:
L_802E0958:
    // 0x802E0958: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_802E095C:
    // 0x802E095C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x802E0960: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x802E0964: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802E0968: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802E096C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802E0970: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x802E0974: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x802E0978: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x802E097C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x802E0980: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    // 0x802E0984: jr          $ra
    // 0x802E0988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E0988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802ED1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED244: bne         $a0, $zero, L_802ED25C
    if (ctx->r4 != 0) {
        // 0x802ED248: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802ED25C;
    }
    // 0x802ED248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED24C: jal         0x802C67EC
    // 0x802ED250: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ED250: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802ED254: beq         $v0, $zero, L_802ED2B4
    if (ctx->r2 == 0) {
        // 0x802ED258: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802ED2B4;
    }
    // 0x802ED258: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802ED25C:
    // 0x802ED25C: jal         0x8031C47C
    // 0x802ED260: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ED260: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802ED264: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED268: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ED26C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED270: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802ED274: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802ED278: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802ED27C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ED280: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x802ED284: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED288: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802ED28C: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802ED290: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802ED294: sh          $t8, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r24;
    // 0x802ED298: sh          $t9, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r25;
    // 0x802ED29C: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802ED2A0: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802ED2A4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED2A8: jal         0x8031DA20
    // 0x802ED2AC: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031DA20(rdram, ctx);
        goto after_2;
    // 0x802ED2AC: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802ED2B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802ED2B4:
    // 0x802ED2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ED2B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED2BC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802ED2C0: jr          $ra
    // 0x802ED2C4: nop

    return;
    // 0x802ED2C4: nop

;}
RECOMP_FUNC void D_8023FA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FA20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FA24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023FA28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023FA2C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8023FA30: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023FA34: beql        $t6, $zero, L_8023FAA8
    if (ctx->r14 == 0) {
        // 0x8023FA38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023FAA8;
    }
    goto skip_0;
    // 0x8023FA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023FA3C: jal         0x80237840
    // 0x8023FA40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80237840(rdram, ctx);
        goto after_0;
    // 0x8023FA40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023FA44: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FA48: beq         $v0, $zero, L_8023FAA4
    if (ctx->r2 == 0) {
        // 0x8023FA4C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023FAA4;
    }
    // 0x8023FA4C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023FA50: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023FA54: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8023FA58: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8023FA5C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8023FA60: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8023FA64: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8023FA68: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8023FA6C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023FA70: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x8023FA74: bgez        $v1, L_8023FA84
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023FA78: negu        $t3, $v1
        ctx->r11 = SUB32(0, ctx->r3);
            goto L_8023FA84;
    }
    // 0x8023FA78: negu        $t3, $v1
    ctx->r11 = SUB32(0, ctx->r3);
    // 0x8023FA7C: b           L_8023FA88
    // 0x8023FA80: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
        goto L_8023FA88;
    // 0x8023FA80: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
L_8023FA84:
    // 0x8023FA84: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
L_8023FA88:
    // 0x8023FA88: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8023FA8C: lw          $t4, 0x8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X8);
    // 0x8023FA90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023FA94: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x8023FA98: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023FA9C: jalr        $t9
    // 0x8023FAA0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023FAA0: nop

    after_1:
L_8023FAA4:
    // 0x8023FAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023FAA8:
    // 0x8023FAA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023FAAC: jr          $ra
    // 0x8023FAB0: nop

    return;
    // 0x8023FAB0: nop

;}
RECOMP_FUNC void D_80236F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236F30: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80236F34: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80236F38: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x80236F3C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80236F40: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80236F44: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80236F48: bgez        $a0, L_80236F60
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80236F4C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80236F60;
    }
    // 0x80236F4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80236F50: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80236F54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80236F58: nop

    // 0x80236F5C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80236F60:
    // 0x80236F60: div.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80236F64: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80236F68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80236F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236F70: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80236F74: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80236F78: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80236F7C: nop

    // 0x80236F80: cvt.w.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = CVT_W_S(ctx->f12.fl);
    // 0x80236F84: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80236F88: nop

    // 0x80236F8C: andi        $at, $a1, 0x4
    ctx->r1 = ctx->r5 & 0X4;
    // 0x80236F90: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80236F94: beq         $a1, $zero, L_80236FE4
    if (ctx->r5 == 0) {
        // 0x80236F98: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80236FE4;
    }
    // 0x80236F98: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80236F9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80236FA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236FA4: sub.s       $f8, $f12, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80236FA8: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80236FAC: nop

    // 0x80236FB0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80236FB4: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80236FB8: nop

    // 0x80236FBC: andi        $at, $a1, 0x4
    ctx->r1 = ctx->r5 & 0X4;
    // 0x80236FC0: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80236FC4: bne         $a1, $zero, L_80236FDC
    if (ctx->r5 != 0) {
        // 0x80236FC8: nop
    
            goto L_80236FDC;
    }
    // 0x80236FC8: nop

    // 0x80236FCC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80236FD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80236FD4: b           L_80236FF4
    // 0x80236FD8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_80236FF4;
    // 0x80236FD8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_80236FDC:
    // 0x80236FDC: b           L_80236FF4
    // 0x80236FE0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_80236FF4;
    // 0x80236FE0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_80236FE4:
    // 0x80236FE4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80236FE8: nop

    // 0x80236FEC: bltz        $a1, L_80236FDC
    if (SIGNED(ctx->r5) < 0) {
        // 0x80236FF0: nop
    
            goto L_80236FDC;
    }
    // 0x80236FF0: nop

L_80236FF4:
    // 0x80236FF4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80236FF8: sltiu       $at, $a1, 0x84
    ctx->r1 = ctx->r5 < 0X84 ? 1 : 0;
    // 0x80236FFC: beq         $at, $zero, L_8023700C
    if (ctx->r1 == 0) {
        // 0x80237000: nop
    
            goto L_8023700C;
    }
    // 0x80237000: nop

    // 0x80237004: b           L_80237088
    // 0x80237008: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80237088;
    // 0x80237008: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8023700C:
    // 0x8023700C: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x80237010: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x80237014: mflo        $a2
    ctx->r6 = lo;
    // 0x80237018: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x8023701C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80237020: slti        $at, $a2, 0x11
    ctx->r1 = SIGNED(ctx->r6) < 0X11 ? 1 : 0;
    // 0x80237024: bne         $at, $zero, L_80237030
    if (ctx->r1 != 0) {
        // 0x80237028: nop
    
            goto L_80237030;
    }
    // 0x80237028: nop

    // 0x8023702C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_80237030:
    // 0x80237030: addiu       $t9, $a1, -0x1
    ctx->r25 = ADD32(ctx->r5, -0X1);
    // 0x80237034: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80237038: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8023703C: addiu       $t1, $a2, -0x1
    ctx->r9 = ADD32(ctx->r6, -0X1);
    // 0x80237040: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80237044: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80237048: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8023704C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80237050: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80237054: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80237058: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x8023705C: div         $zero, $t5, $a1
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r5)));
    // 0x80237060: mflo        $v0
    ctx->r2 = lo;
    // 0x80237064: bne         $a1, $zero, L_80237070
    if (ctx->r5 != 0) {
        // 0x80237068: nop
    
            goto L_80237070;
    }
    // 0x80237068: nop

    // 0x8023706C: break       7
    do_break(2149806188);
L_80237070:
    // 0x80237070: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80237074: bne         $a1, $at, L_80237088
    if (ctx->r5 != ctx->r1) {
        // 0x80237078: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80237088;
    }
    // 0x80237078: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023707C: bne         $t5, $at, L_80237088
    if (ctx->r13 != ctx->r1) {
        // 0x80237080: nop
    
            goto L_80237088;
    }
    // 0x80237080: nop

    // 0x80237084: break       6
    do_break(2149806212);
L_80237088:
    // 0x80237088: jr          $ra
    // 0x8023708C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8023708C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void D_80294A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294AF0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80294AF4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80294AF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80294AFC: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x80294B00: beq         $at, $zero, L_80294B2C
    if (ctx->r1 == 0) {
        // 0x80294B04: nop
    
            goto L_80294B2C;
    }
    // 0x80294B04: nop

    // 0x80294B08: lwc1        $f4, 0xF4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XF4);
    // 0x80294B0C: lwc1        $f6, 0x150($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X150);
    // 0x80294B10: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80294B14: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x80294B18: nop

    // 0x80294B1C: bc1f        L_80294B2C
    if (!c1cs) {
        // 0x80294B20: nop
    
            goto L_80294B2C;
    }
    // 0x80294B20: nop

    // 0x80294B24: jr          $ra
    // 0x80294B28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80294B28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80294B2C:
    // 0x80294B2C: jr          $ra
    // 0x80294B30: nop

    return;
    // 0x80294B30: nop

;}

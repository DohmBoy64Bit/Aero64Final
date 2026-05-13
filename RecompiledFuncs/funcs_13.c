#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802D800C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D808C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8090: jr          $ra
    // 0x802D8094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802D8094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802051EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802051EC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802051F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802051F4: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x802051F8: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x802051FC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80205200: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80205204: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80205208: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8020520C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80205210: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80205214: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x80205218: blez        $t6, L_80205250
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8020521C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80205250;
    }
    // 0x8020521C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80205220: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80205224: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80205228: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x8020522C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80205230:
    // 0x80205230: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80205234: jal         0x802374B0
    // 0x80205238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802374B0(rdram, ctx);
        goto after_0;
    // 0x80205238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020523C: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x80205240: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80205244: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80205248: bnel        $at, $zero, L_80205230
    if (ctx->r1 != 0) {
        // 0x8020524C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80205230;
    }
    goto skip_0;
    // 0x8020524C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_80205250:
    // 0x80205250: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x80205254: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x80205258: lw          $s0, 0x4($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X4);
    // 0x8020525C: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80205260: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80205264: beq         $s0, $zero, L_802052D0
    if (ctx->r16 == 0) {
        // 0x80205268: nop
    
            goto L_802052D0;
    }
    // 0x80205268: nop

L_8020526C:
    // 0x8020526C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80205270: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80205274: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80205278: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x8020527C: sltu        $at, $t0, $t8
    ctx->r1 = ctx->r8 < ctx->r24 ? 1 : 0;
    // 0x80205280: beq         $at, $zero, L_802052C8
    if (ctx->r1 == 0) {
        // 0x80205284: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_802052C8;
    }
    // 0x80205284: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80205288: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x8020528C: bne         $s0, $t1, L_80205298
    if (ctx->r16 != ctx->r9) {
        // 0x80205290: nop
    
            goto L_80205298;
    }
    // 0x80205290: nop

    // 0x80205294: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_80205298:
    // 0x80205298: jal         0x80237120
    // 0x8020529C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237120(rdram, ctx);
        goto after_1;
    // 0x8020529C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802052A0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802052A4: beql        $a1, $zero, L_802052C0
    if (ctx->r5 == 0) {
        // 0x802052A8: sw          $s0, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->r16;
            goto L_802052C0;
    }
    goto skip_1;
    // 0x802052A8: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
    skip_1:
    // 0x802052AC: jal         0x80237150
    // 0x802052B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237150(rdram, ctx);
        goto after_2;
    // 0x802052B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802052B4: b           L_802052C8
    // 0x802052B8: nop

        goto L_802052C8;
    // 0x802052B8: nop

    // 0x802052BC: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
L_802052C0:
    // 0x802052C0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x802052C4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_802052C8:
    // 0x802052C8: bne         $s1, $zero, L_8020526C
    if (ctx->r17 != 0) {
        // 0x802052CC: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8020526C;
    }
    // 0x802052CC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_802052D0:
    // 0x802052D0: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802052D4: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x802052D8: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x802052DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802052E0: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x802052E4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802052E8: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x802052EC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802052F0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802052F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802052F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802052FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80205300: jr          $ra
    // 0x80205304: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80205304: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802014EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802014EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802014F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802014F4: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
    // 0x802014F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802014FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80201500: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201504: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201508: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x8020150C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80201510: jal         0x802011D0
    // 0x80201514: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    static_3_802011D0(rdram, ctx);
        goto after_0;
    // 0x80201514: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80201518: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8020151C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80201520: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201524: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201528: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020152C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201530: bne         $at, $zero, L_80201554
    if (ctx->r1 != 0) {
        // 0x80201534: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_80201554;
    }
    // 0x80201534: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201538: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8020153C: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x80201540: jal         0x80231C9C
    // 0x80201544: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80201544: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x80201548: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8020154C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201550: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_80201554:
    // 0x80201554: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201558: beq         $at, $zero, L_802015EC
    if (ctx->r1 == 0) {
        // 0x8020155C: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802015EC;
    }
    // 0x8020155C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201560: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x80201564: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201568: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8020156C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80201570: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80201574: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80201578: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8020157C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80201580: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80201584: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80201588: addu        $v1, $t7, $t6
    ctx->r3 = ADD32(ctx->r15, ctx->r14);
    // 0x8020158C: lw          $t8, 0xA0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XA0);
    // 0x80201590: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80201594: beql        $t8, $at, L_802015E8
    if (ctx->r24 == ctx->r1) {
        // 0x80201598: lbu         $t7, 0x27($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X27);
            goto L_802015E8;
    }
    goto skip_0;
    // 0x80201598: lbu         $t7, 0x27($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X27);
    skip_0:
    // 0x8020159C: lbu         $a0, 0xAD($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XAD);
    // 0x802015A0: jal         0x80203654
    // 0x802015A4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_80203654(rdram, ctx);
        goto after_2;
    // 0x802015A4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_2:
    // 0x802015A8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802015AC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802015B0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802015B4: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x802015B8: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x802015BC: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x802015C0: sw          $zero, 0xA0($t0)
    MEM_W(0XA0, ctx->r8) = 0;
    // 0x802015C4: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x802015C8: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x802015CC: sb          $t1, 0xAD($t3)
    MEM_B(0XAD, ctx->r11) = ctx->r9;
    // 0x802015D0: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x802015D4: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x802015D8: sb          $zero, 0xB0($t5)
    MEM_B(0XB0, ctx->r13) = 0;
    // 0x802015DC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x802015E0: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x802015E4: lbu         $t7, 0x27($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X27);
L_802015E8:
    // 0x802015E8: sb          $t7, 0x8C($v1)
    MEM_B(0X8C, ctx->r3) = ctx->r15;
L_802015EC:
    // 0x802015EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802015F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802015F4: jr          $ra
    // 0x802015F8: nop

    return;
    // 0x802015F8: nop

;}
RECOMP_FUNC void func_80225424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80225424: beq         $a2, $at, L_8022544C
    if (ctx->r6 == ctx->r1) {
        // 0x80225428: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8022544C;
    }
    // 0x80225428: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8022542C: beq         $a2, $at, L_80225454
    if (ctx->r6 == ctx->r1) {
        // 0x80225430: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80225454;
    }
    // 0x80225430: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80225434: beql        $a2, $at, L_80225460
    if (ctx->r6 == ctx->r1) {
        // 0x80225438: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_80225460;
    }
    goto skip_0;
    // 0x80225438: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    skip_0:
    // 0x8022543C: b           L_80225494
    // 0x80225440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80225494;
    // 0x80225440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225444: b           L_80225490
    // 0x80225448: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
        goto L_80225490;
    // 0x80225448: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_8022544C:
    // 0x8022544C: b           L_80225490
    // 0x80225450: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
        goto L_80225490;
    // 0x80225450: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
L_80225454:
    // 0x80225454: b           L_80225490
    // 0x80225458: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_80225490;
    // 0x80225458: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x8022545C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80225460:
    // 0x80225460: b           L_80225490
    // 0x80225464: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
        goto L_80225490;
    // 0x80225464: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x80225468: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x8022546C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80225470: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80225474: jal         0x8022B460
    // 0x80225478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022B460(rdram, ctx);
        goto after_0;
    // 0x80225478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8022547C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80225480: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80225484: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x80225488: addu        $t2, $t1, $a2
    ctx->r10 = ADD32(ctx->r9, ctx->r6);
    // 0x8022548C: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
L_80225490:
    // 0x80225490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80225494:
    // 0x80225494: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225498: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022549C: jr          $ra
    // 0x802254A0: nop

    return;
    // 0x802254A0: nop

;}
RECOMP_FUNC void D_80234B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234B70: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80234B74: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234B78: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80234B7C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234B80: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80234B84: nop

    // 0x80234B88: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80234B8C: jr          $ra
    // 0x80234B90: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
    return;
    // 0x80234B90: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
;}
RECOMP_FUNC void D_8023DFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DFC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023DFC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023DFC8: jal         0x80246F80
    // 0x8023DFCC: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_80246F80(rdram, ctx);
        goto after_0;
    // 0x8023DFCC: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_0:
    // 0x8023DFD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023DFD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023DFD8: jr          $ra
    // 0x8023DFDC: nop

    return;
    // 0x8023DFDC: nop

;}
RECOMP_FUNC void D_80296574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802965F4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802965F8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802965FC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80296600: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80296604: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80296608: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8029660C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80296610: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80296614: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x80296618: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x8029661C: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x80296620: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80296624: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x80296628: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x8029662C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80296630: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x80296634: sb          $zero, 0x15B6($at)
    MEM_B(0X15B6, ctx->r1) = 0;
    // 0x80296638: sw          $t8, 0x14D1($at)
    MEM_W(0X14D1, ctx->r1) = ctx->r24;
    // 0x8029663C: jal         0x80224CA8
    // 0x80296640: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x80296640: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_0:
    // 0x80296644: jal         0x80224CA8
    // 0x80296648: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x80296648: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_1:
    // 0x8029664C: jal         0x8030A9AC
    // 0x80296650: nop

    static_3_8030A9AC(rdram, ctx);
        goto after_2;
    // 0x80296650: nop

    after_2:
    // 0x80296654: jal         0x80224CA8
    // 0x80296658: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x80296658: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_3:
    // 0x8029665C: jal         0x80224CA8
    // 0x80296660: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x80296660: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_4:
    // 0x80296664: jal         0x80224CA8
    // 0x80296668: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x80296668: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_5:
    // 0x8029666C: jal         0x80224CA8
    // 0x80296670: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x80296670: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_6:
    // 0x80296674: jal         0x80224CA8
    // 0x80296678: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_7;
    // 0x80296678: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_7:
    // 0x8029667C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80296680: jal         0x80205AA0
    // 0x80296684: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_8;
    // 0x80296684: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x80296688: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029668C: jal         0x80205EBC
    // 0x80296690: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    static_3_80205EBC(rdram, ctx);
        goto after_9;
    // 0x80296690: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_9:
    // 0x80296694: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80296698: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8029669C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802966A0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802966A4: jal         0x80205E0C
    // 0x802966A8: sw          $t9, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r25;
    static_3_80205E0C(rdram, ctx);
        goto after_10;
    // 0x802966A8: sw          $t9, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r25;
    after_10:
    // 0x802966AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802966B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802966B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802966B8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802966BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802966C0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802966C4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802966C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802966CC: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802966D0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802966D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802966D8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802966DC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802966E0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802966E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802966E8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802966EC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802966F0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802966F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802966F8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802966FC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80296700: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80296704: jal         0x80205C7C
    // 0x80296708: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_80205C7C(rdram, ctx);
        goto after_11;
    // 0x80296708: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x8029670C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80296710: jal         0x802B0078
    // 0x80296714: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    static_3_802B0078(rdram, ctx);
        goto after_12;
    // 0x80296714: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_12:
    // 0x80296718: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8029671C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80296720: sw          $t0, 0x1124($s0)
    MEM_W(0X1124, ctx->r16) = ctx->r8;
    // 0x80296724: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80296728: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8029672C: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x80296730: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80296734: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x80296738: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8029673C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80296740: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80296744: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x80296748: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x8029674C: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x80296750: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x80296754: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x80296758: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x8029675C: lw          $t3, 0x14($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X14);
    // 0x80296760: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x80296764: lw          $at, 0x18($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X18);
    // 0x80296768: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x8029676C: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x80296770: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80296774: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80296778: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x8029677C: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80296780: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x80296784: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80296788: jal         0x80303778
    // 0x8029678C: nop

    static_3_80303778(rdram, ctx);
        goto after_13;
    // 0x8029678C: nop

    after_13:
    // 0x80296790: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80296794: sb          $zero, 0x151A($at)
    MEM_B(0X151A, ctx->r1) = 0;
    // 0x80296798: jal         0x802C86A8
    // 0x8029679C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C86A8(rdram, ctx);
        goto after_14;
    // 0x8029679C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x802967A0: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x802967A4: sb          $zero, 0x15AD($at)
    MEM_B(0X15AD, ctx->r1) = 0;
    // 0x802967A8: sb          $zero, 0x15AE($at)
    MEM_B(0X15AE, ctx->r1) = 0;
    // 0x802967AC: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802967B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802967B4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802967B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802967BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802967C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802967C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802967C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802967CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802967D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802967D4: jal         0x8030890C
    // 0x802967D8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_15;
    // 0x802967D8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_15:
    // 0x802967DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802967E0: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x802967E4: sh          $t8, 0x15B7($at)
    MEM_H(0X15B7, ctx->r1) = ctx->r24;
    // 0x802967E8: sb          $zero, 0x1529($at)
    MEM_B(0X1529, ctx->r1) = 0;
    // 0x802967EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802967F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802967F4: jal         0x80309B88
    // 0x802967F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309B88(rdram, ctx);
        goto after_16;
    // 0x802967F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x802967FC: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80296800: sb          $zero, 0x15B5($at)
    MEM_B(0X15B5, ctx->r1) = 0;
    // 0x80296804: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80296808: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8029680C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80296810: jr          $ra
    // 0x80296814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80296814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8029F1C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029F248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029F24C: lwc1        $f18, 0x38($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8029F250: lwc1        $f16, 0x38($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8029F254: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8029F258: lwc1        $f8, 0x30($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8029F25C: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8029F260: lwc1        $f18, 0x34($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8029F264: lwc1        $f6, 0x34($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8029F268: sub.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8029F26C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8029F270: jal         0x802D05CC
    // 0x8029F274: sub.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f6.fl;
    static_3_802D05CC(rdram, ctx);
        goto after_0;
    // 0x8029F274: sub.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f6.fl;
    after_0:
    // 0x8029F278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029F27C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029F280: jr          $ra
    // 0x8029F284: nop

    return;
    // 0x8029F284: nop

;}
RECOMP_FUNC void D_802E5A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E5AF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802E5AF8: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x802E5AFC: sb          $t6, 0xDB8($a0)
    MEM_B(0XDB8, ctx->r4) = ctx->r14;
    // 0x802E5B00: jr          $ra
    // 0x802E5B04: swc1        $f4, 0xDBC($a0)
    MEM_W(0XDBC, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802E5B04: swc1        $f4, 0xDBC($a0)
    MEM_W(0XDBC, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802A213C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A21BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A21C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A21C4: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x802A21C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A21CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A21D0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802A21D4: swc1        $f12, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f12.u32l;
    // 0x802A21D8: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    // 0x802A21DC: bc1fl       L_802A21F4
    if (!c1cs) {
        // 0x802A21E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A21F4;
    }
    goto skip_0;
    // 0x802A21E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A21E4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802A21E8: jal         0x802D2910
    // 0x802A21EC: nop

    static_3_802D2910(rdram, ctx);
        goto after_0;
    // 0x802A21EC: nop

    after_0:
    // 0x802A21F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A21F4:
    // 0x802A21F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A21F8: jr          $ra
    // 0x802A21FC: nop

    return;
    // 0x802A21FC: nop

;}
RECOMP_FUNC void D_802DD750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD7D0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802DD7D4: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x802DD7D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DD7DC: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x802DD7E0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802DD7E4: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x802DD7E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DD7EC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802DD7F0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x802DD7F4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802DD7F8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802DD7FC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802DD800: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DD804: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x802DD808: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x802DD80C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802DD810: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802DD814: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802DD818: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DD81C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802DD820: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802DD824: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x802DD828: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x802DD82C: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x802DD830: jal         0x80308530
    // 0x802DD834: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_0;
    // 0x802DD834: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x802DD838: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802DD83C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802DD840: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x802DD844: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x802DD848: sw          $v0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r2;
    // 0x802DD84C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DD850: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DD854: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DD858: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802DD85C: swc1        $f8, 0x7DC($v0)
    MEM_W(0X7DC, ctx->r2) = ctx->f8.u32l;
    // 0x802DD860: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DD864: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x802DD868: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DD86C: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    // 0x802DD870: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DD874: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DD878: jal         0x802E77B4
    // 0x802DD87C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_1;
    // 0x802DD87C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x802DD880: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DD884: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DD888: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x802DD88C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802DD890: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DD894: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DD898: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DD89C: lui         $a3, 0x457A
    ctx->r7 = S32(0X457A << 16);
    // 0x802DD8A0: jal         0x802E77B4
    // 0x802DD8A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_2;
    // 0x802DD8A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x802DD8A8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802DD8AC: jal         0x80318C9C
    // 0x802DD8B0: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    static_3_80318C9C(rdram, ctx);
        goto after_3;
    // 0x802DD8B0: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    after_3:
    // 0x802DD8B4: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x802DD8B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DD8BC: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x802DD8C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DD8C4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802DD8C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802DD8CC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802DD8D0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802DD8D4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802DD8D8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802DD8DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DD8E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DD8E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802DD8E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802DD8EC: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x802DD8F0: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x802DD8F4: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802DD8F8: jal         0x80308530
    // 0x802DD8FC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    static_3_80308530(rdram, ctx);
        goto after_4;
    // 0x802DD8FC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x802DD900: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802DD904: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DD908: sw          $v0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r2;
    // 0x802DD90C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DD910: swc1        $f6, 0x7DC($v0)
    MEM_W(0X7DC, ctx->r2) = ctx->f6.u32l;
    // 0x802DD914: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DD918: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802DD91C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DD920: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x802DD924: lui         $a3, 0xC567
    ctx->r7 = S32(0XC567 << 16);
    // 0x802DD928: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802DD92C: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DD930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DD934: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x802DD938: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x802DD93C: jal         0x802E77B4
    // 0x802DD940: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_5;
    // 0x802DD940: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x802DD944: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DD948: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DD94C: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x802DD950: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DD954: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DD958: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DD95C: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x802DD960: lui         $a3, 0xC4FA
    ctx->r7 = S32(0XC4FA << 16);
    // 0x802DD964: jal         0x802E77B4
    // 0x802DD968: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_6;
    // 0x802DD968: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x802DD96C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802DD970: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DD974: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x802DD978: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DD97C: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DD980: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DD984: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x802DD988: lui         $a3, 0xC47A
    ctx->r7 = S32(0XC47A << 16);
    // 0x802DD98C: jal         0x802E77B4
    // 0x802DD990: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_7;
    // 0x802DD990: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x802DD994: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802DD998: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DD99C: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x802DD9A0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802DD9A4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DD9A8: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DD9AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DD9B0: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x802DD9B4: jal         0x802E77B4
    // 0x802DD9B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_8;
    // 0x802DD9B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x802DD9BC: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802DD9C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DD9C4: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x802DD9C8: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DD9CC: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DD9D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DD9D4: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x802DD9D8: lui         $a3, 0x457A
    ctx->r7 = S32(0X457A << 16);
    // 0x802DD9DC: jal         0x802E77B4
    // 0x802DD9E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_9;
    // 0x802DD9E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x802DD9E4: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802DD9E8: jal         0x80318C9C
    // 0x802DD9EC: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    static_3_80318C9C(rdram, ctx);
        goto after_10;
    // 0x802DD9EC: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    after_10:
    // 0x802DD9F0: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x802DD9F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DD9F8: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x802DD9FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DDA00: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802DDA04: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802DDA08: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x802DDA0C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802DDA10: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802DDA14: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802DDA18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DDA1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DDA20: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802DDA24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802DDA28: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x802DDA2C: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x802DDA30: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x802DDA34: jal         0x80308530
    // 0x802DDA38: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_11;
    // 0x802DDA38: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x802DDA3C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802DDA40: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802DDA44: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802DDA48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DDA4C: swc1        $f16, 0x7DC($v0)
    MEM_W(0X7DC, ctx->r2) = ctx->f16.u32l;
    // 0x802DDA50: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DDA54: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802DDA58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DDA5C: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x802DDA60: lui         $a3, 0xC566
    ctx->r7 = S32(0XC566 << 16);
    // 0x802DDA64: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802DDA68: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DDA6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DDA70: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x802DDA74: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802DDA78: jal         0x802E77B4
    // 0x802DDA7C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_12;
    // 0x802DDA7C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x802DDA80: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802DDA84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DDA88: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x802DDA8C: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DDA90: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DDA94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DDA98: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x802DDA9C: lui         $a3, 0xC4FA
    ctx->r7 = S32(0XC4FA << 16);
    // 0x802DDAA0: jal         0x802E77B4
    // 0x802DDAA4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_13;
    // 0x802DDAA4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x802DDAA8: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802DDAAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DDAB0: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x802DDAB4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DDAB8: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DDABC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DDAC0: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x802DDAC4: lui         $a3, 0xC47A
    ctx->r7 = S32(0XC47A << 16);
    // 0x802DDAC8: jal         0x802E77B4
    // 0x802DDACC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_14;
    // 0x802DDACC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x802DDAD0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DDAD4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DDAD8: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x802DDADC: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802DDAE0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DDAE4: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DDAE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DDAEC: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x802DDAF0: jal         0x802E77B4
    // 0x802DDAF4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_15;
    // 0x802DDAF4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x802DDAF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DDAFC: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DDB00: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x802DDB04: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DDB08: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DDB0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DDB10: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x802DDB14: lui         $a3, 0x457A
    ctx->r7 = S32(0X457A << 16);
    // 0x802DDB18: jal         0x802E77B4
    // 0x802DDB1C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_16;
    // 0x802DDB1C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_16:
    // 0x802DDB20: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802DDB24: jal         0x80318C9C
    // 0x802DDB28: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    static_3_80318C9C(rdram, ctx);
        goto after_17;
    // 0x802DDB28: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    after_17:
    // 0x802DDB2C: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x802DDB30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DDB34: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x802DDB38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DDB3C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802DDB40: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802DDB44: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802DDB48: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802DDB4C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802DDB50: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802DDB54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DDB58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DDB5C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802DDB60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802DDB64: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x802DDB68: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x802DDB6C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802DDB70: jal         0x80308530
    // 0x802DDB74: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    static_3_80308530(rdram, ctx);
        goto after_18;
    // 0x802DDB74: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_18:
    // 0x802DDB78: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x802DDB7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DDB80: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DDB84: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DDB88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DDB8C: swc1        $f6, 0x7DC($v0)
    MEM_W(0X7DC, ctx->r2) = ctx->f6.u32l;
    // 0x802DDB90: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DDB94: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802DDB98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DDB9C: lw          $a0, 0x7C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7C);
    // 0x802DDBA0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DDBA4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x802DDBA8: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    // 0x802DDBAC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x802DDBB0: jal         0x802E77B4
    // 0x802DDBB4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_19;
    // 0x802DDBB4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_19:
    // 0x802DDBB8: lui         $at, 0x444D
    ctx->r1 = S32(0X444D << 16);
    // 0x802DDBBC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802DDBC0: lw          $a0, 0x7C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7C);
    // 0x802DDBC4: lui         $a3, 0xC53B
    ctx->r7 = S32(0XC53B << 16);
    // 0x802DDBC8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DDBCC: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DDBD0: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DDBD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DDBD8: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x802DDBDC: jal         0x802E77B4
    // 0x802DDBE0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_20;
    // 0x802DDBE0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_20:
    // 0x802DDBE4: lui         $at, 0x444D
    ctx->r1 = S32(0X444D << 16);
    // 0x802DDBE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DDBEC: lw          $a0, 0x7C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7C);
    // 0x802DDBF0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802DDBF4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802DDBF8: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802DDBFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DDC00: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x802DDC04: jal         0x802E77B4
    // 0x802DDC08: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_21;
    // 0x802DDC08: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_21:
    // 0x802DDC0C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802DDC10: jal         0x80318C9C
    // 0x802DDC14: lw          $a0, 0x7C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7C);
    static_3_80318C9C(rdram, ctx);
        goto after_22;
    // 0x802DDC14: lw          $a0, 0x7C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7C);
    after_22:
    // 0x802DDC18: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802DDC1C: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x802DDC20: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x802DDC24: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x802DDC28: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x802DDC2C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802DDC30: jr          $ra
    // 0x802DDC34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802DDC34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8024A5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A5F0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8024A5F4: sb          $zero, 0xF($sp)
    MEM_B(0XF, ctx->r29) = 0;
    // 0x8024A5F8: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_8024A5FC:
    // 0x8024A5FC: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8024A600: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_8024A604:
    // 0x8024A604: lbu         $t7, 0xF($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A608: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x8024A60C: beq         $t8, $zero, L_8024A620
    if (ctx->r24 == 0) {
        // 0x8024A610: nop
    
            goto L_8024A620;
    }
    // 0x8024A610: nop

    // 0x8024A614: addiu       $t9, $zero, 0x85
    ctx->r25 = ADD32(0, 0X85);
    // 0x8024A618: b           L_8024A624
    // 0x8024A61C: sb          $t9, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r25;
        goto L_8024A624;
    // 0x8024A61C: sb          $t9, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r25;
L_8024A620:
    // 0x8024A620: sb          $zero, 0xE($sp)
    MEM_B(0XE, ctx->r29) = 0;
L_8024A624:
    // 0x8024A624: lbu         $t0, 0xF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A628: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8024A62C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8024A630: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8024A634: bne         $t2, $at, L_8024A648
    if (ctx->r10 != ctx->r1) {
        // 0x8024A638: sb          $t1, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r9;
            goto L_8024A648;
    }
    // 0x8024A638: sb          $t1, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r9;
    // 0x8024A63C: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x8024A640: b           L_8024A67C
    // 0x8024A644: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
        goto L_8024A67C;
    // 0x8024A644: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
L_8024A648:
    // 0x8024A648: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8024A64C: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x8024A650: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8024A654: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x8024A658: and         $t8, $t4, $t7
    ctx->r24 = ctx->r12 & ctx->r15;
    // 0x8024A65C: beq         $t8, $zero, L_8024A66C
    if (ctx->r24 == 0) {
        // 0x8024A660: nop
    
            goto L_8024A66C;
    }
    // 0x8024A660: nop

    // 0x8024A664: b           L_8024A670
    // 0x8024A668: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8024A670;
    // 0x8024A668: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8024A66C:
    // 0x8024A66C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8024A670:
    // 0x8024A670: lbu         $t9, 0xF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A674: or          $t0, $t9, $a1
    ctx->r8 = ctx->r25 | ctx->r5;
    // 0x8024A678: sb          $t0, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r8;
L_8024A67C:
    // 0x8024A67C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8024A680: lbu         $t2, 0xF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A684: lbu         $t1, 0xE($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XE);
    // 0x8024A688: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x8024A68C: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x8024A690: xor         $t3, $t2, $t1
    ctx->r11 = ctx->r10 ^ ctx->r9;
    // 0x8024A694: bgez        $t5, L_8024A604
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8024A698: sb          $t3, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r11;
            goto L_8024A604;
    }
    // 0x8024A698: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
    // 0x8024A69C: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8024A6A0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8024A6A4: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x8024A6A8: slti        $at, $t7, 0x21
    ctx->r1 = SIGNED(ctx->r15) < 0X21 ? 1 : 0;
    // 0x8024A6AC: bne         $at, $zero, L_8024A5FC
    if (ctx->r1 != 0) {
        // 0x8024A6B0: sw          $t7, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r15;
            goto L_8024A5FC;
    }
    // 0x8024A6B0: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8024A6B4: lbu         $v0, 0xF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A6B8: jr          $ra
    // 0x8024A6BC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8024A6BC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void D_80208210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208210: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80208214: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80208218: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x8020821C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80208220: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80208224: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80208228: bne         $a3, $zero, L_80208234
    if (ctx->r7 != 0) {
        // 0x8020822C: sw          $zero, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = 0;
            goto L_80208234;
    }
    // 0x8020822C: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80208230: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
L_80208234:
    // 0x80208234: jal         0x80208230
    // 0x80208238: nop

    static_3_80208230(rdram, ctx);
        goto after_0;
    // 0x80208238: nop

    after_0:
    // 0x8020823C: beq         $v0, $zero, L_8020824C
    if (ctx->r2 == 0) {
        // 0x80208240: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8020824C;
    }
    // 0x80208240: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80208244: b           L_802082D8
    // 0x80208248: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
        goto L_802082D8;
    // 0x80208248: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_8020824C:
    // 0x8020824C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80208250: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80208254: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80208258: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8020825C: addiu       $t7, $sp, 0x28
    ctx->r15 = ADD32(ctx->r29, 0X28);
    // 0x80208260: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80208264: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80208268: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8020826C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80208270: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80208274: jal         0x80239120
    // 0x80208278: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80239120(rdram, ctx);
        goto after_1;
    // 0x80208278: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_1:
    // 0x8020827C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80208280: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80208284: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80208288: jal         0x802392C0
    // 0x8020828C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    static_3_802392C0(rdram, ctx);
        goto after_2;
    // 0x8020828C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x80208290: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x80208294: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80208298: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020829C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802082A0: sltu        $at, $v1, $t8
    ctx->r1 = ctx->r3 < ctx->r24 ? 1 : 0;
    // 0x802082A4: beq         $at, $zero, L_802082B4
    if (ctx->r1 == 0) {
        // 0x802082A8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802082B4;
    }
    // 0x802082A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802082AC: b           L_802082BC
    // 0x802082B0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_802082BC;
    // 0x802082B0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
L_802082B4:
    // 0x802082B4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x802082B8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
L_802082BC:
    // 0x802082BC: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x802082C0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x802082C4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802082C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802082CC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802082D0: jal         0x80239650
    // 0x802082D4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    static_3_80239650(rdram, ctx);
        goto after_3;
    // 0x802082D4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_3:
L_802082D8:
    // 0x802082D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802082DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802082E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802082E4: jr          $ra
    // 0x802082E8: nop

    return;
    // 0x802082E8: nop

;}
RECOMP_FUNC void D_802CCCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCD7C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802CCD80: jr          $ra
    // 0x802CCD84: swc1        $f12, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802CCD84: swc1        $f12, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_80240320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80240320: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80240324: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80240328: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8024032C: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80240330: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80240334: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80240338: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x8024033C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80240340: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80240344: beq         $v1, $zero, L_80240388
    if (ctx->r3 == 0) {
        // 0x80240348: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_80240388;
    }
    // 0x80240348: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8024034C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80240350: sw          $t9, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r25;
    // 0x80240354: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80240358: lw          $t0, 0x64($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X64);
    // 0x8024035C: bnel        $t0, $zero, L_80240370
    if (ctx->r8 != 0) {
        // 0x80240360: lw          $t1, 0x68($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X68);
            goto L_80240370;
    }
    goto skip_0;
    // 0x80240360: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
    skip_0:
    // 0x80240364: b           L_80240374
    // 0x80240368: sw          $v1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r3;
        goto L_80240374;
    // 0x80240368: sw          $v1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r3;
    // 0x8024036C: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
L_80240370:
    // 0x80240370: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
L_80240374:
    // 0x80240374: sw          $v1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r3;
    // 0x80240378: sb          $a3, 0x31($v1)
    MEM_B(0X31, ctx->r3) = ctx->r7;
    // 0x8024037C: sb          $a1, 0x32($v1)
    MEM_B(0X32, ctx->r3) = ctx->r5;
    // 0x80240380: sb          $a2, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r6;
    // 0x80240384: sw          $v1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r3;
L_80240388:
    // 0x80240388: jr          $ra
    // 0x8024038C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8024038C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_8027F894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F90C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027F910: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8027F914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027F918: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8027F91C: addiu       $a0, $a0, 0x3570
    ctx->r4 = ADD32(ctx->r4, 0X3570);
    // 0x8027F920: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027F924: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8027F928: jal         0x8029DE58
    // 0x8027F92C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    static_3_8029DE58(rdram, ctx);
        goto after_0;
    // 0x8027F92C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x8027F930: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8027F934: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8027F938: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027F93C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x8027F940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027F944: sw          $t7, 0x32A4($a3)
    MEM_W(0X32A4, ctx->r7) = ctx->r15;
    // 0x8027F948: jal         0x8029E54C
    // 0x8027F94C: sb          $t6, 0x3624($a3)
    MEM_B(0X3624, ctx->r7) = ctx->r14;
    static_3_8029E54C(rdram, ctx);
        goto after_1;
    // 0x8027F94C: sb          $t6, 0x3624($a3)
    MEM_B(0X3624, ctx->r7) = ctx->r14;
    after_1:
    // 0x8027F950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027F954: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027F958: jr          $ra
    // 0x8027F95C: nop

    return;
    // 0x8027F95C: nop

;}
RECOMP_FUNC void D_80232680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80232680: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x80232684: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80232688: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8023268C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80232690: or          $t9, $a2, $zero
    ctx->r25 = ctx->r6 | 0;
    // 0x80232694: subu        $a1, $t7, $v0
    ctx->r5 = SUB32(ctx->r15, ctx->r2);
    // 0x80232698: subu        $a2, $t9, $v0
    ctx->r6 = SUB32(ctx->r25, ctx->r2);
    // 0x8023269C: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x802326A0: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x802326A4: andi        $t0, $a3, 0xFF
    ctx->r8 = ctx->r7 & 0XFF;
    // 0x802326A8: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802326AC: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802326B0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802326B4: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x802326B8: beq         $t0, $zero, L_8023277C
    if (ctx->r8 == 0) {
        // 0x802326BC: or          $a2, $t4, $zero
        ctx->r6 = ctx->r12 | 0;
            goto L_8023277C;
    }
    // 0x802326BC: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x802326C0: subu        $v0, $t4, $t2
    ctx->r2 = SUB32(ctx->r12, ctx->r10);
    // 0x802326C4: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x802326C8: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802326CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802326D0: beq         $t6, $at, L_802326E8
    if (ctx->r14 == ctx->r1) {
        // 0x802326D4: nop
    
            goto L_802326E8;
    }
    // 0x802326D4: nop

    // 0x802326D8: beq         $t6, $zero, L_802326E8
    if (ctx->r14 == 0) {
        // 0x802326DC: addiu       $at, $zero, -0x3F
        ctx->r1 = ADD32(0, -0X3F);
            goto L_802326E8;
    }
    // 0x802326DC: addiu       $at, $zero, -0x3F
    ctx->r1 = ADD32(0, -0X3F);
    // 0x802326E0: bne         $t6, $at, L_802326F0
    if (ctx->r14 != ctx->r1) {
        // 0x802326E4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_802326F0;
    }
    // 0x802326E4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_802326E8:
    // 0x802326E8: jr          $ra
    // 0x802326EC: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    return;
    // 0x802326EC: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_802326F0:
    // 0x802326F0: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x802326F4: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802326F8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x802326FC: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x80232700: slti        $at, $t8, 0x40
    ctx->r1 = SIGNED(ctx->r24) < 0X40 ? 1 : 0;
    // 0x80232704: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80232708: bne         $at, $zero, L_80232720
    if (ctx->r1 != 0) {
        // 0x8023270C: sra         $a2, $t9, 16
        ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80232720;
    }
    // 0x8023270C: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80232710: addiu       $a1, $t8, -0x40
    ctx->r5 = ADD32(ctx->r24, -0X40);
    // 0x80232714: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x80232718: b           L_80232734
    // 0x8023271C: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
        goto L_80232734;
    // 0x8023271C: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
L_80232720:
    // 0x80232720: bgezl       $a1, L_80232738
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80232724: slti        $at, $a2, 0x40
        ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
            goto L_80232738;
    }
    goto skip_0;
    // 0x80232724: slti        $at, $a2, 0x40
    ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
    skip_0:
    // 0x80232728: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x8023272C: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x80232730: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
L_80232734:
    // 0x80232734: slti        $at, $a2, 0x40
    ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
L_80232738:
    // 0x80232738: bne         $at, $zero, L_80232750
    if (ctx->r1 != 0) {
        // 0x8023273C: sll         $t9, $a1, 7
        ctx->r25 = S32(ctx->r5 << 7);
            goto L_80232750;
    }
    // 0x8023273C: sll         $t9, $a1, 7
    ctx->r25 = S32(ctx->r5 << 7);
    // 0x80232740: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    // 0x80232744: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x80232748: b           L_80232764
    // 0x8023274C: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
        goto L_80232764;
    // 0x8023274C: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
L_80232750:
    // 0x80232750: bgezl       $a2, L_80232768
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80232754: sll         $t0, $a2, 1
        ctx->r8 = S32(ctx->r6 << 1);
            goto L_80232768;
    }
    goto skip_1;
    // 0x80232754: sll         $t0, $a2, 1
    ctx->r8 = S32(ctx->r6 << 1);
    skip_1:
    // 0x80232758: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x8023275C: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x80232760: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
L_80232764:
    // 0x80232764: sll         $t0, $a2, 1
    ctx->r8 = S32(ctx->r6 << 1);
L_80232768:
    // 0x80232768: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8023276C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80232770: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80232774: jr          $ra
    // 0x80232778: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    return;
    // 0x80232778: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
L_8023277C:
    // 0x8023277C: subu        $v0, $a2, $a1
    ctx->r2 = SUB32(ctx->r6, ctx->r5);
    // 0x80232780: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x80232784: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80232788: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023278C: beq         $t3, $at, L_802327A4
    if (ctx->r11 == ctx->r1) {
        // 0x80232790: nop
    
            goto L_802327A4;
    }
    // 0x80232790: nop

    // 0x80232794: beq         $t3, $zero, L_802327A4
    if (ctx->r11 == 0) {
        // 0x80232798: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_802327A4;
    }
    // 0x80232798: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x8023279C: bne         $t3, $at, L_802327AC
    if (ctx->r11 != ctx->r1) {
        // 0x802327A0: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_802327AC;
    }
    // 0x802327A0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_802327A4:
    // 0x802327A4: jr          $ra
    // 0x802327A8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    return;
    // 0x802327A8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_802327AC:
    // 0x802327AC: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x802327B0: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802327B4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802327B8: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x802327BC: slti        $at, $t5, 0x40
    ctx->r1 = SIGNED(ctx->r13) < 0X40 ? 1 : 0;
    // 0x802327C0: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x802327C4: bne         $at, $zero, L_802327DC
    if (ctx->r1 != 0) {
        // 0x802327C8: sra         $a2, $t6, 16
        ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
            goto L_802327DC;
    }
    // 0x802327C8: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802327CC: addiu       $a1, $t5, -0x40
    ctx->r5 = ADD32(ctx->r13, -0X40);
    // 0x802327D0: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x802327D4: b           L_802327F0
    // 0x802327D8: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
        goto L_802327F0;
    // 0x802327D8: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
L_802327DC:
    // 0x802327DC: bgezl       $a1, L_802327F4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x802327E0: slti        $at, $a2, 0x40
        ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
            goto L_802327F4;
    }
    goto skip_2;
    // 0x802327E0: slti        $at, $a2, 0x40
    ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
    skip_2:
    // 0x802327E4: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x802327E8: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x802327EC: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
L_802327F0:
    // 0x802327F0: slti        $at, $a2, 0x40
    ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
L_802327F4:
    // 0x802327F4: bne         $at, $zero, L_8023280C
    if (ctx->r1 != 0) {
        // 0x802327F8: sll         $t7, $a1, 1
        ctx->r15 = S32(ctx->r5 << 1);
            goto L_8023280C;
    }
    // 0x802327F8: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x802327FC: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    // 0x80232800: sll         $t2, $a2, 16
    ctx->r10 = S32(ctx->r6 << 16);
    // 0x80232804: b           L_80232820
    // 0x80232808: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
        goto L_80232820;
    // 0x80232808: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
L_8023280C:
    // 0x8023280C: bgezl       $a2, L_80232824
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80232810: sll         $t6, $a2, 7
        ctx->r14 = S32(ctx->r6 << 7);
            goto L_80232824;
    }
    goto skip_3;
    // 0x80232810: sll         $t6, $a2, 7
    ctx->r14 = S32(ctx->r6 << 7);
    skip_3:
    // 0x80232814: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x80232818: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x8023281C: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
L_80232820:
    // 0x80232820: sll         $t6, $a2, 7
    ctx->r14 = S32(ctx->r6 << 7);
L_80232824:
    // 0x80232824: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80232828: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8023282C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80232830: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80232834: jr          $ra
    // 0x80232838: nop

    return;
    // 0x80232838: nop

;}
RECOMP_FUNC void D_80298B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298BFC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80298C00: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80298C04: jr          $ra
    // 0x80298C08: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x80298C08: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802E0F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E101C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E1020: beq         $a0, $zero, L_802E103C
    if (ctx->r4 == 0) {
        // 0x802E1024: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802E103C;
    }
    // 0x802E1024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E1028: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x802E102C: beql        $t6, $zero, L_802E1040
    if (ctx->r14 == 0) {
        // 0x802E1030: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802E1040;
    }
    goto skip_0;
    // 0x802E1030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802E1034: jal         0x802C681C
    // 0x802E1038: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802E1038: nop

    after_0:
L_802E103C:
    // 0x802E103C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802E1040:
    // 0x802E1040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E1044: jr          $ra
    // 0x802E1048: nop

    return;
    // 0x802E1048: nop

;}
RECOMP_FUNC void D_802D125C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D12DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D12E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D12E4: jal         0x8028D750
    // 0x802D12E8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D750(rdram, ctx);
        goto after_0;
    // 0x802D12E8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802D12EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D12F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D12F4: jr          $ra
    // 0x802D12F8: nop

    return;
    // 0x802D12F8: nop

;}
RECOMP_FUNC void D_80290828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802908A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802908AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802908B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802908B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802908B8: beq         $a0, $zero, L_80290920
    if (ctx->r4 == 0) {
        // 0x802908BC: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80290920;
    }
    // 0x802908BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802908C0: addiu       $a0, $a0, 0x850
    ctx->r4 = ADD32(ctx->r4, 0X850);
    // 0x802908C4: jal         0x8031DD60
    // 0x802908C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DD60(rdram, ctx);
        goto after_0;
    // 0x802908C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802908CC: addiu       $a0, $s0, 0x760
    ctx->r4 = ADD32(ctx->r16, 0X760);
    // 0x802908D0: jal         0x8031C638
    // 0x802908D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031C638(rdram, ctx);
        goto after_1;
    // 0x802908D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802908D8: addiu       $a0, $s0, 0x52C
    ctx->r4 = ADD32(ctx->r16, 0X52C);
    // 0x802908DC: jal         0x8031FBCC
    // 0x802908E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031FBCC(rdram, ctx);
        goto after_2;
    // 0x802908E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802908E4: addiu       $a0, $s0, 0x43C
    ctx->r4 = ADD32(ctx->r16, 0X43C);
    // 0x802908E8: jal         0x8031DD60
    // 0x802908EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DD60(rdram, ctx);
        goto after_3;
    // 0x802908EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802908F0: addiu       $a0, $s0, 0x21C
    ctx->r4 = ADD32(ctx->r16, 0X21C);
    // 0x802908F4: jal         0x8031CFCC
    // 0x802908F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031CFCC(rdram, ctx);
        goto after_4;
    // 0x802908F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x802908FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80290900: jal         0x8031CFCC
    // 0x80290904: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031CFCC(rdram, ctx);
        goto after_5;
    // 0x80290904: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80290908: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8029090C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80290910: beql        $t7, $zero, L_80290924
    if (ctx->r15 == 0) {
        // 0x80290914: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80290924;
    }
    goto skip_0;
    // 0x80290914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80290918: jal         0x802C681C
    // 0x8029091C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_6;
    // 0x8029091C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_80290920:
    // 0x80290920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80290924:
    // 0x80290924: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80290928: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029092C: jr          $ra
    // 0x80290930: nop

    return;
    // 0x80290930: nop

;}
RECOMP_FUNC void D_802371C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802371C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802371C4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802371C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802371CC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x802371D0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802371D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802371D8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802371DC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802371E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802371E4: sw          $t6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r14;
    // 0x802371E8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x802371EC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x802371F0: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x802371F4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x802371F8: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x802371FC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80237200: sw          $zero, 0x8($t1)
    MEM_W(0X8, ctx->r9) = 0;
    // 0x80237204: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80237208: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8023720C: sw          $t2, 0x11C($t3)
    MEM_W(0X11C, ctx->r11) = ctx->r10;
    // 0x80237210: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80237214: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80237218: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x8023721C: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80237220: sw          $t6, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r14;
    // 0x80237224: sw          $t7, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->r15;
    // 0x80237228: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8023722C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80237230: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80237234: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x80237238: sltiu       $at, $t1, 0x10
    ctx->r1 = ctx->r9 < 0X10 ? 1 : 0;
    // 0x8023723C: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80237240: subu        $t2, $t0, $at
    ctx->r10 = SUB32(ctx->r8, ctx->r1);
    // 0x80237244: addiu       $t3, $t1, -0x10
    ctx->r11 = ADD32(ctx->r9, -0X10);
    // 0x80237248: sw          $t3, 0xF4($t9)
    MEM_W(0XF4, ctx->r25) = ctx->r11;
    // 0x8023724C: sw          $t2, 0xF0($t9)
    MEM_W(0XF0, ctx->r25) = ctx->r10;
    // 0x80237250: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80237254: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x80237258: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x8023725C: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80237260: sw          $t6, 0x100($t5)
    MEM_W(0X100, ctx->r13) = ctx->r14;
    // 0x80237264: sw          $t7, 0x104($t5)
    MEM_W(0X104, ctx->r13) = ctx->r15;
    // 0x80237268: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023726C: lui         $t8, 0x3F
    ctx->r24 = S32(0X3F << 16);
    // 0x80237270: ori         $t8, $t8, 0xFF01
    ctx->r24 = ctx->r24 | 0XFF01;
    // 0x80237274: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80237278: ori         $t0, $zero, 0xFF03
    ctx->r8 = 0 | 0XFF03;
    // 0x8023727C: sw          $t0, 0x118($t1)
    MEM_W(0X118, ctx->r9) = ctx->r8;
    // 0x80237280: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80237284: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80237288: lui         $at, 0x3F
    ctx->r1 = S32(0X3F << 16);
    // 0x8023728C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x80237290: srl         $t9, $t3, 16
    ctx->r25 = S32(U32(ctx->r11) >> 16);
    // 0x80237294: sw          $t9, 0x128($t4)
    MEM_W(0X128, ctx->r12) = ctx->r25;
    // 0x80237298: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8023729C: lui         $t6, 0x100
    ctx->r14 = S32(0X100 << 16);
    // 0x802372A0: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x802372A4: sw          $t6, 0x12C($t7)
    MEM_W(0X12C, ctx->r15) = ctx->r14;
    // 0x802372A8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x802372AC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802372B0: sw          $zero, 0x18($t5)
    MEM_W(0X18, ctx->r13) = 0;
    // 0x802372B4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x802372B8: sh          $t8, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r24;
    // 0x802372BC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x802372C0: jal         0x80241760
    // 0x802372C4: sh          $zero, 0x12($t1)
    MEM_H(0X12, ctx->r9) = 0;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x802372C4: sh          $zero, 0x12($t1)
    MEM_H(0X12, ctx->r9) = 0;
    after_0:
    // 0x802372C8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802372CC: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x802372D0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x802372D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802372D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802372DC: sw          $t2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r10;
    // 0x802372E0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x802372E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802372E8: jal         0x80241780
    // 0x802372EC: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x802372EC: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    after_1:
    // 0x802372F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802372F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802372F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802372FC: jr          $ra
    // 0x80237300: nop

    return;
    // 0x80237300: nop

;}
RECOMP_FUNC void D_802EEE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EEE90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802EEE94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802EEE98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EEE9C: bne         $a0, $zero, L_802EEEB4
    if (ctx->r4 != 0) {
        // 0x802EEEA0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802EEEB4;
    }
    // 0x802EEEA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802EEEA4: jal         0x802C67EC
    // 0x802EEEA8: addiu       $a0, $zero, 0xEC
    ctx->r4 = ADD32(0, 0XEC);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EEEA8: addiu       $a0, $zero, 0xEC
    ctx->r4 = ADD32(0, 0XEC);
    after_0:
    // 0x802EEEAC: beq         $v0, $zero, L_802EEF8C
    if (ctx->r2 == 0) {
        // 0x802EEEB0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802EEF8C;
    }
    // 0x802EEEB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802EEEB4:
    // 0x802EEEB4: jal         0x8031A55C
    // 0x802EEEB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031A55C(rdram, ctx);
        goto after_1;
    // 0x802EEEB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802EEEBC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802EEEC0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802EEEC4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802EEEC8: addiu       $at, $zero, -0xC8
    ctx->r1 = ADD32(0, -0XC8);
    // 0x802EEECC: sh          $t7, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r15;
    // 0x802EEED0: sw          $t6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r14;
    // 0x802EEED4: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    // 0x802EEED8: sh          $zero, 0xBE($s0)
    MEM_H(0XBE, ctx->r16) = 0;
    // 0x802EEEDC: sh          $zero, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = 0;
    // 0x802EEEE0: bne         $s0, $at, L_802EEEF8
    if (ctx->r16 != ctx->r1) {
        // 0x802EEEE4: addiu       $v1, $s0, 0xC8
        ctx->r3 = ADD32(ctx->r16, 0XC8);
            goto L_802EEEF8;
    }
    // 0x802EEEE4: addiu       $v1, $s0, 0xC8
    ctx->r3 = ADD32(ctx->r16, 0XC8);
    // 0x802EEEE8: jal         0x802C67EC
    // 0x802EEEEC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    static_3_802C67EC(rdram, ctx);
        goto after_2;
    // 0x802EEEEC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_2:
    // 0x802EEEF0: beq         $v0, $zero, L_802EEF0C
    if (ctx->r2 == 0) {
        // 0x802EEEF4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802EEF0C;
    }
    // 0x802EEEF4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802EEEF8:
    // 0x802EEEF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802EEEFC: nop

    // 0x802EEF00: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x802EEF04: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x802EEF08: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
L_802EEF0C:
    // 0x802EEF0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EEF10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EEF14: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802EEF18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EEF1C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802EEF20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802EEF24: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802EEF28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802EEF2C: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x802EEF30: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802EEF34: addiu       $t2, $zero, 0xFFF
    ctx->r10 = ADD32(0, 0XFFF);
    // 0x802EEF38: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802EEF3C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802EEF40: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EEF44: sh          $t8, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r24;
    // 0x802EEF48: sh          $zero, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = 0;
    // 0x802EEF4C: sh          $zero, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = 0;
    // 0x802EEF50: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x802EEF54: sh          $zero, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = 0;
    // 0x802EEF58: sb          $t1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r9;
    // 0x802EEF5C: sh          $t3, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r11;
    // 0x802EEF60: sh          $t2, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r10;
    // 0x802EEF64: sh          $zero, 0x98($s0)
    MEM_H(0X98, ctx->r16) = 0;
    // 0x802EEF68: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x802EEF6C: sh          $zero, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = 0;
    // 0x802EEF70: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802EEF74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802EEF78: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802EEF7C: swc1        $f0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f0.u32l;
    // 0x802EEF80: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    // 0x802EEF84: jal         0x8031F704
    // 0x802EEF88: sh          $t0, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r8;
    static_3_8031F704(rdram, ctx);
        goto after_3;
    // 0x802EEF88: sh          $t0, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r8;
    after_3:
L_802EEF8C:
    // 0x802EEF8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802EEF90: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802EEF94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802EEF98: jr          $ra
    // 0x802EEF9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802EEF9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8021D3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021D3FC: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8021D400: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021D404: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021D408: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8021D40C: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x8021D410: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x8021D414: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x8021D418: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x8021D41C: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x8021D420: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8021D424: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8021D428: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x8021D42C: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x8021D430: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x8021D434: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8021D438: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8021D43C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8021D440: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D444: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8021D448: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021D44C: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x8021D450: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D454: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D458: lui         $s1, 0xE700
    ctx->r17 = S32(0XE700 << 16);
    // 0x8021D45C: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D460: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D464: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D468: lui         $t8, 0xBB00
    ctx->r24 = S32(0XBB00 << 16);
    // 0x8021D46C: ori         $t8, $t8, 0x101
    ctx->r24 = ctx->r24 | 0X101;
    // 0x8021D470: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D474: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D478: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8021D47C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D480: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D484: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D488: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8021D48C: ori         $t7, $t7, 0x1001
    ctx->r15 = ctx->r15 | 0X1001;
    // 0x8021D490: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D494: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D498: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D49C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D4A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D4A4: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8021D4A8: ori         $t9, $t9, 0xC02
    ctx->r25 = ctx->r25 | 0XC02;
    // 0x8021D4AC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D4B0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D4B4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D4B8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D4BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D4C0: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8021D4C4: ori         $t7, $t7, 0x1102
    ctx->r15 = ctx->r15 | 0X1102;
    // 0x8021D4C8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D4CC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D4D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D4D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D4D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D4DC: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8021D4E0: ori         $t9, $t9, 0x1301
    ctx->r25 = ctx->r25 | 0X1301;
    // 0x8021D4E4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D4E8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D4EC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D4F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D4F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D4F8: lui         $t8, 0x14F
    ctx->r24 = S32(0X14F << 16);
    // 0x8021D4FC: ori         $t8, $t8, 0xC008
    ctx->r24 = ctx->r24 | 0XC008;
    // 0x8021D500: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D504: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D508: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x8021D50C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D510: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D514: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D518: lui         $t7, 0x108
    ctx->r15 = S32(0X108 << 16);
    // 0x8021D51C: lui         $t6, 0xF570
    ctx->r14 = S32(0XF570 << 16);
    // 0x8021D520: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D524: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D528: ori         $t6, $t6, 0xA000
    ctx->r14 = ctx->r14 | 0XA000;
    // 0x8021D52C: ori         $t7, $t7, 0x8290
    ctx->r15 = ctx->r15 | 0X8290;
    // 0x8021D530: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D534: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D538: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D53C: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8021D540: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8021D544: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D548: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D54C: lui         $t6, 0x10
    ctx->r14 = S32(0X10 << 16);
    // 0x8021D550: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D554: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D558: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D55C: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x8021D560: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021D564: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D568: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D56C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D570: lw          $t9, 0x40($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X40);
    // 0x8021D574: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x8021D578: lui         $s3, 0x400
    ctx->r19 = S32(0X400 << 16);
    // 0x8021D57C: addu        $t6, $t9, $at
    ctx->r14 = ADD32(ctx->r25, ctx->r1);
    // 0x8021D580: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D584: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D588: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x8021D58C: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x8021D590: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D594: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D598: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D59C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D5A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D5A4: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x8021D5A8: lui         $ra, 0x3F
    ctx->r31 = S32(0X3F << 16);
    // 0x8021D5AC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D5B0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D5B4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D5B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D5BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D5C0: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8021D5C4: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x8021D5C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D5CC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D5D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D5D4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D5D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D5DC: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x8021D5E0: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x8021D5E4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D5E8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D5EC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D5F0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D5F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D5F8: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8021D5FC: ori         $t7, $t7, 0xE02
    ctx->r15 = ctx->r15 | 0XE02;
    // 0x8021D600: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D604: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D608: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D60C: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D610: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D614: ori         $t8, $zero, 0xC000
    ctx->r24 = 0 | 0XC000;
    // 0x8021D618: lui         $t5, 0xE44F
    ctx->r13 = S32(0XE44F << 16);
    // 0x8021D61C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D620: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D624: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D628: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D62C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D630: lui         $t6, 0xF800
    ctx->r14 = S32(0XF800 << 16);
    // 0x8021D634: lui         $t4, 0x73B
    ctx->r12 = S32(0X73B << 16);
    // 0x8021D638: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D63C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D640: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D644: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x8021D648: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x8021D64C: ori         $t4, $t4, 0xF01A
    ctx->r12 = ctx->r12 | 0XF01A;
    // 0x8021D650: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x8021D654: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8021D658: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x8021D65C: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x8021D660: lui         $s0, 0x100
    ctx->r16 = S32(0X100 << 16);
    // 0x8021D664: ori         $t5, $t5, 0xC000
    ctx->r13 = ctx->r13 | 0XC000;
    // 0x8021D668: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x8021D66C: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8021D670: ori         $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 | 0XFF;
    // 0x8021D674: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D678: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D67C: lui         $t7, 0x3C18
    ctx->r15 = S32(0X3C18 << 16);
    // 0x8021D680: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x8021D684: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D688: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D68C: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x8021D690: ori         $t7, $t7, 0x41C8
    ctx->r15 = ctx->r15 | 0X41C8;
    // 0x8021D694: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D698: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D69C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D6A0: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x8021D6A4: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x8021D6A8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D6AC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D6B0: addiu       $t8, $zero, -0xDC8
    ctx->r24 = ADD32(0, -0XDC8);
    // 0x8021D6B4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D6B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D6BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D6C0: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x8021D6C4: lui         $t9, 0xF550
    ctx->r25 = S32(0XF550 << 16);
    // 0x8021D6C8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D6CC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D6D0: ori         $t6, $t6, 0x8290
    ctx->r14 = ctx->r14 | 0X8290;
    // 0x8021D6D4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D6D8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D6DC: lui         $t9, 0x3F
    ctx->r25 = S32(0X3F << 16);
    // 0x8021D6E0: lui         $t7, 0x3F
    ctx->r15 = S32(0X3F << 16);
    // 0x8021D6E4: lui         $t8, 0x3F
    ctx->r24 = S32(0X3F << 16);
    // 0x8021D6E8: ori         $t8, $t8, 0xF100
    ctx->r24 = ctx->r24 | 0XF100;
    // 0x8021D6EC: ori         $t7, $t7, 0xE980
    ctx->r15 = ctx->r15 | 0XE980;
    // 0x8021D6F0: ori         $t9, $t9, 0xE200
    ctx->r25 = ctx->r25 | 0XE200;
    // 0x8021D6F4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8021D6F8: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8021D6FC: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x8021D700: lui         $s1, 0xB400
    ctx->r17 = S32(0XB400 << 16);
    // 0x8021D704: ori         $ra, $ra, 0xF880
    ctx->r31 = ctx->r31 | 0XF880;
    // 0x8021D708: ori         $s3, $s3, 0x400
    ctx->r19 = ctx->r19 | 0X400;
    // 0x8021D70C: lui         $s2, 0xB300
    ctx->r18 = S32(0XB300 << 16);
    // 0x8021D710: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8021D714: addiu       $fp, $zero, 0xF0
    ctx->r30 = ADD32(0, 0XF0);
    // 0x8021D718: lui         $t3, 0xF300
    ctx->r11 = S32(0XF300 << 16);
    // 0x8021D71C: lui         $t2, 0xFD50
    ctx->r10 = S32(0XFD50 << 16);
L_8021D720:
    // 0x8021D720: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D724: subu        $t1, $fp, $s7
    ctx->r9 = SUB32(ctx->r30, ctx->r23);
    // 0x8021D728: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8021D72C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D730: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D734: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x8021D738: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8021D73C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D740: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8021D744: addiu       $s4, $t1, -0x3
    ctx->r20 = ADD32(ctx->r9, -0X3);
    // 0x8021D748: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D74C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D750: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8021D754: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8021D758: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D75C: or          $t8, $t6, $t5
    ctx->r24 = ctx->r14 | ctx->r13;
    // 0x8021D760: addiu       $s5, $t1, -0x6
    ctx->r21 = ADD32(ctx->r9, -0X6);
    // 0x8021D764: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D768: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D76C: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x8021D770: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8021D774: or          $t6, $t9, $s0
    ctx->r14 = ctx->r25 | ctx->r16;
    // 0x8021D778: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D77C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D780: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D784: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x8021D788: addiu       $s6, $t1, -0x9
    ctx->r22 = ADD32(ctx->r9, -0X9);
    // 0x8021D78C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D790: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D794: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D798: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D79C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D7A0: addiu       $s7, $s7, 0xC
    ctx->r23 = ADD32(ctx->r23, 0XC);
    // 0x8021D7A4: addiu       $ra, $ra, -0x1E00
    ctx->r31 = ADD32(ctx->r31, -0X1E00);
    // 0x8021D7A8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D7AC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D7B0: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x8021D7B4: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8021D7B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D7BC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D7C0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D7C4: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8021D7C8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8021D7CC: andi        $t9, $s4, 0xFFF
    ctx->r25 = ctx->r20 & 0XFFF;
    // 0x8021D7D0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D7D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D7D8: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8021D7DC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D7E0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D7E4: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8021D7E8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8021D7EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D7F0: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x8021D7F4: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x8021D7F8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D7FC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D800: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8021D804: or          $t9, $t7, $s0
    ctx->r25 = ctx->r15 | ctx->r16;
    // 0x8021D808: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D80C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D810: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D814: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D818: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D81C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D820: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D824: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D828: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D82C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D830: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x8021D834: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8021D838: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D83C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D840: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D844: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8021D848: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8021D84C: andi        $t7, $s5, 0xFFF
    ctx->r15 = ctx->r21 & 0XFFF;
    // 0x8021D850: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D854: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D858: or          $t9, $t7, $t5
    ctx->r25 = ctx->r15 | ctx->r13;
    // 0x8021D85C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D860: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D864: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8021D868: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8021D86C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D870: sll         $t6, $s6, 2
    ctx->r14 = S32(ctx->r22 << 2);
    // 0x8021D874: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x8021D878: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D87C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D880: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8021D884: or          $t7, $t8, $s0
    ctx->r15 = ctx->r24 | ctx->r16;
    // 0x8021D888: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D88C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D890: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D894: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D898: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D89C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D8A0: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D8A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D8A8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D8AC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D8B0: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x8021D8B4: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8021D8B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D8BC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D8C0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D8C4: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8021D8C8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8021D8CC: andi        $t8, $s6, 0xFFF
    ctx->r24 = ctx->r22 & 0XFFF;
    // 0x8021D8D0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D8D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D8D8: or          $t7, $t8, $t5
    ctx->r15 = ctx->r24 | ctx->r13;
    // 0x8021D8DC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D8E0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D8E4: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8021D8E8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8021D8EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D8F0: addiu       $t9, $t1, -0xC
    ctx->r25 = ADD32(ctx->r9, -0XC);
    // 0x8021D8F4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D8F8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D8FC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8021D900: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8021D904: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D908: or          $t7, $t8, $s0
    ctx->r15 = ctx->r24 | ctx->r16;
    // 0x8021D90C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D910: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D914: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D918: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D91C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D920: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D924: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D928: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D92C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D930: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x8021D934: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8021D938: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8021D93C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8021D940: addiu       $t7, $t8, -0x1E00
    ctx->r15 = ADD32(ctx->r24, -0X1E00);
    // 0x8021D944: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8021D948: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x8021D94C: addiu       $t6, $t9, -0x1E00
    ctx->r14 = ADD32(ctx->r25, -0X1E00);
    // 0x8021D950: addiu       $t7, $t8, -0x1E00
    ctx->r15 = ADD32(ctx->r24, -0X1E00);
    // 0x8021D954: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8021D958: bne         $s7, $fp, L_8021D720
    if (ctx->r23 != ctx->r30) {
        // 0x8021D95C: sw          $t6, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r14;
            goto L_8021D720;
    }
    // 0x8021D95C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8021D960: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8021D964: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x8021D968: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8021D96C: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x8021D970: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x8021D974: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x8021D978: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x8021D97C: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x8021D980: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x8021D984: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x8021D988: jr          $ra
    // 0x8021D98C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8021D98C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void D_802DEC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DECD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802DECD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802DECDC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802DECE0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802DECE4: lh          $v0, 0x1C4A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C4A);
    // 0x802DECE8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802DECEC: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802DECF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802DECF4: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x802DECF8: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802DECFC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x802DED00: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x802DED04: sh          $t9, 0x1C4A($a0)
    MEM_H(0X1C4A, ctx->r4) = ctx->r25;
    // 0x802DED08: lh          $t2, 0x1C34($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X1C34);
    // 0x802DED0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DED10: beq         $t7, $t2, L_802DED1C
    if (ctx->r15 == ctx->r10) {
        // 0x802DED14: nop
    
            goto L_802DED1C;
    }
    // 0x802DED14: nop

    // 0x802DED18: sh          $zero, 0x1C4A($a0)
    MEM_H(0X1C4A, ctx->r4) = 0;
L_802DED1C:
    // 0x802DED1C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DED20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DED24: jal         0x80231A24
    // 0x802DED28: lh          $a1, 0x1C4A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X1C4A);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802DED28: lh          $a1, 0x1C4A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X1C4A);
    after_0:
    // 0x802DED2C: lh          $t3, 0x1C4A($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X1C4A);
    // 0x802DED30: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802DED34: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DED38: bnel        $t3, $at, L_802DED94
    if (ctx->r11 != ctx->r1) {
        // 0x802DED3C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802DED94;
    }
    goto skip_0;
    // 0x802DED3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802DED40: jal         0x80231A24
    // 0x802DED44: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802DED44: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x802DED48: lbu         $t4, 0x1C2D($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C2D);
    // 0x802DED4C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802DED50: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    // 0x802DED54: bne         $t4, $zero, L_802DED84
    if (ctx->r12 != 0) {
        // 0x802DED58: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802DED84;
    }
    // 0x802DED58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DED5C: jal         0x80305E90
    // 0x802DED60: sb          $t5, 0x1C2D($s0)
    MEM_B(0X1C2D, ctx->r16) = ctx->r13;
    static_3_80305E90(rdram, ctx);
        goto after_2;
    // 0x802DED60: sb          $t5, 0x1C2D($s0)
    MEM_B(0X1C2D, ctx->r16) = ctx->r13;
    after_2:
    // 0x802DED64: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DED68: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x802DED6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802DED70: addiu       $a1, $s0, 0x1C20
    ctx->r5 = ADD32(ctx->r16, 0X1C20);
    // 0x802DED74: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x802DED78: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802DED7C: jal         0x80302238
    // 0x802DED80: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_3;
    // 0x802DED80: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
L_802DED84:
    // 0x802DED84: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802DED88: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DED8C: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DED90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802DED94:
    // 0x802DED94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802DED98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802DED9C: jr          $ra
    // 0x802DEDA0: nop

    return;
    // 0x802DEDA0: nop

;}
RECOMP_FUNC void D_802B98F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B9978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B997C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B9980: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B9984: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802B9988: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802B998C: jal         0x80320D7C
    // 0x802B9990: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80320D7C(rdram, ctx);
        goto after_0;
    // 0x802B9990: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802B9994: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802B9998: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x802B999C: bnel        $v0, $zero, L_802B99CC
    if (ctx->r2 != 0) {
        // 0x802B99A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B99CC;
    }
    goto skip_0;
    // 0x802B99A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802B99A4: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x802B99A8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802B99AC: beql        $a0, $at, L_802B99CC
    if (ctx->r4 == ctx->r1) {
        // 0x802B99B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B99CC;
    }
    goto skip_1;
    // 0x802B99B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802B99B4: jal         0x8021BAE0
    // 0x802B99B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x802B99B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x802B99BC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802B99C0: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x802B99C4: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x802B99C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B99CC:
    // 0x802B99CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B99D0: jr          $ra
    // 0x802B99D4: nop

    return;
    // 0x802B99D4: nop

;}
RECOMP_FUNC void D_80238184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238184: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80238188: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023818C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80238190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80238194: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x80238198: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8023819C: lw          $a2, 0x10($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X10);
    // 0x802381A0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802381A4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x802381A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802381AC: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
L_802381B0:
    // 0x802381B0: srlv        $t7, $t6, $v0
    ctx->r15 = S32(U32(ctx->r14) >> (ctx->r2 & 31));
    // 0x802381B4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802381B8: beql        $t8, $zero, L_802381FC
    if (ctx->r24 == 0) {
        // 0x802381BC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802381FC;
    }
    goto skip_0;
    // 0x802381BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x802381C0: lw          $t6, 0x14($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X14);
    // 0x802381C4: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x802381C8: addu        $v1, $t4, $t9
    ctx->r3 = ADD32(ctx->r12, ctx->r25);
    // 0x802381CC: beql        $t6, $zero, L_802381E4
    if (ctx->r14 == 0) {
        // 0x802381D0: lw          $a0, 0xB8($v1)
        ctx->r4 = MEM_W(ctx->r3, 0XB8);
            goto L_802381E4;
    }
    goto skip_1;
    // 0x802381D0: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
    skip_1:
    // 0x802381D4: lw          $t7, 0xB8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XB8);
    // 0x802381D8: subu        $t8, $t7, $a2
    ctx->r24 = SUB32(ctx->r15, ctx->r6);
    // 0x802381DC: sw          $t8, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = ctx->r24;
    // 0x802381E0: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
L_802381E4:
    // 0x802381E4: sltu        $at, $a0, $t1
    ctx->r1 = ctx->r4 < ctx->r9 ? 1 : 0;
    // 0x802381E8: beql        $at, $zero, L_802381FC
    if (ctx->r1 == 0) {
        // 0x802381EC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802381FC;
    }
    goto skip_2;
    // 0x802381EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
    // 0x802381F0: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x802381F4: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x802381F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802381FC:
    // 0x802381FC: bnel        $v0, $a1, L_802381B0
    if (ctx->r2 != ctx->r5) {
        // 0x80238200: lw          $t6, 0x4($t4)
        ctx->r14 = MEM_W(ctx->r12, 0X4);
            goto L_802381B0;
    }
    goto skip_3;
    // 0x80238200: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    skip_3:
    // 0x80238204: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80238208: jal         0x802380B0
    // 0x8023820C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_0;
    // 0x8023820C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_0:
    // 0x80238210: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80238214: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x80238218: bne         $v0, $at, L_80238384
    if (ctx->r2 != ctx->r1) {
        // 0x8023821C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80238384;
    }
    // 0x8023821C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80238220: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80238224: jal         0x802380B0
    // 0x80238228: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_1;
    // 0x80238228: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_1:
    // 0x8023822C: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80238230: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x80238234: bne         $v0, $at, L_80238288
    if (ctx->r2 != ctx->r1) {
        // 0x80238238: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80238288;
    }
    // 0x80238238: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023823C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80238240: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x80238244: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
    // 0x80238248: sb          $a2, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r6;
    // 0x8023824C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80238250: jal         0x802380B0
    // 0x80238254: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_2;
    // 0x80238254: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_2:
    // 0x80238258: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8023825C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80238260: jal         0x802380B0
    // 0x80238264: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_3;
    // 0x80238264: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_3:
    // 0x80238268: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023826C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80238270: jal         0x802380B0
    // 0x80238274: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_4;
    // 0x80238274: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_4:
    // 0x80238278: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023827C: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x80238280: b           L_80238420
    // 0x80238284: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
        goto L_80238420;
    // 0x80238284: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
L_80238288:
    // 0x80238288: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x8023828C: bnel        $v1, $at, L_802382C8
    if (ctx->r3 != ctx->r1) {
        // 0x80238290: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_802382C8;
    }
    goto skip_4;
    // 0x80238290: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    skip_4:
    // 0x80238294: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x80238298: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8023829C: sllv        $t9, $t8, $t3
    ctx->r25 = S32(ctx->r24 << (ctx->r11 & 31));
    // 0x802382A0: xor         $t6, $t7, $t9
    ctx->r14 = ctx->r15 ^ ctx->r25;
    // 0x802382A4: beq         $t6, $zero, L_802382B8
    if (ctx->r14 == 0) {
        // 0x802382A8: sw          $t6, 0x4($t4)
        MEM_W(0X4, ctx->r12) = ctx->r14;
            goto L_802382B8;
    }
    // 0x802382A8: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x802382AC: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x802382B0: b           L_80238420
    // 0x802382B4: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
        goto L_80238420;
    // 0x802382B4: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
L_802382B8:
    // 0x802382B8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x802382BC: b           L_80238420
    // 0x802382C0: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
        goto L_80238420;
    // 0x802382C0: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x802382C4: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
L_802382C8:
    // 0x802382C8: bne         $v1, $at, L_802382F8
    if (ctx->r3 != ctx->r1) {
        // 0x802382CC: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_802382F8;
    }
    // 0x802382CC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x802382D0: jal         0x802380B0
    // 0x802382D4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_5;
    // 0x802382D4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_5:
    // 0x802382D8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x802382DC: jal         0x802380B0
    // 0x802382E0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_6;
    // 0x802382E0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_6:
    // 0x802382E4: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x802382E8: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
    // 0x802382EC: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x802382F0: b           L_80238420
    // 0x802382F4: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
        goto L_80238420;
    // 0x802382F4: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
L_802382F8:
    // 0x802382F8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x802382FC: bne         $v1, $at, L_80238420
    if (ctx->r3 != ctx->r1) {
        // 0x80238300: sll         $t7, $t3, 2
        ctx->r15 = S32(ctx->r11 << 2);
            goto L_80238420;
    }
    // 0x80238300: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80238304: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x80238308: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x8023830C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80238310: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x80238314: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238318: addiu       $t9, $v0, 0x5
    ctx->r25 = ADD32(ctx->r2, 0X5);
    // 0x8023831C: bne         $a0, $zero, L_80238330
    if (ctx->r4 != 0) {
        // 0x80238320: lbu         $a1, -0x1($v0)
        ctx->r5 = MEM_BU(ctx->r2, -0X1);
            goto L_80238330;
    }
    // 0x80238320: lbu         $a1, -0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, -0X1);
    // 0x80238324: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x80238328: b           L_80238370
    // 0x8023832C: sw          $t9, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r25;
        goto L_80238370;
    // 0x8023832C: sw          $t9, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r25;
L_80238330:
    // 0x80238330: beq         $a0, $at, L_8023833C
    if (ctx->r4 == ctx->r1) {
        // 0x80238334: addiu       $t6, $a0, -0x1
        ctx->r14 = ADD32(ctx->r4, -0X1);
            goto L_8023833C;
    }
    // 0x80238334: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x80238338: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_8023833C:
    // 0x8023833C: lbu         $t7, 0x2($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2);
    // 0x80238340: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80238344: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x80238348: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x8023834C: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x80238350: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x80238354: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80238358: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x8023835C: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x80238360: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80238364: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80238368: subu        $t9, $v0, $v1
    ctx->r25 = SUB32(ctx->r2, ctx->r3);
    // 0x8023836C: sw          $t9, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r25;
L_80238370:
    // 0x80238370: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x80238374: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
    // 0x80238378: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8023837C: b           L_80238420
    // 0x80238380: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
        goto L_80238420;
    // 0x80238380: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
L_80238384:
    // 0x80238384: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80238388: andi        $t9, $v1, 0x80
    ctx->r25 = ctx->r3 & 0X80;
    // 0x8023838C: beq         $t9, $zero, L_802383B4
    if (ctx->r25 == 0) {
        // 0x80238390: sh          $t7, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r15;
            goto L_802383B4;
    }
    // 0x80238390: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
    // 0x80238394: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
    // 0x80238398: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8023839C: jal         0x802380B0
    // 0x802383A0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_7;
    // 0x802383A0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_7:
    // 0x802383A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802383A8: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x802383AC: b           L_802383C4
    // 0x802383B0: sb          $t2, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = ctx->r10;
        goto L_802383C4;
    // 0x802383B0: sb          $t2, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = ctx->r10;
L_802383B4:
    // 0x802383B4: addu        $t8, $t4, $t3
    ctx->r24 = ADD32(ctx->r12, ctx->r11);
    // 0x802383B8: lbu         $t7, 0xA8($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0XA8);
    // 0x802383BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802383C0: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
L_802383C4:
    // 0x802383C4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802383C8: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x802383CC: andi        $t9, $v0, 0xF0
    ctx->r25 = ctx->r2 & 0XF0;
    // 0x802383D0: beq         $t9, $at, L_8023841C
    if (ctx->r25 == ctx->r1) {
        // 0x802383D4: addiu       $at, $zero, 0xD0
        ctx->r1 = ADD32(0, 0XD0);
            goto L_8023841C;
    }
    // 0x802383D4: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x802383D8: beq         $t9, $at, L_8023841C
    if (ctx->r25 == ctx->r1) {
        // 0x802383DC: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_8023841C;
    }
    // 0x802383DC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x802383E0: jal         0x802380B0
    // 0x802383E4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    static_3_802380B0(rdram, ctx);
        goto after_8;
    // 0x802383E4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_8:
    // 0x802383E8: lbu         $t6, 0x8($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X8);
    // 0x802383EC: addiu       $at, $zero, 0x90
    ctx->r1 = ADD32(0, 0X90);
    // 0x802383F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802383F4: andi        $t8, $t6, 0xF0
    ctx->r24 = ctx->r14 & 0XF0;
    // 0x802383F8: bne         $t8, $at, L_80238420
    if (ctx->r24 != ctx->r1) {
        // 0x802383FC: or          $t2, $t4, $zero
        ctx->r10 = ctx->r12 | 0;
            goto L_80238420;
    }
    // 0x802383FC: or          $t2, $t4, $zero
    ctx->r10 = ctx->r12 | 0;
    // 0x80238400: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80238404: jal         0x80238174
    // 0x80238408: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    static_3_80238174(rdram, ctx);
        goto after_9;
    // 0x80238408: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_9:
    // 0x8023840C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80238410: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80238414: b           L_80238420
    // 0x80238418: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
        goto L_80238420;
    // 0x80238418: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_8023841C:
    // 0x8023841C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80238420:
    // 0x80238420: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x80238424: lw          $t7, 0xC($t4)
    ctx->r15 = MEM_W(ctx->r12, 0XC);
    // 0x80238428: sw          $t1, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r9;
    // 0x8023842C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x80238430: addu        $t9, $t7, $t1
    ctx->r25 = ADD32(ctx->r15, ctx->r9);
    // 0x80238434: sw          $t9, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r25;
    // 0x80238438: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x8023843C: or          $t2, $t4, $zero
    ctx->r10 = ctx->r12 | 0;
    // 0x80238440: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80238444: beql        $t6, $at, L_80238464
    if (ctx->r14 == ctx->r1) {
        // 0x80238448: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80238464;
    }
    goto skip_5;
    // 0x80238448: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    skip_5:
    // 0x8023844C: jal         0x80238174
    // 0x80238450: addu        $t5, $t4, $t8
    ctx->r13 = ADD32(ctx->r12, ctx->r24);
    static_3_80238174(rdram, ctx);
        goto after_10;
    // 0x80238450: addu        $t5, $t4, $t8
    ctx->r13 = ADD32(ctx->r12, ctx->r24);
    after_10:
    // 0x80238454: lw          $t7, 0xB8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XB8);
    // 0x80238458: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x8023845C: sw          $t9, 0xB8($t5)
    MEM_W(0XB8, ctx->r13) = ctx->r25;
    // 0x80238460: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_80238464:
    // 0x80238464: sw          $t6, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->r14;
    // 0x80238468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023846C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238470: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80238474: jr          $ra
    // 0x80238478: nop

    return;
    // 0x80238478: nop

;}
RECOMP_FUNC void D_802E3FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E4050: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802E4054: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E4058: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x802E405C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E4060: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x802E4064: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x802E4068: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x802E406C: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E4070: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802E4074: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x802E4078: jalr        $t9
    // 0x802E407C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802E407C: nop

    after_0:
    // 0x802E4080: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802E4084: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802E4088: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802E408C: addiu       $t7, $sp, 0x28
    ctx->r15 = ADD32(ctx->r29, 0X28);
    // 0x802E4090: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x802E4094: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802E4098: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802E409C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802E40A0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802E40A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802E40A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802E40AC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x802E40B0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x802E40B4: jal         0x802CEFC8
    // 0x802E40B8: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    static_3_802CEFC8(rdram, ctx);
        goto after_1;
    // 0x802E40B8: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x802E40BC: jal         0x8022970C
    // 0x802E40C0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802E40C0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x802E40C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E40C8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E40CC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802E40D0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802E40D4: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802E40D8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802E40DC: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802E40E0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x802E40E4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802E40E8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802E40EC: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x802E40F0: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x802E40F4: jal         0x802D01D4
    // 0x802E40F8: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_3;
    // 0x802E40F8: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x802E40FC: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x802E4100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E4104: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x802E4108: jal         0x8021B4B0
    // 0x802E410C: lw          $a0, 0x4($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4);
    static_3_8021B4B0(rdram, ctx);
        goto after_4;
    // 0x802E410C: lw          $a0, 0x4($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4);
    after_4:
    // 0x802E4110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802E4114: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802E4118: jr          $ra
    // 0x802E411C: nop

    return;
    // 0x802E411C: nop

;}
RECOMP_FUNC void D_802ECFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED068: beq         $a0, $zero, L_802ED098
    if (ctx->r4 == 0) {
        // 0x802ED06C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ED098;
    }
    // 0x802ED06C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ED070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ED074: jal         0x8031C514
    // 0x802ED078: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ED078: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ED07C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED080: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED084: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ED088: beql        $t7, $zero, L_802ED09C
    if (ctx->r15 == 0) {
        // 0x802ED08C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ED09C;
    }
    goto skip_0;
    // 0x802ED08C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ED090: jal         0x802C681C
    // 0x802ED094: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ED094: nop

    after_1:
L_802ED098:
    // 0x802ED098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ED09C:
    // 0x802ED09C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED0A0: jr          $ra
    // 0x802ED0A4: nop

    return;
    // 0x802ED0A4: nop

;}
RECOMP_FUNC void D_802E85A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E8628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E862C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E8630: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E8634: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E8638: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E863C: bne         $v1, $zero, L_802E8664
    if (ctx->r3 != 0) {
        // 0x802E8640: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E8664;
    }
    // 0x802E8640: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E8644: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E8648: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E864C: jal         0x80231A24
    // 0x802E8650: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E8650: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E8654: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E8658: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E865C: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E8660: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E8664:
    // 0x802E8664: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E8668: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802E866C: lw          $t9, 0x84($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X84);
    // 0x802E8670: lh          $t7, 0x80($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X80);
    // 0x802E8674: jalr        $t9
    // 0x802E8678: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E8678: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E867C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E8680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E8684: jr          $ra
    // 0x802E8688: nop

    return;
    // 0x802E8688: nop

;}
RECOMP_FUNC void D_8023E060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E060: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023E064: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8023E068: lbu         $t6, 0x47($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E06C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023E070: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8023E074: slti        $at, $t6, 0x41
    ctx->r1 = SIGNED(ctx->r14) < 0X41 ? 1 : 0;
    // 0x8023E078: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8023E07C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8023E080: bne         $at, $zero, L_8023E090
    if (ctx->r1 != 0) {
        // 0x8023E084: sw          $zero, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = 0;
            goto L_8023E090;
    }
    // 0x8023E084: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8023E088: b           L_8023E18C
    // 0x8023E08C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023E18C;
    // 0x8023E08C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8023E090:
    // 0x8023E090: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E094: blez        $t7, L_8023E188
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8023E098: nop
    
            goto L_8023E188;
    }
    // 0x8023E098: nop

L_8023E09C:
    // 0x8023E09C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8023E0A0: lbu         $a1, 0x47($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E0A4: jal         0x80247830
    // 0x8023E0A8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    static_3_80247830(rdram, ctx);
        goto after_0;
    // 0x8023E0A8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_0:
    // 0x8023E0AC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8023E0B0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8023E0B4: beq         $t8, $zero, L_8023E0C4
    if (ctx->r24 == 0) {
        // 0x8023E0B8: nop
    
            goto L_8023E0C4;
    }
    // 0x8023E0B8: nop

    // 0x8023E0BC: b           L_8023E18C
    // 0x8023E0C0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8023E18C;
    // 0x8023E0C0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8023E0C4:
    // 0x8023E0C4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E0C8: lbu         $t1, 0x47($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E0CC: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8023E0D0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023E0D4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8023E0D8: addiu       $t0, $t9, -0x8
    ctx->r8 = ADD32(ctx->r25, -0X8);
    // 0x8023E0DC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8023E0E0: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8023E0E4: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8023E0E8: sb          $t2, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r10;
    // 0x8023E0EC: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x8023E0F0: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    // 0x8023E0F4: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8023E0F8: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x8023E0FC: jal         0x8023D228
    // 0x8023E100: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    static_3_8023D228(rdram, ctx);
        goto after_1;
    // 0x8023E100: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    after_1:
    // 0x8023E104: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8023E108: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8023E10C: lui         $a3, 0xF
    ctx->r7 = S32(0XF << 16);
    // 0x8023E110: ori         $a3, $a3, 0x4240
    ctx->r7 = ctx->r7 | 0X4240;
    // 0x8023E114: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E118: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023E11C: jal         0x8023D128
    // 0x8023E120: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_8023D128(rdram, ctx);
        goto after_2;
    // 0x8023E120: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x8023E124: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8023E128: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023E12C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8023E130: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x8023E134: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023E138: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8023E13C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023E140: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x8023E144: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8023E148: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8023E14C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8023E150: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8023E154: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8023E158: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8023E15C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8023E160: jal         0x8023E920
    // 0x8023E164: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    static_3_8023E920(rdram, ctx);
        goto after_3;
    // 0x8023E164: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_3:
    // 0x8023E168: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023E16C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8023E170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023E174: jal         0x802374B0
    // 0x8023E178: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_4;
    // 0x8023E178: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8023E17C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E180: bgtz        $t9, L_8023E09C
    if (SIGNED(ctx->r25) > 0) {
        // 0x8023E184: nop
    
            goto L_8023E09C;
    }
    // 0x8023E184: nop

L_8023E188:
    // 0x8023E188: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_8023E18C:
    // 0x8023E18C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023E190: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8023E194: jr          $ra
    // 0x8023E198: nop

    return;
    // 0x8023E198: nop

;}
RECOMP_FUNC void D_802E62DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E635C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802E6360: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x802E6364: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E6368: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E636C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E6370: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802E6374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E6378: jal         0x802AEE54
    // 0x802E637C: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    static_3_802AEE54(rdram, ctx);
        goto after_0;
    // 0x802E637C: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    after_0:
    // 0x802E6380: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x802E6384: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x802E6388: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802E638C: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x802E6390: lh          $t6, 0x60($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X60);
    // 0x802E6394: jalr        $t9
    // 0x802E6398: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E6398: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_1:
    // 0x802E639C: jal         0x80317E10
    // 0x802E63A0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    static_3_80317E10(rdram, ctx);
        goto after_2;
    // 0x802E63A0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    after_2:
    // 0x802E63A4: beql        $v0, $zero, L_802E646C
    if (ctx->r2 == 0) {
        // 0x802E63A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802E646C;
    }
    goto skip_0;
    // 0x802E63A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802E63AC: jal         0x8031743C
    // 0x802E63B0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    static_3_8031743C(rdram, ctx);
        goto after_3;
    // 0x802E63B0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    after_3:
    // 0x802E63B4: bne         $v0, $zero, L_802E6468
    if (ctx->r2 != 0) {
        // 0x802E63B8: lui         $t7, 0x0
        ctx->r15 = S32(0X0 << 16);
            goto L_802E6468;
    }
    // 0x802E63B8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802E63BC: lbu         $v0, 0x7F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7F);
    // 0x802E63C0: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802E63C4: beql        $v0, $t7, L_802E646C
    if (ctx->r2 == ctx->r15) {
        // 0x802E63C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802E646C;
    }
    goto skip_1;
    // 0x802E63C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x802E63CC: beq         $v0, $zero, L_802E644C
    if (ctx->r2 == 0) {
        // 0x802E63D0: lw          $a0, 0x74($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X74);
            goto L_802E644C;
    }
    // 0x802E63D0: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802E63D4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x802E63D8: jal         0x80305E90
    // 0x802E63DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_4;
    // 0x802E63DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802E63E0: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802E63E4: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x802E63E8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802E63EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802E63F0: addiu       $a1, $a1, 0x1B8
    ctx->r5 = ADD32(ctx->r5, 0X1B8);
    // 0x802E63F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802E63F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802E63FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802E6400: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x802E6404: jal         0x80302238
    // 0x802E6408: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    static_3_80302238(rdram, ctx);
        goto after_5;
    // 0x802E6408: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_5:
    // 0x802E640C: beq         $v0, $zero, L_802E6434
    if (ctx->r2 == 0) {
        // 0x802E6410: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_802E6434;
    }
    // 0x802E6410: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802E6414: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x802E6418: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E641C: jal         0x8030262C
    // 0x802E6420: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    static_3_8030262C(rdram, ctx);
        goto after_6;
    // 0x802E6420: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x802E6424: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802E6428: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802E642C: jal         0x8030276C
    // 0x802E6430: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8030276C(rdram, ctx);
        goto after_7;
    // 0x802E6430: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_802E6434:
    // 0x802E6434: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802E6438: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802E643C: jal         0x803025D8
    // 0x802E6440: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    static_3_803025D8(rdram, ctx);
        goto after_8;
    // 0x802E6440: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_8:
    // 0x802E6444: b           L_802E6460
    // 0x802E6448: lbu         $t0, 0x7F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X7F);
        goto L_802E6460;
    // 0x802E6448: lbu         $t0, 0x7F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X7F);
L_802E644C:
    // 0x802E644C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x802E6450: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802E6454: jal         0x80302414
    // 0x802E6458: addiu       $a1, $a1, 0x1B8
    ctx->r5 = ADD32(ctx->r5, 0X1B8);
    static_3_80302414(rdram, ctx);
        goto after_9;
    // 0x802E6458: addiu       $a1, $a1, 0x1B8
    ctx->r5 = ADD32(ctx->r5, 0X1B8);
    after_9:
    // 0x802E645C: lbu         $t0, 0x7F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X7F);
L_802E6460:
    // 0x802E6460: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E6464: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
L_802E6468:
    // 0x802E6468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E646C:
    // 0x802E646C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802E6470: jr          $ra
    // 0x802E6474: nop

    return;
    // 0x802E6474: nop

;}
RECOMP_FUNC void D_802DEA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DEAC0: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x802DEAC4: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x802DEAC8: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802DEACC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x802DEAD0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802DEAD4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802DEAD8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x802DEADC: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x802DEAE0: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x802DEAE4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x802DEAE8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x802DEAEC: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x802DEAF0: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x802DEAF4: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x802DEAF8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x802DEAFC: jal         0x80224CA8
    // 0x802DEB00: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802DEB00: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    after_0:
    // 0x802DEB04: jal         0x80224CA8
    // 0x802DEB08: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802DEB08: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_1:
    // 0x802DEB0C: jal         0x8021BA90
    // 0x802DEB10: nop

    func_8021BA90(rdram, ctx);
        goto after_2;
    // 0x802DEB10: nop

    after_2:
    // 0x802DEB14: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802DEB18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802DEB1C: jal         0x8021ACB0
    // 0x802DEB20: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    static_3_8021ACB0(rdram, ctx);
        goto after_3;
    // 0x802DEB20: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    after_3:
    // 0x802DEB24: addiu       $s2, $sp, 0xB0
    ctx->r18 = ADD32(ctx->r29, 0XB0);
    // 0x802DEB28: jal         0x8022970C
    // 0x802DEB2C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x802DEB2C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x802DEB30: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802DEB34: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802DEB38: lui         $a2, 0xC35C
    ctx->r6 = S32(0XC35C << 16);
    // 0x802DEB3C: jal         0x8022A0D0
    // 0x802DEB40: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_5;
    // 0x802DEB40: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_5:
    // 0x802DEB44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802DEB48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DEB4C: jal         0x8021B4B0
    // 0x802DEB50: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_6;
    // 0x802DEB50: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_6:
    // 0x802DEB54: addiu       $s3, $sp, 0xF0
    ctx->r19 = ADD32(ctx->r29, 0XF0);
    // 0x802DEB58: jal         0x8022970C
    // 0x802DEB5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8022970C(rdram, ctx);
        goto after_7;
    // 0x802DEB5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x802DEB60: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEB64: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEB68: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEB6C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEB70: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEB74: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEB78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DEB7C: swc1        $f4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f4.u32l;
    // 0x802DEB80: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
    // 0x802DEB84: jal         0x8021E66C
    // 0x802DEB88: swc1        $f8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f8.u32l;
    static_3_8021E66C(rdram, ctx);
        goto after_8;
    // 0x802DEB88: swc1        $f8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x802DEB8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DEB90: jal         0x80205E0C
    // 0x802DEB94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80205E0C(rdram, ctx);
        goto after_9;
    // 0x802DEB94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x802DEB98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DEB9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DEBA0: jal         0x80309D48
    // 0x802DEBA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309D48(rdram, ctx);
        goto after_10;
    // 0x802DEBA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x802DEBA8: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802DEBAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DEBB0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802DEBB4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802DEBB8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802DEBBC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802DEBC0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802DEBC4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x802DEBC8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802DEBCC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802DEBD0: jal         0x8030890C
    // 0x802DEBD4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_11;
    // 0x802DEBD4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x802DEBD8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802DEBDC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802DEBE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DEBE4: jal         0x80205B0C
    // 0x802DEBE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80205B0C(rdram, ctx);
        goto after_12;
    // 0x802DEBE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x802DEBEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEBF0: lwc1        $f28, 0x0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEBF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEBF8: lwc1        $f26, 0x0($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEBFC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEC00: lwc1        $f24, 0x0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEC04: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEC08: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEC0C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x802DEC10: add.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f24.fl;
L_802DEC14:
    // 0x802DEC14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DEC18: c.lt.s      $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f26.fl < ctx->f20.fl;
    // 0x802DEC1C: nop

    // 0x802DEC20: bc1fl       L_802DEC34
    if (!c1cs) {
        // 0x802DEC24: c.lt.s      $f20, $f28
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f20.fl < ctx->f28.fl;
            goto L_802DEC34;
    }
    goto skip_0;
    // 0x802DEC24: c.lt.s      $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f20.fl < ctx->f28.fl;
    skip_0:
    // 0x802DEC28: b           L_802DEC44
    // 0x802DEC2C: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
        goto L_802DEC44;
    // 0x802DEC2C: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x802DEC30: c.lt.s      $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f20.fl < ctx->f28.fl;
L_802DEC34:
    // 0x802DEC34: nop

    // 0x802DEC38: bc1f        L_802DEC44
    if (!c1cs) {
        // 0x802DEC3C: nop
    
            goto L_802DEC44;
    }
    // 0x802DEC3C: nop

    // 0x802DEC40: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
L_802DEC44:
    // 0x802DEC44: jal         0x80228DE0
    // 0x802DEC48: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80228DE0(rdram, ctx);
        goto after_13;
    // 0x802DEC48: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_13:
    // 0x802DEC4C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802DEC50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DEC54: jal         0x802D01D4
    // 0x802DEC58: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_14;
    // 0x802DEC58: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_14:
    // 0x802DEC5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802DEC60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DEC64: jal         0x8021B4B0
    // 0x802DEC68: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_15;
    // 0x802DEC68: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_15:
    // 0x802DEC6C: jal         0x80220340
    // 0x802DEC70: nop

    static_3_80220340(rdram, ctx);
        goto after_16;
    // 0x802DEC70: nop

    after_16:
    // 0x802DEC74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DEC78: jal         0x80205BBC
    // 0x802DEC7C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_80205BBC(rdram, ctx);
        goto after_17;
    // 0x802DEC7C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_17:
    // 0x802DEC80: jal         0x80205F60
    // 0x802DEC84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80205F60(rdram, ctx);
        goto after_18;
    // 0x802DEC84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_18:
    // 0x802DEC88: jal         0x803089A4
    // 0x802DEC8C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_803089A4(rdram, ctx);
        goto after_19;
    // 0x802DEC8C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_19:
    // 0x802DEC90: jal         0x80221BC4
    // 0x802DEC94: nop

    static_3_80221BC4(rdram, ctx);
        goto after_20;
    // 0x802DEC94: nop

    after_20:
    // 0x802DEC98: b           L_802DEC14
    // 0x802DEC9C: add.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f24.fl;
        goto L_802DEC14;
    // 0x802DEC9C: add.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f24.fl;
    // 0x802DECA0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x802DECA4: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x802DECA8: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x802DECAC: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x802DECB0: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x802DECB4: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x802DECB8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x802DECBC: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x802DECC0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x802DECC4: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x802DECC8: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x802DECCC: jr          $ra
    // 0x802DECD0: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x802DECD0: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void D_80202EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80202EE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80202EEC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80202EF0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202EF4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80202EF8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80202EFC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80202F00: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80202F04: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80202F08: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80202F0C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80202F10: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80202F14: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80202F18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80202F1C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80202F20: jal         0x802011D0
    // 0x80202F24: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_0;
    // 0x80202F24: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80202F28: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80202F2C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80202F30: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80202F34: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80202F38: blez        $t6, L_8020319C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80202F3C: or          $fp, $zero, $zero
        ctx->r30 = 0 | 0;
            goto L_8020319C;
    }
    // 0x80202F3C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80202F40: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80202F44: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80202F48: addiu       $s7, $zero, 0xB4
    ctx->r23 = ADD32(0, 0XB4);
    // 0x80202F4C: addiu       $s5, $zero, 0xF
    ctx->r21 = ADD32(0, 0XF);
    // 0x80202F50: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
L_80202F54:
    // 0x80202F54: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202F58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202F5C: jal         0x802011D0
    // 0x80202F60: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_1;
    // 0x80202F60: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    after_1:
    // 0x80202F64: jal         0x802037EC
    // 0x80202F68: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    static_3_802037EC(rdram, ctx);
        goto after_2;
    // 0x80202F68: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    after_2:
    // 0x80202F6C: lbu         $s2, 0x0($s3)
    ctx->r18 = MEM_BU(ctx->r19, 0X0);
    // 0x80202F70: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80202F74: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202F78: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80202F7C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80202F80: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80202F84: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x80202F88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202F8C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80202F90: mflo        $t8
    ctx->r24 = lo;
    // 0x80202F94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80202F98: lw          $v0, 0xA0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA0);
    // 0x80202F9C: bnel        $v0, $zero, L_8020303C
    if (ctx->r2 != 0) {
        // 0x80202FA0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8020303C;
    }
    goto skip_0;
    // 0x80202FA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x80202FA4: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x80202FA8: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80202FAC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80202FB0: beq         $s4, $t0, L_80202FD8
    if (ctx->r20 == ctx->r8) {
        // 0x80202FB4: addiu       $t1, $t1, 0x0
        ctx->r9 = ADD32(ctx->r9, 0X0);
            goto L_80202FD8;
    }
    // 0x80202FB4: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80202FB8: addu        $s0, $zero, $t1
    ctx->r16 = ADD32(0, ctx->r9);
    // 0x80202FBC: lbu         $t2, 0x1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1);
L_80202FC0:
    // 0x80202FC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80202FC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80202FC8: beql        $s4, $t2, L_80202FDC
    if (ctx->r20 == ctx->r10) {
        // 0x80202FCC: addu        $s0, $s1, $t3
        ctx->r16 = ADD32(ctx->r17, ctx->r11);
            goto L_80202FDC;
    }
    goto skip_1;
    // 0x80202FCC: addu        $s0, $s1, $t3
    ctx->r16 = ADD32(ctx->r17, ctx->r11);
    skip_1:
    // 0x80202FD0: bnel        $s1, $s5, L_80202FC0
    if (ctx->r17 != ctx->r21) {
        // 0x80202FD4: lbu         $t2, 0x1($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X1);
            goto L_80202FC0;
    }
    goto skip_2;
    // 0x80202FD4: lbu         $t2, 0x1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1);
    skip_2:
L_80202FD8:
    // 0x80202FD8: addu        $s0, $s1, $t3
    ctx->r16 = ADD32(ctx->r17, ctx->r11);
L_80202FDC:
    // 0x80202FDC: lbu         $a2, 0x0($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X0);
    // 0x80202FE0: jal         0x802011D0
    // 0x80202FE4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_3;
    // 0x80202FE4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_3:
    // 0x80202FE8: lbu         $s2, 0x0($s3)
    ctx->r18 = MEM_BU(ctx->r19, 0X0);
    // 0x80202FEC: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x80202FF0: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80202FF4: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x80202FF8: mflo        $t5
    ctx->r13 = lo;
    // 0x80202FFC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80203000: sb          $s1, 0xAD($t6)
    MEM_B(0XAD, ctx->r14) = ctx->r17;
    // 0x80203004: jal         0x8020321C
    // 0x80203008: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    static_3_8020321C(rdram, ctx);
        goto after_4;
    // 0x80203008: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    after_4:
    // 0x8020300C: lbu         $s2, 0x0($s3)
    ctx->r18 = MEM_BU(ctx->r19, 0X0);
    // 0x80203010: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80203014: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80203018: subu        $t8, $t8, $s2
    ctx->r24 = SUB32(ctx->r24, ctx->r18);
    // 0x8020301C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203020: subu        $t8, $t8, $s2
    ctx->r24 = SUB32(ctx->r24, ctx->r18);
    // 0x80203024: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203028: addu        $t8, $t8, $s2
    ctx->r24 = ADD32(ctx->r24, ctx->r18);
    // 0x8020302C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203030: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80203034: lw          $v0, 0xA0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA0);
    // 0x80203038: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8020303C:
    // 0x8020303C: bnel        $v0, $at, L_8020307C
    if (ctx->r2 != ctx->r1) {
        // 0x80203040: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8020307C;
    }
    goto skip_3;
    // 0x80203040: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_3:
    // 0x80203044: jal         0x8020321C
    // 0x80203048: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    static_3_8020321C(rdram, ctx);
        goto after_5;
    // 0x80203048: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_5:
    // 0x8020304C: lbu         $s2, 0x0($s3)
    ctx->r18 = MEM_BU(ctx->r19, 0X0);
    // 0x80203050: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
    // 0x80203054: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x80203058: subu        $t1, $t1, $s2
    ctx->r9 = SUB32(ctx->r9, ctx->r18);
    // 0x8020305C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80203060: subu        $t1, $t1, $s2
    ctx->r9 = SUB32(ctx->r9, ctx->r18);
    // 0x80203064: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80203068: addu        $t1, $t1, $s2
    ctx->r9 = ADD32(ctx->r9, ctx->r18);
    // 0x8020306C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80203070: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80203074: lw          $v0, 0xA0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0XA0);
    // 0x80203078: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8020307C:
    // 0x8020307C: bne         $v0, $at, L_80203154
    if (ctx->r2 != ctx->r1) {
        // 0x80203080: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80203154;
    }
    // 0x80203080: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203084: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203088: jal         0x802011D0
    // 0x8020308C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_6;
    // 0x8020308C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x80203090: lbu         $t4, 0x0($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X0);
    // 0x80203094: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    // 0x80203098: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8020309C: multu       $t4, $s7
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802030A0: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x802030A4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802030A8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802030AC: mflo        $t5
    ctx->r13 = lo;
    // 0x802030B0: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x802030B4: lbu         $t7, 0xAD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XAD);
    // 0x802030B8: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x802030BC: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x802030C0: jal         0x80234E90
    // 0x802030C4: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    static_3_80234E90(rdram, ctx);
        goto after_7;
    // 0x802030C4: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    after_7:
    // 0x802030C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802030CC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802030D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802030D4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802030D8: lw          $t1, 0x3C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X3C);
    // 0x802030DC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802030E0: addiu       $a2, $zero, 0x411
    ctx->r6 = ADD32(0, 0X411);
    // 0x802030E4: bne         $t1, $at, L_80203100
    if (ctx->r9 != ctx->r1) {
        // 0x802030E8: nop
    
            goto L_80203100;
    }
    // 0x802030E8: nop

    // 0x802030EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802030F0: jal         0x80231C9C
    // 0x802030F4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231C9C(rdram, ctx);
        goto after_8;
    // 0x802030F4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_8:
    // 0x802030F8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802030FC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
L_80203100:
    // 0x80203100: jal         0x80234EB0
    // 0x80203104: nop

    static_3_80234EB0(rdram, ctx);
        goto after_9;
    // 0x80203104: nop

    after_9:
    // 0x80203108: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020310C: bne         $v0, $at, L_80203154
    if (ctx->r2 != ctx->r1) {
        // 0x80203110: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80203154;
    }
    // 0x80203110: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203114: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203118: jal         0x802011D0
    // 0x8020311C: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_10;
    // 0x8020311C: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    after_10:
    // 0x80203120: lbu         $t3, 0x0($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X0);
    // 0x80203124: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x80203128: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8020312C: multu       $t3, $s7
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203130: mflo        $t5
    ctx->r13 = lo;
    // 0x80203134: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80203138: sw          $t2, 0xA0($t6)
    MEM_W(0XA0, ctx->r14) = ctx->r10;
    // 0x8020313C: lbu         $t9, 0x0($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X0);
    // 0x80203140: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80203144: multu       $t9, $s7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203148: mflo        $t8
    ctx->r24 = lo;
    // 0x8020314C: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x80203150: sb          $zero, 0xB0($t0)
    MEM_B(0XB0, ctx->r8) = 0;
L_80203154:
    // 0x80203154: lbu         $s2, 0x0($s3)
    ctx->r18 = MEM_BU(ctx->r19, 0X0);
    // 0x80203158: lw          $t1, 0x0($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X0);
    // 0x8020315C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80203160: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203164: mflo        $t3
    ctx->r11 = lo;
    // 0x80203168: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8020316C: lw          $t5, 0xA0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XA0);
    // 0x80203170: bne         $t5, $at, L_80203180
    if (ctx->r13 != ctx->r1) {
        // 0x80203174: nop
    
            goto L_80203180;
    }
    // 0x80203174: nop

    // 0x80203178: jal         0x80203464
    // 0x8020317C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    static_3_80203464(rdram, ctx);
        goto after_11;
    // 0x8020317C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_11:
L_80203180:
    // 0x80203180: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80203184: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x80203188: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x8020318C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80203190: slt         $at, $fp, $t2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80203194: bne         $at, $zero, L_80202F54
    if (ctx->r1 != 0) {
        // 0x80203198: nop
    
            goto L_80202F54;
    }
    // 0x80203198: nop

L_8020319C:
    // 0x8020319C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802031A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802031A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802031A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802031AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802031B0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802031B4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802031B8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802031BC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802031C0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802031C4: jr          $ra
    // 0x802031C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802031C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_80231B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231B1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80231B20: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80231B24: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80231B28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231B2C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80231B30: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x80231B34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80231B38: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80231B3C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80231B40: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80231B44: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231B48: beq         $a1, $zero, L_80231BD4
    if (ctx->r5 == 0) {
        // 0x80231B4C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80231BD4;
    }
    // 0x80231B4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80231B50: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80231B54: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x80231B58: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80231B5C: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80231B60: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x80231B64: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80231B68: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_80231B6C:
    // 0x80231B6C: divu        $zero, $s0, $s2
    lo = S32(U32(ctx->r16) / U32(ctx->r18)); hi = S32(U32(ctx->r16) % U32(ctx->r18));
    // 0x80231B70: mfhi        $t6
    ctx->r14 = hi;
    // 0x80231B74: bne         $s2, $zero, L_80231B80
    if (ctx->r18 != 0) {
        // 0x80231B78: nop
    
            goto L_80231B80;
    }
    // 0x80231B78: nop

    // 0x80231B7C: break       7
    do_break(2149784444);
L_80231B80:
    // 0x80231B80: bnel        $t6, $zero, L_80231BBC
    if (ctx->r14 != 0) {
        // 0x80231B84: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80231BBC;
    }
    goto skip_0;
    // 0x80231B84: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_0:
    // 0x80231B88: beq         $s0, $zero, L_80231B98
    if (ctx->r16 == 0) {
        // 0x80231B8C: nop
    
            goto L_80231B98;
    }
    // 0x80231B8C: nop

    // 0x80231B90: jal         0x80231A24
    // 0x80231B94: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80231B94: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
L_80231B98:
    // 0x80231B98: divu        $zero, $s0, $s2
    lo = S32(U32(ctx->r16) / U32(ctx->r18)); hi = S32(U32(ctx->r16) % U32(ctx->r18));
    // 0x80231B9C: mflo        $a1
    ctx->r5 = lo;
    // 0x80231BA0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80231BA4: bne         $s2, $zero, L_80231BB0
    if (ctx->r18 != 0) {
        // 0x80231BA8: nop
    
            goto L_80231BB0;
    }
    // 0x80231BA8: nop

    // 0x80231BAC: break       7
    do_break(2149784492);
L_80231BB0:
    // 0x80231BB0: jal         0x80231A24
    // 0x80231BB4: nop

    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80231BB4: nop

    after_1:
    // 0x80231BB8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80231BBC:
    // 0x80231BBC: jal         0x80231A24
    // 0x80231BC0: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80231BC0: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    after_2:
    // 0x80231BC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80231BC8: sltu        $at, $s0, $s6
    ctx->r1 = ctx->r16 < ctx->r22 ? 1 : 0;
    // 0x80231BCC: bne         $at, $zero, L_80231B6C
    if (ctx->r1 != 0) {
        // 0x80231BD0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80231B6C;
    }
    // 0x80231BD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80231BD4:
    // 0x80231BD4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231BD8: jal         0x80231A24
    // 0x80231BDC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80231BDC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x80231BE0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80231BE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231BE8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231BEC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80231BF0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80231BF4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80231BF8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80231BFC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80231C00: jr          $ra
    // 0x80231C04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80231C04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802A1ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F58: jr          $ra
    // 0x802A1F5C: lwc1        $f0, 0x98($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X98);
    return;
    // 0x802A1F5C: lwc1        $f0, 0x98($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X98);
;}
RECOMP_FUNC void D_802F05EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F066C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802F0670: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802F0674: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802F0678: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802F067C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802F0680: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802F0684: jal         0x803206C0
    // 0x802F0688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803206C0(rdram, ctx);
        goto after_0;
    // 0x802F0688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802F068C: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x802F0690: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802F0694: jal         0x803206F0
    // 0x802F0698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803206F0(rdram, ctx);
        goto after_1;
    // 0x802F0698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802F069C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x802F06A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802F06A4: jal         0x80320728
    // 0x802F06A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320728(rdram, ctx);
        goto after_2;
    // 0x802F06A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802F06AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802F06B0: jal         0x80320774
    // 0x802F06B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320774(rdram, ctx);
        goto after_3;
    // 0x802F06B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802F06B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802F06BC: jal         0x803207AC
    // 0x802F06C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_803207AC(rdram, ctx);
        goto after_4;
    // 0x802F06C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x802F06C4: lbu         $t6, 0x4F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X4F);
    // 0x802F06C8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x802F06CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802F06D0: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x802F06D4: bne         $a1, $at, L_802F076C
    if (ctx->r5 != ctx->r1) {
        // 0x802F06D8: sb          $t6, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r14;
            goto L_802F076C;
    }
    // 0x802F06D8: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
    // 0x802F06DC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802F06E0: beq         $s0, $at, L_802F076C
    if (ctx->r16 == ctx->r1) {
        // 0x802F06E4: addiu       $a0, $zero, 0x384
        ctx->r4 = ADD32(0, 0X384);
            goto L_802F076C;
    }
    // 0x802F06E4: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    // 0x802F06E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F06EC: jal         0x80305E90
    // 0x802F06F0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    static_3_80305E90(rdram, ctx);
        goto after_5;
    // 0x802F06F0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    after_5:
    // 0x802F06F4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802F06F8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802F06FC: addiu       $s0, $s1, 0x6C
    ctx->r16 = ADD32(ctx->r17, 0X6C);
    // 0x802F0700: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x802F0704: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802F0708: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802F070C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802F0710: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802F0714: jal         0x80302238
    // 0x802F0718: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_6;
    // 0x802F0718: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802F071C: beq         $v0, $zero, L_802F0768
    if (ctx->r2 == 0) {
        // 0x802F0720: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802F0768;
    }
    // 0x802F0720: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802F0724: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802F0728: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802F072C: addiu       $a2, $s1, 0xC
    ctx->r6 = ADD32(ctx->r17, 0XC);
    // 0x802F0730: jal         0x803025D8
    // 0x802F0734: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_7;
    // 0x802F0734: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802F0738: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802F073C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802F0740: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802F0744: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x802F0748: jal         0x8030262C
    // 0x802F074C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_8;
    // 0x802F074C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802F0750: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802F0754: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802F0758: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802F075C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802F0760: jal         0x80302664
    // 0x802F0764: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_9;
    // 0x802F0764: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_9:
L_802F0768:
    // 0x802F0768: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
L_802F076C:
    // 0x802F076C: jal         0x80320824
    // 0x802F0770: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80320824(rdram, ctx);
        goto after_10;
    // 0x802F0770: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x802F0774: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802F0778: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802F077C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802F0780: jr          $ra
    // 0x802F0784: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x802F0784: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802B9104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B9184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B9188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B918C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B9190: beq         $a0, $zero, L_802B91C4
    if (ctx->r4 == 0) {
        // 0x802B9194: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802B91C4;
    }
    // 0x802B9194: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802B9198: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802B919C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802B91A0: jal         0x8031CAF4
    // 0x802B91A4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_8031CAF4(rdram, ctx);
        goto after_0;
    // 0x802B91A4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802B91A8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802B91AC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802B91B0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802B91B4: beql        $t7, $zero, L_802B91C8
    if (ctx->r15 == 0) {
        // 0x802B91B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B91C8;
    }
    goto skip_0;
    // 0x802B91B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802B91BC: jal         0x802C681C
    // 0x802B91C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802B91C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
L_802B91C4:
    // 0x802B91C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B91C8:
    // 0x802B91C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B91CC: jr          $ra
    // 0x802B91D0: nop

    return;
    // 0x802B91D0: nop

;}
RECOMP_FUNC void D_80295E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295F04: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80295F08: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80295F0C: beq         $v0, $zero, L_80295F30
    if (ctx->r2 == 0) {
        // 0x80295F10: nop
    
            goto L_80295F30;
    }
    // 0x80295F10: nop

    // 0x80295F14: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
L_80295F18:
    // 0x80295F18: beql        $t6, $zero, L_80295F28
    if (ctx->r14 == 0) {
        // 0x80295F1C: lw          $v0, 0x8($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X8);
            goto L_80295F28;
    }
    goto skip_0;
    // 0x80295F1C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x80295F20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80295F24: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
L_80295F28:
    // 0x80295F28: bnel        $v0, $zero, L_80295F18
    if (ctx->r2 != 0) {
        // 0x80295F2C: lh          $t6, 0x2($v0)
        ctx->r14 = MEM_H(ctx->r2, 0X2);
            goto L_80295F18;
    }
    goto skip_1;
    // 0x80295F2C: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    skip_1:
L_80295F30:
    // 0x80295F30: beq         $v1, $zero, L_80295F40
    if (ctx->r3 == 0) {
        // 0x80295F34: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80295F40;
    }
    // 0x80295F34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80295F38: jr          $ra
    // 0x80295F3C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    return;
    // 0x80295F3C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
L_80295F40:
    // 0x80295F40: jr          $ra
    // 0x80295F44: nop

    return;
    // 0x80295F44: nop

;}
RECOMP_FUNC void D_802DFD9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DFE1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802DFE20: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802DFE24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DFE28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802DFE2C: beq         $a0, $zero, L_802DFEA4
    if (ctx->r4 == 0) {
        // 0x802DFE30: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_802DFEA4;
    }
    // 0x802DFE30: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802DFE34: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DFE38: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802DFE3C: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802DFE40: jal         0x802B0B44
    // 0x802DFE44: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    static_3_802B0B44(rdram, ctx);
        goto after_0;
    // 0x802DFE44: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x802DFE48: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802DFE4C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802DFE50: addiu       $a0, $s0, 0x152C
    ctx->r4 = ADD32(ctx->r16, 0X152C);
    // 0x802DFE54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802DFE58: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    // 0x802DFE5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802DFE60: jal         0x802C6A00
    // 0x802DFE64: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_1;
    // 0x802DFE64: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x802DFE68: addiu       $a0, $s0, 0x71C
    ctx->r4 = ADD32(ctx->r16, 0X71C);
    // 0x802DFE6C: jal         0x80307558
    // 0x802DFE70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80307558(rdram, ctx);
        goto after_2;
    // 0x802DFE70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802DFE74: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    // 0x802DFE78: jal         0x802CD9E4
    // 0x802DFE7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802CD9E4(rdram, ctx);
        goto after_3;
    // 0x802DFE7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802DFE80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DFE84: jal         0x803086D4
    // 0x802DFE88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_4;
    // 0x802DFE88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802DFE8C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802DFE90: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802DFE94: beql        $t8, $zero, L_802DFEA8
    if (ctx->r24 == 0) {
        // 0x802DFE98: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802DFEA8;
    }
    goto skip_0;
    // 0x802DFE98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802DFE9C: jal         0x802C681C
    // 0x802DFEA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_5;
    // 0x802DFEA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_802DFEA4:
    // 0x802DFEA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802DFEA8:
    // 0x802DFEA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802DFEAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802DFEB0: jr          $ra
    // 0x802DFEB4: nop

    return;
    // 0x802DFEB4: nop

;}
RECOMP_FUNC void D_802EDF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EE010: jr          $ra
    // 0x802EE014: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EE014: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802477D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802477D0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802477D4: jr          $ra
    // 0x802477D8: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    return;
    // 0x802477D8: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void D_8024A700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A700: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8024A704: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024A708: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x8024A70C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024A710: lui         $t7, 0xA500
    ctx->r15 = S32(0XA500 << 16);
    // 0x8024A714: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x8024A718: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024A71C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8024A720: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x8024A724: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024A728: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8024A72C: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x8024A730: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024A734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024A738: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x8024A73C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8024A740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024A744: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x8024A748: sb          $t1, 0x1($at)
    MEM_B(0X1, ctx->r1) = ctx->r9;
    // 0x8024A74C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8024A750: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8024A754: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8024A758: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8024A75C: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x8024A760: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8024A764: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8024A768: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8024A76C: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8024A770: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8024A774: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8024A778: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8024A77C: lbu         $t8, 0x1($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1);
    // 0x8024A780: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8024A784: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8024A788: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8024A78C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8024A790: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x8024A794: jal         0x802481C0
    // 0x8024A798: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    static_3_802481C0(rdram, ctx);
        goto after_0;
    // 0x8024A798: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    after_0:
    // 0x8024A79C: jal         0x80241760
    // 0x8024A7A0: nop

    static_3_80241760(rdram, ctx);
        goto after_1;
    // 0x8024A7A0: nop

    after_1:
    // 0x8024A7A4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8024A7A8: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8024A7AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024A7B0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8024A7B4: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x8024A7B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024A7BC: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8024A7C0: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x8024A7C4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8024A7C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024A7CC: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x8024A7D0: jal         0x80241780
    // 0x8024A7D4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_80241780(rdram, ctx);
        goto after_2;
    // 0x8024A7D4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x8024A7D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024A7DC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8024A7E0: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8024A7E4: jr          $ra
    // 0x8024A7E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8024A7E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80201ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201ABC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201AC0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201AC4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201AC8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201ACC: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x80201AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201AD4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80201AD8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201ADC: bne         $at, $zero, L_80201B08
    if (ctx->r1 != 0) {
        // 0x80201AE0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80201B08;
    }
    // 0x80201AE0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201AE4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201AE8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201AEC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201AF0: addiu       $a2, $zero, 0x1B0
    ctx->r6 = ADD32(0, 0X1B0);
    // 0x80201AF4: jal         0x80231C9C
    // 0x80201AF8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201AF8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80201AFC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201B00: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201B04: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_80201B08:
    // 0x80201B08: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201B0C: beq         $at, $zero, L_80201BA0
    if (ctx->r1 == 0) {
        // 0x80201B10: lwc1        $f4, 0x24($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80201BA0;
    }
    // 0x80201B10: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201B14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80201B18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201B1C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201B20: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80201B24: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201B28: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201B2C: bc1tl       L_80201B40
    if (c1cs) {
        // 0x80201B30: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80201B40;
    }
    goto skip_0;
    // 0x80201B30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x80201B34: jal         0x80231C9C
    // 0x80201B38: addiu       $a2, $zero, 0x1B2
    ctx->r6 = ADD32(0, 0X1B2);
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80201B38: addiu       $a2, $zero, 0x1B2
    ctx->r6 = ADD32(0, 0X1B2);
    after_1:
    // 0x80201B3C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80201B40:
    // 0x80201B40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80201B44: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201B48: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201B4C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201B50: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80201B54: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201B58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201B5C: bc1tl       L_80201B70
    if (c1cs) {
        // 0x80201B60: lbu         $t7, 0x23($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X23);
            goto L_80201B70;
    }
    goto skip_1;
    // 0x80201B60: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    skip_1:
    // 0x80201B64: jal         0x80231C9C
    // 0x80201B68: addiu       $a2, $zero, 0x1B3
    ctx->r6 = ADD32(0, 0X1B3);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80201B68: addiu       $a2, $zero, 0x1B3
    ctx->r6 = ADD32(0, 0X1B3);
    after_2:
    // 0x80201B6C: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
L_80201B70:
    // 0x80201B70: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80201B74: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80201B78: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80201B7C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201B80: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201B84: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201B88: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201B8C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201B90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80201B94: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201B98: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80201B9C: swc1        $f16, 0x7C($t9)
    MEM_W(0X7C, ctx->r25) = ctx->f16.u32l;
L_80201BA0:
    // 0x80201BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201BA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201BA8: jr          $ra
    // 0x80201BAC: nop

    return;
    // 0x80201BAC: nop

;}
RECOMP_FUNC void D_80279860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802798D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802798DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802798E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802798E4: bne         $a0, $zero, L_802798FC
    if (ctx->r4 != 0) {
        // 0x802798E8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802798FC;
    }
    // 0x802798E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802798EC: jal         0x802C67EC
    // 0x802798F0: addiu       $a0, $zero, 0x71E8
    ctx->r4 = ADD32(0, 0X71E8);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802798F0: addiu       $a0, $zero, 0x71E8
    ctx->r4 = ADD32(0, 0X71E8);
    after_0:
    // 0x802798F4: beq         $v0, $zero, L_80279A74
    if (ctx->r2 == 0) {
        // 0x802798F8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80279A74;
    }
    // 0x802798F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802798FC:
    // 0x802798FC: jal         0x802F9628
    // 0x80279900: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    static_3_802F9628(rdram, ctx);
        goto after_1;
    // 0x80279900: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    after_1:
    // 0x80279904: jal         0x8028DF30
    // 0x80279908: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    static_3_8028DF30(rdram, ctx);
        goto after_2;
    // 0x80279908: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    after_2:
    // 0x8027990C: jal         0x80303610
    // 0x80279910: addiu       $a0, $s0, 0x6B8
    ctx->r4 = ADD32(ctx->r16, 0X6B8);
    static_3_80303610(rdram, ctx);
        goto after_3;
    // 0x80279910: addiu       $a0, $s0, 0x6B8
    ctx->r4 = ADD32(ctx->r16, 0X6B8);
    after_3:
    // 0x80279914: jal         0x802F7174
    // 0x80279918: addiu       $a0, $s0, 0x6D0
    ctx->r4 = ADD32(ctx->r16, 0X6D0);
    static_3_802F7174(rdram, ctx);
        goto after_4;
    // 0x80279918: addiu       $a0, $s0, 0x6D0
    ctx->r4 = ADD32(ctx->r16, 0X6D0);
    after_4:
    // 0x8027991C: addiu       $a0, $s0, 0x8F4
    ctx->r4 = ADD32(ctx->r16, 0X8F4);
    // 0x80279920: jal         0x80301F1C
    // 0x80279924: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    static_3_80301F1C(rdram, ctx);
        goto after_5;
    // 0x80279924: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_5:
    // 0x80279928: addiu       $a0, $s0, 0x3228
    ctx->r4 = ADD32(ctx->r16, 0X3228);
    // 0x8027992C: jal         0x80302E38
    // 0x80279930: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    static_3_80302E38(rdram, ctx);
        goto after_6;
    // 0x80279930: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_6:
    // 0x80279934: addiu       $a0, $s0, 0x3230
    ctx->r4 = ADD32(ctx->r16, 0X3230);
    // 0x80279938: jal         0x8030340C
    // 0x8027993C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    static_3_8030340C(rdram, ctx);
        goto after_7;
    // 0x8027993C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_7:
    // 0x80279940: jal         0x802CD41C
    // 0x80279944: addiu       $a0, $s0, 0x32BC
    ctx->r4 = ADD32(ctx->r16, 0X32BC);
    static_3_802CD41C(rdram, ctx);
        goto after_8;
    // 0x80279944: addiu       $a0, $s0, 0x32BC
    ctx->r4 = ADD32(ctx->r16, 0X32BC);
    after_8:
    // 0x80279948: jal         0x802FA5FC
    // 0x8027994C: addiu       $a0, $s0, 0x3350
    ctx->r4 = ADD32(ctx->r16, 0X3350);
    static_3_802FA5FC(rdram, ctx);
        goto after_9;
    // 0x8027994C: addiu       $a0, $s0, 0x3350
    ctx->r4 = ADD32(ctx->r16, 0X3350);
    after_9:
    // 0x80279950: jal         0x802FBF84
    // 0x80279954: addiu       $a0, $s0, 0x340C
    ctx->r4 = ADD32(ctx->r16, 0X340C);
    static_3_802FBF84(rdram, ctx);
        goto after_10;
    // 0x80279954: addiu       $a0, $s0, 0x340C
    ctx->r4 = ADD32(ctx->r16, 0X340C);
    after_10:
    // 0x80279958: jal         0x8029DDB0
    // 0x8027995C: addiu       $a0, $s0, 0x3570
    ctx->r4 = ADD32(ctx->r16, 0X3570);
    static_3_8029DDB0(rdram, ctx);
        goto after_11;
    // 0x8027995C: addiu       $a0, $s0, 0x3570
    ctx->r4 = ADD32(ctx->r16, 0X3570);
    after_11:
    // 0x80279960: addiu       $a0, $s0, 0x362C
    ctx->r4 = ADD32(ctx->r16, 0X362C);
    // 0x80279964: jal         0x802E9B10
    // 0x80279968: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    static_3_802E9B10(rdram, ctx);
        goto after_12;
    // 0x80279968: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_12:
    // 0x8027996C: jal         0x802E431C
    // 0x80279970: addiu       $a0, $s0, 0x365C
    ctx->r4 = ADD32(ctx->r16, 0X365C);
    static_3_802E431C(rdram, ctx);
        goto after_13;
    // 0x80279970: addiu       $a0, $s0, 0x365C
    ctx->r4 = ADD32(ctx->r16, 0X365C);
    after_13:
    // 0x80279974: jal         0x802BBE78
    // 0x80279978: addiu       $a0, $s0, 0x4B88
    ctx->r4 = ADD32(ctx->r16, 0X4B88);
    static_3_802BBE78(rdram, ctx);
        goto after_14;
    // 0x80279978: addiu       $a0, $s0, 0x4B88
    ctx->r4 = ADD32(ctx->r16, 0X4B88);
    after_14:
    // 0x8027997C: jal         0x802E431C
    // 0x80279980: addiu       $a0, $s0, 0x4E3C
    ctx->r4 = ADD32(ctx->r16, 0X4E3C);
    static_3_802E431C(rdram, ctx);
        goto after_15;
    // 0x80279980: addiu       $a0, $s0, 0x4E3C
    ctx->r4 = ADD32(ctx->r16, 0X4E3C);
    after_15:
    // 0x80279984: jal         0x802BBE78
    // 0x80279988: addiu       $a0, $s0, 0x6368
    ctx->r4 = ADD32(ctx->r16, 0X6368);
    static_3_802BBE78(rdram, ctx);
        goto after_16;
    // 0x80279988: addiu       $a0, $s0, 0x6368
    ctx->r4 = ADD32(ctx->r16, 0X6368);
    after_16:
    // 0x8027998C: jal         0x80308F80
    // 0x80279990: addiu       $a0, $s0, 0x70F8
    ctx->r4 = ADD32(ctx->r16, 0X70F8);
    static_3_80308F80(rdram, ctx);
        goto after_17;
    // 0x80279990: addiu       $a0, $s0, 0x70F8
    ctx->r4 = ADD32(ctx->r16, 0X70F8);
    after_17:
    // 0x80279994: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80279998: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027999C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x802799A0: jal         0x80303460
    // 0x802799A4: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    static_3_80303460(rdram, ctx);
        goto after_18;
    // 0x802799A4: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_18:
    // 0x802799A8: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x802799AC: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x802799B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802799B4: addiu       $a1, $zero, 0x93
    ctx->r5 = ADD32(0, 0X93);
    // 0x802799B8: jal         0x803034A8
    // 0x802799BC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_803034A8(rdram, ctx);
        goto after_19;
    // 0x802799BC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_19:
    // 0x802799C0: jal         0x802A9A38
    // 0x802799C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A9A38(rdram, ctx);
        goto after_20;
    // 0x802799C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x802799C8: sb          $zero, 0x8F0($s0)
    MEM_B(0X8F0, ctx->r16) = 0;
    // 0x802799CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802799D0: jal         0x803003A0
    // 0x802799D4: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    static_3_803003A0(rdram, ctx);
        goto after_21;
    // 0x802799D4: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    after_21:
    // 0x802799D8: jal         0x80302CE0
    // 0x802799DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_80302CE0(rdram, ctx);
        goto after_22;
    // 0x802799DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_22:
    // 0x802799E0: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
    // 0x802799E4: sw          $v1, 0x68B4($s0)
    MEM_W(0X68B4, ctx->r16) = ctx->r3;
    // 0x802799E8: sw          $v1, 0x69E0($s0)
    MEM_W(0X69E0, ctx->r16) = ctx->r3;
    // 0x802799EC: sw          $v1, 0x68B8($s0)
    MEM_W(0X68B8, ctx->r16) = ctx->r3;
    // 0x802799F0: sw          $v1, 0x69E4($s0)
    MEM_W(0X69E4, ctx->r16) = ctx->r3;
    // 0x802799F4: sw          $v1, 0x68BC($s0)
    MEM_W(0X68BC, ctx->r16) = ctx->r3;
    // 0x802799F8: sw          $v1, 0x69E8($s0)
    MEM_W(0X69E8, ctx->r16) = ctx->r3;
    // 0x802799FC: sw          $zero, 0x6B0C($s0)
    MEM_W(0X6B0C, ctx->r16) = 0;
    // 0x80279A00: sw          $zero, 0x6B10($s0)
    MEM_W(0X6B10, ctx->r16) = 0;
    // 0x80279A04: sw          $zero, 0x6B14($s0)
    MEM_W(0X6B14, ctx->r16) = 0;
    // 0x80279A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80279A0C: addiu       $v0, $s0, 0xC
    ctx->r2 = ADD32(ctx->r16, 0XC);
    // 0x80279A10: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
L_80279A14:
    // 0x80279A14: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80279A18: sw          $v1, 0x68B4($v0)
    MEM_W(0X68B4, ctx->r2) = ctx->r3;
    // 0x80279A1C: sw          $v1, 0x69E0($v0)
    MEM_W(0X69E0, ctx->r2) = ctx->r3;
    // 0x80279A20: sw          $zero, 0x6B0C($v0)
    MEM_W(0X6B0C, ctx->r2) = 0;
    // 0x80279A24: sw          $v1, 0x68B8($v0)
    MEM_W(0X68B8, ctx->r2) = ctx->r3;
    // 0x80279A28: sw          $v1, 0x69E4($v0)
    MEM_W(0X69E4, ctx->r2) = ctx->r3;
    // 0x80279A2C: sw          $zero, 0x6B10($v0)
    MEM_W(0X6B10, ctx->r2) = 0;
    // 0x80279A30: sw          $v1, 0x68BC($v0)
    MEM_W(0X68BC, ctx->r2) = ctx->r3;
    // 0x80279A34: sw          $v1, 0x69E8($v0)
    MEM_W(0X69E8, ctx->r2) = ctx->r3;
    // 0x80279A38: sw          $zero, 0x6B14($v0)
    MEM_W(0X6B14, ctx->r2) = 0;
    // 0x80279A3C: sw          $v1, 0x68C0($v0)
    MEM_W(0X68C0, ctx->r2) = ctx->r3;
    // 0x80279A40: sw          $v1, 0x69EC($v0)
    MEM_W(0X69EC, ctx->r2) = ctx->r3;
    // 0x80279A44: sw          $zero, 0x6B18($v0)
    MEM_W(0X6B18, ctx->r2) = 0;
    // 0x80279A48: bne         $a0, $a1, L_80279A14
    if (ctx->r4 != ctx->r5) {
        // 0x80279A4C: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_80279A14;
    }
    // 0x80279A4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80279A50: sh          $zero, 0x6C38($s0)
    MEM_H(0X6C38, ctx->r16) = 0;
    // 0x80279A54: sb          $zero, 0x4E38($s0)
    MEM_B(0X4E38, ctx->r16) = 0;
    // 0x80279A58: sb          $zero, 0x8DD($s0)
    MEM_B(0X8DD, ctx->r16) = 0;
    // 0x80279A5C: jal         0x802E9B6C
    // 0x80279A60: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_802E9B6C(rdram, ctx);
        goto after_23;
    // 0x80279A60: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_23:
    // 0x80279A64: jal         0x802E9BDC
    // 0x80279A68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_802E9BDC(rdram, ctx);
        goto after_24;
    // 0x80279A68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_24:
    // 0x80279A6C: jal         0x802A85E8
    // 0x80279A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A85E8(rdram, ctx);
        goto after_25;
    // 0x80279A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
L_80279A74:
    // 0x80279A74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80279A78: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80279A7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80279A80: jr          $ra
    // 0x80279A84: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80279A84: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802A2274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A22F4: jr          $ra
    // 0x802A22F8: lbu         $v0, 0xC9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC9);
    return;
    // 0x802A22F8: lbu         $v0, 0xC9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC9);
;}
RECOMP_FUNC void D_802815F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281670: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281674: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80281678: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028167C: bne         $a0, $zero, L_80281694
    if (ctx->r4 != 0) {
        // 0x80281680: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80281694;
    }
    // 0x80281680: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281684: jal         0x802C67EC
    // 0x80281688: addiu       $a0, $zero, 0x558
    ctx->r4 = ADD32(0, 0X558);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80281688: addiu       $a0, $zero, 0x558
    ctx->r4 = ADD32(0, 0X558);
    after_0:
    // 0x8028168C: beq         $v0, $zero, L_802816C0
    if (ctx->r2 == 0) {
        // 0x80281690: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802816C0;
    }
    // 0x80281690: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80281694:
    // 0x80281694: jal         0x80317344
    // 0x80281698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x80281698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8028169C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802816A0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802816A4: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x802816A8: jal         0x802D4800
    // 0x802816AC: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D4800(rdram, ctx);
        goto after_2;
    // 0x802816AC: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_2:
    // 0x802816B0: jal         0x8031C6D8
    // 0x802816B4: addiu       $a0, $s0, 0x368
    ctx->r4 = ADD32(ctx->r16, 0X368);
    static_3_8031C6D8(rdram, ctx);
        goto after_3;
    // 0x802816B4: addiu       $a0, $s0, 0x368
    ctx->r4 = ADD32(ctx->r16, 0X368);
    after_3:
    // 0x802816B8: jal         0x8031C6D8
    // 0x802816BC: addiu       $a0, $s0, 0x458
    ctx->r4 = ADD32(ctx->r16, 0X458);
    static_3_8031C6D8(rdram, ctx);
        goto after_4;
    // 0x802816BC: addiu       $a0, $s0, 0x458
    ctx->r4 = ADD32(ctx->r16, 0X458);
    after_4:
L_802816C0:
    // 0x802816C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802816C4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802816C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802816CC: jr          $ra
    // 0x802816D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802816D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802D39A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D3A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D3A28: lbu         $v0, 0x1404($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1404);
    // 0x802D3A2C: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x802D3A30: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802D3A34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802D3A38: bne         $v0, $at, L_802D3A54
    if (ctx->r2 != ctx->r1) {
        // 0x802D3A3C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802D3A54;
    }
    // 0x802D3A3C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802D3A40: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802D3A44: jal         0x80303A20
    // 0x802D3A48: nop

    static_3_80303A20(rdram, ctx);
        goto after_0;
    // 0x802D3A48: nop

    after_0:
    // 0x802D3A4C: b           L_802D3AFC
    // 0x802D3A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D3AFC;
    // 0x802D3A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D3A54:
    // 0x802D3A54: bne         $v1, $v0, L_802D3A70
    if (ctx->r3 != ctx->r2) {
        // 0x802D3A58: nop
    
            goto L_802D3A70;
    }
    // 0x802D3A58: nop

    // 0x802D3A5C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802D3A60: jal         0x80303AF4
    // 0x802D3A64: nop

    static_3_80303AF4(rdram, ctx);
        goto after_1;
    // 0x802D3A64: nop

    after_1:
    // 0x802D3A68: b           L_802D3AFC
    // 0x802D3A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D3AFC;
    // 0x802D3A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D3A70:
    // 0x802D3A70: bnel        $v0, $zero, L_802D3AFC
    if (ctx->r2 != 0) {
        // 0x802D3A74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D3AFC;
    }
    goto skip_0;
    // 0x802D3A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D3A78: lbu         $t6, 0xE2B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE2B);
    // 0x802D3A7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D3A80: beq         $t6, $zero, L_802D3AD0
    if (ctx->r14 == 0) {
        // 0x802D3A84: nop
    
            goto L_802D3AD0;
    }
    // 0x802D3A84: nop

    // 0x802D3A88: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x802D3A8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D3A90: jal         0x80309740
    // 0x802D3A94: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    static_3_80309740(rdram, ctx);
        goto after_2;
    // 0x802D3A94: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x802D3A98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D3A9C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802D3AA0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802D3AA4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802D3AA8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802D3AAC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802D3AB0: lwc1        $f0, 0x32AC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X32AC);
    // 0x802D3AB4: addiu       $a1, $v0, 0x6D0
    ctx->r5 = ADD32(ctx->r2, 0X6D0);
    // 0x802D3AB8: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x802D3ABC: swc1        $f4, 0x170($a1)
    MEM_W(0X170, ctx->r5) = ctx->f4.u32l;
    // 0x802D3AC0: sb          $t7, 0x1404($a0)
    MEM_B(0X1404, ctx->r4) = ctx->r15;
    // 0x802D3AC4: sh          $t8, 0x140C($a0)
    MEM_H(0X140C, ctx->r4) = ctx->r24;
    // 0x802D3AC8: b           L_802D3AF8
    // 0x802D3ACC: swc1        $f6, 0x1408($a0)
    MEM_W(0X1408, ctx->r4) = ctx->f6.u32l;
        goto L_802D3AF8;
    // 0x802D3ACC: swc1        $f6, 0x1408($a0)
    MEM_W(0X1408, ctx->r4) = ctx->f6.u32l;
L_802D3AD0:
    // 0x802D3AD0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D3AD4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802D3AD8: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x802D3ADC: nop

    // 0x802D3AE0: bc1fl       L_802D3AFC
    if (!c1cs) {
        // 0x802D3AE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D3AFC;
    }
    goto skip_1;
    // 0x802D3AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802D3AE8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802D3AEC: sb          $t9, 0x1404($a0)
    MEM_B(0X1404, ctx->r4) = ctx->r25;
    // 0x802D3AF0: sh          $v1, 0x140C($a0)
    MEM_H(0X140C, ctx->r4) = ctx->r3;
    // 0x802D3AF4: swc1        $f10, 0x1408($a0)
    MEM_W(0X1408, ctx->r4) = ctx->f10.u32l;
L_802D3AF8:
    // 0x802D3AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D3AFC:
    // 0x802D3AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D3B00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802D3B04: jr          $ra
    // 0x802D3B08: nop

    return;
    // 0x802D3B08: nop

;}
RECOMP_FUNC void D_802EA700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA780: lh          $v0, 0xE4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE4);
    // 0x802EA784: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EA788: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802EA78C: beql        $v0, $zero, L_802EA7B0
    if (ctx->r2 == 0) {
        // 0x802EA790: lwc1        $f2, 0xD4($a0)
        ctx->f2.u32l = MEM_W(ctx->r4, 0XD4);
            goto L_802EA7B0;
    }
    goto skip_0;
    // 0x802EA790: lwc1        $f2, 0xD4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XD4);
    skip_0:
    // 0x802EA794: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802EA798: beql        $v0, $at, L_802EA7DC
    if (ctx->r2 == ctx->r1) {
        // 0x802EA79C: lwc1        $f0, 0x64($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
            goto L_802EA7DC;
    }
    goto skip_1;
    // 0x802EA79C: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
    skip_1:
    // 0x802EA7A0: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
    // 0x802EA7A4: b           L_802EA7F8
    // 0x802EA7A8: lwc1        $f2, 0xD4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XD4);
        goto L_802EA7F8;
    // 0x802EA7A8: lwc1        $f2, 0xD4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x802EA7AC: lwc1        $f2, 0xD4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XD4);
L_802EA7B0:
    // 0x802EA7B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EA7B4: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
    // 0x802EA7B8: mul.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802EA7BC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802EA7C0: nop

    // 0x802EA7C4: bc1fl       L_802EA7FC
    if (!c1cs) {
        // 0x802EA7C8: div.s       $f6, $f0, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
            goto L_802EA7FC;
    }
    goto skip_2;
    // 0x802EA7C8: div.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    skip_2:
    // 0x802EA7CC: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x802EA7D0: b           L_802EA7F8
    // 0x802EA7D4: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
        goto L_802EA7F8;
    // 0x802EA7D4: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
    // 0x802EA7D8: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
L_802EA7DC:
    // 0x802EA7DC: lwc1        $f2, 0xD4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x802EA7E0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802EA7E4: nop

    // 0x802EA7E8: bc1fl       L_802EA7FC
    if (!c1cs) {
        // 0x802EA7EC: div.s       $f6, $f0, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
            goto L_802EA7FC;
    }
    goto skip_3;
    // 0x802EA7EC: div.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    skip_3:
    // 0x802EA7F0: swc1        $f2, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f2.u32l;
    // 0x802EA7F4: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
L_802EA7F8:
    // 0x802EA7F8: div.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
L_802EA7FC:
    // 0x802EA7FC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EA800: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x802EA804: nop

    // 0x802EA808: bgtzl       $v0, L_802EA818
    if (SIGNED(ctx->r2) > 0) {
        // 0x802EA80C: mtc1        $v0, $f10
        ctx->f10.u32l = ctx->r2;
            goto L_802EA818;
    }
    goto skip_4;
    // 0x802EA80C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    skip_4:
    // 0x802EA810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802EA814: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
L_802EA818:
    // 0x802EA818: lh          $t7, 0x68($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X68);
    // 0x802EA81C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802EA820: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x802EA824: blez        $t7, L_802EA864
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802EA828: swc1        $f18, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
            goto L_802EA864;
    }
    // 0x802EA828: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    // 0x802EA82C: lh          $t8, 0xE8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE8);
    // 0x802EA830: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x802EA834: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802EA838: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802EA83C: bne         $at, $zero, L_802EA84C
    if (ctx->r1 != 0) {
        // 0x802EA840: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_802EA84C;
    }
    // 0x802EA840: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802EA844: b           L_802EA850
    // 0x802EA848: sb          $t0, 0xEB($a0)
    MEM_B(0XEB, ctx->r4) = ctx->r8;
        goto L_802EA850;
    // 0x802EA848: sb          $t0, 0xEB($a0)
    MEM_B(0XEB, ctx->r4) = ctx->r8;
L_802EA84C:
    // 0x802EA84C: sb          $zero, 0xEB($a0)
    MEM_B(0XEB, ctx->r4) = 0;
L_802EA850:
    // 0x802EA850: lwc1        $f4, 0xC0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC0);
    // 0x802EA854: lwc1        $f6, 0xC8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC8);
    // 0x802EA858: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802EA85C: b           L_802EA86C
    // 0x802EA860: swc1        $f8, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f8.u32l;
        goto L_802EA86C;
    // 0x802EA860: swc1        $f8, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f8.u32l;
L_802EA864:
    // 0x802EA864: jr          $ra
    // 0x802EA868: sb          $t1, 0xEA($a0)
    MEM_B(0XEA, ctx->r4) = ctx->r9;
    return;
    // 0x802EA868: sb          $t1, 0xEA($a0)
    MEM_B(0XEA, ctx->r4) = ctx->r9;
L_802EA86C:
    // 0x802EA86C: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x802EA870: lwc1        $f2, 0xCC($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XCC);
    // 0x802EA874: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x802EA878: nop

    // 0x802EA87C: bc1fl       L_802EA894
    if (!c1cs) {
        // 0x802EA880: sb          $t2, 0xEA($a0)
        MEM_B(0XEA, ctx->r4) = ctx->r10;
            goto L_802EA894;
    }
    goto skip_5;
    // 0x802EA880: sb          $t2, 0xEA($a0)
    MEM_B(0XEA, ctx->r4) = ctx->r10;
    skip_5:
    // 0x802EA884: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802EA888: b           L_802EA898
    // 0x802EA88C: swc1        $f10, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f10.u32l;
        goto L_802EA898;
    // 0x802EA88C: swc1        $f10, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f10.u32l;
    // 0x802EA890: sb          $t2, 0xEA($a0)
    MEM_B(0XEA, ctx->r4) = ctx->r10;
L_802EA894:
    // 0x802EA894: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
L_802EA898:
    // 0x802EA898: lh          $t3, 0xE6($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XE6);
    // 0x802EA89C: lwc1        $f2, 0xD4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x802EA8A0: lwc1        $f6, 0xC0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC0);
    // 0x802EA8A4: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x802EA8A8: swc1        $f0, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->f0.u32l;
    // 0x802EA8AC: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x802EA8B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802EA8B4: div.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f18.fl);
    // 0x802EA8B8: bc1f        L_802EA8D4
    if (!c1cs) {
        // 0x802EA8BC: swc1        $f4, 0xC4($a0)
        MEM_W(0XC4, ctx->r4) = ctx->f4.u32l;
            goto L_802EA8D4;
    }
    // 0x802EA8BC: swc1        $f4, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f4.u32l;
    // 0x802EA8C0: lh          $t4, 0xE8($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XE8);
    // 0x802EA8C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802EA8C8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802EA8CC: sh          $t5, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r13;
    // 0x802EA8D0: swc1        $f2, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f2.u32l;
L_802EA8D4:
    // 0x802EA8D4: lbu         $t6, 0xEA($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEA);
    // 0x802EA8D8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802EA8DC: beq         $t6, $zero, L_802EA974
    if (ctx->r14 == 0) {
        // 0x802EA8E0: nop
    
            goto L_802EA974;
    }
    // 0x802EA8E0: nop

    // 0x802EA8E4: lw          $t8, 0xB4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XB4);
    // 0x802EA8E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802EA8EC: sh          $t7, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r15;
    // 0x802EA8F0: beq         $t8, $zero, L_802EA944
    if (ctx->r24 == 0) {
        // 0x802EA8F4: sb          $zero, 0xEA($a0)
        MEM_B(0XEA, ctx->r4) = 0;
            goto L_802EA944;
    }
    // 0x802EA8F4: sb          $zero, 0xEA($a0)
    MEM_B(0XEA, ctx->r4) = 0;
    // 0x802EA8F8: lh          $t9, 0xE6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XE6);
    // 0x802EA8FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802EA900: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802EA904: blezl       $t9, L_802EA948
    if (SIGNED(ctx->r25) <= 0) {
        // 0x802EA908: lh          $t5, 0xE4($a0)
        ctx->r13 = MEM_H(ctx->r4, 0XE4);
            goto L_802EA948;
    }
    goto skip_6;
    // 0x802EA908: lh          $t5, 0xE4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0XE4);
    skip_6:
L_802EA90C:
    // 0x802EA90C: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802EA910: lw          $t0, 0xB4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XB4);
    // 0x802EA914: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802EA918: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x802EA91C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802EA920: mflo        $t1
    ctx->r9 = lo;
    // 0x802EA924: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x802EA928: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x802EA92C: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
    // 0x802EA930: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x802EA934: lh          $t4, 0xE6($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XE6);
    // 0x802EA938: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802EA93C: bne         $at, $zero, L_802EA90C
    if (ctx->r1 != 0) {
        // 0x802EA940: nop
    
            goto L_802EA90C;
    }
    // 0x802EA940: nop

L_802EA944:
    // 0x802EA944: lh          $t5, 0xE4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0XE4);
L_802EA948:
    // 0x802EA948: bnel        $t5, $zero, L_802EA968
    if (ctx->r13 != 0) {
        // 0x802EA94C: lwc1        $f0, 0xD0($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0XD0);
            goto L_802EA968;
    }
    goto skip_7;
    // 0x802EA94C: lwc1        $f0, 0xD0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD0);
    skip_7:
    // 0x802EA950: lwc1        $f0, 0xD0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x802EA954: lwc1        $f8, 0xD4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x802EA958: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802EA95C: b           L_802EA96C
    // 0x802EA960: swc1        $f10, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f10.u32l;
        goto L_802EA96C;
    // 0x802EA960: swc1        $f10, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f10.u32l;
    // 0x802EA964: lwc1        $f0, 0xD0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD0);
L_802EA968:
    // 0x802EA968: swc1        $f0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f0.u32l;
L_802EA96C:
    // 0x802EA96C: swc1        $f0, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->f0.u32l;
    // 0x802EA970: swc1        $f2, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f2.u32l;
L_802EA974:
    // 0x802EA974: jr          $ra
    // 0x802EA978: nop

    return;
    // 0x802EA978: nop

;}
RECOMP_FUNC void D_8029BA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029BB00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029BB04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029BB08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029BB0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029BB10: jal         0x802CBA18
    // 0x8029BB14: lbu         $a1, 0x89($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X89);
    static_3_802CBA18(rdram, ctx);
        goto after_0;
    // 0x8029BB14: lbu         $a1, 0x89($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X89);
    after_0:
    // 0x8029BB18: lbu         $v0, 0x89($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X89);
    // 0x8029BB1C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8029BB20: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x8029BB24: bne         $t3, $v0, L_8029BB34
    if (ctx->r11 != ctx->r2) {
        // 0x8029BB28: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_8029BB34;
    }
    // 0x8029BB28: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x8029BB2C: b           L_8029BB38
    // 0x8029BB30: lbu         $a3, 0x1B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1B);
        goto L_8029BB38;
    // 0x8029BB30: lbu         $a3, 0x1B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1B);
L_8029BB34:
    // 0x8029BB34: lbu         $a3, 0x1C($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1C);
L_8029BB38:
    // 0x8029BB38: jal         0x80223FC4
    // 0x8029BB3C: sb          $a3, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r7;
    static_3_80223FC4(rdram, ctx);
        goto after_1;
    // 0x8029BB3C: sb          $a3, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x8029BB40: lbu         $a3, 0x20($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X20);
    // 0x8029BB44: bne         $v0, $zero, L_8029BB6C
    if (ctx->r2 != 0) {
        // 0x8029BB48: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8029BB6C;
    }
    // 0x8029BB48: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8029BB4C: lbu         $a0, 0x89($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X89);
    // 0x8029BB50: sb          $a3, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r7;
    // 0x8029BB54: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x8029BB58: jal         0x80223FC4
    // 0x8029BB5C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_2;
    // 0x8029BB5C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_2:
    // 0x8029BB60: lbu         $a3, 0x20($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X20);
    // 0x8029BB64: beq         $v0, $zero, L_8029BC20
    if (ctx->r2 == 0) {
        // 0x8029BB68: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8029BC20;
    }
    // 0x8029BB68: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_8029BB6C:
    // 0x8029BB6C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8029BB70: beq         $a3, $at, L_8029BB94
    if (ctx->r7 == ctx->r1) {
        // 0x8029BB74: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_8029BB94;
    }
    // 0x8029BB74: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8029BB78: beq         $a3, $at, L_8029BBAC
    if (ctx->r7 == ctx->r1) {
        // 0x8029BB7C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8029BBAC;
    }
    // 0x8029BB7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8029BB80: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8029BB84: beq         $a3, $at, L_8029BC08
    if (ctx->r7 == ctx->r1) {
        // 0x8029BB88: nop
    
            goto L_8029BC08;
    }
    // 0x8029BB88: nop

    // 0x8029BB8C: b           L_8029BC24
    // 0x8029BB90: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
        goto L_8029BC24;
    // 0x8029BB90: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_8029BB94:
    // 0x8029BB94: jal         0x8030AAD0
    // 0x8029BB98: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    static_3_8030AAD0(rdram, ctx);
        goto after_3;
    // 0x8029BB98: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    after_3:
    // 0x8029BB9C: jal         0x802B18BC
    // 0x8029BBA0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_4;
    // 0x8029BBA0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_4:
    // 0x8029BBA4: b           L_8029BC50
    // 0x8029BBA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8029BC50;
    // 0x8029BBA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8029BBAC:
    // 0x8029BBAC: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8029BBB0: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8029BBB4: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8029BBB8: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x8029BBBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8029BBC0: addiu       $t1, $zero, 0x34
    ctx->r9 = ADD32(0, 0X34);
L_8029BBC4:
    // 0x8029BBC4: lbu         $a3, 0x89($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X89);
    // 0x8029BBC8: lw          $v1, 0x38($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X38);
    // 0x8029BBCC: addu        $t7, $t0, $v0
    ctx->r15 = ADD32(ctx->r8, ctx->r2);
    // 0x8029BBD0: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x8029BBD4: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x8029BBD8: bne         $a0, $zero, L_8029BBE8
    if (ctx->r4 != 0) {
        // 0x8029BBDC: nop
    
            goto L_8029BBE8;
    }
    // 0x8029BBDC: nop

    // 0x8029BBE0: b           L_8029BBF4
    // 0x8029BBE4: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
        goto L_8029BBF4;
    // 0x8029BBE4: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
L_8029BBE8:
    // 0x8029BBE8: bne         $t3, $a0, L_8029BBF4
    if (ctx->r11 != ctx->r4) {
        // 0x8029BBEC: addu        $t8, $t2, $v0
        ctx->r24 = ADD32(ctx->r10, ctx->r2);
            goto L_8029BBF4;
    }
    // 0x8029BBEC: addu        $t8, $t2, $v0
    ctx->r24 = ADD32(ctx->r10, ctx->r2);
    // 0x8029BBF0: sw          $v1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r3;
L_8029BBF4:
    // 0x8029BBF4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8029BBF8: bne         $v0, $t1, L_8029BBC4
    if (ctx->r2 != ctx->r9) {
        // 0x8029BBFC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8029BBC4;
    }
    // 0x8029BBFC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8029BC00: jal         0x8030C020
    // 0x8029BC04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8030C020(rdram, ctx);
        goto after_5;
    // 0x8029BC04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
L_8029BC08:
    // 0x8029BC08: jal         0x802B18BC
    // 0x8029BC0C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_6;
    // 0x8029BC0C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_6:
    // 0x8029BC10: jal         0x802CA29C
    // 0x8029BC14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA29C(rdram, ctx);
        goto after_7;
    // 0x8029BC14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8029BC18: b           L_8029BC50
    // 0x8029BC1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8029BC50;
    // 0x8029BC1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8029BC20:
    // 0x8029BC20: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_8029BC24:
    // 0x8029BC24: beq         $a3, $at, L_8029BC3C
    if (ctx->r7 == ctx->r1) {
        // 0x8029BC28: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_8029BC3C;
    }
    // 0x8029BC28: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8029BC2C: beq         $a3, $at, L_8029BC3C
    if (ctx->r7 == ctx->r1) {
        // 0x8029BC30: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_8029BC3C;
    }
    // 0x8029BC30: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8029BC34: bne         $a3, $at, L_8029BC44
    if (ctx->r7 != ctx->r1) {
        // 0x8029BC38: nop
    
            goto L_8029BC44;
    }
    // 0x8029BC38: nop

L_8029BC3C:
    // 0x8029BC3C: b           L_8029BC50
    // 0x8029BC40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8029BC50;
    // 0x8029BC40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8029BC44:
    // 0x8029BC44: jal         0x802CCFD4
    // 0x8029BC48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CCFD4(rdram, ctx);
        goto after_8;
    // 0x8029BC48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8029BC4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8029BC50:
    // 0x8029BC50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029BC54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029BC58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8029BC5C: jr          $ra
    // 0x8029BC60: nop

    return;
    // 0x8029BC60: nop

;}

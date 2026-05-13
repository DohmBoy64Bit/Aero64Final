#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80234190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234190: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80234194: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80234198: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023419C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802341A0: lw          $t7, 0x4C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4C);
    // 0x802341A4: lhu         $v0, 0xC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC);
    // 0x802341A8: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x802341AC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802341B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802341B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802341B8: beq         $v0, $at, L_802341CC
    if (ctx->r2 == ctx->r1) {
        // 0x802341BC: lw          $v1, 0x0($t9)
        ctx->r3 = MEM_W(ctx->r25, 0X0);
            goto L_802341CC;
    }
    // 0x802341BC: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x802341C0: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x802341C4: beql        $v0, $at, L_8023422C
    if (ctx->r2 == ctx->r1) {
        // 0x802341C8: lw          $t6, 0x14($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X14);
            goto L_8023422C;
    }
    goto skip_0;
    // 0x802341C8: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    skip_0:
L_802341CC:
    // 0x802341CC: lh          $t0, 0x6($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X6);
    // 0x802341D0: lh          $t1, 0x4($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X4);
    // 0x802341D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802341D8: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802341DC: bne         $t0, $t1, L_802341F4
    if (ctx->r8 != ctx->r9) {
        // 0x802341E0: nop
    
            goto L_802341F4;
    }
    // 0x802341E0: nop

    // 0x802341E4: lh          $t2, 0x8($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X8);
    // 0x802341E8: lh          $t3, 0x6($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X6);
    // 0x802341EC: beql        $t2, $t3, L_8023422C
    if (ctx->r10 == ctx->r11) {
        // 0x802341F0: lw          $t6, 0x14($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X14);
            goto L_8023422C;
    }
    goto skip_1;
    // 0x802341F0: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    skip_1:
L_802341F4:
    // 0x802341F4: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x802341F8: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x802341FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80234200: subu        $a1, $t4, $a2
    ctx->r5 = SUB32(ctx->r12, ctx->r6);
    // 0x80234204: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80234208: mflo        $a1
    ctx->r5 = lo;
    // 0x8023420C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80234210: jal         0x80231A24
    // 0x80234214: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80234214: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80234218: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8023421C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80234220: sw          $zero, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = 0;
    // 0x80234224: sw          $zero, 0x60($a2)
    MEM_W(0X60, ctx->r6) = 0;
    // 0x80234228: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
L_8023422C:
    // 0x8023422C: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x80234230: sh          $t7, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r15;
    // 0x80234234: sw          $t6, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r14;
    // 0x80234238: lh          $t8, 0x6($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X6);
    // 0x8023423C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80234240: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80234244: sh          $t8, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r24;
    // 0x80234248: lh          $t9, 0x8($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X8);
    // 0x8023424C: sh          $t9, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r25;
    // 0x80234250: lh          $t0, 0x6($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X6);
    // 0x80234254: sh          $t0, 0x1C($a2)
    MEM_H(0X1C, ctx->r6) = ctx->r8;
    // 0x80234258: lh          $t1, 0x8($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X8);
    // 0x8023425C: sh          $t1, 0x1E($a2)
    MEM_H(0X1E, ctx->r6) = ctx->r9;
    // 0x80234260: lw          $t2, 0x14($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X14);
    // 0x80234264: sw          $t2, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r10;
    // 0x80234268: lh          $t3, 0xE($v1)
    ctx->r11 = MEM_H(ctx->r3, 0XE);
    // 0x8023426C: sh          $t3, 0x40($a2)
    MEM_H(0X40, ctx->r6) = ctx->r11;
    // 0x80234270: lh          $t4, 0xE($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XE);
    // 0x80234274: multu       $t4, $a3
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234278: mflo        $t5
    ctx->r13 = lo;
    // 0x8023427C: addiu       $t6, $t5, 0x18
    ctx->r14 = ADD32(ctx->r13, 0X18);
    // 0x80234280: sh          $t6, 0x42($a2)
    MEM_H(0X42, ctx->r6) = ctx->r14;
    // 0x80234284: lh          $t7, 0xC($v1)
    ctx->r15 = MEM_H(ctx->r3, 0XC);
    // 0x80234288: sh          $t7, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r15;
    // 0x8023428C: lh          $t8, 0xC($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XC);
    // 0x80234290: sh          $t8, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r24;
    // 0x80234294: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x80234298: sb          $t9, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r25;
    // 0x8023429C: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x802342A0: beq         $v0, $at, L_802342D0
    if (ctx->r2 == ctx->r1) {
        // 0x802342A4: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_802342D0;
    }
    // 0x802342A4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802342A8: beq         $v0, $at, L_802342D8
    if (ctx->r2 == ctx->r1) {
        // 0x802342AC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_802342D8;
    }
    // 0x802342AC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802342B0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802342B4: beq         $v0, $at, L_802342E0
    if (ctx->r2 == ctx->r1) {
        // 0x802342B8: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_802342E0;
    }
    // 0x802342B8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802342BC: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x802342C0: beq         $v0, $at, L_802342E8
    if (ctx->r2 == ctx->r1) {
        // 0x802342C4: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_802342E8;
    }
    // 0x802342C4: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x802342C8: b           L_802342F0
    // 0x802342CC: lw          $t4, 0x5C($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X5C);
        goto L_802342F0;
    // 0x802342CC: lw          $t4, 0x5C($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X5C);
L_802342D0:
    // 0x802342D0: b           L_802342EC
    // 0x802342D4: sb          $zero, 0x49($a2)
    MEM_B(0X49, ctx->r6) = 0;
        goto L_802342EC;
    // 0x802342D4: sb          $zero, 0x49($a2)
    MEM_B(0X49, ctx->r6) = 0;
L_802342D8:
    // 0x802342D8: b           L_802342EC
    // 0x802342DC: sb          $t0, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r8;
        goto L_802342EC;
    // 0x802342DC: sb          $t0, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r8;
L_802342E0:
    // 0x802342E0: b           L_802342EC
    // 0x802342E4: sb          $t1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r9;
        goto L_802342EC;
    // 0x802342E4: sb          $t1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r9;
L_802342E8:
    // 0x802342E8: sb          $t2, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r10;
L_802342EC:
    // 0x802342EC: lw          $t4, 0x5C($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X5C);
L_802342F0:
    // 0x802342F0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802342F4: sh          $zero, 0x3C($a2)
    MEM_H(0X3C, ctx->r6) = 0;
    // 0x802342F8: bne         $t4, $zero, L_80234334
    if (ctx->r12 != 0) {
        // 0x802342FC: sh          $t3, 0x3E($a2)
        MEM_H(0X3E, ctx->r6) = ctx->r11;
            goto L_80234334;
    }
    // 0x802342FC: sh          $t3, 0x3E($a2)
    MEM_H(0X3E, ctx->r6) = ctx->r11;
    // 0x80234300: lh          $t5, 0xE($v1)
    ctx->r13 = MEM_H(ctx->r3, 0XE);
    // 0x80234304: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80234308: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023430C: multu       $t5, $a3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234310: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80234314: mflo        $a0
    ctx->r4 = lo;
    // 0x80234318: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8023431C: jal         0x8022B948
    // 0x80234320: addiu       $a0, $t6, 0xC0
    ctx->r4 = ADD32(ctx->r14, 0XC0);
    func_8022B948(rdram, ctx);
        goto after_1;
    // 0x80234320: addiu       $a0, $t6, 0xC0
    ctx->r4 = ADD32(ctx->r14, 0XC0);
    after_1:
    // 0x80234324: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80234328: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8023432C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80234330: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
L_80234334:
    // 0x80234334: lw          $t7, 0x60($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X60);
    // 0x80234338: bnel        $t7, $zero, L_80234374
    if (ctx->r15 != 0) {
        // 0x8023433C: lh          $a1, 0x2($v1)
        ctx->r5 = MEM_H(ctx->r3, 0X2);
            goto L_80234374;
    }
    goto skip_2;
    // 0x8023433C: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
    skip_2:
    // 0x80234340: lh          $t8, 0xE($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XE);
    // 0x80234344: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80234348: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023434C: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234350: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80234354: mflo        $a0
    ctx->r4 = lo;
    // 0x80234358: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x8023435C: jal         0x8022B948
    // 0x80234360: addiu       $a0, $t9, 0xC0
    ctx->r4 = ADD32(ctx->r25, 0XC0);
    func_8022B948(rdram, ctx);
        goto after_2;
    // 0x80234360: addiu       $a0, $t9, 0xC0
    ctx->r4 = ADD32(ctx->r25, 0XC0);
    after_2:
    // 0x80234364: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80234368: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8023436C: sw          $v0, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r2;
    // 0x80234370: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
L_80234374:
    // 0x80234374: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80234378: beql        $a1, $zero, L_802343A0
    if (ctx->r5 == 0) {
        // 0x8023437C: lh          $t0, 0x4($v1)
        ctx->r8 = MEM_H(ctx->r3, 0X4);
            goto L_802343A0;
    }
    goto skip_3;
    // 0x8023437C: lh          $t0, 0x4($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X4);
    skip_3:
    // 0x80234380: beq         $a1, $at, L_802343C8
    if (ctx->r5 == ctx->r1) {
        // 0x80234384: addiu       $v0, $a2, 0x18
        ctx->r2 = ADD32(ctx->r6, 0X18);
            goto L_802343C8;
    }
    // 0x80234384: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x80234388: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8023438C: beq         $a1, $at, L_802343D4
    if (ctx->r5 == ctx->r1) {
        // 0x80234390: addiu       $v0, $a2, 0x18
        ctx->r2 = ADD32(ctx->r6, 0X18);
            goto L_802343D4;
    }
    // 0x80234390: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x80234394: b           L_802343E0
    // 0x80234398: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
        goto L_802343E0;
    // 0x80234398: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023439C: lh          $t0, 0x4($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X4);
L_802343A0:
    // 0x802343A0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802343A4: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x802343A8: bne         $t0, $at, L_802343C0
    if (ctx->r8 != ctx->r1) {
        // 0x802343AC: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_802343C0;
    }
    // 0x802343AC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802343B0: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x802343B4: addiu       $t1, $zero, 0x222
    ctx->r9 = ADD32(0, 0X222);
    // 0x802343B8: b           L_802343FC
    // 0x802343BC: sh          $t1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r9;
        goto L_802343FC;
    // 0x802343BC: sh          $t1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r9;
L_802343C0:
    // 0x802343C0: b           L_802343FC
    // 0x802343C4: sh          $t2, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r10;
        goto L_802343FC;
    // 0x802343C4: sh          $t2, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r10;
L_802343C8:
    // 0x802343C8: addiu       $t3, $zero, 0x202
    ctx->r11 = ADD32(0, 0X202);
    // 0x802343CC: b           L_802343FC
    // 0x802343D0: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
        goto L_802343FC;
    // 0x802343D0: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
L_802343D4:
    // 0x802343D4: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x802343D8: b           L_802343FC
    // 0x802343DC: sh          $t4, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r12;
        goto L_802343FC;
    // 0x802343DC: sh          $t4, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r12;
L_802343E0:
    // 0x802343E0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802343E4: jal         0x80231A24
    // 0x802343E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802343E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_3:
    // 0x802343EC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802343F0: addiu       $t5, $zero, 0x222
    ctx->r13 = ADD32(0, 0X222);
    // 0x802343F4: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x802343F8: sh          $t5, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r13;
L_802343FC:
    // 0x802343FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80234400: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80234404: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80234408: addiu       $t6, $zero, 0x1234
    ctx->r14 = ADD32(0, 0X1234);
    // 0x8023440C: sh          $zero, 0x10($v0)
    MEM_H(0X10, ctx->r2) = 0;
    // 0x80234410: sh          $zero, 0x12($v0)
    MEM_H(0X12, ctx->r2) = 0;
    // 0x80234414: sh          $t6, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r14;
    // 0x80234418: sb          $v1, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r3;
    // 0x8023441C: sb          $v1, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r3;
    // 0x80234420: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
    // 0x80234424: sb          $v1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r3;
    // 0x80234428: sh          $zero, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = 0;
    // 0x8023442C: sh          $zero, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = 0;
    // 0x80234430: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80234434: sh          $zero, 0x40($v0)
    MEM_H(0X40, ctx->r2) = 0;
    // 0x80234438: sh          $zero, 0x42($v0)
    MEM_H(0X42, ctx->r2) = 0;
    // 0x8023443C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80234440: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80234444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023444C: jr          $ra
    // 0x80234450: nop

    return;
    // 0x80234450: nop

;}
RECOMP_FUNC void D_80234E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234E40: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80234E44: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80234E48: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80234E4C: jr          $ra
    // 0x80234E50: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
    return;
    // 0x80234E50: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void D_8022A8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A8C8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022A8CC: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8022A8D0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8022A8D4: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x8022A8D8: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x8022A8DC: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8022A8E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022A8E4: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x8022A8E8: mul.s       $f6, $f22, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8022A8EC: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x8022A8F0: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x8022A8F4: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8022A8F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022A8FC: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8022A900: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8022A904: mul.s       $f2, $f24, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x8022A908: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022A90C: add.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8022A910: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022A914: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x8022A918: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8022A91C: mul.s       $f12, $f22, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x8022A920: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8022A924: mul.s       $f6, $f22, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x8022A928: add.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8022A92C: add.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x8022A930: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x8022A934: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8022A938: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8022A93C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8022A940: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x8022A944: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8022A948: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8022A94C: add.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f18.fl;
    // 0x8022A950: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022A954: mul.s       $f4, $f24, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x8022A958: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
    // 0x8022A95C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022A960: mul.s       $f2, $f20, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8022A964: add.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f16.fl;
    // 0x8022A968: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x8022A96C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8022A970: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8022A974: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8022A978: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8022A97C: add.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8022A980: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8022A984: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x8022A988: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8022A98C: mul.s       $f12, $f24, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f24.fl, ctx->f8.fl);
    // 0x8022A990: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8022A994: add.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8022A998: add.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x8022A99C: swc1        $f10, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f10.u32l;
    // 0x8022A9A0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8022A9A4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8022A9A8: add.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f18.fl;
    // 0x8022A9AC: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022A9B0: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x8022A9B4: add.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f16.fl;
    // 0x8022A9B8: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    // 0x8022A9BC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8022A9C0: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8022A9C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8022A9C8: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022A9CC: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8022A9D0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022A9D4: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x8022A9D8: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8022A9DC: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8022A9E0: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8022A9E4: jr          $ra
    // 0x8022A9E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8022A9E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802AC118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC198: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AC19C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AC1A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AC1A4: lbu         $t6, 0x1D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1D);
    // 0x802AC1A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AC1AC: bne         $t6, $zero, L_802AC1C8
    if (ctx->r14 != 0) {
        // 0x802AC1B0: lui         $t7, 0x0
        ctx->r15 = S32(0X0 << 16);
            goto L_802AC1C8;
    }
    // 0x802AC1B0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802AC1B4: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802AC1B8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802AC1BC: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    // 0x802AC1C0: bne         $t7, $at, L_802AC1D0
    if (ctx->r15 != ctx->r1) {
        // 0x802AC1C4: nop
    
            goto L_802AC1D0;
    }
    // 0x802AC1C4: nop

L_802AC1C8:
    // 0x802AC1C8: b           L_802AC1D0
    // 0x802AC1CC: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
        goto L_802AC1D0;
    // 0x802AC1CC: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
L_802AC1D0:
    // 0x802AC1D0: jal         0x8021ACB0
    // 0x802AC1D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AC1D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x802AC1D8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AC1DC: jal         0x8021B838
    // 0x802AC1E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AC1E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AC1E4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802AC1E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AC1EC: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AC1F0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802AC1F4: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x802AC1F8: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AC1FC: lh          $t9, 0xB8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XB8);
    // 0x802AC200: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802AC204: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x802AC208: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AC20C: jalr        $t9
    // 0x802AC210: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AC210: nop

    after_2:
    // 0x802AC214: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802AC218: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AC21C: jal         0x802FD4B0
    // 0x802AC220: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802AC220: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x802AC224: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AC228: jal         0x802FD498
    // 0x802AC22C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802AC22C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802AC230: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AC234: jal         0x802FD4A4
    // 0x802AC238: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802AC238: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    after_5:
    // 0x802AC23C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AC240: jal         0x802FD480
    // 0x802AC244: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802AC244: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    after_6:
    // 0x802AC248: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AC24C: jal         0x802FD48C
    // 0x802AC250: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802AC250: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    after_7:
    // 0x802AC254: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x802AC258: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802AC25C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AC260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AC264: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AC268: jal         0x80317194
    // 0x802AC26C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802AC26C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802AC270: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
    // 0x802AC274: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802AC278: sw          $v0, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r2;
    // 0x802AC27C: sw          $v0, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r2;
    // 0x802AC280: sw          $v0, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r2;
    // 0x802AC284: bne         $t1, $zero, L_802AC29C
    if (ctx->r9 != 0) {
        // 0x802AC288: sw          $v0, 0x2AC($s0)
        MEM_W(0X2AC, ctx->r16) = ctx->r2;
            goto L_802AC29C;
    }
    // 0x802AC288: sw          $v0, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r2;
    // 0x802AC28C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802AC290: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802AC294: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802AC298: bne         $t2, $at, L_802AC2B4
    if (ctx->r10 != ctx->r1) {
        // 0x802AC29C: addiu       $t3, $zero, 0x31
        ctx->r11 = ADD32(0, 0X31);
            goto L_802AC2B4;
    }
L_802AC29C:
    // 0x802AC29C: addiu       $t3, $zero, 0x31
    ctx->r11 = ADD32(0, 0X31);
    // 0x802AC2A0: addiu       $t4, $zero, 0x33
    ctx->r12 = ADD32(0, 0X33);
    // 0x802AC2A4: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x802AC2A8: sw          $t3, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r11;
    // 0x802AC2AC: sw          $t4, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r12;
    // 0x802AC2B0: sw          $t5, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r13;
L_802AC2B4:
    // 0x802AC2B4: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x802AC2B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AC2BC: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AC2C0: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AC2C4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AC2C8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802AC2CC: jal         0x802D51DC
    // 0x802AC2D0: nop

    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802AC2D0: nop

    after_9:
    // 0x802AC2D4: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AC2D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802AC2DC: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AC2E0: jal         0x802C4A20
    // 0x802AC2E4: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802AC2E4: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802AC2E8: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AC2EC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802AC2F0: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AC2F4: jal         0x802C4A20
    // 0x802AC2F8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_11;
    // 0x802AC2F8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_11:
    // 0x802AC2FC: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AC300: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802AC304: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802AC308: jal         0x802C4A20
    // 0x802AC30C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802AC30C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802AC310: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AC314: addiu       $a0, $s0, 0x728
    ctx->r4 = ADD32(ctx->r16, 0X728);
    // 0x802AC318: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AC31C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AC320: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802AC324: jal         0x8022A0D0
    // 0x802AC328: lui         $a2, 0x4158
    ctx->r6 = S32(0X4158 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_13;
    // 0x802AC328: lui         $a2, 0x4158
    ctx->r6 = S32(0X4158 << 16);
    after_13:
    // 0x802AC32C: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AC330: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x802AC334: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802AC338: jal         0x802C4A20
    // 0x802AC33C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_14;
    // 0x802AC33C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_14:
    // 0x802AC340: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x802AC344: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AC348: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x802AC34C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AC350: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802AC354: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AC358: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802AC35C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AC360: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802AC364: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AC368: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AC36C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AC370: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802AC374: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AC378: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802AC37C: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802AC380: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
    // 0x802AC384: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x802AC388: swc1        $f4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f4.u32l;
    // 0x802AC38C: jal         0x8022970C
    // 0x802AC390: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x802AC390: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_15:
    // 0x802AC394: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802AC398: jal         0x8022970C
    // 0x802AC39C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x802AC39C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_16:
    // 0x802AC3A0: lui         $a1, 0xC0A4
    ctx->r5 = S32(0XC0A4 << 16);
    // 0x802AC3A4: lui         $a2, 0xC0A3
    ctx->r6 = S32(0XC0A3 << 16);
    // 0x802AC3A8: lui         $a3, 0xBDB8
    ctx->r7 = S32(0XBDB8 << 16);
    // 0x802AC3AC: ori         $a3, $a3, 0x51EC
    ctx->r7 = ctx->r7 | 0X51EC;
    // 0x802AC3B0: ori         $a2, $a2, 0xB646
    ctx->r6 = ctx->r6 | 0XB646;
    // 0x802AC3B4: ori         $a1, $a1, 0xFDF4
    ctx->r5 = ctx->r5 | 0XFDF4;
    // 0x802AC3B8: jal         0x8022A0D0
    // 0x802AC3BC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802AC3BC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_17:
    // 0x802AC3C0: lui         $a1, 0x40A4
    ctx->r5 = S32(0X40A4 << 16);
    // 0x802AC3C4: lui         $a2, 0xC0A3
    ctx->r6 = S32(0XC0A3 << 16);
    // 0x802AC3C8: lui         $a3, 0xBDB8
    ctx->r7 = S32(0XBDB8 << 16);
    // 0x802AC3CC: ori         $a3, $a3, 0x51EC
    ctx->r7 = ctx->r7 | 0X51EC;
    // 0x802AC3D0: ori         $a2, $a2, 0xB646
    ctx->r6 = ctx->r6 | 0XB646;
    // 0x802AC3D4: ori         $a1, $a1, 0xFDF4
    ctx->r5 = ctx->r5 | 0XFDF4;
    // 0x802AC3D8: jal         0x8022A0D0
    // 0x802AC3DC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_8022A0D0(rdram, ctx);
        goto after_18;
    // 0x802AC3DC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_18:
    // 0x802AC3E0: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802AC3E4: jal         0x803169A0
    // 0x802AC3E8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_19;
    // 0x802AC3E8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x802AC3EC: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802AC3F0: jal         0x803169A0
    // 0x802AC3F4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    static_3_803169A0(rdram, ctx);
        goto after_20;
    // 0x802AC3F4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_20:
    // 0x802AC3F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AC3FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AC400: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802AC404: jr          $ra
    // 0x802AC408: nop

    return;
    // 0x802AC408: nop

;}
RECOMP_FUNC void D_8021C970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021C970: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8021C974: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021C978: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8021C97C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8021C980: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021C984: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021C988: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021C98C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021C990: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021C994: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021C998: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021C99C: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x8021C9A0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8021C9A4: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8021C9A8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8021C9AC: andi        $s1, $a2, 0xFF
    ctx->r17 = ctx->r6 & 0XFF;
    // 0x8021C9B0: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x8021C9B4: beq         $v0, $zero, L_8021C9D4
    if (ctx->r2 == 0) {
        // 0x8021C9B8: lwc1        $f16, 0x20($a1)
        ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
            goto L_8021C9D4;
    }
    // 0x8021C9B8: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8021C9BC: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x8021C9C0: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x8021C9C4: jalr        $v0
    // 0x8021C9C8: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8021C9C8: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8021C9CC: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021C9D0: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
L_8021C9D4:
    // 0x8021C9D4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021C9D8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021C9DC: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x8021C9E0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021C9E4: subu        $t7, $s7, $t6
    ctx->r15 = SUB32(ctx->r23, ctx->r14);
    // 0x8021C9E8: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8021C9EC: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8021C9F0: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x8021C9F4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8021C9F8: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8021C9FC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8021CA00: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021CA04: mflo        $t8
    ctx->r24 = lo;
    // 0x8021CA08: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8021CA0C: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8021CA10: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x8021CA14: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x8021CA18: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x8021CA1C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8021CA20: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x8021CA24: lw          $t7, 0x4($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X4);
    // 0x8021CA28: lw          $t1, 0x0($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X0);
    // 0x8021CA2C: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x8021CA30: lhu         $t0, 0x0($t7)
    ctx->r8 = MEM_HU(ctx->r15, 0X0);
    // 0x8021CA34: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x8021CA38: addu        $s6, $t5, $t6
    ctx->r22 = ADD32(ctx->r13, ctx->r14);
    // 0x8021CA3C: sll         $t9, $t0, 6
    ctx->r25 = S32(ctx->r8 << 6);
    // 0x8021CA40: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x8021CA44: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8021CA48: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x8021CA4C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8021CA50: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021CA54: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x8021CA58: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8021CA5C: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021CA60: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x8021CA64: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8021CA68: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x8021CA6C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021CA70: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    // 0x8021CA74: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x8021CA78: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8021CA7C: jal         0x8022AA40
    // 0x8021CA80: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    static_3_8022AA40(rdram, ctx);
        goto after_1;
    // 0x8021CA80: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x8021CA84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021CA88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021CA8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021CA90: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021CA94: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8021CA98: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021CA9C: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021CAA0: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021CAA4: bc1fl       L_8021CABC
    if (!c1cs) {
        // 0x8021CAA8: swc1        $f14, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
            goto L_8021CABC;
    }
    goto skip_0;
    // 0x8021CAA8: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    skip_0:
    // 0x8021CAAC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8021CAB0: b           L_8021CADC
    // 0x8021CAB4: div.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
        goto L_8021CADC;
    // 0x8021CAB4: div.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8021CAB8: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
L_8021CABC:
    // 0x8021CABC: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x8021CAC0: jal         0x8022AA40
    // 0x8021CAC4: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    static_3_8022AA40(rdram, ctx);
        goto after_2;
    // 0x8021CAC4: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x8021CAC8: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021CACC: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021CAD0: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021CAD4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8021CAD8: div.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
L_8021CADC:
    // 0x8021CADC: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8021CAE0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8021CAE4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8021CAE8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8021CAEC: div.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8021CAF0: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x8021CAF4: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021CAF8: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x8021CAFC: div.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8021CB00: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x8021CB04: swc1        $f0, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f0.u32l;
    // 0x8021CB08: div.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8021CB0C: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    // 0x8021CB10: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x8021CB14: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    // 0x8021CB18: blez        $v1, L_8021CCA0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8021CB1C: nop
    
            goto L_8021CCA0;
    }
    // 0x8021CB1C: nop

L_8021CB20:
    // 0x8021CB20: lw          $t2, 0x10($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X10);
    // 0x8021CB24: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8021CB28: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8021CB2C: sllv        $t4, $t3, $s4
    ctx->r12 = S32(ctx->r11 << (ctx->r20 & 31));
    // 0x8021CB30: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x8021CB34: bne         $t5, $zero, L_8021CB50
    if (ctx->r13 != 0) {
        // 0x8021CB38: addu        $s1, $a0, $s5
        ctx->r17 = ADD32(ctx->r4, ctx->r21);
            goto L_8021CB50;
    }
    // 0x8021CB38: addu        $s1, $a0, $s5
    ctx->r17 = ADD32(ctx->r4, ctx->r21);
    // 0x8021CB3C: lbu         $t6, 0x7($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X7);
    // 0x8021CB40: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8021CB44: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8021CB48: beq         $t7, $zero, L_8021CB58
    if (ctx->r15 == 0) {
        // 0x8021CB4C: nop
    
            goto L_8021CB58;
    }
    // 0x8021CB4C: nop

L_8021CB50:
    // 0x8021CB50: b           L_8021CB58
    // 0x8021CB54: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8021CB58;
    // 0x8021CB54: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8021CB58:
    // 0x8021CB58: bne         $s0, $zero, L_8021CBB4
    if (ctx->r16 != 0) {
        // 0x8021CB5C: nop
    
            goto L_8021CBB4;
    }
    // 0x8021CB5C: nop

    // 0x8021CB60: lbu         $t0, 0x7($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X7);
    // 0x8021CB64: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x8021CB68: slt         $at, $s4, $t1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8021CB6C: andi        $t9, $t0, 0x2
    ctx->r25 = ctx->r8 & 0X2;
    // 0x8021CB70: beq         $t9, $zero, L_8021CBB4
    if (ctx->r25 == 0) {
        // 0x8021CB74: nop
    
            goto L_8021CBB4;
    }
    // 0x8021CB74: nop

    // 0x8021CB78: beq         $at, $zero, L_8021CC8C
    if (ctx->r1 == 0) {
        // 0x8021CB7C: addu        $v0, $a0, $s5
        ctx->r2 = ADD32(ctx->r4, ctx->r21);
            goto L_8021CC8C;
    }
    // 0x8021CB7C: addu        $v0, $a0, $s5
    ctx->r2 = ADD32(ctx->r4, ctx->r21);
    // 0x8021CB80: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x8021CB84: lbu         $t3, 0x2A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2A);
    // 0x8021CB88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021CB8C: subu        $s2, $t8, $t3
    ctx->r18 = SUB32(ctx->r24, ctx->r11);
    // 0x8021CB90: blezl       $s2, L_8021CC90
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8021CB94: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8021CC90;
    }
    goto skip_1;
    // 0x8021CB94: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_1:
L_8021CB98:
    // 0x8021CB98: jal         0x802230E4
    // 0x8021CB9C: nop

    static_3_802230E4(rdram, ctx);
        goto after_3;
    // 0x8021CB9C: nop

    after_3:
    // 0x8021CBA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021CBA4: bne         $s0, $s2, L_8021CB98
    if (ctx->r16 != ctx->r18) {
        // 0x8021CBA8: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8021CB98;
    }
    // 0x8021CBA8: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8021CBAC: b           L_8021CC8C
    // 0x8021CBB0: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
        goto L_8021CC8C;
    // 0x8021CBB0: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8021CBB4:
    // 0x8021CBB4: bne         $s4, $zero, L_8021CBE0
    if (ctx->r20 != 0) {
        // 0x8021CBB8: sll         $v0, $s4, 1
        ctx->r2 = S32(ctx->r20 << 1);
            goto L_8021CBE0;
    }
    // 0x8021CBB8: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x8021CBBC: lw          $t4, 0x4($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X4);
    // 0x8021CBC0: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
    // 0x8021CBC4: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8021CBC8: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x8021CBCC: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x8021CBD0: jal         0x80223108
    // 0x8021CBD4: addu        $a0, $t2, $t7
    ctx->r4 = ADD32(ctx->r10, ctx->r15);
    static_3_80223108(rdram, ctx);
        goto after_4;
    // 0x8021CBD4: addu        $a0, $t2, $t7
    ctx->r4 = ADD32(ctx->r10, ctx->r15);
    after_4:
    // 0x8021CBD8: b           L_8021CC00
    // 0x8021CBDC: nop

        goto L_8021CC00;
    // 0x8021CBDC: nop

L_8021CBE0:
    // 0x8021CBE0: lw          $t9, 0x4($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X4);
    // 0x8021CBE4: lw          $t0, 0x0($fp)
    ctx->r8 = MEM_W(ctx->r30, 0X0);
    // 0x8021CBE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8021CBEC: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x8021CBF0: lhu         $t8, 0x0($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X0);
    // 0x8021CBF4: sll         $t3, $t8, 6
    ctx->r11 = S32(ctx->r24 << 6);
    // 0x8021CBF8: jal         0x80222F30
    // 0x8021CBFC: addu        $a0, $t0, $t3
    ctx->r4 = ADD32(ctx->r8, ctx->r11);
    static_3_80222F30(rdram, ctx);
        goto after_5;
    // 0x8021CBFC: addu        $a0, $t0, $t3
    ctx->r4 = ADD32(ctx->r8, ctx->r11);
    after_5:
L_8021CC00:
    // 0x8021CC00: beq         $s0, $zero, L_8021CC3C
    if (ctx->r16 == 0) {
        // 0x8021CC04: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8021CC3C;
    }
    // 0x8021CC04: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8021CC08: lbu         $t4, 0x4($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X4);
    // 0x8021CC0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021CC10: blezl       $t4, L_8021CC40
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8021CC14: lbu         $v1, 0x4($s6)
        ctx->r3 = MEM_BU(ctx->r22, 0X4);
            goto L_8021CC40;
    }
    goto skip_2;
    // 0x8021CC14: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    skip_2:
    // 0x8021CC18: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
L_8021CC1C:
    // 0x8021CC1C: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x8021CC20: jal         0x80220C44
    // 0x8021CC24: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    static_3_80220C44(rdram, ctx);
        goto after_6;
    // 0x8021CC24: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    after_6:
    // 0x8021CC28: lbu         $t2, 0x4($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X4);
    // 0x8021CC2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021CC30: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8021CC34: bnel        $at, $zero, L_8021CC1C
    if (ctx->r1 != 0) {
        // 0x8021CC38: lw          $t5, 0x0($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X0);
            goto L_8021CC1C;
    }
    goto skip_3;
    // 0x8021CC38: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    skip_3:
L_8021CC3C:
    // 0x8021CC3C: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8021CC40:
    // 0x8021CC40: addiu       $t7, $s4, 0x1
    ctx->r15 = ADD32(ctx->r20, 0X1);
    // 0x8021CC44: bnel        $t7, $v1, L_8021CC58
    if (ctx->r15 != ctx->r3) {
        // 0x8021CC48: lw          $t9, 0x0($s6)
        ctx->r25 = MEM_W(ctx->r22, 0X0);
            goto L_8021CC58;
    }
    goto skip_4;
    // 0x8021CC48: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    skip_4:
    // 0x8021CC4C: b           L_8021CCA0
    // 0x8021CC50: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_8021CCA0;
    // 0x8021CC50: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8021CC54: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
L_8021CC58:
    // 0x8021CC58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021CC5C: addu        $v0, $t9, $s5
    ctx->r2 = ADD32(ctx->r25, ctx->r21);
    // 0x8021CC60: lbu         $t1, 0x6($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X6);
    // 0x8021CC64: lbu         $t8, 0x2A($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2A);
    // 0x8021CC68: subu        $s2, $t1, $t8
    ctx->r18 = SUB32(ctx->r9, ctx->r24);
    // 0x8021CC6C: bltz        $s2, L_8021CC8C
    if (SIGNED(ctx->r18) < 0) {
        // 0x8021CC70: addiu       $s1, $s2, 0x1
        ctx->r17 = ADD32(ctx->r18, 0X1);
            goto L_8021CC8C;
    }
    // 0x8021CC70: addiu       $s1, $s2, 0x1
    ctx->r17 = ADD32(ctx->r18, 0X1);
L_8021CC74:
    // 0x8021CC74: jal         0x802230E4
    // 0x8021CC78: nop

    static_3_802230E4(rdram, ctx);
        goto after_7;
    // 0x8021CC78: nop

    after_7:
    // 0x8021CC7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021CC80: bne         $s1, $s0, L_8021CC74
    if (ctx->r17 != ctx->r16) {
        // 0x8021CC84: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8021CC74;
    }
    // 0x8021CC84: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8021CC88: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8021CC8C:
    // 0x8021CC8C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8021CC90:
    // 0x8021CC90: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021CC94: bne         $at, $zero, L_8021CB20
    if (ctx->r1 != 0) {
        // 0x8021CC98: addiu       $s5, $s5, 0x24
        ctx->r21 = ADD32(ctx->r21, 0X24);
            goto L_8021CB20;
    }
    // 0x8021CC98: addiu       $s5, $s5, 0x24
    ctx->r21 = ADD32(ctx->r21, 0X24);
    // 0x8021CC9C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8021CCA0:
    // 0x8021CCA0: blezl       $s3, L_8021CCC0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8021CCA4: lwc1        $f10, 0x58($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
            goto L_8021CCC0;
    }
    goto skip_5;
    // 0x8021CCA4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    skip_5:
L_8021CCA8:
    // 0x8021CCA8: jal         0x802230E4
    // 0x8021CCAC: nop

    static_3_802230E4(rdram, ctx);
        goto after_8;
    // 0x8021CCAC: nop

    after_8:
    // 0x8021CCB0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8021CCB4: bne         $s4, $s3, L_8021CCA8
    if (ctx->r20 != ctx->r19) {
        // 0x8021CCB8: nop
    
            goto L_8021CCA8;
    }
    // 0x8021CCB8: nop

    // 0x8021CCBC: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
L_8021CCC0:
    // 0x8021CCC0: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8021CCC4: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x8021CCC8: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021CCCC: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x8021CCD0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021CCD4: swc1        $f6, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f6.u32l;
    // 0x8021CCD8: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021CCDC: swc1        $f8, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f8.u32l;
    // 0x8021CCE0: lw          $v0, 0x18($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X18);
    // 0x8021CCE4: beql        $v0, $zero, L_8021CCF8
    if (ctx->r2 == 0) {
        // 0x8021CCE8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8021CCF8;
    }
    goto skip_6;
    // 0x8021CCE8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_6:
    // 0x8021CCEC: jalr        $v0
    // 0x8021CCF0: lw          $a0, 0x20($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X20);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x8021CCF0: lw          $a0, 0x20($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X20);
    after_9:
    // 0x8021CCF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021CCF8:
    // 0x8021CCF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021CCFC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021CD00: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021CD04: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021CD08: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021CD0C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021CD10: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021CD14: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8021CD18: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8021CD1C: jr          $ra
    // 0x8021CD20: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8021CD20: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_802EBEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EBF70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EBF74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EBF78: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802EBF7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EBF80: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802EBF84: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x802EBF88: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802EBF8C: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802EBF90: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EBF94: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802EBF98: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EBF9C: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802EBFA0: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EBFA4: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EBFA8: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EBFAC: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EBFB0: sb          $t0, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r8;
    // 0x802EBFB4: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EBFB8: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EBFBC: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EBFC0: jr          $ra
    // 0x802EBFC4: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802EBFC4: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802A6A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6AC4: bne         $a0, $zero, L_802A6AD8
    if (ctx->r4 != 0) {
        // 0x802A6AC8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A6AD8;
    }
    // 0x802A6AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6ACC: jal         0x802C67EC
    // 0x802A6AD0: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A6AD0: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    after_0:
    // 0x802A6AD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802A6AD8:
    // 0x802A6AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6ADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6AE0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A6AE4: jr          $ra
    // 0x802A6AE8: nop

    return;
    // 0x802A6AE8: nop

;}
RECOMP_FUNC void D_802B7AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7B44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B7B48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B7B4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B7B50: lbu         $t6, 0x968($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7B54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B7B58: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    // 0x802B7B5C: beql        $t6, $zero, L_802B7BCC
    if (ctx->r14 == 0) {
        // 0x802B7B60: sb          $zero, 0x7D2($s0)
        MEM_B(0X7D2, ctx->r16) = 0;
            goto L_802B7BCC;
    }
    goto skip_0;
    // 0x802B7B60: sb          $zero, 0x7D2($s0)
    MEM_B(0X7D2, ctx->r16) = 0;
    skip_0:
    // 0x802B7B64: lbu         $t7, 0x7D2($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X7D2);
    // 0x802B7B68: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x802B7B6C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7B70: bnel        $t7, $zero, L_802B7BCC
    if (ctx->r15 != 0) {
        // 0x802B7B74: sb          $zero, 0x7D2($s0)
        MEM_B(0X7D2, ctx->r16) = 0;
            goto L_802B7BCC;
    }
    goto skip_1;
    // 0x802B7B74: sb          $zero, 0x7D2($s0)
    MEM_B(0X7D2, ctx->r16) = 0;
    skip_1:
    // 0x802B7B78: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802B7B7C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802B7B80: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7B84: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B7B88: addiu       $a0, $v0, 0x8F4
    ctx->r4 = ADD32(ctx->r2, 0X8F4);
    // 0x802B7B8C: jal         0x80302988
    // 0x802B7B90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80302988(rdram, ctx);
        goto after_0;
    // 0x802B7B90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802B7B94: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7B98: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802B7B9C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7BA0: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    // 0x802B7BA4: jal         0x80302988
    // 0x802B7BA8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x802B7BA8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x802B7BAC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B7BB0: sb          $zero, 0x7D0($s0)
    MEM_B(0X7D0, ctx->r16) = 0;
    // 0x802B7BB4: sb          $zero, 0x7D1($s0)
    MEM_B(0X7D1, ctx->r16) = 0;
    // 0x802B7BB8: sb          $t8, 0x7D2($s0)
    MEM_B(0X7D2, ctx->r16) = ctx->r24;
    // 0x802B7BBC: sb          $zero, 0x7D3($s0)
    MEM_B(0X7D3, ctx->r16) = 0;
    // 0x802B7BC0: b           L_802B7BCC
    // 0x802B7BC4: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
        goto L_802B7BCC;
    // 0x802B7BC4: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x802B7BC8: sb          $zero, 0x7D2($s0)
    MEM_B(0X7D2, ctx->r16) = 0;
L_802B7BCC:
    // 0x802B7BCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B7BD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B7BD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B7BD8: jr          $ra
    // 0x802B7BDC: nop

    return;
    // 0x802B7BDC: nop

;}
RECOMP_FUNC void D_802D29F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2A70: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802D2A74: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x802D2A78: beq         $v1, $zero, L_802D2A98
    if (ctx->r3 == 0) {
        // 0x802D2A7C: nop
    
            goto L_802D2A98;
    }
    // 0x802D2A7C: nop

    // 0x802D2A80: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802D2A84: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x802D2A88: xor         $v1, $t6, $t7
    ctx->r3 = ctx->r14 ^ ctx->r15;
    // 0x802D2A8C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802D2A90: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x802D2A94: sltu        $v1, $zero, $t8
    ctx->r3 = 0 < ctx->r24 ? 1 : 0;
L_802D2A98:
    // 0x802D2A98: jr          $ra
    // 0x802D2A9C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x802D2A9C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void D_8028C7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C82C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8028C830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028C834: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8028C838: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8028C83C: jal         0x80317580
    // 0x8028C840: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    static_3_80317580(rdram, ctx);
        goto after_0;
    // 0x8028C840: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_0:
    // 0x8028C844: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028C848: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028C84C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8028C850: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8028C854: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8028C858: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8028C85C: jal         0x80317444
    // 0x8028C860: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    static_3_80317444(rdram, ctx);
        goto after_1;
    // 0x8028C860: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    after_1:
    // 0x8028C864: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8028C868: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8028C86C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8028C870: jal         0x80318510
    // 0x8028C874: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    static_3_80318510(rdram, ctx);
        goto after_2;
    // 0x8028C874: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    after_2:
    // 0x8028C878: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8028C87C: jal         0x80318214
    // 0x8028C880: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    static_3_80318214(rdram, ctx);
        goto after_3;
    // 0x8028C880: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_3:
    // 0x8028C884: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028C888: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028C88C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8028C890: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028C894: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8028C898: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8028C89C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8028C8A0: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8028C8A4: nop

    // 0x8028C8A8: bc1fl       L_8028C8BC
    if (!c1cs) {
        // 0x8028C8AC: swc1        $f2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
            goto L_8028C8BC;
    }
    goto skip_0;
    // 0x8028C8AC: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    skip_0:
    // 0x8028C8B0: b           L_8028C8F8
    // 0x8028C8B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8028C8F8;
    // 0x8028C8B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028C8B8: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
L_8028C8BC:
    // 0x8028C8BC: jal         0x80300424
    // 0x8028C8C0: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    static_3_80300424(rdram, ctx);
        goto after_4;
    // 0x8028C8C0: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x8028C8C4: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8028C8C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028C8CC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028C8D0: mul.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8028C8D4: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8028C8D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8028C8DC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028C8E0: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8028C8E4: nop

    // 0x8028C8E8: bc1f        L_8028C8F8
    if (!c1cs) {
        // 0x8028C8EC: nop
    
            goto L_8028C8F8;
    }
    // 0x8028C8EC: nop

    // 0x8028C8F0: b           L_8028C8F8
    // 0x8028C8F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8028C8F8;
    // 0x8028C8F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8028C8F8:
    // 0x8028C8F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028C8FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8028C900: jr          $ra
    // 0x8028C904: nop

    return;
    // 0x8028C904: nop

;}
RECOMP_FUNC void D_802253D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802253D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802253D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802253DC: sltiu       $at, $a2, 0x9
    ctx->r1 = ctx->r6 < 0X9 ? 1 : 0;
    // 0x802253E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802253E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802253E8: beq         $at, $zero, L_80225468
    if (ctx->r1 == 0) {
        // 0x802253EC: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80225468;
    }
    // 0x802253EC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802253F0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x802253F4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802253F8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802253FC: jal         0x8022B5E0
    // 0x80225400: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_8022B5E0(rdram, ctx);
        goto after_0;
    // 0x80225400: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x80225404: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80225408: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8022540C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80225410: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80225414: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x80225418: beq         $a2, $at, L_80225444
    if (ctx->r6 == ctx->r1) {
        // 0x8022541C: sw          $t7, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r15;
            goto L_80225444;
    }
    // 0x8022541C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80225420: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
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
L_80225444:
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
L_80225468:
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
        goto after_1;
    // 0x80225478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
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
RECOMP_FUNC void D_802CF0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CF144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CF148: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802CF14C: jal         0x8021BAE0
    // 0x802CF150: lw          $a0, 0x2A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2A8);
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802CF150: lw          $a0, 0x2A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2A8);
    after_0:
    // 0x802CF154: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802CF158: jal         0x8028D688
    // 0x802CF15C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D688(rdram, ctx);
        goto after_1;
    // 0x802CF15C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_1:
    // 0x802CF160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CF164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CF168: jr          $ra
    // 0x802CF16C: nop

    return;
    // 0x802CF16C: nop

;}
RECOMP_FUNC void D_80239DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239DF4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80239DF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80239DFC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80239E00: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80239E04: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80239E08: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80239E0C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80239E10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80239E14: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80239E18: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x80239E1C: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x80239E20: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80239E24: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80239E28: jal         0x802456A0
    // 0x80239E2C: sb          $a3, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r7;
    static_3_802456A0(rdram, ctx);
        goto after_0;
    // 0x80239E2C: sb          $a3, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r7;
    after_0:
    // 0x80239E30: beq         $v0, $zero, L_80239E40
    if (ctx->r2 == 0) {
        // 0x80239E34: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80239E40;
    }
    // 0x80239E34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80239E38: b           L_80239EB8
    // 0x80239E3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80239EB8;
    // 0x80239E3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80239E40:
    // 0x80239E40: sll         $s4, $s1, 3
    ctx->r20 = S32(ctx->r17 << 3);
    // 0x80239E44: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x80239E48: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
L_80239E4C:
    // 0x80239E4C: addu        $a2, $s4, $s0
    ctx->r6 = ADD32(ctx->r20, ctx->r16);
    // 0x80239E50: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80239E54: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80239E58: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80239E5C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80239E60: jal         0x80245710
    // 0x80239E64: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_80245710(rdram, ctx);
        goto after_1;
    // 0x80239E64: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
    // 0x80239E68: beq         $v0, $zero, L_80239E8C
    if (ctx->r2 == 0) {
        // 0x80239E6C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80239E8C;
    }
    // 0x80239E6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80239E70: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    // 0x80239E74: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x80239E78: jal         0x802456A0
    // 0x80239E7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_802456A0(rdram, ctx);
        goto after_2;
    // 0x80239E7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x80239E80: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80239E84: b           L_80239EB8
    // 0x80239E88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80239EB8;
    // 0x80239E88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80239E8C:
    // 0x80239E8C: jal         0x80244AC0
    // 0x80239E90: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    static_3_80244AC0(rdram, ctx);
        goto after_3;
    // 0x80239E90: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x80239E94: lhu         $t8, 0x0($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X0);
    // 0x80239E98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239E9C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80239EA0: bne         $s0, $s5, L_80239E4C
    if (ctx->r16 != ctx->r21) {
        // 0x80239EA4: sh          $t9, 0x0($s2)
        MEM_H(0X0, ctx->r18) = ctx->r25;
            goto L_80239E4C;
    }
    // 0x80239EA4: sh          $t9, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r25;
    // 0x80239EA8: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    // 0x80239EAC: jal         0x802456A0
    // 0x80239EB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_802456A0(rdram, ctx);
        goto after_4;
    // 0x80239EB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x80239EB4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80239EB8:
    // 0x80239EB8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80239EBC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80239EC0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80239EC4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80239EC8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80239ECC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80239ED0: jr          $ra
    // 0x80239ED4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80239ED4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_8027C98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CA04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CA08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CA0C: lbu         $t6, 0x3343($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3343);
    // 0x8027CA10: beql        $t6, $zero, L_8027CA24
    if (ctx->r14 == 0) {
        // 0x8027CA14: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027CA24;
    }
    goto skip_0;
    // 0x8027CA14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8027CA18: jal         0x802CD7B8
    // 0x8027CA1C: addiu       $a0, $a0, 0x32BC
    ctx->r4 = ADD32(ctx->r4, 0X32BC);
    static_3_802CD7B8(rdram, ctx);
        goto after_0;
    // 0x8027CA1C: addiu       $a0, $a0, 0x32BC
    ctx->r4 = ADD32(ctx->r4, 0X32BC);
    after_0:
    // 0x8027CA20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027CA24:
    // 0x8027CA24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CA28: jr          $ra
    // 0x8027CA2C: nop

    return;
    // 0x8027CA2C: nop

;}
RECOMP_FUNC void D_8021D990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021D990: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x8021D994: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8021D998: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8021D99C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8021D9A0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8021D9A4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8021D9A8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8021D9AC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8021D9B0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8021D9B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8021D9B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8021D9BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8021D9C0: bne         $a1, $at, L_8021D9D0
    if (ctx->r5 != ctx->r1) {
        // 0x8021D9C4: sdc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
            goto L_8021D9D0;
    }
    // 0x8021D9C4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8021D9C8: b           L_8021DC8C
    // 0x8021D9CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021DC8C;
    // 0x8021D9CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021D9D0:
    // 0x8021D9D0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021D9D4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021D9D8: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x8021D9DC: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x8021D9E0: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8021D9E4: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8021D9E8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8021D9EC: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x8021D9F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021D9F4: lw          $s7, 0x0($t9)
    ctx->r23 = MEM_W(ctx->r25, 0X0);
    // 0x8021D9F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8021D9FC: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8021DA00: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x8021DA04: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x8021DA08: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8021DA0C: bne         $s7, $zero, L_8021DA2C
    if (ctx->r23 != 0) {
        // 0x8021DA10: addu        $fp, $t0, $t1
        ctx->r30 = ADD32(ctx->r8, ctx->r9);
            goto L_8021DA2C;
    }
    // 0x8021DA10: addu        $fp, $t0, $t1
    ctx->r30 = ADD32(ctx->r8, ctx->r9);
    // 0x8021DA14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021DA18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021DA1C: jal         0x80222228
    // 0x8021DA20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80222228(rdram, ctx);
        goto after_0;
    // 0x8021DA20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021DA24: b           L_8021DC8C
    // 0x8021DA28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021DC8C;
    // 0x8021DA28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021DA2C:
    // 0x8021DA2C: lbu         $t2, 0x1C($s7)
    ctx->r10 = MEM_BU(ctx->r23, 0X1C);
    // 0x8021DA30: beql        $t2, $zero, L_8021DA4C
    if (ctx->r10 == 0) {
        // 0x8021DA34: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8021DA4C;
    }
    goto skip_0;
    // 0x8021DA34: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_0:
    // 0x8021DA38: lwc1        $f4, 0x14($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X14);
    // 0x8021DA3C: lwc1        $f6, 0x18($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X18);
    // 0x8021DA40: b           L_8021DA50
    // 0x8021DA44: div.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
        goto L_8021DA50;
    // 0x8021DA44: div.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021DA48: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_8021DA4C:
    // 0x8021DA4C: nop

L_8021DA50:
    // 0x8021DA50: jal         0x80220534
    // 0x8021DA54: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    static_3_80220534(rdram, ctx);
        goto after_1;
    // 0x8021DA54: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x8021DA58: lbu         $t3, 0x2E($s7)
    ctx->r11 = MEM_BU(ctx->r23, 0X2E);
    // 0x8021DA5C: beql        $t3, $zero, L_8021DA78
    if (ctx->r11 == 0) {
        // 0x8021DA60: sw          $zero, 0xBC($sp)
        MEM_W(0XBC, ctx->r29) = 0;
            goto L_8021DA78;
    }
    goto skip_1;
    // 0x8021DA60: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    skip_1:
    // 0x8021DA64: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
    // 0x8021DA68: lbu         $a1, 0x1($s7)
    ctx->r5 = MEM_BU(ctx->r23, 0X1);
    // 0x8021DA6C: jal         0x80222228
    // 0x8021DA70: lbu         $a2, 0x2($s7)
    ctx->r6 = MEM_BU(ctx->r23, 0X2);
    static_3_80222228(rdram, ctx);
        goto after_2;
    // 0x8021DA70: lbu         $a2, 0x2($s7)
    ctx->r6 = MEM_BU(ctx->r23, 0X2);
    after_2:
    // 0x8021DA74: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
L_8021DA78:
    // 0x8021DA78: lbu         $t4, 0x34($s7)
    ctx->r12 = MEM_BU(ctx->r23, 0X34);
    // 0x8021DA7C: lui         $s5, 0xFFDF
    ctx->r21 = S32(0XFFDF << 16);
    // 0x8021DA80: ori         $s5, $s5, 0xFFFF
    ctx->r21 = ctx->r21 | 0XFFFF;
    // 0x8021DA84: beq         $t4, $zero, L_8021DC48
    if (ctx->r12 == 0) {
        // 0x8021DA88: nop
    
            goto L_8021DC48;
    }
    // 0x8021DA88: nop

    // 0x8021DA8C: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x8021DA90: lw          $t5, 0x30($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X30);
L_8021DA94:
    // 0x8021DA94: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8021DA98: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021DA9C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021DAA0: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x8021DAA4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8021DAA8: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8021DAAC: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8021DAB0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8021DAB4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8021DAB8: lw          $s0, 0x0($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X0);
    // 0x8021DABC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8021DAC0: lui         $t2, 0xF800
    ctx->r10 = S32(0XF800 << 16);
    // 0x8021DAC4: bne         $s0, $zero, L_8021DAE4
    if (ctx->r16 != 0) {
        // 0x8021DAC8: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8021DAE4;
    }
    // 0x8021DAC8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8021DACC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021DAD0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021DAD4: jal         0x80231A24
    // 0x8021DAD8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x8021DAD8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x8021DADC: b           L_8021DC8C
    // 0x8021DAE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021DC8C;
    // 0x8021DAE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021DAE4:
    // 0x8021DAE4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8021DAE8: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8021DAEC: lbu         $s1, 0x2($a2)
    ctx->r17 = MEM_BU(ctx->r6, 0X2);
    // 0x8021DAF0: lw          $s2, 0x0($a1)
    ctx->r18 = MEM_W(ctx->r5, 0X0);
    // 0x8021DAF4: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x8021DAF8: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x8021DAFC: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8021DB00: lbu         $t7, 0x5($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X5);
    // 0x8021DB04: lbu         $t4, 0x4($s7)
    ctx->r12 = MEM_BU(ctx->r23, 0X4);
    // 0x8021DB08: lbu         $t1, 0x6($s7)
    ctx->r9 = MEM_BU(ctx->r23, 0X6);
    // 0x8021DB0C: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8021DB10: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x8021DB14: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8021DB18: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x8021DB1C: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x8021DB20: ori         $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 | 0XFF;
    // 0x8021DB24: andi        $t6, $s1, 0x4
    ctx->r14 = ctx->r17 & 0X4;
    // 0x8021DB28: beq         $t6, $zero, L_8021DB40
    if (ctx->r14 == 0) {
        // 0x8021DB2C: sw          $t4, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r12;
            goto L_8021DB40;
    }
    // 0x8021DB2C: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x8021DB30: jal         0x80220534
    // 0x8021DB34: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    static_3_80220534(rdram, ctx);
        goto after_4;
    // 0x8021DB34: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x8021DB38: b           L_8021DB50
    // 0x8021DB3C: andi        $s6, $s1, 0x2
    ctx->r22 = ctx->r17 & 0X2;
        goto L_8021DB50;
    // 0x8021DB3C: andi        $s6, $s1, 0x2
    ctx->r22 = ctx->r17 & 0X2;
L_8021DB40:
    // 0x8021DB40: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021DB44: jal         0x80220534
    // 0x8021DB48: nop

    static_3_80220534(rdram, ctx);
        goto after_5;
    // 0x8021DB48: nop

    after_5:
    // 0x8021DB4C: andi        $s6, $s1, 0x2
    ctx->r22 = ctx->r17 & 0X2;
L_8021DB50:
    // 0x8021DB50: beq         $s6, $zero, L_8021DB60
    if (ctx->r22 == 0) {
        // 0x8021DB54: nop
    
            goto L_8021DB60;
    }
    // 0x8021DB54: nop

    // 0x8021DB58: jal         0x80221B2C
    // 0x8021DB5C: addiu       $a0, $fp, 0x48
    ctx->r4 = ADD32(ctx->r30, 0X48);
    static_3_80221B2C(rdram, ctx);
        goto after_6;
    // 0x8021DB5C: addiu       $a0, $fp, 0x48
    ctx->r4 = ADD32(ctx->r30, 0X48);
    after_6:
L_8021DB60:
    // 0x8021DB60: jal         0x8022970C
    // 0x8021DB64: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_8022970C(rdram, ctx);
        goto after_7;
    // 0x8021DB64: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_7:
    // 0x8021DB68: andi        $t7, $s1, 0x8
    ctx->r15 = ctx->r17 & 0X8;
    // 0x8021DB6C: beq         $t7, $zero, L_8021DB84
    if (ctx->r15 == 0) {
        // 0x8021DB70: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8021DB84;
    }
    // 0x8021DB70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021DB74: lwc1        $f8, 0xB8($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0XB8);
    // 0x8021DB78: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x8021DB7C: lwc1        $f10, 0xBC($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0XBC);
    // 0x8021DB80: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
L_8021DB84:
    // 0x8021DB84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021DB88: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8021DB8C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x8021DB90: div.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8021DB94: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x8021DB98: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8021DB9C: jal         0x80223108
    // 0x8021DBA0: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    static_3_80223108(rdram, ctx);
        goto after_8;
    // 0x8021DBA0: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x8021DBA4: lbu         $t5, 0x4($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X4);
    // 0x8021DBA8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021DBAC: andi        $s4, $s1, 0x1
    ctx->r20 = ctx->r17 & 0X1;
    // 0x8021DBB0: beq         $t5, $zero, L_8021DC08
    if (ctx->r13 == 0) {
        // 0x8021DBB4: nop
    
            goto L_8021DC08;
    }
    // 0x8021DBB4: nop

    // 0x8021DBB8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_8021DBBC:
    // 0x8021DBBC: sll         $t0, $s3, 4
    ctx->r8 = S32(ctx->r19 << 4);
    // 0x8021DBC0: addu        $v1, $v0, $s0
    ctx->r3 = ADD32(ctx->r2, ctx->r16);
    // 0x8021DBC4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8021DBC8: bne         $s4, $zero, L_8021DBDC
    if (ctx->r20 != 0) {
        // 0x8021DBCC: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_8021DBDC;
    }
    // 0x8021DBCC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8021DBD0: and         $t8, $a0, $s5
    ctx->r24 = ctx->r4 & ctx->r21;
    // 0x8021DBD4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021DBD8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_8021DBDC:
    // 0x8021DBDC: jal         0x80220C44
    // 0x8021DBE0: addu        $a0, $v0, $t0
    ctx->r4 = ADD32(ctx->r2, ctx->r8);
    static_3_80220C44(rdram, ctx);
        goto after_9;
    // 0x8021DBE0: addu        $a0, $v0, $t0
    ctx->r4 = ADD32(ctx->r2, ctx->r8);
    after_9:
    // 0x8021DBE4: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8021DBE8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8021DBEC: addu        $t9, $t1, $s0
    ctx->r25 = ADD32(ctx->r9, ctx->r16);
    // 0x8021DBF0: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x8021DBF4: lbu         $t2, 0x4($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X4);
    // 0x8021DBF8: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8021DBFC: sltu        $at, $s3, $t2
    ctx->r1 = ctx->r19 < ctx->r10 ? 1 : 0;
    // 0x8021DC00: bnel        $at, $zero, L_8021DBBC
    if (ctx->r1 != 0) {
        // 0x8021DC04: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8021DBBC;
    }
    goto skip_2;
    // 0x8021DC04: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_2:
L_8021DC08:
    // 0x8021DC08: beq         $s6, $zero, L_8021DC18
    if (ctx->r22 == 0) {
        // 0x8021DC0C: nop
    
            goto L_8021DC18;
    }
    // 0x8021DC0C: nop

    // 0x8021DC10: jal         0x80221B2C
    // 0x8021DC14: addiu       $a0, $fp, 0x8
    ctx->r4 = ADD32(ctx->r30, 0X8);
    static_3_80221B2C(rdram, ctx);
        goto after_10;
    // 0x8021DC14: addiu       $a0, $fp, 0x8
    ctx->r4 = ADD32(ctx->r30, 0X8);
    after_10:
L_8021DC18:
    // 0x8021DC18: jal         0x802230E4
    // 0x8021DC1C: nop

    static_3_802230E4(rdram, ctx);
        goto after_11;
    // 0x8021DC1C: nop

    after_11:
    // 0x8021DC20: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x8021DC24: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8021DC28: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8021DC2C: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x8021DC30: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x8021DC34: sw          $t4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r12;
    // 0x8021DC38: lbu         $t5, 0x34($s7)
    ctx->r13 = MEM_BU(ctx->r23, 0X34);
    // 0x8021DC3C: sltu        $at, $t4, $t5
    ctx->r1 = ctx->r12 < ctx->r13 ? 1 : 0;
    // 0x8021DC40: bnel        $at, $zero, L_8021DA94
    if (ctx->r1 != 0) {
        // 0x8021DC44: lw          $t5, 0x30($s7)
        ctx->r13 = MEM_W(ctx->r23, 0X30);
            goto L_8021DA94;
    }
    goto skip_3;
    // 0x8021DC44: lw          $t5, 0x30($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X30);
    skip_3:
L_8021DC48:
    // 0x8021DC48: jal         0x80220534
    // 0x8021DC4C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    static_3_80220534(rdram, ctx);
        goto after_12;
    // 0x8021DC4C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_12:
    // 0x8021DC50: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
    // 0x8021DC54: beql        $v0, $zero, L_8021DC68
    if (ctx->r2 == 0) {
        // 0x8021DC58: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8021DC68;
    }
    goto skip_4;
    // 0x8021DC58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_4:
    // 0x8021DC5C: jalr        $v0
    // 0x8021DC60: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x8021DC60: nop

    after_13:
    // 0x8021DC64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8021DC68:
    // 0x8021DC68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021DC6C: lwc1        $f6, 0x3C($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X3C);
    // 0x8021DC70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021DC74: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8021DC78: nop

    // 0x8021DC7C: bc1t        L_8021DC8C
    if (c1cs) {
        // 0x8021DC80: nop
    
            goto L_8021DC8C;
    }
    // 0x8021DC80: nop

    // 0x8021DC84: b           L_8021DC8C
    // 0x8021DC88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021DC8C;
    // 0x8021DC88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021DC8C:
    // 0x8021DC8C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8021DC90: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8021DC94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8021DC98: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8021DC9C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8021DCA0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8021DCA4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8021DCA8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8021DCAC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8021DCB0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8021DCB4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8021DCB8: jr          $ra
    // 0x8021DCBC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x8021DCBC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void D_80237820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237820: jr          $ra
    // 0x80237824: nop

    return;
    // 0x80237824: nop

;}
RECOMP_FUNC void D_8029F7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F830: jr          $ra
    // 0x8029F834: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8029F834: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_80237DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237DC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237DC4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80237DC8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80237DCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237DD0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80237DD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80237DD8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80237DDC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80237DE0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80237DE4: bne         $t6, $zero, L_80237DF4
    if (ctx->r14 != 0) {
        // 0x80237DE8: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80237DF4;
    }
    // 0x80237DE8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80237DEC: b           L_80237EB8
    // 0x80237DF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80237EB8;
    // 0x80237DF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80237DF4:
    // 0x80237DF4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80237DF8: bne         $t7, $zero, L_80237E10
    if (ctx->r15 != 0) {
        // 0x80237DFC: nop
    
            goto L_80237E10;
    }
    // 0x80237DFC: nop

    // 0x80237E00: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80237E04: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x80237E08: b           L_80237E1C
    // 0x80237E0C: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
        goto L_80237E1C;
    // 0x80237E0C: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
L_80237E10:
    // 0x80237E10: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80237E14: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x80237E18: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
L_80237E1C:
    // 0x80237E1C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80237E20: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80237E24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80237E28: sb          $t2, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r10;
    // 0x80237E2C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80237E30: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80237E34: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80237E38: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80237E3C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80237E40: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x80237E44: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80237E48: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80237E4C: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
    // 0x80237E50: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80237E54: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80237E58: sw          $t0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r8;
    // 0x80237E5C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80237E60: sw          $zero, 0x14($t2)
    MEM_W(0X14, ctx->r10) = 0;
    // 0x80237E64: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80237E68: bne         $t3, $at, L_80237E94
    if (ctx->r11 != ctx->r1) {
        // 0x80237E6C: nop
    
            goto L_80237E94;
    }
    // 0x80237E6C: nop

    // 0x80237E70: jal         0x80244A90
    // 0x80237E74: nop

    static_3_80244A90(rdram, ctx);
        goto after_0;
    // 0x80237E74: nop

    after_0:
    // 0x80237E78: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80237E7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237E80: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80237E84: jal         0x80244940
    // 0x80237E88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80244940(rdram, ctx);
        goto after_1;
    // 0x80237E88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80237E8C: b           L_80237EB4
    // 0x80237E90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80237EB4;
    // 0x80237E90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80237E94:
    // 0x80237E94: jal         0x80244A90
    // 0x80237E98: nop

    static_3_80244A90(rdram, ctx);
        goto after_2;
    // 0x80237E98: nop

    after_2:
    // 0x80237E9C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80237EA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237EA4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80237EA8: jal         0x80236B80
    // 0x80237EAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_3;
    // 0x80237EAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80237EB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80237EB4:
    // 0x80237EB4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80237EB8:
    // 0x80237EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237EBC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80237EC0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80237EC4: jr          $ra
    // 0x80237EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80237EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8028F288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028F308: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028F30C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8028F310: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028F314: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8028F318: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028F31C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8028F320: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028F324: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8028F328: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x8028F32C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028F330: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8028F334: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8028F338: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8028F33C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028F340: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028F344: jal         0x8021BA90
    // 0x8028F348: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x8028F348: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    after_0:
    // 0x8028F34C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F350: bne         $v0, $at, L_8028F378
    if (ctx->r2 != ctx->r1) {
        // 0x8028F354: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_8028F378;
    }
    // 0x8028F354: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8028F358: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028F35C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8028F360: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8028F364: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8028F368: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8028F36C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028F370: jal         0x80231A24
    // 0x8028F374: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8028F374: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    after_1:
L_8028F378:
    // 0x8028F378: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028F37C: jal         0x8021ACB0
    // 0x8028F380: addiu       $a1, $zero, 0xFD
    ctx->r5 = ADD32(0, 0XFD);
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x8028F380: addiu       $a1, $zero, 0xFD
    ctx->r5 = ADD32(0, 0XFD);
    after_2:
    // 0x8028F384: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028F388: jal         0x8021B838
    // 0x8028F38C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_3;
    // 0x8028F38C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8028F390: jal         0x8021BA90
    // 0x8028F394: nop

    func_8021BA90(rdram, ctx);
        goto after_4;
    // 0x8028F394: nop

    after_4:
    // 0x8028F398: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F39C: bne         $v0, $at, L_8028F3C4
    if (ctx->r2 != ctx->r1) {
        // 0x8028F3A0: sw          $v0, 0xE0C($s0)
        MEM_W(0XE0C, ctx->r16) = ctx->r2;
            goto L_8028F3C4;
    }
    // 0x8028F3A0: sw          $v0, 0xE0C($s0)
    MEM_W(0XE0C, ctx->r16) = ctx->r2;
    // 0x8028F3A4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028F3A8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8028F3AC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8028F3B0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8028F3B4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8028F3B8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028F3BC: jal         0x80231A24
    // 0x8028F3C0: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x8028F3C0: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_5:
L_8028F3C4:
    // 0x8028F3C4: lw          $a0, 0xE0C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0C);
    // 0x8028F3C8: jal         0x8021ACB0
    // 0x8028F3CC: addiu       $a1, $zero, 0x108
    ctx->r5 = ADD32(0, 0X108);
    static_3_8021ACB0(rdram, ctx);
        goto after_6;
    // 0x8028F3CC: addiu       $a1, $zero, 0x108
    ctx->r5 = ADD32(0, 0X108);
    after_6:
    // 0x8028F3D0: lw          $a0, 0xE0C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0C);
    // 0x8028F3D4: jal         0x8021B838
    // 0x8028F3D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_7;
    // 0x8028F3D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x8028F3DC: jal         0x8021BA90
    // 0x8028F3E0: nop

    func_8021BA90(rdram, ctx);
        goto after_8;
    // 0x8028F3E0: nop

    after_8:
    // 0x8028F3E4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F3E8: bne         $v0, $at, L_8028F410
    if (ctx->r2 != ctx->r1) {
        // 0x8028F3EC: sw          $v0, 0xE10($s0)
        MEM_W(0XE10, ctx->r16) = ctx->r2;
            goto L_8028F410;
    }
    // 0x8028F3EC: sw          $v0, 0xE10($s0)
    MEM_W(0XE10, ctx->r16) = ctx->r2;
    // 0x8028F3F0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028F3F4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8028F3F8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8028F3FC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8028F400: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8028F404: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028F408: jal         0x80231A24
    // 0x8028F40C: addiu       $a3, $zero, 0x7A
    ctx->r7 = ADD32(0, 0X7A);
    static_3_80231A24(rdram, ctx);
        goto after_9;
    // 0x8028F40C: addiu       $a3, $zero, 0x7A
    ctx->r7 = ADD32(0, 0X7A);
    after_9:
L_8028F410:
    // 0x8028F410: lw          $a0, 0xE10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE10);
    // 0x8028F414: jal         0x8021ACB0
    // 0x8028F418: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    static_3_8021ACB0(rdram, ctx);
        goto after_10;
    // 0x8028F418: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_10:
    // 0x8028F41C: lw          $a0, 0xE10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE10);
    // 0x8028F420: jal         0x8021B838
    // 0x8028F424: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_11;
    // 0x8028F424: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x8028F428: jal         0x8021BA90
    // 0x8028F42C: nop

    func_8021BA90(rdram, ctx);
        goto after_12;
    // 0x8028F42C: nop

    after_12:
    // 0x8028F430: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F434: bne         $v0, $at, L_8028F45C
    if (ctx->r2 != ctx->r1) {
        // 0x8028F438: sw          $v0, 0xE14($s0)
        MEM_W(0XE14, ctx->r16) = ctx->r2;
            goto L_8028F45C;
    }
    // 0x8028F438: sw          $v0, 0xE14($s0)
    MEM_W(0XE14, ctx->r16) = ctx->r2;
    // 0x8028F43C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028F440: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8028F444: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8028F448: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8028F44C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8028F450: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028F454: jal         0x80231A24
    // 0x8028F458: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    static_3_80231A24(rdram, ctx);
        goto after_13;
    // 0x8028F458: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_13:
L_8028F45C:
    // 0x8028F45C: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028F460: jal         0x8021ACB0
    // 0x8028F464: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    static_3_8021ACB0(rdram, ctx);
        goto after_14;
    // 0x8028F464: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    after_14:
    // 0x8028F468: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028F46C: jal         0x8021BA1C
    // 0x8028F470: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021BA1C(rdram, ctx);
        goto after_15;
    // 0x8028F470: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_15:
    // 0x8028F474: jal         0x8021BA90
    // 0x8028F478: nop

    func_8021BA90(rdram, ctx);
        goto after_16;
    // 0x8028F478: nop

    after_16:
    // 0x8028F47C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F480: bne         $v0, $at, L_8028F4A8
    if (ctx->r2 != ctx->r1) {
        // 0x8028F484: sw          $v0, 0xE18($s0)
        MEM_W(0XE18, ctx->r16) = ctx->r2;
            goto L_8028F4A8;
    }
    // 0x8028F484: sw          $v0, 0xE18($s0)
    MEM_W(0XE18, ctx->r16) = ctx->r2;
    // 0x8028F488: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028F48C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8028F490: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8028F494: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8028F498: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8028F49C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028F4A0: jal         0x80231A24
    // 0x8028F4A4: addiu       $a3, $zero, 0x88
    ctx->r7 = ADD32(0, 0X88);
    static_3_80231A24(rdram, ctx);
        goto after_17;
    // 0x8028F4A4: addiu       $a3, $zero, 0x88
    ctx->r7 = ADD32(0, 0X88);
    after_17:
L_8028F4A8:
    // 0x8028F4A8: lw          $a0, 0xE18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE18);
    // 0x8028F4AC: jal         0x8021ACB0
    // 0x8028F4B0: addiu       $a1, $zero, 0x105
    ctx->r5 = ADD32(0, 0X105);
    static_3_8021ACB0(rdram, ctx);
        goto after_18;
    // 0x8028F4B0: addiu       $a1, $zero, 0x105
    ctx->r5 = ADD32(0, 0X105);
    after_18:
    // 0x8028F4B4: lw          $a0, 0xE18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE18);
    // 0x8028F4B8: jal         0x8021BA1C
    // 0x8028F4BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021BA1C(rdram, ctx);
        goto after_19;
    // 0x8028F4BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_19:
    // 0x8028F4C0: jal         0x8021BA90
    // 0x8028F4C4: nop

    func_8021BA90(rdram, ctx);
        goto after_20;
    // 0x8028F4C4: nop

    after_20:
    // 0x8028F4C8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F4CC: bne         $v0, $at, L_8028F4F4
    if (ctx->r2 != ctx->r1) {
        // 0x8028F4D0: sw          $v0, 0xE1C($s0)
        MEM_W(0XE1C, ctx->r16) = ctx->r2;
            goto L_8028F4F4;
    }
    // 0x8028F4D0: sw          $v0, 0xE1C($s0)
    MEM_W(0XE1C, ctx->r16) = ctx->r2;
    // 0x8028F4D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028F4D8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8028F4DC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8028F4E0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8028F4E4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8028F4E8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028F4EC: jal         0x80231A24
    // 0x8028F4F0: addiu       $a3, $zero, 0x8F
    ctx->r7 = ADD32(0, 0X8F);
    static_3_80231A24(rdram, ctx);
        goto after_21;
    // 0x8028F4F0: addiu       $a3, $zero, 0x8F
    ctx->r7 = ADD32(0, 0X8F);
    after_21:
L_8028F4F4:
    // 0x8028F4F4: lw          $a0, 0xE1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE1C);
    // 0x8028F4F8: jal         0x8021ACB0
    // 0x8028F4FC: addiu       $a1, $zero, 0x106
    ctx->r5 = ADD32(0, 0X106);
    static_3_8021ACB0(rdram, ctx);
        goto after_22;
    // 0x8028F4FC: addiu       $a1, $zero, 0x106
    ctx->r5 = ADD32(0, 0X106);
    after_22:
    // 0x8028F500: lw          $a0, 0xE1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE1C);
    // 0x8028F504: jal         0x8021BA1C
    // 0x8028F508: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021BA1C(rdram, ctx);
        goto after_23;
    // 0x8028F508: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_23:
    // 0x8028F50C: jal         0x8021BA90
    // 0x8028F510: nop

    func_8021BA90(rdram, ctx);
        goto after_24;
    // 0x8028F510: nop

    after_24:
    // 0x8028F514: jal         0x8021BA90
    // 0x8028F518: sw          $v0, 0xF20($s0)
    MEM_W(0XF20, ctx->r16) = ctx->r2;
    func_8021BA90(rdram, ctx);
        goto after_25;
    // 0x8028F518: sw          $v0, 0xF20($s0)
    MEM_W(0XF20, ctx->r16) = ctx->r2;
    after_25:
    // 0x8028F51C: sw          $v0, 0xF24($s0)
    MEM_W(0XF24, ctx->r16) = ctx->r2;
    // 0x8028F520: lw          $a0, 0xF20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF20);
    // 0x8028F524: jal         0x8021ACB0
    // 0x8028F528: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    static_3_8021ACB0(rdram, ctx);
        goto after_26;
    // 0x8028F528: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_26:
    // 0x8028F52C: lw          $a0, 0xF24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF24);
    // 0x8028F530: jal         0x8021ACB0
    // 0x8028F534: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    static_3_8021ACB0(rdram, ctx);
        goto after_27;
    // 0x8028F534: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_27:
    // 0x8028F538: lw          $a0, 0xF20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF20);
    // 0x8028F53C: jal         0x8021B838
    // 0x8028F540: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_28;
    // 0x8028F540: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_28:
    // 0x8028F544: lw          $a0, 0xF24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF24);
    // 0x8028F548: jal         0x8021B838
    // 0x8028F54C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_29;
    // 0x8028F54C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_29:
    // 0x8028F550: jal         0x8022970C
    // 0x8028F554: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    func_8022970C(rdram, ctx);
        goto after_30;
    // 0x8028F554: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    after_30:
    // 0x8028F558: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x8028F55C: ori         $a2, $a2, 0x9800
    ctx->r6 = ctx->r6 | 0X9800;
    // 0x8028F560: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    // 0x8028F564: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8028F568: jal         0x8022A0D0
    // 0x8028F56C: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_31;
    // 0x8028F56C: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    after_31:
    // 0x8028F570: lw          $a0, 0xF20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF20);
    // 0x8028F574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028F578: jal         0x8021B4B0
    // 0x8028F57C: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    static_3_8021B4B0(rdram, ctx);
        goto after_32;
    // 0x8028F57C: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    after_32:
    // 0x8028F580: lw          $a0, 0xF24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF24);
    // 0x8028F584: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028F588: jal         0x8021B4B0
    // 0x8028F58C: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    static_3_8021B4B0(rdram, ctx);
        goto after_33;
    // 0x8028F58C: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    after_33:
    // 0x8028F590: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028F594: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028F598: sb          $t6, 0xF28($s0)
    MEM_B(0XF28, ctx->r16) = ctx->r14;
    // 0x8028F59C: sb          $zero, 0xF29($s0)
    MEM_B(0XF29, ctx->r16) = 0;
    // 0x8028F5A0: lw          $a0, 0xF20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF20);
    // 0x8028F5A4: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    // 0x8028F5A8: lw          $a2, 0x298($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X298);
    // 0x8028F5AC: jal         0x80200B20
    // 0x8028F5B0: swc1        $f4, 0xF2C($s0)
    MEM_W(0XF2C, ctx->r16) = ctx->f4.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_34;
    // 0x8028F5B0: swc1        $f4, 0xF2C($s0)
    MEM_W(0XF2C, ctx->r16) = ctx->f4.u32l;
    after_34:
    // 0x8028F5B4: lw          $a0, 0xF24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF24);
    // 0x8028F5B8: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    // 0x8028F5BC: jal         0x80200B20
    // 0x8028F5C0: lw          $a2, 0x298($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X298);
    static_3_80200B20(rdram, ctx);
        goto after_35;
    // 0x8028F5C0: lw          $a2, 0x298($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X298);
    after_35:
    // 0x8028F5C4: lw          $v1, 0x27C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X27C);
    // 0x8028F5C8: addiu       $v0, $s0, 0x1A4
    ctx->r2 = ADD32(ctx->r16, 0X1A4);
    // 0x8028F5CC: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8028F5D0: lh          $t7, 0x20($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X20);
    // 0x8028F5D4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8028F5D8: lw          $t9, 0x24($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X24);
    // 0x8028F5DC: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x8028F5E0: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x8028F5E4: jalr        $t9
    // 0x8028F5E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x8028F5E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_36:
    // 0x8028F5EC: lw          $v1, 0x27C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X27C);
    // 0x8028F5F0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8028F5F4: lh          $t8, 0xA0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XA0);
    // 0x8028F5F8: lw          $t9, 0xA4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XA4);
    // 0x8028F5FC: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x8028F600: jalr        $t9
    // 0x8028F604: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x8028F604: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_37:
    // 0x8028F608: lw          $v1, 0x27C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X27C);
    // 0x8028F60C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8028F610: lh          $t0, 0x98($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X98);
    // 0x8028F614: lw          $t9, 0x9C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X9C);
    // 0x8028F618: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x8028F61C: jalr        $t9
    // 0x8028F620: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x8028F620: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_38:
    // 0x8028F624: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F628: jal         0x802D27F4
    // 0x8028F62C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D27F4(rdram, ctx);
        goto after_39;
    // 0x8028F62C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_39:
    // 0x8028F630: lw          $v1, 0x27C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X27C);
    // 0x8028F634: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x8028F638: lh          $t1, 0x78($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X78);
    // 0x8028F63C: lw          $t9, 0x7C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X7C);
    // 0x8028F640: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    // 0x8028F644: jalr        $t9
    // 0x8028F648: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x8028F648: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_40:
    // 0x8028F64C: jal         0x8022970C
    // 0x8028F650: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    func_8022970C(rdram, ctx);
        goto after_41;
    // 0x8028F650: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    after_41:
    // 0x8028F654: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x8028F658: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x8028F65C: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x8028F660: jal         0x8022A0D0
    // 0x8028F664: lui         $a3, 0xC25C
    ctx->r7 = S32(0XC25C << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_42;
    // 0x8028F664: lui         $a3, 0xC25C
    ctx->r7 = S32(0XC25C << 16);
    after_42:
    // 0x8028F668: lw          $v1, 0x27C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X27C);
    // 0x8028F66C: lh          $t2, 0x40($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X40);
    // 0x8028F670: lw          $t9, 0x44($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X44);
    // 0x8028F674: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x8028F678: jalr        $t9
    // 0x8028F67C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x8028F67C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_43:
    // 0x8028F680: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8028F684: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x8028F688: jal         0x802D01D4
    // 0x8028F68C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_44;
    // 0x8028F68C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_44:
    // 0x8028F690: lw          $v1, 0x27C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X27C);
    // 0x8028F694: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x8028F698: lh          $t3, 0xA8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0XA8);
    // 0x8028F69C: lw          $t9, 0xAC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XAC);
    // 0x8028F6A0: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x8028F6A4: jalr        $t9
    // 0x8028F6A8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x8028F6A8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_45:
    // 0x8028F6AC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F6B0: jal         0x802D692C
    // 0x8028F6B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802D692C(rdram, ctx);
        goto after_46;
    // 0x8028F6B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_46:
    // 0x8028F6B8: lw          $v1, 0x1A0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028F6BC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8028F6C0: sb          $zero, 0x28E($s0)
    MEM_B(0X28E, ctx->r16) = 0;
    // 0x8028F6C4: sb          $t4, 0x28C($s0)
    MEM_B(0X28C, ctx->r16) = ctx->r12;
    // 0x8028F6C8: sb          $zero, 0x28D($s0)
    MEM_B(0X28D, ctx->r16) = 0;
    // 0x8028F6CC: sb          $zero, 0x28F($s0)
    MEM_B(0X28F, ctx->r16) = 0;
    // 0x8028F6D0: sb          $zero, 0x290($s0)
    MEM_B(0X290, ctx->r16) = 0;
    // 0x8028F6D4: sb          $zero, 0x292($s0)
    MEM_B(0X292, ctx->r16) = 0;
    // 0x8028F6D8: sb          $zero, 0x293($s0)
    MEM_B(0X293, ctx->r16) = 0;
    // 0x8028F6DC: lw          $t9, 0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XB4);
    // 0x8028F6E0: lh          $t5, 0xB0($v1)
    ctx->r13 = MEM_H(ctx->r3, 0XB0);
    // 0x8028F6E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028F6E8: jalr        $t9
    // 0x8028F6EC: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x8028F6EC: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    after_47:
    // 0x8028F6F0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028F6F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028F6F8: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8028F6FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028F700: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028F704: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
    // 0x8028F708: swc1        $f8, 0xE20($s0)
    MEM_W(0XE20, ctx->r16) = ctx->f8.u32l;
    // 0x8028F70C: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028F710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028F714: jal         0x80309758
    // 0x8028F718: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_48;
    // 0x8028F718: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_48:
    // 0x8028F71C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8028F720: jal         0x80318E80
    // 0x8028F724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_49;
    // 0x8028F724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_49:
    // 0x8028F728: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8028F72C: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x8028F730: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028F734: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028F738: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8028F73C: jal         0x80309758
    // 0x8028F740: swc1        $f10, 0x2EC($s0)
    MEM_W(0X2EC, ctx->r16) = ctx->f10.u32l;
    static_3_80309758(rdram, ctx);
        goto after_50;
    // 0x8028F740: swc1        $f10, 0x2EC($s0)
    MEM_W(0X2EC, ctx->r16) = ctx->f10.u32l;
    after_50:
    // 0x8028F744: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x8028F748: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028F74C: swc1        $f0, 0x2C0($s0)
    MEM_W(0X2C0, ctx->r16) = ctx->f0.u32l;
    // 0x8028F750: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028F754: jal         0x80309758
    // 0x8028F758: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_51;
    // 0x8028F758: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_51:
    // 0x8028F75C: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x8028F760: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028F764: swc1        $f0, 0x2C4($s0)
    MEM_W(0X2C4, ctx->r16) = ctx->f0.u32l;
    // 0x8028F768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028F76C: jal         0x80309758
    // 0x8028F770: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_52;
    // 0x8028F770: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_52:
    // 0x8028F774: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x8028F778: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028F77C: swc1        $f0, 0x2C8($s0)
    MEM_W(0X2C8, ctx->r16) = ctx->f0.u32l;
    // 0x8028F780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028F784: jal         0x80309758
    // 0x8028F788: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_53;
    // 0x8028F788: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_53:
    // 0x8028F78C: swc1        $f0, 0x2CC($s0)
    MEM_W(0X2CC, ctx->r16) = ctx->f0.u32l;
    // 0x8028F790: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028F794: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028F798: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8028F79C: jal         0x8021B240
    // 0x8028F7A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_54;
    // 0x8028F7A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_54:
    // 0x8028F7A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028F7A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028F7AC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8028F7B0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028F7B4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8028F7B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028F7BC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8028F7C0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028F7C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028F7C8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8028F7CC: swc1        $f16, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f16.u32l;
    // 0x8028F7D0: sw          $t6, 0x2E8($s0)
    MEM_W(0X2E8, ctx->r16) = ctx->r14;
    // 0x8028F7D4: swc1        $f4, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f4.u32l;
    // 0x8028F7D8: swc1        $f18, 0x298($s0)
    MEM_W(0X298, ctx->r16) = ctx->f18.u32l;
    // 0x8028F7DC: jal         0x8022970C
    // 0x8028F7E0: swc1        $f6, 0xE24($s0)
    MEM_W(0XE24, ctx->r16) = ctx->f6.u32l;
    func_8022970C(rdram, ctx);
        goto after_55;
    // 0x8028F7E0: swc1        $f6, 0xE24($s0)
    MEM_W(0XE24, ctx->r16) = ctx->f6.u32l;
    after_55:
    // 0x8028F7E4: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8028F7E8: addiu       $a0, $s0, 0x2F0
    ctx->r4 = ADD32(ctx->r16, 0X2F0);
    // 0x8028F7EC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8028F7F0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8028F7F4: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8028F7F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8028F7FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8028F800: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x8028F804: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x8028F808: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8028F80C: jal         0x80314334
    // 0x8028F810: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    static_3_80314334(rdram, ctx);
        goto after_56;
    // 0x8028F810: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_56:
    // 0x8028F814: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F818: jal         0x802C5830
    // 0x8028F81C: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    static_3_802C5830(rdram, ctx);
        goto after_57;
    // 0x8028F81C: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    after_57:
    // 0x8028F820: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F824: jal         0x802C580C
    // 0x8028F828: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_58;
    // 0x8028F828: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_58:
    // 0x8028F82C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F830: jal         0x802C5818
    // 0x8028F834: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_59;
    // 0x8028F834: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_59:
    // 0x8028F838: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F83C: jal         0x802C5824
    // 0x8028F840: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_60;
    // 0x8028F840: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    after_60:
    // 0x8028F844: addiu       $a0, $s0, 0x490
    ctx->r4 = ADD32(ctx->r16, 0X490);
    // 0x8028F848: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8028F84C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x8028F850: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x8028F854: jal         0x802C4A20
    // 0x8028F858: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_61;
    // 0x8028F858: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_61:
    // 0x8028F85C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F860: jal         0x802C5830
    // 0x8028F864: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_62;
    // 0x8028F864: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_62:
    // 0x8028F868: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F86C: jal         0x802C580C
    // 0x8028F870: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_63;
    // 0x8028F870: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_63:
    // 0x8028F874: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F878: jal         0x802C5818
    // 0x8028F87C: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_64;
    // 0x8028F87C: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_64:
    // 0x8028F880: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F884: jal         0x802C5824
    // 0x8028F888: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_65;
    // 0x8028F888: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    after_65:
    // 0x8028F88C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F890: jal         0x802C583C
    // 0x8028F894: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802C583C(rdram, ctx);
        goto after_66;
    // 0x8028F894: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_66:
    // 0x8028F898: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F89C: jal         0x802C584C
    // 0x8028F8A0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    static_3_802C584C(rdram, ctx);
        goto after_67;
    // 0x8028F8A0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_67:
    // 0x8028F8A4: addiu       $a0, $s0, 0x624
    ctx->r4 = ADD32(ctx->r16, 0X624);
    // 0x8028F8A8: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8028F8AC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8028F8B0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x8028F8B4: jal         0x802C4A20
    // 0x8028F8B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_68;
    // 0x8028F8B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_68:
    // 0x8028F8BC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F8C0: jal         0x802C5830
    // 0x8028F8C4: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_69;
    // 0x8028F8C4: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_69:
    // 0x8028F8C8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F8CC: jal         0x802C580C
    // 0x8028F8D0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_70;
    // 0x8028F8D0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_70:
    // 0x8028F8D4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F8D8: jal         0x802C5818
    // 0x8028F8DC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_71;
    // 0x8028F8DC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_71:
    // 0x8028F8E0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F8E4: jal         0x802C5824
    // 0x8028F8E8: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_72;
    // 0x8028F8E8: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    after_72:
    // 0x8028F8EC: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x8028F8F0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8028F8F4: jal         0x802C584C
    // 0x8028F8F8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_802C584C(rdram, ctx);
        goto after_73;
    // 0x8028F8F8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_73:
    // 0x8028F8FC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F900: jal         0x802C53D8
    // 0x8028F904: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802C53D8(rdram, ctx);
        goto after_74;
    // 0x8028F904: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_74:
    // 0x8028F908: addiu       $a0, $s0, 0x7B8
    ctx->r4 = ADD32(ctx->r16, 0X7B8);
    // 0x8028F90C: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8028F910: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8028F914: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x8028F918: jal         0x802C4A20
    // 0x8028F91C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_75;
    // 0x8028F91C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_75:
    // 0x8028F920: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F924: jal         0x802C5830
    // 0x8028F928: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_76;
    // 0x8028F928: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_76:
    // 0x8028F92C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F930: jal         0x802C580C
    // 0x8028F934: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_77;
    // 0x8028F934: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_77:
    // 0x8028F938: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F93C: jal         0x802C5818
    // 0x8028F940: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_78;
    // 0x8028F940: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_78:
    // 0x8028F944: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F948: jal         0x802C5824
    // 0x8028F94C: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_79;
    // 0x8028F94C: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    after_79:
    // 0x8028F950: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x8028F954: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8028F958: jal         0x802C584C
    // 0x8028F95C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_802C584C(rdram, ctx);
        goto after_80;
    // 0x8028F95C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_80:
    // 0x8028F960: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F964: jal         0x802C53D8
    // 0x8028F968: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802C53D8(rdram, ctx);
        goto after_81;
    // 0x8028F968: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_81:
    // 0x8028F96C: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    // 0x8028F970: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8028F974: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x8028F978: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x8028F97C: jal         0x802C4A20
    // 0x8028F980: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_82;
    // 0x8028F980: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_82:
    // 0x8028F984: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F988: jal         0x802C5830
    // 0x8028F98C: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_83;
    // 0x8028F98C: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_83:
    // 0x8028F990: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F994: jal         0x802C580C
    // 0x8028F998: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_84;
    // 0x8028F998: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_84:
    // 0x8028F99C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F9A0: jal         0x802C5818
    // 0x8028F9A4: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_85;
    // 0x8028F9A4: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_85:
    // 0x8028F9A8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F9AC: jal         0x802C5824
    // 0x8028F9B0: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_86;
    // 0x8028F9B0: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    after_86:
    // 0x8028F9B4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F9B8: jal         0x802C583C
    // 0x8028F9BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802C583C(rdram, ctx);
        goto after_87;
    // 0x8028F9BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_87:
    // 0x8028F9C0: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x8028F9C4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8028F9C8: jal         0x802C584C
    // 0x8028F9CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_802C584C(rdram, ctx);
        goto after_88;
    // 0x8028F9CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_88:
    // 0x8028F9D0: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    // 0x8028F9D4: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8028F9D8: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x8028F9DC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x8028F9E0: jal         0x802C4A20
    // 0x8028F9E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_89;
    // 0x8028F9E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_89:
    // 0x8028F9E8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F9EC: jal         0x802C5830
    // 0x8028F9F0: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_90;
    // 0x8028F9F0: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_90:
    // 0x8028F9F4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028F9F8: jal         0x802C580C
    // 0x8028F9FC: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_91;
    // 0x8028F9FC: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_91:
    // 0x8028FA00: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028FA04: jal         0x802C5818
    // 0x8028FA08: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_92;
    // 0x8028FA08: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_92:
    // 0x8028FA0C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028FA10: jal         0x802C5824
    // 0x8028FA14: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_93;
    // 0x8028FA14: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    after_93:
    // 0x8028FA18: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028FA1C: jal         0x802C583C
    // 0x8028FA20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802C583C(rdram, ctx);
        goto after_94;
    // 0x8028FA20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_94:
    // 0x8028FA24: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x8028FA28: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8028FA2C: jal         0x802C584C
    // 0x8028FA30: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_802C584C(rdram, ctx);
        goto after_95;
    // 0x8028FA30: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_95:
    // 0x8028FA34: addiu       $a0, $s0, 0xC74
    ctx->r4 = ADD32(ctx->r16, 0XC74);
    // 0x8028FA38: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8028FA3C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x8028FA40: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x8028FA44: jal         0x802C4A20
    // 0x8028FA48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_96;
    // 0x8028FA48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_96:
    // 0x8028FA4C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028FA50: jal         0x802C5830
    // 0x8028FA54: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_97;
    // 0x8028FA54: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_97:
    // 0x8028FA58: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028FA5C: jal         0x802C580C
    // 0x8028FA60: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_98;
    // 0x8028FA60: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_98:
    // 0x8028FA64: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028FA68: jal         0x802C5818
    // 0x8028FA6C: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_99;
    // 0x8028FA6C: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_99:
    // 0x8028FA70: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028FA74: jal         0x802C5824
    // 0x8028FA78: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_100;
    // 0x8028FA78: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    after_100:
    // 0x8028FA7C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028FA80: jal         0x802C583C
    // 0x8028FA84: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    static_3_802C583C(rdram, ctx);
        goto after_101;
    // 0x8028FA84: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    after_101:
    // 0x8028FA88: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028FA8C: jal         0x802C584C
    // 0x8028FA90: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    static_3_802C584C(rdram, ctx);
        goto after_102;
    // 0x8028FA90: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_102:
    // 0x8028FA94: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8028FA98: jal         0x802C5788
    // 0x8028FA9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C5788(rdram, ctx);
        goto after_103;
    // 0x8028FA9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_103:
    // 0x8028FAA0: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028FAA4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8028FAA8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8028FAAC: jal         0x802AA4A4
    // 0x8028FAB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802AA4A4(rdram, ctx);
        goto after_104;
    // 0x8028FAB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_104:
    // 0x8028FAB4: lw          $v1, 0x1A0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028FAB8: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x8028FABC: lw          $t9, 0xBC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XBC);
    // 0x8028FAC0: lh          $t0, 0xB8($v1)
    ctx->r8 = MEM_H(ctx->r3, 0XB8);
    // 0x8028FAC4: jalr        $t9
    // 0x8028FAC8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_105;
    // 0x8028FAC8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_105:
    // 0x8028FACC: sb          $zero, 0xF30($s0)
    MEM_B(0XF30, ctx->r16) = 0;
    // 0x8028FAD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8028FAD4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8028FAD8: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x8028FADC: jr          $ra
    // 0x8028FAE0: nop

    return;
    // 0x8028FAE0: nop

;}
RECOMP_FUNC void D_802A6B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6BC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A6BCC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802A6BD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A6BD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A6BD8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802A6BDC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x802A6BE0: jal         0x80228DE0
    // 0x802A6BE4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802A6BE4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x802A6BE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A6BEC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A6BF0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A6BF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A6BF8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802A6BFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A6C00: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A6C04: swc1        $f4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f4.u32l;
    // 0x802A6C08: swc1        $f6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f6.u32l;
    // 0x802A6C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A6C10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A6C14: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x802A6C18: jal         0x802D7CEC
    // 0x802A6C1C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    static_3_802D7CEC(rdram, ctx);
        goto after_1;
    // 0x802A6C1C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x802A6C20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A6C24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A6C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A6C2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A6C30: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A6C34: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802A6C38: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802A6C3C: jal         0x802D7CEC
    // 0x802A6C40: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    static_3_802D7CEC(rdram, ctx);
        goto after_2;
    // 0x802A6C40: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x802A6C44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A6C48: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A6C4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A6C50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802A6C54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802A6C58: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x802A6C5C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802A6C60: jal         0x802D7CEC
    // 0x802A6C64: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    static_3_802D7CEC(rdram, ctx);
        goto after_3;
    // 0x802A6C64: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x802A6C68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802A6C6C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802A6C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A6C74: jr          $ra
    // 0x802A6C78: nop

    return;
    // 0x802A6C78: nop

;}
RECOMP_FUNC void D_802E7C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7D18: jr          $ra
    // 0x802E7D1C: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    return;
    // 0x802E7D1C: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
;}
RECOMP_FUNC void D_8027F7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F830: addiu       $t6, $a0, 0x365C
    ctx->r14 = ADD32(ctx->r4, 0X365C);
    // 0x8027F834: bne         $a1, $t6, L_8027F844
    if (ctx->r5 != ctx->r14) {
        // 0x8027F838: addiu       $t7, $a0, 0x4E3C
        ctx->r15 = ADD32(ctx->r4, 0X4E3C);
            goto L_8027F844;
    }
    // 0x8027F838: addiu       $t7, $a0, 0x4E3C
    ctx->r15 = ADD32(ctx->r4, 0X4E3C);
    // 0x8027F83C: jr          $ra
    // 0x8027F840: sw          $a2, 0x4E18($a0)
    MEM_W(0X4E18, ctx->r4) = ctx->r6;
    return;
    // 0x8027F840: sw          $a2, 0x4E18($a0)
    MEM_W(0X4E18, ctx->r4) = ctx->r6;
L_8027F844:
    // 0x8027F844: bne         $a1, $t7, L_8027F850
    if (ctx->r5 != ctx->r15) {
        // 0x8027F848: nop
    
            goto L_8027F850;
    }
    // 0x8027F848: nop

    // 0x8027F84C: sw          $a2, 0x65B4($a0)
    MEM_W(0X65B4, ctx->r4) = ctx->r6;
L_8027F850:
    // 0x8027F850: jr          $ra
    // 0x8027F854: nop

    return;
    // 0x8027F854: nop

;}
RECOMP_FUNC void D_802869E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286A60: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x80286A64: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80286A68: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80286A6C: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x80286A70: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80286A74: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x80286A78: beql        $t7, $zero, L_80287054
    if (ctx->r15 == 0) {
        // 0x80286A7C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80287054;
    }
    goto skip_0;
    // 0x80286A7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x80286A80: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80286A84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80286A88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80286A8C: lwc1        $f6, 0x7174($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X7174);
    // 0x80286A90: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x80286A94: sw          $a1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r5;
    // 0x80286A98: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80286A9C: sw          $a0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r4;
    // 0x80286AA0: jal         0x8022331C
    // 0x80286AA4: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x80286AA4: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80286AA8: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x80286AAC: lw          $a1, 0xEC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XEC);
    // 0x80286AB0: lw          $a2, 0xF0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XF0);
    // 0x80286AB4: lbu         $t0, 0x235($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X235);
    // 0x80286AB8: beql        $t0, $zero, L_80286B04
    if (ctx->r8 == 0) {
        // 0x80286ABC: lwc1        $f10, 0x30($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X30);
            goto L_80286B04;
    }
    goto skip_1;
    // 0x80286ABC: lwc1        $f10, 0x30($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X30);
    skip_1:
    // 0x80286AC0: lwc1        $f10, 0x30($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X30);
    // 0x80286AC4: lwc1        $f4, 0x30($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80286AC8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80286ACC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80286AD0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80286AD4: lwc1        $f4, 0x34($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80286AD8: lwc1        $f10, 0x34($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80286ADC: lui         $at, 0x4298
    ctx->r1 = S32(0X4298 << 16);
    // 0x80286AE0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80286AE4: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80286AE8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80286AEC: nop

    // 0x80286AF0: div.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80286AF4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80286AF8: b           L_80286B3C
    // 0x80286AFC: div.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
        goto L_80286B3C;
    // 0x80286AFC: div.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80286B00: lwc1        $f10, 0x30($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X30);
L_80286B04:
    // 0x80286B04: lwc1        $f4, 0x30($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80286B08: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80286B0C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80286B10: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80286B14: lwc1        $f4, 0x34($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80286B18: lwc1        $f10, 0x34($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80286B1C: lui         $at, 0x4298
    ctx->r1 = S32(0X4298 << 16);
    // 0x80286B20: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80286B24: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80286B28: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80286B2C: nop

    // 0x80286B30: div.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80286B34: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80286B38: div.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
L_80286B3C:
    // 0x80286B3C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80286B40: swc1        $f2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f2.u32l;
    // 0x80286B44: swc1        $f16, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f16.u32l;
    // 0x80286B48: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80286B4C: jal         0x8022AA40
    // 0x80286B50: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_1;
    // 0x80286B50: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_1:
    // 0x80286B54: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80286B58: lwc1        $f2, 0xE4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80286B5C: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80286B60: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80286B64: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x80286B68: bc1f        L_80286B74
    if (!c1cs) {
        // 0x80286B6C: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_80286B74;
    }
    // 0x80286B6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80286B70: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
L_80286B74:
    // 0x80286B74: div.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80286B78: swc1        $f18, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f18.u32l;
    // 0x80286B7C: jal         0x8022AE1C
    // 0x80286B80: div.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f18.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_2;
    // 0x80286B80: div.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f18.fl);
    after_2:
    // 0x80286B84: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80286B88: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80286B8C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80286B90: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80286B94: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80286B98: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80286B9C: lbu         $t1, 0x107($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X107);
    // 0x80286BA0: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x80286BA4: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x80286BA8: nop

    // 0x80286BAC: bc1f        L_80286BBC
    if (!c1cs) {
        // 0x80286BB0: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_80286BBC;
    }
    // 0x80286BB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80286BB4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80286BB8: sub.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f6.fl;
L_80286BBC:
    // 0x80286BBC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80286BC0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80286BC4: c.le.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl <= ctx->f8.fl;
    // 0x80286BC8: nop

    // 0x80286BCC: bc1f        L_80286BDC
    if (!c1cs) {
        // 0x80286BD0: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_80286BDC;
    }
    // 0x80286BD0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80286BD4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80286BD8: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
L_80286BDC:
    // 0x80286BDC: beq         $t1, $zero, L_80286BF8
    if (ctx->r9 == 0) {
        // 0x80286BE0: addiu       $t2, $zero, 0xF8
        ctx->r10 = ADD32(0, 0XF8);
            goto L_80286BF8;
    }
    // 0x80286BE0: addiu       $t2, $zero, 0xF8
    ctx->r10 = ADD32(0, 0XF8);
    // 0x80286BE4: addiu       $t3, $zero, 0xB8
    ctx->r11 = ADD32(0, 0XB8);
    // 0x80286BE8: addiu       $t4, $zero, 0x60
    ctx->r12 = ADD32(0, 0X60);
    // 0x80286BEC: sw          $t2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r10;
    // 0x80286BF0: sw          $t3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r11;
    // 0x80286BF4: sw          $t4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r12;
L_80286BF8:
    // 0x80286BF8: lw          $t5, 0xE8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE8);
    // 0x80286BFC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80286C00: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x80286C04: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x80286C08: jal         0x80228DE0
    // 0x80286C0C: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x80286C0C: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    after_3:
    // 0x80286C10: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x80286C14: jal         0x8022970C
    // 0x80286C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x80286C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80286C1C: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80286C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80286C24: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80286C28: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80286C2C: jal         0x802D01D4
    // 0x80286C30: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x80286C30: nop

    after_5:
    // 0x80286C34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80286C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80286C3C: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x80286C40: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80286C44: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80286C48: jal         0x8022A0D0
    // 0x80286C4C: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_6;
    // 0x80286C4C: nop

    after_6:
    // 0x80286C50: lui         $at, 0x4384
    ctx->r1 = S32(0X4384 << 16);
    // 0x80286C54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80286C58: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80286C5C: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80286C60: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
    // 0x80286C64: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80286C68: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80286C6C: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x80286C70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80286C74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80286C78: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80286C7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80286C80: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80286C84: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80286C88: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80286C8C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80286C90: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80286C94: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80286C98: sw          $t7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r15;
    // 0x80286C9C: lw          $t0, 0xD4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD4);
    // 0x80286CA0: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x80286CA4: bne         $t9, $at, L_80286CB4
    if (ctx->r25 != ctx->r1) {
        // 0x80286CA8: addiu       $t1, $t0, 0x25
        ctx->r9 = ADD32(ctx->r8, 0X25);
            goto L_80286CB4;
    }
    // 0x80286CA8: addiu       $t1, $t0, 0x25
    ctx->r9 = ADD32(ctx->r8, 0X25);
    // 0x80286CAC: b           L_80286CB4
    // 0x80286CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80286CB4;
    // 0x80286CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80286CB4:
    // 0x80286CB4: beq         $v0, $zero, L_80286CE8
    if (ctx->r2 == 0) {
        // 0x80286CB8: nop
    
            goto L_80286CE8;
    }
    // 0x80286CB8: nop

    // 0x80286CBC: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x80286CC0: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
    // 0x80286CC4: jal         0x802AEE54
    // 0x80286CC8: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_7;
    // 0x80286CC8: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    after_7:
    // 0x80286CCC: lw          $t3, 0xE8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE8);
    // 0x80286CD0: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x80286CD4: bnel        $v0, $t4, L_80286CE8
    if (ctx->r2 != ctx->r12) {
        // 0x80286CD8: addiu       $s0, $s0, 0x5
        ctx->r16 = ADD32(ctx->r16, 0X5);
            goto L_80286CE8;
    }
    goto skip_2;
    // 0x80286CD8: addiu       $s0, $s0, 0x5
    ctx->r16 = ADD32(ctx->r16, 0X5);
    skip_2:
    // 0x80286CDC: b           L_80286CE8
    // 0x80286CE0: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
        goto L_80286CE8;
    // 0x80286CE0: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    // 0x80286CE4: addiu       $s0, $s0, 0x5
    ctx->r16 = ADD32(ctx->r16, 0X5);
L_80286CE8:
    // 0x80286CE8: jal         0x8021F4E4
    // 0x80286CEC: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_8;
    // 0x80286CEC: nop

    after_8:
    // 0x80286CF0: lbu         $t5, 0x10B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X10B);
    // 0x80286CF4: lbu         $t6, 0x10F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X10F);
    // 0x80286CF8: beq         $t5, $zero, L_80286E40
    if (ctx->r13 == 0) {
        // 0x80286CFC: nop
    
            goto L_80286E40;
    }
    // 0x80286CFC: nop

    // 0x80286D00: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x80286D04: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80286D08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80286D0C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80286D10: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x80286D14: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x80286D18: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80286D1C: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    // 0x80286D20: addiu       $t1, $zero, 0x9E
    ctx->r9 = ADD32(0, 0X9E);
    // 0x80286D24: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80286D28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80286D2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80286D30: sub.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80286D34: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80286D38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80286D3C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80286D40: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80286D44: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80286D48: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80286D4C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80286D50: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80286D54: jal         0x8021F35C
    // 0x80286D58: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x80286D58: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    after_9:
    // 0x80286D5C: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x80286D60: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80286D64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80286D68: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80286D6C: lw          $t3, 0xF8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF8);
    // 0x80286D70: lw          $t4, 0xFC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XFC);
    // 0x80286D74: lw          $t5, 0x100($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X100);
    // 0x80286D78: addiu       $t6, $zero, 0x9E
    ctx->r14 = ADD32(0, 0X9E);
    // 0x80286D7C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80286D80: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80286D84: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80286D88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80286D8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80286D90: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80286D94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80286D98: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80286D9C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80286DA0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80286DA4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80286DA8: jal         0x8021F35C
    // 0x80286DAC: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x80286DAC: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_10:
    // 0x80286DB0: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80286DB4: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80286DB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80286DBC: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x80286DC0: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x80286DC4: add.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80286DC8: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    // 0x80286DCC: addiu       $t1, $zero, 0x9E
    ctx->r9 = ADD32(0, 0X9E);
    // 0x80286DD0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80286DD4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80286DD8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80286DDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80286DE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80286DE4: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80286DE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80286DEC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80286DF0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80286DF4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80286DF8: jal         0x8021F35C
    // 0x80286DFC: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x80286DFC: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    after_11:
    // 0x80286E00: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x80286E04: lw          $t3, 0xFC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XFC);
    // 0x80286E08: lw          $t4, 0x100($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X100);
    // 0x80286E0C: addiu       $t5, $zero, 0x9E
    ctx->r13 = ADD32(0, 0X9E);
    // 0x80286E10: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80286E14: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80286E18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80286E1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80286E20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80286E24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80286E28: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80286E2C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80286E30: jal         0x8021F35C
    // 0x80286E34: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x80286E34: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_12:
    // 0x80286E38: b           L_80287040
    // 0x80286E3C: nop

        goto L_80287040;
    // 0x80286E3C: nop

L_80286E40:
    // 0x80286E40: beq         $t6, $zero, L_80286F50
    if (ctx->r14 == 0) {
        // 0x80286E44: lw          $t3, 0xD4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XD4);
            goto L_80286F50;
    }
    // 0x80286E44: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x80286E48: jal         0x8021F4E4
    // 0x80286E4C: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_13;
    // 0x80286E4C: nop

    after_13:
    // 0x80286E50: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x80286E54: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80286E58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80286E5C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80286E60: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x80286E64: lw          $t0, 0xFC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XFC);
    // 0x80286E68: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80286E6C: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x80286E70: addiu       $t2, $zero, 0x9E
    ctx->r10 = ADD32(0, 0X9E);
    // 0x80286E74: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80286E78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80286E7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80286E80: sub.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80286E84: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80286E88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80286E8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80286E90: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80286E94: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80286E98: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80286E9C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80286EA0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80286EA4: jal         0x8021F35C
    // 0x80286EA8: nop

    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x80286EA8: nop

    after_14:
    // 0x80286EAC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80286EB0: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80286EB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80286EB8: lw          $t4, 0xF8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF8);
    // 0x80286EBC: lw          $t5, 0xFC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XFC);
    // 0x80286EC0: add.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80286EC4: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x80286EC8: addiu       $t7, $zero, 0x9E
    ctx->r15 = ADD32(0, 0X9E);
    // 0x80286ECC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80286ED0: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80286ED4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80286ED8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80286EDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80286EE0: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x80286EE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80286EE8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80286EEC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80286EF0: jal         0x8021F35C
    // 0x80286EF4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x80286EF4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_15:
    // 0x80286EF8: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x80286EFC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80286F00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80286F04: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80286F08: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x80286F0C: lw          $t0, 0xFC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XFC);
    // 0x80286F10: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x80286F14: addiu       $t2, $zero, 0x9E
    ctx->r10 = ADD32(0, 0X9E);
    // 0x80286F18: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80286F1C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80286F20: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    // 0x80286F24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80286F28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80286F2C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80286F30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80286F34: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80286F38: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80286F3C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80286F40: jal         0x8021F35C
    // 0x80286F44: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x80286F44: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_16:
    // 0x80286F48: b           L_80287040
    // 0x80286F4C: nop

        goto L_80287040;
    // 0x80286F4C: nop

L_80286F50:
    // 0x80286F50: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80286F54: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80286F58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80286F5C: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80286F60: lw          $t5, 0xF8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF8);
    // 0x80286F64: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x80286F68: lw          $t7, 0x100($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X100);
    // 0x80286F6C: addiu       $t8, $zero, 0x9E
    ctx->r24 = ADD32(0, 0X9E);
    // 0x80286F70: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80286F74: sub.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80286F78: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80286F7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80286F80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80286F84: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80286F88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80286F8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80286F90: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80286F94: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80286F98: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80286F9C: jal         0x8021F35C
    // 0x80286FA0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x80286FA0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_17:
    // 0x80286FA4: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x80286FA8: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80286FAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80286FB0: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80286FB4: lw          $t0, 0xF8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF8);
    // 0x80286FB8: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x80286FBC: lw          $t2, 0x100($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X100);
    // 0x80286FC0: addiu       $t3, $zero, 0x9E
    ctx->r11 = ADD32(0, 0X9E);
    // 0x80286FC4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80286FC8: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80286FCC: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    // 0x80286FD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80286FD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80286FD8: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80286FDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80286FE0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80286FE4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80286FE8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80286FEC: jal         0x8021F35C
    // 0x80286FF0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x80286FF0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_18:
    // 0x80286FF4: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80286FF8: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80286FFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80287000: lw          $t5, 0xF8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF8);
    // 0x80287004: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x80287008: add.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8028700C: lw          $t7, 0x100($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X100);
    // 0x80287010: addiu       $t8, $zero, 0x9E
    ctx->r24 = ADD32(0, 0X9E);
    // 0x80287014: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80287018: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028701C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80287020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287024: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287028: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x8028702C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80287030: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80287034: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80287038: jal         0x8021F35C
    // 0x8028703C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    static_3_8021F35C(rdram, ctx);
        goto after_19;
    // 0x8028703C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_19:
L_80287040:
    // 0x80287040: jal         0x8021FCD0
    // 0x80287044: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_20;
    // 0x80287044: nop

    after_20:
    // 0x80287048: jal         0x8022337C
    // 0x8028704C: nop

    static_3_8022337C(rdram, ctx);
        goto after_21;
    // 0x8028704C: nop

    after_21:
    // 0x80287050: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80287054:
    // 0x80287054: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80287058: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x8028705C: jr          $ra
    // 0x80287060: nop

    return;
    // 0x80287060: nop

;}
RECOMP_FUNC void D_802A1370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A13F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A13F4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802A13F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A13FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802A1400: jal         0x80228DE0
    // 0x802A1404: addiu       $a1, $a3, 0x2C
    ctx->r5 = ADD32(ctx->r7, 0X2C);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802A1404: addiu       $a1, $a3, 0x2C
    ctx->r5 = ADD32(ctx->r7, 0X2C);
    after_0:
    // 0x802A1408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A140C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A1410: jr          $ra
    // 0x802A1414: nop

    return;
    // 0x802A1414: nop

;}
RECOMP_FUNC void D_802B3C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3D04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B3D08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B3D0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B3D10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B3D14: beq         $a0, $zero, L_802B3EA0
    if (ctx->r4 == 0) {
        // 0x802B3D18: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802B3EA0;
    }
    // 0x802B3D18: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802B3D1C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802B3D20: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802B3D24: jal         0x802E5564
    // 0x802B3D28: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    static_3_802E5564(rdram, ctx);
        goto after_0;
    // 0x802B3D28: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    after_0:
    // 0x802B3D2C: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802B3D30: jal         0x802C49D0
    // 0x802B3D34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_1;
    // 0x802B3D34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802B3D38: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802B3D3C: jal         0x802C49D0
    // 0x802B3D40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_2;
    // 0x802B3D40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802B3D44: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802B3D48: jal         0x802C49D0
    // 0x802B3D4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_3;
    // 0x802B3D4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802B3D50: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802B3D54: jal         0x802C49D0
    // 0x802B3D58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_4;
    // 0x802B3D58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x802B3D5C: addiu       $at, $zero, -0xE68
    ctx->r1 = ADD32(0, -0XE68);
    // 0x802B3D60: beq         $s0, $at, L_802B3D70
    if (ctx->r16 == ctx->r1) {
        // 0x802B3D64: addiu       $a0, $s0, 0xEC0
        ctx->r4 = ADD32(ctx->r16, 0XEC0);
            goto L_802B3D70;
    }
    // 0x802B3D64: addiu       $a0, $s0, 0xEC0
    ctx->r4 = ADD32(ctx->r16, 0XEC0);
    // 0x802B3D68: jal         0x80302FA4
    // 0x802B3D6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_5;
    // 0x802B3D6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
L_802B3D70:
    // 0x802B3D70: addiu       $at, $zero, -0xDF4
    ctx->r1 = ADD32(0, -0XDF4);
    // 0x802B3D74: beq         $s0, $at, L_802B3D84
    if (ctx->r16 == ctx->r1) {
        // 0x802B3D78: addiu       $a0, $s0, 0xE4C
        ctx->r4 = ADD32(ctx->r16, 0XE4C);
            goto L_802B3D84;
    }
    // 0x802B3D78: addiu       $a0, $s0, 0xE4C
    ctx->r4 = ADD32(ctx->r16, 0XE4C);
    // 0x802B3D7C: jal         0x80302FA4
    // 0x802B3D80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_6;
    // 0x802B3D80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
L_802B3D84:
    // 0x802B3D84: addiu       $at, $zero, -0xD80
    ctx->r1 = ADD32(0, -0XD80);
    // 0x802B3D88: beq         $s0, $at, L_802B3D98
    if (ctx->r16 == ctx->r1) {
        // 0x802B3D8C: addiu       $a0, $s0, 0xDD8
        ctx->r4 = ADD32(ctx->r16, 0XDD8);
            goto L_802B3D98;
    }
    // 0x802B3D8C: addiu       $a0, $s0, 0xDD8
    ctx->r4 = ADD32(ctx->r16, 0XDD8);
    // 0x802B3D90: jal         0x80302FA4
    // 0x802B3D94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_7;
    // 0x802B3D94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
L_802B3D98:
    // 0x802B3D98: addiu       $at, $zero, -0xD0C
    ctx->r1 = ADD32(0, -0XD0C);
    // 0x802B3D9C: beq         $s0, $at, L_802B3DAC
    if (ctx->r16 == ctx->r1) {
        // 0x802B3DA0: addiu       $a0, $s0, 0xD64
        ctx->r4 = ADD32(ctx->r16, 0XD64);
            goto L_802B3DAC;
    }
    // 0x802B3DA0: addiu       $a0, $s0, 0xD64
    ctx->r4 = ADD32(ctx->r16, 0XD64);
    // 0x802B3DA4: jal         0x80302FA4
    // 0x802B3DA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_8;
    // 0x802B3DA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
L_802B3DAC:
    // 0x802B3DAC: addiu       $at, $zero, -0xC98
    ctx->r1 = ADD32(0, -0XC98);
    // 0x802B3DB0: beq         $s0, $at, L_802B3DC0
    if (ctx->r16 == ctx->r1) {
        // 0x802B3DB4: addiu       $a0, $s0, 0xCF0
        ctx->r4 = ADD32(ctx->r16, 0XCF0);
            goto L_802B3DC0;
    }
    // 0x802B3DB4: addiu       $a0, $s0, 0xCF0
    ctx->r4 = ADD32(ctx->r16, 0XCF0);
    // 0x802B3DB8: jal         0x80302FA4
    // 0x802B3DBC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_9;
    // 0x802B3DBC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
L_802B3DC0:
    // 0x802B3DC0: addiu       $at, $zero, -0xC24
    ctx->r1 = ADD32(0, -0XC24);
    // 0x802B3DC4: beq         $s0, $at, L_802B3DD4
    if (ctx->r16 == ctx->r1) {
        // 0x802B3DC8: addiu       $a0, $s0, 0xC7C
        ctx->r4 = ADD32(ctx->r16, 0XC7C);
            goto L_802B3DD4;
    }
    // 0x802B3DC8: addiu       $a0, $s0, 0xC7C
    ctx->r4 = ADD32(ctx->r16, 0XC7C);
    // 0x802B3DCC: jal         0x80302FA4
    // 0x802B3DD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_10;
    // 0x802B3DD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
L_802B3DD4:
    // 0x802B3DD4: addiu       $at, $zero, -0xBB0
    ctx->r1 = ADD32(0, -0XBB0);
    // 0x802B3DD8: beq         $s0, $at, L_802B3DE8
    if (ctx->r16 == ctx->r1) {
        // 0x802B3DDC: addiu       $a0, $s0, 0xC08
        ctx->r4 = ADD32(ctx->r16, 0XC08);
            goto L_802B3DE8;
    }
    // 0x802B3DDC: addiu       $a0, $s0, 0xC08
    ctx->r4 = ADD32(ctx->r16, 0XC08);
    // 0x802B3DE0: jal         0x80302FA4
    // 0x802B3DE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_11;
    // 0x802B3DE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
L_802B3DE8:
    // 0x802B3DE8: addiu       $at, $zero, -0xB3C
    ctx->r1 = ADD32(0, -0XB3C);
    // 0x802B3DEC: beq         $s0, $at, L_802B3DFC
    if (ctx->r16 == ctx->r1) {
        // 0x802B3DF0: addiu       $a0, $s0, 0xB94
        ctx->r4 = ADD32(ctx->r16, 0XB94);
            goto L_802B3DFC;
    }
    // 0x802B3DF0: addiu       $a0, $s0, 0xB94
    ctx->r4 = ADD32(ctx->r16, 0XB94);
    // 0x802B3DF4: jal         0x80302FA4
    // 0x802B3DF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_12;
    // 0x802B3DF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
L_802B3DFC:
    // 0x802B3DFC: addiu       $at, $zero, -0xAC8
    ctx->r1 = ADD32(0, -0XAC8);
    // 0x802B3E00: beq         $s0, $at, L_802B3E10
    if (ctx->r16 == ctx->r1) {
        // 0x802B3E04: addiu       $a0, $s0, 0xB20
        ctx->r4 = ADD32(ctx->r16, 0XB20);
            goto L_802B3E10;
    }
    // 0x802B3E04: addiu       $a0, $s0, 0xB20
    ctx->r4 = ADD32(ctx->r16, 0XB20);
    // 0x802B3E08: jal         0x80302FA4
    // 0x802B3E0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_13;
    // 0x802B3E0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
L_802B3E10:
    // 0x802B3E10: addiu       $at, $zero, -0xA54
    ctx->r1 = ADD32(0, -0XA54);
    // 0x802B3E14: beq         $s0, $at, L_802B3E24
    if (ctx->r16 == ctx->r1) {
        // 0x802B3E18: addiu       $a0, $s0, 0xAAC
        ctx->r4 = ADD32(ctx->r16, 0XAAC);
            goto L_802B3E24;
    }
    // 0x802B3E18: addiu       $a0, $s0, 0xAAC
    ctx->r4 = ADD32(ctx->r16, 0XAAC);
    // 0x802B3E1C: jal         0x80302FA4
    // 0x802B3E20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_14;
    // 0x802B3E20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
L_802B3E24:
    // 0x802B3E24: addiu       $at, $zero, -0x9E0
    ctx->r1 = ADD32(0, -0X9E0);
    // 0x802B3E28: beq         $s0, $at, L_802B3E38
    if (ctx->r16 == ctx->r1) {
        // 0x802B3E2C: addiu       $a0, $s0, 0xA38
        ctx->r4 = ADD32(ctx->r16, 0XA38);
            goto L_802B3E38;
    }
    // 0x802B3E2C: addiu       $a0, $s0, 0xA38
    ctx->r4 = ADD32(ctx->r16, 0XA38);
    // 0x802B3E30: jal         0x80302FA4
    // 0x802B3E34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_15;
    // 0x802B3E34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_15:
L_802B3E38:
    // 0x802B3E38: addiu       $at, $zero, -0x96C
    ctx->r1 = ADD32(0, -0X96C);
    // 0x802B3E3C: beq         $s0, $at, L_802B3E4C
    if (ctx->r16 == ctx->r1) {
        // 0x802B3E40: addiu       $a0, $s0, 0x9C4
        ctx->r4 = ADD32(ctx->r16, 0X9C4);
            goto L_802B3E4C;
    }
    // 0x802B3E40: addiu       $a0, $s0, 0x9C4
    ctx->r4 = ADD32(ctx->r16, 0X9C4);
    // 0x802B3E44: jal         0x80302FA4
    // 0x802B3E48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_16;
    // 0x802B3E48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_16:
L_802B3E4C:
    // 0x802B3E4C: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802B3E50: jal         0x802FD14C
    // 0x802B3E54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802FD14C(rdram, ctx);
        goto after_17;
    // 0x802B3E54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_17:
    // 0x802B3E58: addiu       $a0, $s0, 0x3A8
    ctx->r4 = ADD32(ctx->r16, 0X3A8);
    // 0x802B3E5C: jal         0x8031C75C
    // 0x802B3E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031C75C(rdram, ctx);
        goto after_18;
    // 0x802B3E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_18:
    // 0x802B3E64: addiu       $a0, $s0, 0x2B8
    ctx->r4 = ADD32(ctx->r16, 0X2B8);
    // 0x802B3E68: jal         0x8031C75C
    // 0x802B3E6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031C75C(rdram, ctx);
        goto after_19;
    // 0x802B3E6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_19:
    // 0x802B3E70: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802B3E74: jal         0x802D5188
    // 0x802B3E78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D5188(rdram, ctx);
        goto after_20;
    // 0x802B3E78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_20:
    // 0x802B3E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B3E80: jal         0x8031739C
    // 0x802B3E84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_21;
    // 0x802B3E84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x802B3E88: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802B3E8C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802B3E90: beql        $t8, $zero, L_802B3EA4
    if (ctx->r24 == 0) {
        // 0x802B3E94: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B3EA4;
    }
    goto skip_0;
    // 0x802B3E94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802B3E98: jal         0x802C681C
    // 0x802B3E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_22;
    // 0x802B3E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
L_802B3EA0:
    // 0x802B3EA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B3EA4:
    // 0x802B3EA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B3EA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B3EAC: jr          $ra
    // 0x802B3EB0: nop

    return;
    // 0x802B3EB0: nop

;}
RECOMP_FUNC void func_802000A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802000A0: lhu         $t6, 0x62($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X62);
    // 0x802000A4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802000A8: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802000AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802000B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802000B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x802000B8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x802000BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802000C0: jal         0x80228DE0
    // 0x802000C4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802000C4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x802000C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802000CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802000D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802000D4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802000D8: sw          $t9, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void D_8021BDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021BDD8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021BDDC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021BDE0: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x8021BDE4: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x8021BDE8: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x8021BDEC: subu        $s5, $a0, $t6
    ctx->r21 = SUB32(ctx->r4, ctx->r14);
    // 0x8021BDF0: div         $zero, $s5, $at
    lo = S32(S64(S32(ctx->r21)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r21)) % S64(S32(ctx->r1)));
    // 0x8021BDF4: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x8021BDF8: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x8021BDFC: mflo        $s5
    ctx->r21 = lo;
    // 0x8021BE00: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8021BE04: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x8021BE08: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x8021BE0C: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x8021BE10: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x8021BE14: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x8021BE18: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x8021BE1C: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x8021BE20: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x8021BE24: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x8021BE28: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x8021BE2C: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x8021BE30: bne         $a1, $zero, L_8021BE40
    if (ctx->r5 != 0) {
        // 0x8021BE34: sdc1        $f20, 0x38($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
            goto L_8021BE40;
    }
    // 0x8021BE34: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x8021BE38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021BE3C: sh          $zero, 0x0($at)
    MEM_H(0X0, ctx->r1) = 0;
L_8021BE40:
    // 0x8021BE40: lwc1        $f4, 0xB8($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0XB8);
    // 0x8021BE44: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021BE48: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021BE4C: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x8021BE50: lwc1        $f6, 0xBC($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0XBC);
    // 0x8021BE54: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8021BE58: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x8021BE5C: lwc1        $f8, 0xC0($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0XC0);
    // 0x8021BE60: blez        $v0, L_8021C160
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BE64: swc1        $f8, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
            goto L_8021C160;
    }
    // 0x8021BE64: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
L_8021BE68:
    // 0x8021BE68: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021BE6C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8021BE70: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8021BE74: addu        $s2, $s3, $t8
    ctx->r18 = ADD32(ctx->r19, ctx->r24);
    // 0x8021BE78: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8021BE7C: bne         $v1, $at, L_8021BE94
    if (ctx->r3 != ctx->r1) {
        // 0x8021BE80: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_8021BE94;
    }
    // 0x8021BE80: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8021BE84: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BE88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BE8C: b           L_8021C150
    // 0x8021BE90: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C150;
    // 0x8021BE90: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021BE94:
    // 0x8021BE94: lbu         $a0, 0x8($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X8);
    // 0x8021BE98: andi        $t9, $a0, 0x2
    ctx->r25 = ctx->r4 & 0X2;
    // 0x8021BE9C: bne         $t9, $zero, L_8021BEB4
    if (ctx->r25 != 0) {
        // 0x8021BEA0: andi        $t1, $a0, 0x4
        ctx->r9 = ctx->r4 & 0X4;
            goto L_8021BEB4;
    }
    // 0x8021BEA0: andi        $t1, $a0, 0x4
    ctx->r9 = ctx->r4 & 0X4;
    // 0x8021BEA4: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BEA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BEAC: b           L_8021C150
    // 0x8021BEB0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C150;
    // 0x8021BEB0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021BEB4:
    // 0x8021BEB4: beq         $t1, $zero, L_8021BECC
    if (ctx->r9 == 0) {
        // 0x8021BEB8: lui         $t2, 0x0
        ctx->r10 = S32(0X0 << 16);
            goto L_8021BECC;
    }
    // 0x8021BEB8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8021BEBC: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BEC0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BEC4: b           L_8021C150
    // 0x8021BEC8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C150;
    // 0x8021BEC8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021BECC:
    // 0x8021BECC: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8021BED0: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x8021BED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021BED8: lw          $t3, 0x1C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X1C);
    // 0x8021BEDC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8021BEE0: addiu       $a2, $sp, 0xC7
    ctx->r6 = ADD32(ctx->r29, 0XC7);
    // 0x8021BEE4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8021BEE8: lw          $s1, 0x0($t5)
    ctx->r17 = MEM_W(ctx->r13, 0X0);
    // 0x8021BEEC: bne         $s1, $zero, L_8021BF1C
    if (ctx->r17 != 0) {
        // 0x8021BEF0: nop
    
            goto L_8021BF1C;
    }
    // 0x8021BEF0: nop

    // 0x8021BEF4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021BEF8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021BEFC: jal         0x80231A24
    // 0x8021BF00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021BF00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8021BF04: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021BF08: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021BF0C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BF10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BF14: b           L_8021C150
    // 0x8021BF18: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C150;
    // 0x8021BF18: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021BF1C:
    // 0x8021BF1C: jal         0x8021178C
    // 0x8021BF20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021178C(rdram, ctx);
        goto after_1;
    // 0x8021BF20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8021BF24: lbu         $t6, 0xC7($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XC7);
    // 0x8021BF28: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021BF2C: beql        $t6, $s6, L_8021BF4C
    if (ctx->r14 == ctx->r22) {
        // 0x8021BF30: lw          $t8, 0x4($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X4);
            goto L_8021BF4C;
    }
    goto skip_0;
    // 0x8021BF30: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    skip_0:
    // 0x8021BF34: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021BF38: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BF3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BF40: b           L_8021C150
    // 0x8021BF44: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C150;
    // 0x8021BF44: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8021BF48: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
L_8021BF4C:
    // 0x8021BF4C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8021BF50: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8021BF54: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8021BF58: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8021BF5C: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8021BF60: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
    // 0x8021BF64: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x8021BF68: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021BF6C: lwc1        $f30, 0x34($v0)
    ctx->f30.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021BF70: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8021BF74: sub.s       $f22, $f0, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8021BF78: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8021BF7C: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x8021BF80: sub.s       $f24, $f30, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f30.fl - ctx->f16.fl;
    // 0x8021BF84: mul.s       $f6, $f22, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8021BF88: sub.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8021BF8C: mul.s       $f8, $f24, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x8021BF90: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021BF94: mul.s       $f16, $f20, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8021BF98: jal         0x8022AA40
    // 0x8021BF9C: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_2;
    // 0x8021BF9C: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_2:
    // 0x8021BFA0: lwc1        $f2, 0xC($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0XC);
    // 0x8021BFA4: lwc1        $f18, 0x134($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X134);
    // 0x8021BFA8: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x8021BFAC: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8021BFB0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8021BFB4: nop

    // 0x8021BFB8: bc1f        L_8021C13C
    if (!c1cs) {
        // 0x8021BFBC: nop
    
            goto L_8021C13C;
    }
    // 0x8021BFBC: nop

    // 0x8021BFC0: lbu         $t3, 0x8($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X8);
    // 0x8021BFC4: addiu       $a0, $s4, 0x218
    ctx->r4 = ADD32(ctx->r20, 0X218);
    // 0x8021BFC8: andi        $t4, $t3, 0x40
    ctx->r12 = ctx->r11 & 0X40;
    // 0x8021BFCC: bnel        $t4, $zero, L_8021C008
    if (ctx->r12 != 0) {
        // 0x8021BFD0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8021C008;
    }
    goto skip_1;
    // 0x8021BFD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x8021BFD4: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x8021BFD8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x8021BFDC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021BFE0: jal         0x8020802C
    // 0x8021BFE4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    static_3_8020802C(rdram, ctx);
        goto after_3;
    // 0x8021BFE4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x8021BFE8: bne         $v0, $zero, L_8021C004
    if (ctx->r2 != 0) {
        // 0x8021BFEC: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_8021C004;
    }
    // 0x8021BFEC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021BFF0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021BFF4: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BFF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BFFC: b           L_8021C150
    // 0x8021C000: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C150;
    // 0x8021C000: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021C004:
    // 0x8021C004: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8021C008:
    // 0x8021C008: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021C00C: lwc1        $f0, 0x13C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X13C);
    // 0x8021C010: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8021C014: nop

    // 0x8021C018: bc1f        L_8021C038
    if (!c1cs) {
        // 0x8021C01C: nop
    
            goto L_8021C038;
    }
    // 0x8021C01C: nop

    // 0x8021C020: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x8021C024: jal         0x8021C52C
    // 0x8021C028: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8021C52C(rdram, ctx);
        goto after_4;
    // 0x8021C028: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8021C02C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8021C030: b           L_8021C054
    // 0x8021C034: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_8021C054;
    // 0x8021C034: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_8021C038:
    // 0x8021C038: mul.s       $f8, $f0, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x8021C03C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021C040: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8021C044: jal         0x8021C52C
    // 0x8021C048: nop

    static_3_8021C52C(rdram, ctx);
        goto after_5;
    // 0x8021C048: nop

    after_5:
    // 0x8021C04C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8021C050: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_8021C054:
    // 0x8021C054: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8021C058: bne         $v1, $at, L_8021C074
    if (ctx->r3 != ctx->r1) {
        // 0x8021C05C: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_8021C074;
    }
    // 0x8021C05C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021C060: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021C064: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021C068: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021C06C: b           L_8021C150
    // 0x8021C070: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C150;
    // 0x8021C070: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021C074:
    // 0x8021C074: beq         $s6, $zero, L_8021C0A0
    if (ctx->r22 == 0) {
        // 0x8021C078: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8021C0A0;
    }
    // 0x8021C078: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021C07C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8021C080: jal         0x8021C5AC
    // 0x8021C084: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    static_3_8021C5AC(rdram, ctx);
        goto after_6;
    // 0x8021C084: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    after_6:
    // 0x8021C088: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021C08C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021C090: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021C094: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021C098: b           L_8021C150
    // 0x8021C09C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C150;
    // 0x8021C09C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021C0A0:
    // 0x8021C0A0: lw          $t5, 0x8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8);
    // 0x8021C0A4: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x8021C0A8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8021C0AC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8021C0B0: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x8021C0B4: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x8021C0B8: beql        $t8, $zero, L_8021C110
    if (ctx->r24 == 0) {
        // 0x8021C0BC: lbu         $t2, 0x11($s1)
        ctx->r10 = MEM_BU(ctx->r17, 0X11);
            goto L_8021C110;
    }
    goto skip_2;
    // 0x8021C0BC: lbu         $t2, 0x11($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X11);
    skip_2:
    // 0x8021C0C0: lbu         $t9, 0x11($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X11);
    // 0x8021C0C4: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x8021C0C8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8021C0CC: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x8021C0D0: beq         $t1, $zero, L_8021C0E0
    if (ctx->r9 == 0) {
        // 0x8021C0D4: or          $a3, $s5, $zero
        ctx->r7 = ctx->r21 | 0;
            goto L_8021C0E0;
    }
    // 0x8021C0D4: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x8021C0D8: b           L_8021C0E4
    // 0x8021C0DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_8021C0E4;
    // 0x8021C0DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_8021C0E0:
    // 0x8021C0E0: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
L_8021C0E4:
    // 0x8021C0E4: cvt.d.s     $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f10.d = CVT_D_S(ctx->f22.fl);
    // 0x8021C0E8: cvt.d.s     $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f16.d = CVT_D_S(ctx->f24.fl);
    // 0x8021C0EC: sdc1        $f10, 0x20($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X20, ctx->r29);
    // 0x8021C0F0: sdc1        $f16, 0x28($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X28, ctx->r29);
    // 0x8021C0F4: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x8021C0F8: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x8021C0FC: jal         0x8020672C
    // 0x8021C100: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    static_3_8020672C(rdram, ctx);
        goto after_7;
    // 0x8021C100: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_7:
    // 0x8021C104: b           L_8021C13C
    // 0x8021C108: nop

        goto L_8021C13C;
    // 0x8021C108: nop

    // 0x8021C10C: lbu         $t2, 0x11($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X11);
L_8021C110:
    // 0x8021C110: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x8021C114: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    // 0x8021C118: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8021C11C: beq         $t3, $zero, L_8021C12C
    if (ctx->r11 == 0) {
        // 0x8021C120: nop
    
            goto L_8021C12C;
    }
    // 0x8021C120: nop

    // 0x8021C124: b           L_8021C12C
    // 0x8021C128: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_8021C12C;
    // 0x8021C128: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8021C12C:
    // 0x8021C12C: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x8021C130: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x8021C134: jal         0x8020672C
    // 0x8021C138: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    static_3_8020672C(rdram, ctx);
        goto after_8;
    // 0x8021C138: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_8:
L_8021C13C:
    // 0x8021C13C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021C140: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021C144: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021C148: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021C14C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021C150:
    // 0x8021C150: addiu       $s3, $s3, 0x24
    ctx->r19 = ADD32(ctx->r19, 0X24);
    // 0x8021C154: slt         $at, $s3, $v1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021C158: bne         $at, $zero, L_8021BE68
    if (ctx->r1 != 0) {
        // 0x8021C15C: nop
    
            goto L_8021BE68;
    }
    // 0x8021C15C: nop

L_8021C160:
    // 0x8021C160: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x8021C164: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x8021C168: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x8021C16C: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x8021C170: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x8021C174: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x8021C178: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x8021C17C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x8021C180: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x8021C184: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x8021C188: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x8021C18C: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x8021C190: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x8021C194: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x8021C198: jr          $ra
    // 0x8021C19C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x8021C19C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void D_8021EA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021EA64: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8021EA68: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x8021EA6C: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x8021EA70: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8021EA74: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8021EA78: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x8021EA7C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021EA80: beq         $t3, $t6, L_8021EB34
    if (ctx->r11 == ctx->r14) {
        // 0x8021EA84: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8021EB34;
    }
    // 0x8021EA84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021EA88: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8021EA8C: lh          $t0, 0x0($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X0);
    // 0x8021EA90: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x8021EA94: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8021EA98: addiu       $a1, $zero, -0x3
    ctx->r5 = ADD32(0, -0X3);
    // 0x8021EA9C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
L_8021EAA0:
    // 0x8021EAA0: beql        $v0, $t0, L_8021EAB4
    if (ctx->r2 == ctx->r8) {
        // 0x8021EAA4: lw          $at, 0x0($t2)
        ctx->r1 = MEM_W(ctx->r10, 0X0);
            goto L_8021EAB4;
    }
    goto skip_0;
    // 0x8021EAA4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    skip_0:
    // 0x8021EAA8: bne         $a1, $t0, L_8021EAE4
    if (ctx->r5 != ctx->r8) {
        // 0x8021EAAC: sll         $t4, $t0, 4
        ctx->r12 = S32(ctx->r8 << 4);
            goto L_8021EAE4;
    }
    // 0x8021EAAC: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x8021EAB0: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
L_8021EAB4:
    // 0x8021EAB4: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8021EAB8: lw          $t8, 0x4($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X4);
    // 0x8021EABC: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x8021EAC0: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x8021EAC4: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x8021EAC8: lw          $t8, 0xC($t2)
    ctx->r24 = MEM_W(ctx->r10, 0XC);
    // 0x8021EACC: sw          $zero, 0x8($t1)
    MEM_W(0X8, ctx->r9) = 0;
    // 0x8021EAD0: sw          $t8, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r24;
    // 0x8021EAD4: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x8021EAD8: lh          $t9, 0x0($t2)
    ctx->r25 = MEM_H(ctx->r10, 0X0);
    // 0x8021EADC: b           L_8021EB20
    // 0x8021EAE0: addu        $a3, $a3, $t9
    ctx->r7 = ADD32(ctx->r7, ctx->r25);
        goto L_8021EB20;
    // 0x8021EAE0: addu        $a3, $a3, $t9
    ctx->r7 = ADD32(ctx->r7, ctx->r25);
L_8021EAE4:
    // 0x8021EAE4: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8021EAE8: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8021EAEC: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8021EAF0: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x8021EAF4: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x8021EAF8: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x8021EAFC: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x8021EB00: lw          $t7, 0xC($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XC);
    // 0x8021EB04: sw          $t7, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r15;
    // 0x8021EB08: lh          $t8, 0x0($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X0);
    // 0x8021EB0C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x8021EB10: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8021EB14: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x8021EB18: lh          $t6, 0x0($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X0);
    // 0x8021EB1C: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
L_8021EB20:
    // 0x8021EB20: lh          $t0, 0x2($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X2);
    // 0x8021EB24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021EB28: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8021EB2C: bne         $t3, $t0, L_8021EAA0
    if (ctx->r11 != ctx->r8) {
        // 0x8021EB30: addiu       $t1, $t1, 0x10
        ctx->r9 = ADD32(ctx->r9, 0X10);
            goto L_8021EAA0;
    }
    // 0x8021EB30: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
L_8021EB34:
    // 0x8021EB34: sh          $v1, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r3;
    // 0x8021EB38: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x8021EB3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8021EB40: jr          $ra
    // 0x8021EB44: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x8021EB44: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
;}
RECOMP_FUNC void D_8020500C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020500C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80205010: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80205014: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80205018: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8020501C: lw          $s0, 0x4($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X4);
    // 0x80205020: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80205024: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80205028: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8020502C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80205030: beq         $s0, $zero, L_80205088
    if (ctx->r16 == 0) {
        // 0x80205034: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80205088;
    }
    // 0x80205034: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80205038: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
L_8020503C:
    // 0x8020503C: addu        $t6, $a3, $a1
    ctx->r14 = ADD32(ctx->r7, ctx->r5);
    // 0x80205040: sltu        $at, $a3, $v0
    ctx->r1 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x80205044: bne         $at, $zero, L_80205088
    if (ctx->r1 != 0) {
        // 0x80205048: addiu       $v1, $v0, 0x800
        ctx->r3 = ADD32(ctx->r2, 0X800);
            goto L_80205088;
    }
    // 0x80205048: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x8020504C: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80205050: bne         $at, $zero, L_8020507C
    if (ctx->r1 != 0) {
        // 0x80205054: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_8020507C;
    }
    // 0x80205054: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x80205058: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x8020505C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80205060: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80205064: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x80205068: subu        $a0, $t9, $v0
    ctx->r4 = SUB32(ctx->r25, ctx->r2);
    // 0x8020506C: jal         0x802375F0
    // 0x80205070: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x80205070: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    after_0:
    // 0x80205074: b           L_802051A4
    // 0x80205078: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802051A4;
    // 0x80205078: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020507C:
    // 0x8020507C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80205080: bnel        $s0, $zero, L_8020503C
    if (ctx->r16 != 0) {
        // 0x80205084: lw          $v0, 0x8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X8);
            goto L_8020503C;
    }
    goto skip_0;
    // 0x80205084: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    skip_0:
L_80205088:
    // 0x80205088: lw          $s0, 0x8($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X8);
    // 0x8020508C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205090: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80205094: bne         $s0, $zero, L_802050B8
    if (ctx->r16 != 0) {
        // 0x80205098: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802050B8;
    }
    // 0x80205098: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8020509C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802050A0: addiu       $a2, $zero, 0x21A
    ctx->r6 = ADD32(0, 0X21A);
    // 0x802050A4: jal         0x80231C9C
    // 0x802050A8: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x802050A8: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_1:
    // 0x802050AC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802050B0: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802050B4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
L_802050B8:
    // 0x802050B8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x802050BC: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x802050C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802050C4: jal         0x80237120
    // 0x802050C8: sw          $t1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r9;
    static_3_80237120(rdram, ctx);
        goto after_2;
    // 0x802050C8: sw          $t1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r9;
    after_2:
    // 0x802050CC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802050D0: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802050D4: beq         $s1, $zero, L_802050F4
    if (ctx->r17 == 0) {
        // 0x802050D8: lw          $a3, 0x40($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X40);
            goto L_802050F4;
    }
    // 0x802050D8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x802050DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802050E0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802050E4: jal         0x80237150
    // 0x802050E8: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    static_3_80237150(rdram, ctx);
        goto after_3;
    // 0x802050E8: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_3:
    // 0x802050EC: b           L_80205120
    // 0x802050F0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
        goto L_80205120;
    // 0x802050F0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
L_802050F4:
    // 0x802050F4: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x802050F8: beql        $v0, $zero, L_80205118
    if (ctx->r2 == 0) {
        // 0x802050FC: sw          $s0, 0x4($t0)
        MEM_W(0X4, ctx->r8) = ctx->r16;
            goto L_80205118;
    }
    goto skip_1;
    // 0x802050FC: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
    skip_1:
    // 0x80205100: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
    // 0x80205104: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80205108: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x8020510C: b           L_80205120
    // 0x80205110: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
        goto L_80205120;
    // 0x80205110: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x80205114: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
L_80205118:
    // 0x80205118: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8020511C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_80205120:
    // 0x80205120: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
    // 0x80205124: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x80205128: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8020512C: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x80205130: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
    // 0x80205134: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80205138: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8020513C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80205140: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80205144: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x80205148: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8020514C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80205150: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80205154: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x80205158: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8020515C: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x80205160: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80205164: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80205168: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x8020516C: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80205170: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80205174: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80205178: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8020517C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80205180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80205184: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80205188: jal         0x80237E10
    // 0x8020518C: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    func_80237E10(rdram, ctx);
        goto after_4;
    // 0x8020518C: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    after_4:
    // 0x80205190: jal         0x802375F0
    // 0x80205194: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_5;
    // 0x80205194: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80205198: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8020519C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x802051A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802051A4:
    // 0x802051A4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x802051A8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x802051AC: jr          $ra
    // 0x802051B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802051B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8022A1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A1C0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022A1C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A1C8: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8022A1CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022A1D0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8022A1D4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8022A1D8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022A1DC: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8022A1E0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8022A1E4: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A1E8: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8022A1EC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8022A1F0: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A1F4: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8022A1F8: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x8022A1FC: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8022A200: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8022A204: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8022A208: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8022A20C: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8022A210: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8022A214: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A218: mul.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8022A21C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x8022A220: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A224: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8022A228: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8022A22C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8022A230: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8022A234: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8022A238: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x8022A23C: lwc1        $f16, 0x20($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A240: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8022A244: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x8022A248: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A24C: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8022A250: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x8022A254: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A258: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8022A25C: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8022A260: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8022A264: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8022A268: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8022A26C: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8022A270: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8022A274: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8022A278: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8022A27C: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8022A280: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x8022A284: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8022A288: jal         0x80228DE0
    // 0x8022A28C: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x8022A28C: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8022A290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A294: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8022A298: jr          $ra
    // 0x8022A29C: nop

    return;
    // 0x8022A29C: nop

;}
RECOMP_FUNC void D_802EC83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC8BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC8C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC8C4: beq         $a0, $zero, L_802EC8F4
    if (ctx->r4 == 0) {
        // 0x802EC8C8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EC8F4;
    }
    // 0x802EC8C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EC8CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EC8D0: jal         0x8031C514
    // 0x802EC8D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EC8D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EC8D8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EC8DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC8E0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EC8E4: beql        $t7, $zero, L_802EC8F8
    if (ctx->r15 == 0) {
        // 0x802EC8E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EC8F8;
    }
    goto skip_0;
    // 0x802EC8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EC8EC: jal         0x802C681C
    // 0x802EC8F0: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EC8F0: nop

    after_1:
L_802EC8F4:
    // 0x802EC8F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EC8F8:
    // 0x802EC8F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC8FC: jr          $ra
    // 0x802EC900: nop

    return;
    // 0x802EC900: nop

;}
RECOMP_FUNC void D_8020B4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020B4B0: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8020B4B4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8020B4B8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8020B4BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020B4C0: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8020B4C4: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x8020B4C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8020B4CC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8020B4D0: beq         $a0, $at, L_8020C148
    if (ctx->r4 == ctx->r1) {
        // 0x8020B4D4: sdc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
            goto L_8020C148;
    }
    // 0x8020B4D4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8020B4D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020B4DC: beq         $a0, $at, L_8020B68C
    if (ctx->r4 == ctx->r1) {
        // 0x8020B4E0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8020B68C;
    }
    // 0x8020B4E0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020B4E4: bne         $a0, $at, L_8020CE24
    if (ctx->r4 != ctx->r1) {
        // 0x8020B4E8: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CE24;
    }
    // 0x8020B4E8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020B4EC: bgez        $s0, L_8020B4FC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8020B4F0: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8020B4FC;
    }
    // 0x8020B4F0: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8020B4F4: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8020B4F8: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_8020B4FC:
    // 0x8020B4FC: blez        $a0, L_8020CE24
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8020B500: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE24;
    }
    // 0x8020B500: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020B504: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020B508: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8020B50C: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x8020B510: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020B514: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8020B518: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8020B51C: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020B520: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8020B524: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8020B528: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8020B52C: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x8020B530: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020B534: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8020B538: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x8020B53C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020B540: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x8020B544: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8020B548: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x8020B54C: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8020B550: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8020B554: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
L_8020B558:
    // 0x8020B558: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020B55C: addiu       $t3, $sp, 0xAC
    ctx->r11 = ADD32(ctx->r29, 0XAC);
    // 0x8020B560: addiu       $t4, $sp, 0xA8
    ctx->r12 = ADD32(ctx->r29, 0XA8);
    // 0x8020B564: andi        $t1, $v0, 0x3E
    ctx->r9 = ctx->r2 & 0X3E;
    // 0x8020B568: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8020B56C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8020B570: andi        $t6, $v0, 0xF800
    ctx->r14 = ctx->r2 & 0XF800;
    // 0x8020B574: sra         $t7, $t6, 11
    ctx->r15 = S32(SIGNED(ctx->r14) >> 11);
    // 0x8020B578: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020B57C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8020B580: andi        $t8, $v0, 0x7C0
    ctx->r24 = ctx->r2 & 0X7C0;
    // 0x8020B584: sra         $t9, $t8, 6
    ctx->r25 = S32(SIGNED(ctx->r24) >> 6);
    // 0x8020B588: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020B58C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020B590: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8020B594: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8020B598: sw          $t0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r8;
    // 0x8020B59C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8020B5A0: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8020B5A4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x8020B5A8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020B5AC: div.s       $f14, $f18, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8020B5B0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8020B5B4: jal         0x80209914
    // 0x8020B5B8: div.s       $f12, $f10, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f22.fl);
    static_3_80209914(rdram, ctx);
        goto after_0;
    // 0x8020B5B8: div.s       $f12, $f10, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f22.fl);
    after_0:
    // 0x8020B5BC: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8020B5C0: lwc1        $f16, 0xD4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8020B5C4: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020B5C8: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B5CC: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8020B5D0: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8020B5D4: mul.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020B5D8: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8020B5DC: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8020B5E0: mul.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020B5E4: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8020B5E8: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8020B5EC: addiu       $t5, $sp, 0x7C
    ctx->r13 = ADD32(ctx->r29, 0X7C);
    // 0x8020B5F0: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
    // 0x8020B5F4: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8020B5F8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8020B5FC: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x8020B600: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8020B604: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8020B608: jal         0x802096F4
    // 0x8020B60C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    static_3_802096F4(rdram, ctx);
        goto after_1;
    // 0x8020B60C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_1:
    // 0x8020B610: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8020B614: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8020B618: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8020B61C: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8020B620: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x8020B624: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8020B628: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8020B62C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020B630: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020B634: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8020B638: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    // 0x8020B63C: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x8020B640: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020B644: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x8020B648: lhu         $t7, -0x2($s0)
    ctx->r15 = MEM_HU(ctx->r16, -0X2);
    // 0x8020B64C: trunc.w.s   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8020B650: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8020B654: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8020B658: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020B65C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8020B660: sll         $t2, $t1, 11
    ctx->r10 = S32(ctx->r9 << 11);
    // 0x8020B664: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x8020B668: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8020B66C: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x8020B670: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8020B674: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020B678: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020B67C: bne         $t0, $a0, L_8020B558
    if (ctx->r8 != ctx->r4) {
        // 0x8020B680: sh          $t2, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r10;
            goto L_8020B558;
    }
    // 0x8020B680: sh          $t2, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r10;
    // 0x8020B684: b           L_8020CE28
    // 0x8020B688: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE28;
    // 0x8020B688: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020B68C:
    // 0x8020B68C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020B690: beq         $a1, $at, L_8020B6B0
    if (ctx->r5 == ctx->r1) {
        // 0x8020B694: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020B6B0;
    }
    // 0x8020B694: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020B698: beq         $a1, $at, L_8020BB9C
    if (ctx->r5 == ctx->r1) {
        // 0x8020B69C: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020BB9C;
    }
    // 0x8020B69C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020B6A0: beq         $a1, $at, L_8020BE6C
    if (ctx->r5 == ctx->r1) {
        // 0x8020B6A4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020BE6C;
    }
    // 0x8020B6A4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020B6A8: b           L_8020CE28
    // 0x8020B6AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE28;
    // 0x8020B6AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020B6B0:
    // 0x8020B6B0: blez        $s0, L_8020CE24
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020B6B4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CE24;
    }
    // 0x8020B6B4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020B6B8: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020B6BC: beq         $a1, $zero, L_8020B7F4
    if (ctx->r5 == 0) {
        // 0x8020B6C0: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020B7F4;
    }
    // 0x8020B6C0: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020B6C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020B6C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020B6CC: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020B6D0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8020B6D4: sub.s       $f10, $f16, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x8020B6D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020B6DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020B6E0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020B6E4: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020B6E8: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8020B6EC: mul.s       $f2, $f18, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020B6F0: nop

    // 0x8020B6F4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020B6F8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020B6FC: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020B700: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020B704: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020B708: nop

    // 0x8020B70C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B710: mul.s       $f22, $f20, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B714: beql        $a0, $t0, L_8020B79C
    if (ctx->r4 == ctx->r8) {
        // 0x8020B718: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020B79C;
    }
    goto skip_0;
    // 0x8020B718: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_0:
    // 0x8020B71C: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020B720:
    // 0x8020B720: andi        $t3, $v1, 0xF1
    ctx->r11 = ctx->r3 & 0XF1;
    // 0x8020B724: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020B728: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020B72C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B730: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020B734: nop

    // 0x8020B738: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x8020B73C: or          $v1, $t3, $t1
    ctx->r3 = ctx->r11 | ctx->r9;
    // 0x8020B740: andi        $t8, $v1, 0xE0
    ctx->r24 = ctx->r3 & 0XE0;
    // 0x8020B744: sra         $t2, $t8, 5
    ctx->r10 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020B748: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8020B74C: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020B750: andi        $t4, $v1, 0x1F
    ctx->r12 = ctx->r3 & 0X1F;
    // 0x8020B754: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B758: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020B75C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B760: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020B764: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B768: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8020B76C: nop

    // 0x8020B770: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x8020B774: or          $t3, $t4, $t9
    ctx->r11 = ctx->r12 | ctx->r25;
    // 0x8020B778: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020B77C: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020B780: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020B784: sb          $t3, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r11;
    // 0x8020B788: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B78C: mul.s       $f22, $f20, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B790: bnel        $a0, $t0, L_8020B720
    if (ctx->r4 != ctx->r8) {
        // 0x8020B794: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020B720;
    }
    goto skip_1;
    // 0x8020B794: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_1:
    // 0x8020B798: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020B79C:
    // 0x8020B79C: andi        $t3, $v1, 0xF1
    ctx->r11 = ctx->r3 & 0XF1;
    // 0x8020B7A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020B7A4: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B7A8: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020B7AC: nop

    // 0x8020B7B0: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x8020B7B4: or          $v1, $t3, $t1
    ctx->r3 = ctx->r11 | ctx->r9;
    // 0x8020B7B8: andi        $t8, $v1, 0xE0
    ctx->r24 = ctx->r3 & 0XE0;
    // 0x8020B7BC: sra         $t2, $t8, 5
    ctx->r10 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020B7C0: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8020B7C4: andi        $t4, $v1, 0x1F
    ctx->r12 = ctx->r3 & 0X1F;
    // 0x8020B7C8: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020B7CC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B7D0: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B7D4: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020B7D8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B7DC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8020B7E0: nop

    // 0x8020B7E4: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x8020B7E8: or          $t3, $t4, $t9
    ctx->r11 = ctx->r12 | ctx->r25;
    // 0x8020B7EC: sb          $t3, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r11;
    // 0x8020B7F0: beq         $t0, $s0, L_8020CE24
    if (ctx->r8 == ctx->r16) {
        // 0x8020B7F4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE24;
    }
L_8020B7F4:
    // 0x8020B7F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020B7F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B7FC: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020B800: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020B804: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8020B808: sub.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x8020B80C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020B810: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8020B814: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020B818: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8020B81C: nop

    // 0x8020B820: mul.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020B824: nop

    // 0x8020B828: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020B82C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020B830: andi        $t1, $v1, 0xE
    ctx->r9 = ctx->r3 & 0XE;
    // 0x8020B834: beq         $t0, $s0, L_8020B9EC
    if (ctx->r8 == ctx->r16) {
        // 0x8020B838: sra         $t7, $t1, 1
        ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8020B9EC;
    }
    // 0x8020B838: sra         $t7, $t1, 1
    ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
L_8020B83C:
    // 0x8020B83C: mtc1        $t7, $f22
    ctx->f22.u32l = ctx->r15;
    // 0x8020B840: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020B844: andi        $t8, $v1, 0xF1
    ctx->r24 = ctx->r3 & 0XF1;
    // 0x8020B848: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020B84C: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020B850: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020B854: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020B858: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020B85C: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020B860: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020B864: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020B868: mfc1        $t5, $f22
    ctx->r13 = (int32_t)ctx->f22.u32l;
    // 0x8020B86C: nop

    // 0x8020B870: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8020B874: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x8020B878: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020B87C: sra         $t3, $t9, 5
    ctx->r11 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020B880: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020B884: sb          $v1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r3;
    // 0x8020B888: andi        $t1, $v1, 0x1F
    ctx->r9 = ctx->r3 & 0X1F;
    // 0x8020B88C: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020B890: andi        $t6, $a0, 0xE
    ctx->r14 = ctx->r4 & 0XE;
    // 0x8020B894: sra         $t4, $t6, 1
    ctx->r12 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8020B898: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8020B89C: andi        $t9, $a0, 0xF1
    ctx->r25 = ctx->r4 & 0XF1;
    // 0x8020B8A0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020B8A4: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020B8A8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B8AC: add.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f12.fl;
    // 0x8020B8B0: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B8B4: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020B8B8: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020B8BC: mfc1        $t2, $f22
    ctx->r10 = (int32_t)ctx->f22.u32l;
    // 0x8020B8C0: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B8C4: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020B8C8: or          $t8, $t1, $t5
    ctx->r24 = ctx->r9 | ctx->r13;
    // 0x8020B8CC: sb          $t8, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r24;
    // 0x8020B8D0: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020B8D4: nop

    // 0x8020B8D8: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x8020B8DC: or          $a0, $t9, $t2
    ctx->r4 = ctx->r25 | ctx->r10;
    // 0x8020B8E0: andi        $t5, $a0, 0xE0
    ctx->r13 = ctx->r4 & 0XE0;
    // 0x8020B8E4: sra         $t8, $t5, 5
    ctx->r24 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020B8E8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8020B8EC: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020B8F0: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x8020B8F4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B8F8: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020B8FC: mtc1        $t1, $f22
    ctx->f22.u32l = ctx->r9;
    // 0x8020B900: andi        $t6, $a0, 0x1F
    ctx->r14 = ctx->r4 & 0X1F;
    // 0x8020B904: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020B908: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020B90C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B910: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020B914: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020B918: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B91C: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020B920: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x8020B924: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020B928: sll         $t7, $t3, 5
    ctx->r15 = S32(ctx->r11 << 5);
    // 0x8020B92C: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8020B930: sb          $t9, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r25;
    // 0x8020B934: mfc1        $t4, $f22
    ctx->r12 = (int32_t)ctx->f22.u32l;
    // 0x8020B938: nop

    // 0x8020B93C: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8020B940: or          $a1, $t5, $t3
    ctx->r5 = ctx->r13 | ctx->r11;
    // 0x8020B944: andi        $t7, $a1, 0xE0
    ctx->r15 = ctx->r5 & 0XE0;
    // 0x8020B948: sra         $t9, $t7, 5
    ctx->r25 = S32(SIGNED(ctx->r15) >> 5);
    // 0x8020B94C: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x8020B950: andi        $t3, $a2, 0xE
    ctx->r11 = ctx->r6 & 0XE;
    // 0x8020B954: sra         $t6, $t3, 1
    ctx->r14 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020B958: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020B95C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8020B960: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020B964: andi        $t2, $a1, 0x1F
    ctx->r10 = ctx->r5 & 0X1F;
    // 0x8020B968: andi        $t7, $a2, 0xF1
    ctx->r15 = ctx->r6 & 0XF1;
    // 0x8020B96C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B970: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020B974: add.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f12.fl;
    // 0x8020B978: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B97C: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020B980: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020B984: mfc1        $t8, $f22
    ctx->r24 = (int32_t)ctx->f22.u32l;
    // 0x8020B988: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B98C: sll         $t4, $t8, 5
    ctx->r12 = S32(ctx->r24 << 5);
    // 0x8020B990: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8020B994: sb          $t5, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r13;
    // 0x8020B998: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020B99C: nop

    // 0x8020B9A0: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020B9A4: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x8020B9A8: andi        $t4, $a2, 0xE0
    ctx->r12 = ctx->r6 & 0XE0;
    // 0x8020B9AC: sra         $t5, $t4, 5
    ctx->r13 = S32(SIGNED(ctx->r12) >> 5);
    // 0x8020B9B0: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020B9B4: andi        $t3, $a2, 0x1F
    ctx->r11 = ctx->r6 & 0X1F;
    // 0x8020B9B8: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020B9BC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B9C0: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B9C4: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020B9C8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B9CC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020B9D0: nop

    // 0x8020B9D4: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x8020B9D8: or          $t7, $t3, $t1
    ctx->r15 = ctx->r11 | ctx->r9;
    // 0x8020B9DC: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x8020B9E0: andi        $t1, $v1, 0xE
    ctx->r9 = ctx->r3 & 0XE;
    // 0x8020B9E4: bne         $t0, $s0, L_8020B83C
    if (ctx->r8 != ctx->r16) {
        // 0x8020B9E8: sra         $t7, $t1, 1
        ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8020B83C;
    }
    // 0x8020B9E8: sra         $t7, $t1, 1
    ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
L_8020B9EC:
    // 0x8020B9EC: mtc1        $t7, $f22
    ctx->f22.u32l = ctx->r15;
    // 0x8020B9F0: andi        $t8, $v1, 0xF1
    ctx->r24 = ctx->r3 & 0XF1;
    // 0x8020B9F4: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020B9F8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020B9FC: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020BA00: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020BA04: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020BA08: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BA0C: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BA10: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BA14: mfc1        $t5, $f22
    ctx->r13 = (int32_t)ctx->f22.u32l;
    // 0x8020BA18: nop

    // 0x8020BA1C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8020BA20: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x8020BA24: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020BA28: sra         $t3, $t9, 5
    ctx->r11 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020BA2C: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020BA30: andi        $t6, $a0, 0xE
    ctx->r14 = ctx->r4 & 0XE;
    // 0x8020BA34: sra         $t4, $t6, 1
    ctx->r12 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8020BA38: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BA3C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8020BA40: andi        $t1, $v1, 0x1F
    ctx->r9 = ctx->r3 & 0X1F;
    // 0x8020BA44: andi        $t9, $a0, 0xF1
    ctx->r25 = ctx->r4 & 0XF1;
    // 0x8020BA48: sb          $v1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r3;
    // 0x8020BA4C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BA50: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BA54: nop

    // 0x8020BA58: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BA5C: add.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f12.fl;
    // 0x8020BA60: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BA64: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BA68: mfc1        $t2, $f22
    ctx->r10 = (int32_t)ctx->f22.u32l;
    // 0x8020BA6C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BA70: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020BA74: or          $t8, $t1, $t5
    ctx->r24 = ctx->r9 | ctx->r13;
    // 0x8020BA78: sb          $t8, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r24;
    // 0x8020BA7C: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020BA80: nop

    // 0x8020BA84: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x8020BA88: or          $a0, $t9, $t2
    ctx->r4 = ctx->r25 | ctx->r10;
    // 0x8020BA8C: andi        $t5, $a0, 0xE0
    ctx->r13 = ctx->r4 & 0XE0;
    // 0x8020BA90: sra         $t8, $t5, 5
    ctx->r24 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020BA94: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8020BA98: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x8020BA9C: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020BAA0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BAA4: mtc1        $t1, $f22
    ctx->f22.u32l = ctx->r9;
    // 0x8020BAA8: andi        $t6, $a0, 0x1F
    ctx->r14 = ctx->r4 & 0X1F;
    // 0x8020BAAC: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020BAB0: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020BAB4: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BAB8: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BABC: nop

    // 0x8020BAC0: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BAC4: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020BAC8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BACC: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BAD0: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x8020BAD4: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BAD8: sll         $t7, $t3, 5
    ctx->r15 = S32(ctx->r11 << 5);
    // 0x8020BADC: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8020BAE0: sb          $t9, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r25;
    // 0x8020BAE4: mfc1        $t4, $f22
    ctx->r12 = (int32_t)ctx->f22.u32l;
    // 0x8020BAE8: nop

    // 0x8020BAEC: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8020BAF0: or          $a1, $t5, $t3
    ctx->r5 = ctx->r13 | ctx->r11;
    // 0x8020BAF4: andi        $t7, $a1, 0xE0
    ctx->r15 = ctx->r5 & 0XE0;
    // 0x8020BAF8: sra         $t9, $t7, 5
    ctx->r25 = S32(SIGNED(ctx->r15) >> 5);
    // 0x8020BAFC: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x8020BB00: andi        $t3, $a2, 0xE
    ctx->r11 = ctx->r6 & 0XE;
    // 0x8020BB04: sra         $t6, $t3, 1
    ctx->r14 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020BB08: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BB0C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8020BB10: andi        $t2, $a1, 0x1F
    ctx->r10 = ctx->r5 & 0X1F;
    // 0x8020BB14: andi        $t7, $a2, 0xF1
    ctx->r15 = ctx->r6 & 0XF1;
    // 0x8020BB18: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020BB1C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BB20: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BB24: nop

    // 0x8020BB28: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BB2C: add.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f12.fl;
    // 0x8020BB30: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BB34: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BB38: mfc1        $t8, $f22
    ctx->r24 = (int32_t)ctx->f22.u32l;
    // 0x8020BB3C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BB40: sll         $t4, $t8, 5
    ctx->r12 = S32(ctx->r24 << 5);
    // 0x8020BB44: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8020BB48: sb          $t5, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r13;
    // 0x8020BB4C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020BB50: nop

    // 0x8020BB54: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020BB58: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x8020BB5C: andi        $t4, $a2, 0xE0
    ctx->r12 = ctx->r6 & 0XE0;
    // 0x8020BB60: sra         $t5, $t4, 5
    ctx->r13 = S32(SIGNED(ctx->r12) >> 5);
    // 0x8020BB64: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020BB68: andi        $t3, $a2, 0x1F
    ctx->r11 = ctx->r6 & 0X1F;
    // 0x8020BB6C: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020BB70: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BB74: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BB78: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020BB7C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BB80: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BB84: nop

    // 0x8020BB88: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x8020BB8C: or          $t7, $t3, $t1
    ctx->r15 = ctx->r11 | ctx->r9;
    // 0x8020BB90: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x8020BB94: b           L_8020CE28
    // 0x8020BB98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE28;
    // 0x8020BB98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020BB9C:
    // 0x8020BB9C: blez        $s0, L_8020CE24
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020BBA0: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CE24;
    }
    // 0x8020BBA0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020BBA4: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020BBA8: beq         $a1, $zero, L_8020BC74
    if (ctx->r5 == 0) {
        // 0x8020BBAC: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020BC74;
    }
    // 0x8020BBAC: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020BBB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020BBB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020BBB8: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020BBBC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020BBC0: sub.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x8020BBC4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020BBC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020BBCC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020BBD0: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020BBD4: nop

    // 0x8020BBD8: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8020BBDC: nop

    // 0x8020BBE0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020BBE4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020BBE8: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020BBEC: sra         $t2, $t8, 4
    ctx->r10 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020BBF0: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8020BBF4: nop

    // 0x8020BBF8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020BBFC: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020BC00: beql        $a0, $t0, L_8020BC50
    if (ctx->r4 == ctx->r8) {
        // 0x8020BC04: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020BC50;
    }
    goto skip_2;
    // 0x8020BC04: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_2:
    // 0x8020BC08: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020BC0C:
    // 0x8020BC0C: andi        $t4, $v1, 0xF
    ctx->r12 = ctx->r3 & 0XF;
    // 0x8020BC10: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x8020BC14: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020BC18: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BC1C: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020BC20: sra         $t2, $t8, 4
    ctx->r10 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020BC24: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8020BC28: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BC2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020BC30: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020BC34: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x8020BC38: or          $t1, $t4, $t3
    ctx->r9 = ctx->r12 | ctx->r11;
    // 0x8020BC3C: sb          $t1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r9;
    // 0x8020BC40: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020BC44: bnel        $a0, $t0, L_8020BC0C
    if (ctx->r4 != ctx->r8) {
        // 0x8020BC48: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020BC0C;
    }
    goto skip_3;
    // 0x8020BC48: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_3:
    // 0x8020BC4C: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020BC50:
    // 0x8020BC50: andi        $t4, $v1, 0xF
    ctx->r12 = ctx->r3 & 0XF;
    // 0x8020BC54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020BC58: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BC5C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BC60: nop

    // 0x8020BC64: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x8020BC68: or          $t1, $t4, $t3
    ctx->r9 = ctx->r12 | ctx->r11;
    // 0x8020BC6C: sb          $t1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r9;
    // 0x8020BC70: beq         $t0, $s0, L_8020CE24
    if (ctx->r8 == ctx->r16) {
        // 0x8020BC74: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE24;
    }
L_8020BC74:
    // 0x8020BC74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020BC78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020BC7C: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020BC80: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020BC84: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020BC88: sub.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x8020BC8C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020BC90: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020BC94: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020BC98: nop

    // 0x8020BC9C: mul.s       $f2, $f4, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8020BCA0: nop

    // 0x8020BCA4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020BCA8: beq         $t0, $s0, L_8020BD90
    if (ctx->r8 == ctx->r16) {
        // 0x8020BCAC: lbu         $v1, 0x0($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X0);
            goto L_8020BD90;
    }
    // 0x8020BCAC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
L_8020BCB0:
    // 0x8020BCB0: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020BCB4: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020BCB8: andi        $t7, $v1, 0xF0
    ctx->r15 = ctx->r3 & 0XF0;
    // 0x8020BCBC: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020BCC0: mtc1        $t8, $f22
    ctx->f22.u32l = ctx->r24;
    // 0x8020BCC4: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020BCC8: andi        $t1, $a0, 0xF0
    ctx->r9 = ctx->r4 & 0XF0;
    // 0x8020BCCC: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BCD0: sra         $t7, $t1, 4
    ctx->r15 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8020BCD4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8020BCD8: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020BCDC: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8020BCE0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BCE4: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BCE8: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020BCEC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020BCF0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020BCF4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020BCF8: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BCFC: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BD00: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BD04: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BD08: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x8020BD0C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BD10: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020BD14: or          $t3, $t2, $t4
    ctx->r11 = ctx->r10 | ctx->r12;
    // 0x8020BD18: sb          $t3, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r11;
    // 0x8020BD1C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BD20: andi        $t3, $a1, 0xF0
    ctx->r11 = ctx->r5 & 0XF0;
    // 0x8020BD24: sra         $t1, $t3, 4
    ctx->r9 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020BD28: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020BD2C: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020BD30: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020BD34: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BD38: sb          $t4, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r12;
    // 0x8020BD3C: andi        $t4, $a2, 0xF0
    ctx->r12 = ctx->r6 & 0XF0;
    // 0x8020BD40: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020BD44: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020BD48: andi        $t1, $a2, 0xF
    ctx->r9 = ctx->r6 & 0XF;
    // 0x8020BD4C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BD50: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BD54: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BD58: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BD5C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BD60: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BD64: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BD68: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BD6C: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x8020BD70: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020BD74: sb          $t2, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r10;
    // 0x8020BD78: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x8020BD7C: nop

    // 0x8020BD80: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8020BD84: or          $t8, $t1, $t7
    ctx->r24 = ctx->r9 | ctx->r15;
    // 0x8020BD88: bne         $t0, $s0, L_8020BCB0
    if (ctx->r8 != ctx->r16) {
        // 0x8020BD8C: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_8020BCB0;
    }
    // 0x8020BD8C: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
L_8020BD90:
    // 0x8020BD90: andi        $t7, $v1, 0xF0
    ctx->r15 = ctx->r3 & 0XF0;
    // 0x8020BD94: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020BD98: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020BD9C: mtc1        $t8, $f22
    ctx->f22.u32l = ctx->r24;
    // 0x8020BDA0: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020BDA4: andi        $t1, $a0, 0xF0
    ctx->r9 = ctx->r4 & 0XF0;
    // 0x8020BDA8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BDAC: sra         $t7, $t1, 4
    ctx->r15 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8020BDB0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8020BDB4: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020BDB8: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020BDBC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BDC0: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BDC4: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8020BDC8: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020BDCC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020BDD0: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BDD4: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BDD8: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BDDC: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BDE0: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x8020BDE4: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BDE8: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020BDEC: or          $t3, $t2, $t4
    ctx->r11 = ctx->r10 | ctx->r12;
    // 0x8020BDF0: sb          $t3, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r11;
    // 0x8020BDF4: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BDF8: andi        $t3, $a1, 0xF0
    ctx->r11 = ctx->r5 & 0XF0;
    // 0x8020BDFC: sra         $t1, $t3, 4
    ctx->r9 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020BE00: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020BE04: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020BE08: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020BE0C: sb          $t4, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r12;
    // 0x8020BE10: andi        $t4, $a2, 0xF0
    ctx->r12 = ctx->r6 & 0XF0;
    // 0x8020BE14: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BE18: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020BE1C: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020BE20: andi        $t1, $a2, 0xF
    ctx->r9 = ctx->r6 & 0XF;
    // 0x8020BE24: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BE28: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BE2C: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BE30: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BE34: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BE38: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BE3C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BE40: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BE44: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x8020BE48: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020BE4C: sb          $t2, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r10;
    // 0x8020BE50: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x8020BE54: nop

    // 0x8020BE58: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8020BE5C: or          $t8, $t1, $t7
    ctx->r24 = ctx->r9 | ctx->r15;
    // 0x8020BE60: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x8020BE64: b           L_8020CE28
    // 0x8020BE68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE28;
    // 0x8020BE68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020BE6C:
    // 0x8020BE6C: bgez        $s0, L_8020BE7C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8020BE70: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8020BE7C;
    }
    // 0x8020BE70: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8020BE74: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8020BE78: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_8020BE7C:
    // 0x8020BE7C: blez        $a0, L_8020CE24
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8020BE80: andi        $a1, $a0, 0x3
        ctx->r5 = ctx->r4 & 0X3;
            goto L_8020CE24;
    }
    // 0x8020BE80: andi        $a1, $a0, 0x3
    ctx->r5 = ctx->r4 & 0X3;
    // 0x8020BE84: beq         $a1, $zero, L_8020BF50
    if (ctx->r5 == 0) {
        // 0x8020BE88: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020BF50;
    }
    // 0x8020BE88: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020BE8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020BE90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020BE94: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020BE98: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020BE9C: sub.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x8020BEA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020BEA4: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x8020BEA8: addu        $s0, $s1, $t2
    ctx->r16 = ADD32(ctx->r17, ctx->r10);
    // 0x8020BEAC: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020BEB0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020BEB4: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8020BEB8: nop

    // 0x8020BEBC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020BEC0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020BEC4: andi        $t4, $v0, 0xFF00
    ctx->r12 = ctx->r2 & 0XFF00;
    // 0x8020BEC8: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020BECC: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020BED0: nop

    // 0x8020BED4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020BED8: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020BEDC: beql        $v1, $t0, L_8020BF2C
    if (ctx->r3 == ctx->r8) {
        // 0x8020BEE0: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020BF2C;
    }
    goto skip_4;
    // 0x8020BEE0: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_4:
    // 0x8020BEE4: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020BEE8:
    // 0x8020BEE8: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8020BEEC: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8020BEF0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020BEF4: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BEF8: andi        $t4, $v0, 0xFF00
    ctx->r12 = ctx->r2 & 0XFF00;
    // 0x8020BEFC: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020BF00: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020BF04: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020BF08: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020BF0C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020BF10: sll         $t7, $t1, 8
    ctx->r15 = S32(ctx->r9 << 8);
    // 0x8020BF14: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8020BF18: sh          $t8, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r24;
    // 0x8020BF1C: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020BF20: bnel        $v1, $t0, L_8020BEE8
    if (ctx->r3 != ctx->r8) {
        // 0x8020BF24: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020BEE8;
    }
    goto skip_5;
    // 0x8020BF24: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_5:
    // 0x8020BF28: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020BF2C:
    // 0x8020BF2C: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8020BF30: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020BF34: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BF38: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020BF3C: nop

    // 0x8020BF40: sll         $t7, $t1, 8
    ctx->r15 = S32(ctx->r9 << 8);
    // 0x8020BF44: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8020BF48: sh          $t8, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r24;
    // 0x8020BF4C: beq         $t0, $a0, L_8020CE24
    if (ctx->r8 == ctx->r4) {
        // 0x8020BF50: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE24;
    }
L_8020BF50:
    // 0x8020BF50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020BF54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020BF58: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020BF5C: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020BF60: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020BF64: sub.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x8020BF68: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020BF6C: sll         $t2, $a0, 1
    ctx->r10 = S32(ctx->r4 << 1);
    // 0x8020BF70: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x8020BF74: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020BF78: addu        $s0, $s1, $t4
    ctx->r16 = ADD32(ctx->r17, ctx->r12);
    // 0x8020BF7C: addu        $a2, $t2, $s1
    ctx->r6 = ADD32(ctx->r10, ctx->r17);
    // 0x8020BF80: mul.s       $f2, $f4, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8020BF84: nop

    // 0x8020BF88: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8020BF8C: beq         $s0, $a2, L_8020C070
    if (ctx->r16 == ctx->r6) {
        // 0x8020BF90: lhu         $v0, -0x8($s0)
        ctx->r2 = MEM_HU(ctx->r16, -0X8);
            goto L_8020C070;
    }
    // 0x8020BF90: lhu         $v0, -0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X8);
L_8020BF94:
    // 0x8020BF94: lhu         $v1, -0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X6);
    // 0x8020BF98: lhu         $a0, -0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, -0X4);
    // 0x8020BF9C: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020BFA0: sra         $t6, $t3, 8
    ctx->r14 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020BFA4: mtc1        $t6, $f22
    ctx->f22.u32l = ctx->r14;
    // 0x8020BFA8: lhu         $a1, -0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, -0X2);
    // 0x8020BFAC: andi        $t4, $v1, 0xFF00
    ctx->r12 = ctx->r3 & 0XFF00;
    // 0x8020BFB0: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BFB4: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020BFB8: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020BFBC: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8020BFC0: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020BFC4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BFC8: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BFCC: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x8020BFD0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8020BFD4: lhu         $v0, -0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X8);
    // 0x8020BFD8: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BFDC: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BFE0: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BFE4: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BFE8: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020BFEC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BFF0: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8020BFF4: or          $t2, $t9, $t8
    ctx->r10 = ctx->r25 | ctx->r24;
    // 0x8020BFF8: sh          $t2, -0x10($s0)
    MEM_H(-0X10, ctx->r16) = ctx->r10;
    // 0x8020BFFC: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C000: andi        $t2, $a0, 0xFF00
    ctx->r10 = ctx->r4 & 0XFF00;
    // 0x8020C004: sra         $t4, $t2, 8
    ctx->r12 = S32(SIGNED(ctx->r10) >> 8);
    // 0x8020C008: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8020C00C: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x8020C010: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020C014: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C018: sh          $t8, -0xE($s0)
    MEM_H(-0XE, ctx->r16) = ctx->r24;
    // 0x8020C01C: andi        $t8, $a1, 0xFF00
    ctx->r24 = ctx->r5 & 0XFF00;
    // 0x8020C020: sra         $t2, $t8, 8
    ctx->r10 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020C024: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x8020C028: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8020C02C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C030: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020C034: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C038: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020C03C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C040: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020C044: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C048: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C04C: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8020C050: or          $t9, $t3, $t6
    ctx->r25 = ctx->r11 | ctx->r14;
    // 0x8020C054: sh          $t9, -0xC($s0)
    MEM_H(-0XC, ctx->r16) = ctx->r25;
    // 0x8020C058: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020C05C: nop

    // 0x8020C060: sll         $t3, $t7, 8
    ctx->r11 = S32(ctx->r15 << 8);
    // 0x8020C064: or          $t6, $t4, $t3
    ctx->r14 = ctx->r12 | ctx->r11;
    // 0x8020C068: bne         $s0, $a2, L_8020BF94
    if (ctx->r16 != ctx->r6) {
        // 0x8020C06C: sh          $t6, -0xA($s0)
        MEM_H(-0XA, ctx->r16) = ctx->r14;
            goto L_8020BF94;
    }
    // 0x8020C06C: sh          $t6, -0xA($s0)
    MEM_H(-0XA, ctx->r16) = ctx->r14;
L_8020C070:
    // 0x8020C070: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020C074: sra         $t6, $t3, 8
    ctx->r14 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020C078: lhu         $v1, -0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X6);
    // 0x8020C07C: mtc1        $t6, $f22
    ctx->f22.u32l = ctx->r14;
    // 0x8020C080: lhu         $a0, -0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, -0X4);
    // 0x8020C084: andi        $t4, $v1, 0xFF00
    ctx->r12 = ctx->r3 & 0XFF00;
    // 0x8020C088: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020C08C: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020C090: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020C094: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8020C098: lhu         $a1, -0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, -0X2);
    // 0x8020C09C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C0A0: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020C0A4: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020C0A8: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x8020C0AC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C0B0: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020C0B4: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C0B8: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C0BC: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020C0C0: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C0C4: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8020C0C8: or          $t2, $t9, $t8
    ctx->r10 = ctx->r25 | ctx->r24;
    // 0x8020C0CC: sh          $t2, -0x8($s0)
    MEM_H(-0X8, ctx->r16) = ctx->r10;
    // 0x8020C0D0: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C0D4: andi        $t2, $a0, 0xFF00
    ctx->r10 = ctx->r4 & 0XFF00;
    // 0x8020C0D8: sra         $t4, $t2, 8
    ctx->r12 = S32(SIGNED(ctx->r10) >> 8);
    // 0x8020C0DC: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x8020C0E0: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8020C0E4: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020C0E8: sh          $t8, -0x6($s0)
    MEM_H(-0X6, ctx->r16) = ctx->r24;
    // 0x8020C0EC: andi        $t8, $a1, 0xFF00
    ctx->r24 = ctx->r5 & 0XFF00;
    // 0x8020C0F0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C0F4: sra         $t2, $t8, 8
    ctx->r10 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020C0F8: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x8020C0FC: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8020C100: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020C104: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C108: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C10C: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020C110: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C114: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020C118: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C11C: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C120: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8020C124: or          $t9, $t3, $t6
    ctx->r25 = ctx->r11 | ctx->r14;
    // 0x8020C128: sh          $t9, -0x4($s0)
    MEM_H(-0X4, ctx->r16) = ctx->r25;
    // 0x8020C12C: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020C130: nop

    // 0x8020C134: sll         $t3, $t7, 8
    ctx->r11 = S32(ctx->r15 << 8);
    // 0x8020C138: or          $t6, $t4, $t3
    ctx->r14 = ctx->r12 | ctx->r11;
    // 0x8020C13C: sh          $t6, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r14;
    // 0x8020C140: b           L_8020CE28
    // 0x8020C144: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE28;
    // 0x8020C144: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020C148:
    // 0x8020C148: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020C14C: beq         $a1, $at, L_8020C16C
    if (ctx->r5 == ctx->r1) {
        // 0x8020C150: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020C16C;
    }
    // 0x8020C150: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020C154: beq         $a1, $at, L_8020C60C
    if (ctx->r5 == ctx->r1) {
        // 0x8020C158: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020C60C;
    }
    // 0x8020C158: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020C15C: beq         $a1, $at, L_8020CA14
    if (ctx->r5 == ctx->r1) {
        // 0x8020C160: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CA14;
    }
    // 0x8020C160: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020C164: b           L_8020CE28
    // 0x8020C168: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE28;
    // 0x8020C168: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020C16C:
    // 0x8020C16C: blez        $s0, L_8020CE24
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020C170: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CE24;
    }
    // 0x8020C170: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020C174: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020C178: beq         $a1, $zero, L_8020C2A0
    if (ctx->r5 == 0) {
        // 0x8020C17C: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020C2A0;
    }
    // 0x8020C17C: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020C180: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020C184: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020C188: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020C18C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020C190: sub.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x8020C194: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020C198: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020C19C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020C1A0: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020C1A4: nop

    // 0x8020C1A8: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8020C1AC: nop

    // 0x8020C1B0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020C1B4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020C1B8: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020C1BC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020C1C0: nop

    // 0x8020C1C4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C1C8: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C1CC: beq         $a0, $t0, L_8020C248
    if (ctx->r4 == ctx->r8) {
        // 0x8020C1D0: add.s       $f22, $f16, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f2.fl;
            goto L_8020C248;
    }
    // 0x8020C1D0: add.s       $f22, $f16, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f2.fl;
L_8020C1D4:
    // 0x8020C1D4: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C1D8: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020C1DC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020C1E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020C1E4: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C1E8: nop

    // 0x8020C1EC: andi        $t5, $t1, 0xF
    ctx->r13 = ctx->r9 & 0XF;
    // 0x8020C1F0: or          $v1, $t8, $t5
    ctx->r3 = ctx->r24 | ctx->r13;
    // 0x8020C1F4: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020C1F8: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020C1FC: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020C200: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020C204: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020C208: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C20C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020C210: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020C214: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020C218: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C21C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C220: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C224: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C228: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C22C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C230: nop

    // 0x8020C234: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x8020C238: add.s       $f22, $f16, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C23C: or          $t5, $t6, $t8
    ctx->r13 = ctx->r14 | ctx->r24;
    // 0x8020C240: bne         $a0, $t0, L_8020C1D4
    if (ctx->r4 != ctx->r8) {
        // 0x8020C244: sb          $t5, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r13;
            goto L_8020C1D4;
    }
    // 0x8020C244: sb          $t5, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r13;
L_8020C248:
    // 0x8020C248: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C24C: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020C250: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020C254: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C258: nop

    // 0x8020C25C: andi        $t5, $t1, 0xF
    ctx->r13 = ctx->r9 & 0XF;
    // 0x8020C260: or          $v1, $t8, $t5
    ctx->r3 = ctx->r24 | ctx->r13;
    // 0x8020C264: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020C268: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020C26C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020C270: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020C274: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020C278: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C27C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C280: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C284: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C288: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C28C: nop

    // 0x8020C290: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x8020C294: or          $t5, $t6, $t8
    ctx->r13 = ctx->r14 | ctx->r24;
    // 0x8020C298: sb          $t5, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r13;
    // 0x8020C29C: beq         $t0, $s0, L_8020CE24
    if (ctx->r8 == ctx->r16) {
        // 0x8020C2A0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE24;
    }
L_8020C2A0:
    // 0x8020C2A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020C2A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020C2A8: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020C2AC: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020C2B0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020C2B4: sub.s       $f8, $f18, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x8020C2B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020C2BC: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020C2C0: mul.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020C2C4: nop

    // 0x8020C2C8: mul.s       $f2, $f16, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020C2CC: nop

    // 0x8020C2D0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020C2D4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020C2D8: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x8020C2DC: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020C2E0: nop

    // 0x8020C2E4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020C2E8: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020C2EC: beq         $t0, $s0, L_8020C488
    if (ctx->r8 == ctx->r16) {
        // 0x8020C2F0: add.s       $f22, $f14, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f14.fl + ctx->f2.fl;
            goto L_8020C488;
    }
    // 0x8020C2F0: add.s       $f22, $f14, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f14.fl + ctx->f2.fl;
L_8020C2F4:
    // 0x8020C2F4: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C2F8: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020C2FC: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020C300: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020C304: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C308: andi        $t1, $a0, 0xF
    ctx->r9 = ctx->r4 & 0XF;
    // 0x8020C30C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020C310: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x8020C314: or          $v1, $t4, $t2
    ctx->r3 = ctx->r12 | ctx->r10;
    // 0x8020C318: andi        $t6, $v1, 0xF0
    ctx->r14 = ctx->r3 & 0XF0;
    // 0x8020C31C: sra         $t8, $t6, 4
    ctx->r24 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8020C320: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020C324: andi        $t5, $v1, 0xF
    ctx->r13 = ctx->r3 & 0XF;
    // 0x8020C328: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8020C32C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C330: andi        $t6, $a0, 0xF0
    ctx->r14 = ctx->r4 & 0XF0;
    // 0x8020C334: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020C338: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8020C33C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020C340: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C344: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C348: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020C34C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C350: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C354: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C358: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C35C: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020C360: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C364: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020C368: or          $t2, $t5, $t4
    ctx->r10 = ctx->r13 | ctx->r12;
    // 0x8020C36C: sb          $t2, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r10;
    // 0x8020C370: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C374: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8020C378: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8020C37C: andi        $t3, $t7, 0xF
    ctx->r11 = ctx->r15 & 0XF;
    // 0x8020C380: or          $a0, $t6, $t3
    ctx->r4 = ctx->r14 | ctx->r11;
    // 0x8020C384: andi        $t5, $a0, 0xF0
    ctx->r13 = ctx->r4 & 0XF0;
    // 0x8020C388: sra         $t4, $t5, 4
    ctx->r12 = S32(SIGNED(ctx->r13) >> 4);
    // 0x8020C38C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020C390: andi        $t2, $a0, 0xF
    ctx->r10 = ctx->r4 & 0XF;
    // 0x8020C394: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8020C398: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C39C: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020C3A0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C3A4: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C3A8: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C3AC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C3B0: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C3B4: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C3B8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020C3BC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C3C0: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x8020C3C4: or          $t3, $t2, $t6
    ctx->r11 = ctx->r10 | ctx->r14;
    // 0x8020C3C8: sb          $t3, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r11;
    // 0x8020C3CC: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C3D0: andi        $t7, $a2, 0xF
    ctx->r15 = ctx->r6 & 0XF;
    // 0x8020C3D4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8020C3D8: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x8020C3DC: or          $a1, $t5, $t8
    ctx->r5 = ctx->r13 | ctx->r24;
    // 0x8020C3E0: andi        $t2, $a1, 0xF0
    ctx->r10 = ctx->r5 & 0XF0;
    // 0x8020C3E4: sra         $t6, $t2, 4
    ctx->r14 = S32(SIGNED(ctx->r10) >> 4);
    // 0x8020C3E8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020C3EC: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020C3F0: andi        $t2, $a2, 0xF0
    ctx->r10 = ctx->r6 & 0XF0;
    // 0x8020C3F4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C3F8: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020C3FC: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x8020C400: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020C404: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C408: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C40C: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C410: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C414: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C418: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C41C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8020C420: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C424: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x8020C428: or          $t8, $t3, $t5
    ctx->r24 = ctx->r11 | ctx->r13;
    // 0x8020C42C: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x8020C430: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C434: nop

    // 0x8020C438: andi        $t4, $t9, 0xF
    ctx->r12 = ctx->r25 & 0XF;
    // 0x8020C43C: or          $a2, $t2, $t4
    ctx->r6 = ctx->r10 | ctx->r12;
    // 0x8020C440: andi        $t3, $a2, 0xF0
    ctx->r11 = ctx->r6 & 0XF0;
    // 0x8020C444: sra         $t5, $t3, 4
    ctx->r13 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020C448: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020C44C: andi        $t8, $a2, 0xF
    ctx->r24 = ctx->r6 & 0XF;
    // 0x8020C450: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020C454: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C458: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020C45C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C460: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C464: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C468: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020C46C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C470: nop

    // 0x8020C474: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020C478: add.s       $f22, $f14, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x8020C47C: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020C480: bne         $t0, $s0, L_8020C2F4
    if (ctx->r8 != ctx->r16) {
        // 0x8020C484: sb          $t4, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r12;
            goto L_8020C2F4;
    }
    // 0x8020C484: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
L_8020C488:
    // 0x8020C488: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C48C: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020C490: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020C494: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020C498: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C49C: andi        $t1, $a0, 0xF
    ctx->r9 = ctx->r4 & 0XF;
    // 0x8020C4A0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020C4A4: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x8020C4A8: or          $v1, $t4, $t2
    ctx->r3 = ctx->r12 | ctx->r10;
    // 0x8020C4AC: andi        $t6, $v1, 0xF0
    ctx->r14 = ctx->r3 & 0XF0;
    // 0x8020C4B0: sra         $t8, $t6, 4
    ctx->r24 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8020C4B4: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020C4B8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C4BC: andi        $t5, $v1, 0xF
    ctx->r13 = ctx->r3 & 0XF;
    // 0x8020C4C0: andi        $t6, $a0, 0xF0
    ctx->r14 = ctx->r4 & 0XF0;
    // 0x8020C4C4: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8020C4C8: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020C4CC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C4D0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020C4D4: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C4D8: nop

    // 0x8020C4DC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C4E0: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C4E4: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C4E8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C4EC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C4F0: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020C4F4: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C4F8: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020C4FC: or          $t2, $t5, $t4
    ctx->r10 = ctx->r13 | ctx->r12;
    // 0x8020C500: andi        $t3, $t7, 0xF
    ctx->r11 = ctx->r15 & 0XF;
    // 0x8020C504: or          $a0, $t6, $t3
    ctx->r4 = ctx->r14 | ctx->r11;
    // 0x8020C508: andi        $t5, $a0, 0xF0
    ctx->r13 = ctx->r4 & 0XF0;
    // 0x8020C50C: sra         $t4, $t5, 4
    ctx->r12 = S32(SIGNED(ctx->r13) >> 4);
    // 0x8020C510: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020C514: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8020C518: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8020C51C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C520: sb          $t2, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r10;
    // 0x8020C524: andi        $t2, $a0, 0xF
    ctx->r10 = ctx->r4 & 0XF;
    // 0x8020C528: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8020C52C: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020C530: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C534: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C538: nop

    // 0x8020C53C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C540: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C544: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C548: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C54C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020C550: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C554: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x8020C558: or          $t3, $t2, $t6
    ctx->r11 = ctx->r10 | ctx->r14;
    // 0x8020C55C: andi        $t7, $a2, 0xF
    ctx->r15 = ctx->r6 & 0XF;
    // 0x8020C560: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C564: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8020C568: sb          $t3, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r11;
    // 0x8020C56C: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x8020C570: or          $a1, $t5, $t8
    ctx->r5 = ctx->r13 | ctx->r24;
    // 0x8020C574: andi        $t2, $a1, 0xF0
    ctx->r10 = ctx->r5 & 0XF0;
    // 0x8020C578: sra         $t6, $t2, 4
    ctx->r14 = S32(SIGNED(ctx->r10) >> 4);
    // 0x8020C57C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020C580: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C584: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020C588: andi        $t2, $a2, 0xF0
    ctx->r10 = ctx->r6 & 0XF0;
    // 0x8020C58C: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020C590: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C594: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C598: nop

    // 0x8020C59C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C5A0: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C5A4: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C5A8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C5AC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C5B0: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8020C5B4: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C5B8: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x8020C5BC: or          $t8, $t3, $t5
    ctx->r24 = ctx->r11 | ctx->r13;
    // 0x8020C5C0: andi        $t4, $t9, 0xF
    ctx->r12 = ctx->r25 & 0XF;
    // 0x8020C5C4: or          $a2, $t2, $t4
    ctx->r6 = ctx->r10 | ctx->r12;
    // 0x8020C5C8: andi        $t3, $a2, 0xF0
    ctx->r11 = ctx->r6 & 0XF0;
    // 0x8020C5CC: sra         $t5, $t3, 4
    ctx->r13 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020C5D0: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020C5D4: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x8020C5D8: andi        $t8, $a2, 0xF
    ctx->r24 = ctx->r6 & 0XF;
    // 0x8020C5DC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C5E0: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020C5E4: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C5E8: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C5EC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C5F0: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C5F4: nop

    // 0x8020C5F8: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020C5FC: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020C600: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
    // 0x8020C604: b           L_8020CE28
    // 0x8020C608: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE28;
    // 0x8020C608: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020C60C:
    // 0x8020C60C: blez        $s0, L_8020CE24
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020C610: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CE24;
    }
    // 0x8020C610: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020C614: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020C618: beq         $a1, $zero, L_8020C710
    if (ctx->r5 == 0) {
        // 0x8020C61C: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020C710;
    }
    // 0x8020C61C: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020C620: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020C624: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020C628: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020C62C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020C630: sub.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x8020C634: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020C638: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020C63C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020C640: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8020C644: nop

    // 0x8020C648: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020C64C: nop

L_8020C650:
    // 0x8020C650: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8020C654: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020C658: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020C65C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020C660: bgez        $t1, L_8020C674
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020C664: cvt.s.w     $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8020C674;
    }
    // 0x8020C664: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C668: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020C66C: nop

    // 0x8020C670: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_8020C674:
    // 0x8020C674: mul.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020C678: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020C67C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020C680: add.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8020C684: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020C688: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020C68C: nop

    // 0x8020C690: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8020C694: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020C698: nop

    // 0x8020C69C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020C6A0: beql        $t5, $zero, L_8020C6F0
    if (ctx->r13 == 0) {
        // 0x8020C6A4: mfc1        $t5, $f10
        ctx->r13 = (int32_t)ctx->f10.u32l;
            goto L_8020C6F0;
    }
    goto skip_6;
    // 0x8020C6A4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    skip_6:
    // 0x8020C6A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020C6AC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020C6B0: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8020C6B4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020C6B8: nop

    // 0x8020C6BC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020C6C0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020C6C4: nop

    // 0x8020C6C8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020C6CC: bne         $t5, $zero, L_8020C6E4
    if (ctx->r13 != 0) {
        // 0x8020C6D0: nop
    
            goto L_8020C6E4;
    }
    // 0x8020C6D0: nop

    // 0x8020C6D4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8020C6D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020C6DC: b           L_8020C6FC
    // 0x8020C6E0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020C6FC;
    // 0x8020C6E0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020C6E4:
    // 0x8020C6E4: b           L_8020C6FC
    // 0x8020C6E8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020C6FC;
    // 0x8020C6E8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020C6EC: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
L_8020C6F0:
    // 0x8020C6F0: nop

    // 0x8020C6F4: bltz        $t5, L_8020C6E4
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020C6F8: nop
    
            goto L_8020C6E4;
    }
    // 0x8020C6F8: nop

L_8020C6FC:
    // 0x8020C6FC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020C700: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x8020C704: bne         $v1, $t0, L_8020C650
    if (ctx->r3 != ctx->r8) {
        // 0x8020C708: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8020C650;
    }
    // 0x8020C708: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020C70C: beq         $t0, $s0, L_8020CE24
    if (ctx->r8 == ctx->r16) {
        // 0x8020C710: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE24;
    }
L_8020C710:
    // 0x8020C710: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020C714: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020C718: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020C71C: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020C720: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020C724: sub.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x8020C728: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020C72C: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020C730: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020C734: nop

    // 0x8020C738: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8020C73C: nop

L_8020C740:
    // 0x8020C740: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8020C744: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020C748: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020C74C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8020C750: bgez        $t7, L_8020C764
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020C754: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020C764;
    }
    // 0x8020C754: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020C758: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020C75C: nop

    // 0x8020C760: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020C764:
    // 0x8020C764: mul.s       $f18, $f20, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020C768: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020C76C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020C770: add.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C774: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020C778: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020C77C: nop

    // 0x8020C780: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020C784: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020C788: nop

    // 0x8020C78C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020C790: beql        $t9, $zero, L_8020C7E0
    if (ctx->r25 == 0) {
        // 0x8020C794: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_8020C7E0;
    }
    goto skip_7;
    // 0x8020C794: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_7:
    // 0x8020C798: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020C79C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020C7A0: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8020C7A4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020C7A8: nop

    // 0x8020C7AC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020C7B0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020C7B4: nop

    // 0x8020C7B8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020C7BC: bne         $t9, $zero, L_8020C7D4
    if (ctx->r25 != 0) {
        // 0x8020C7C0: nop
    
            goto L_8020C7D4;
    }
    // 0x8020C7C0: nop

    // 0x8020C7C4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8020C7C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020C7CC: b           L_8020C7EC
    // 0x8020C7D0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020C7EC;
    // 0x8020C7D0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020C7D4:
    // 0x8020C7D4: b           L_8020C7EC
    // 0x8020C7D8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020C7EC;
    // 0x8020C7D8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020C7DC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_8020C7E0:
    // 0x8020C7E0: nop

    // 0x8020C7E4: bltz        $t9, L_8020C7D4
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020C7E8: nop
    
            goto L_8020C7D4;
    }
    // 0x8020C7E8: nop

L_8020C7EC:
    // 0x8020C7EC: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x8020C7F0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020C7F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020C7F8: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020C7FC: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8020C800: bgez        $t8, L_8020C814
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020C804: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8020C814;
    }
    // 0x8020C804: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C808: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020C80C: nop

    // 0x8020C810: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_8020C814:
    // 0x8020C814: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020C818: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020C81C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020C820: add.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x8020C824: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020C828: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020C82C: nop

    // 0x8020C830: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020C834: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020C838: nop

    // 0x8020C83C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020C840: beql        $t4, $zero, L_8020C890
    if (ctx->r12 == 0) {
        // 0x8020C844: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_8020C890;
    }
    goto skip_8;
    // 0x8020C844: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_8:
    // 0x8020C848: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020C84C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020C850: sub.s       $f8, $f18, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8020C854: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020C858: nop

    // 0x8020C85C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020C860: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020C864: nop

    // 0x8020C868: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020C86C: bne         $t4, $zero, L_8020C884
    if (ctx->r12 != 0) {
        // 0x8020C870: nop
    
            goto L_8020C884;
    }
    // 0x8020C870: nop

    // 0x8020C874: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8020C878: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020C87C: b           L_8020C89C
    // 0x8020C880: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020C89C;
    // 0x8020C880: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020C884:
    // 0x8020C884: b           L_8020C89C
    // 0x8020C888: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020C89C;
    // 0x8020C888: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020C88C: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_8020C890:
    // 0x8020C890: nop

    // 0x8020C894: bltz        $t4, L_8020C884
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020C898: nop
    
            goto L_8020C884;
    }
    // 0x8020C898: nop

L_8020C89C:
    // 0x8020C89C: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x8020C8A0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020C8A4: sb          $t4, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r12;
    // 0x8020C8A8: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8020C8AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020C8B0: bgez        $t1, L_8020C8C4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020C8B4: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020C8C4;
    }
    // 0x8020C8B4: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020C8B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020C8BC: nop

    // 0x8020C8C0: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
L_8020C8C4:
    // 0x8020C8C4: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020C8C8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020C8CC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020C8D0: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8020C8D4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020C8D8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020C8DC: nop

    // 0x8020C8E0: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020C8E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020C8E8: nop

    // 0x8020C8EC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020C8F0: beql        $t5, $zero, L_8020C940
    if (ctx->r13 == 0) {
        // 0x8020C8F4: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_8020C940;
    }
    goto skip_9;
    // 0x8020C8F4: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_9:
    // 0x8020C8F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020C8FC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020C900: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8020C904: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020C908: nop

    // 0x8020C90C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020C910: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020C914: nop

    // 0x8020C918: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020C91C: bne         $t5, $zero, L_8020C934
    if (ctx->r13 != 0) {
        // 0x8020C920: nop
    
            goto L_8020C934;
    }
    // 0x8020C920: nop

    // 0x8020C924: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8020C928: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020C92C: b           L_8020C94C
    // 0x8020C930: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020C94C;
    // 0x8020C930: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020C934:
    // 0x8020C934: b           L_8020C94C
    // 0x8020C938: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020C94C;
    // 0x8020C938: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020C93C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_8020C940:
    // 0x8020C940: nop

    // 0x8020C944: bltz        $t5, L_8020C934
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020C948: nop
    
            goto L_8020C934;
    }
    // 0x8020C948: nop

L_8020C94C:
    // 0x8020C94C: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
    // 0x8020C950: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020C954: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x8020C958: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8020C95C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020C960: bgez        $t7, L_8020C974
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020C964: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020C974;
    }
    // 0x8020C964: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020C968: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020C96C: nop

    // 0x8020C970: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8020C974:
    // 0x8020C974: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020C978: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020C97C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020C980: add.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C984: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020C988: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020C98C: nop

    // 0x8020C990: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020C994: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020C998: nop

    // 0x8020C99C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020C9A0: beql        $t9, $zero, L_8020C9F0
    if (ctx->r25 == 0) {
        // 0x8020C9A4: mfc1        $t9, $f4
        ctx->r25 = (int32_t)ctx->f4.u32l;
            goto L_8020C9F0;
    }
    goto skip_10;
    // 0x8020C9A4: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    skip_10:
    // 0x8020C9A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020C9AC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020C9B0: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8020C9B4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020C9B8: nop

    // 0x8020C9BC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020C9C0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020C9C4: nop

    // 0x8020C9C8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020C9CC: bne         $t9, $zero, L_8020C9E4
    if (ctx->r25 != 0) {
        // 0x8020C9D0: nop
    
            goto L_8020C9E4;
    }
    // 0x8020C9D0: nop

    // 0x8020C9D4: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8020C9D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020C9DC: b           L_8020C9FC
    // 0x8020C9E0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020C9FC;
    // 0x8020C9E0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020C9E4:
    // 0x8020C9E4: b           L_8020C9FC
    // 0x8020C9E8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020C9FC;
    // 0x8020C9E8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020C9EC: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
L_8020C9F0:
    // 0x8020C9F0: nop

    // 0x8020C9F4: bltz        $t9, L_8020C9E4
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020C9F8: nop
    
            goto L_8020C9E4;
    }
    // 0x8020C9F8: nop

L_8020C9FC:
    // 0x8020C9FC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020CA00: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x8020CA04: bne         $t0, $s0, L_8020C740
    if (ctx->r8 != ctx->r16) {
        // 0x8020CA08: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8020C740;
    }
    // 0x8020CA08: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020CA0C: b           L_8020CE28
    // 0x8020CA10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE28;
    // 0x8020CA10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020CA14:
    // 0x8020CA14: bgez        $s0, L_8020CA24
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8020CA18: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8020CA24;
    }
    // 0x8020CA18: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8020CA1C: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8020CA20: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_8020CA24:
    // 0x8020CA24: blez        $a0, L_8020CE24
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8020CA28: andi        $a1, $a0, 0x3
        ctx->r5 = ctx->r4 & 0X3;
            goto L_8020CE24;
    }
    // 0x8020CA28: andi        $a1, $a0, 0x3
    ctx->r5 = ctx->r4 & 0X3;
    // 0x8020CA2C: beq         $a1, $zero, L_8020CB24
    if (ctx->r5 == 0) {
        // 0x8020CA30: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020CB24;
    }
    // 0x8020CA30: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020CA34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020CA38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020CA3C: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020CA40: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8020CA44: sub.s       $f8, $f18, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x8020CA48: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8020CA4C: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x8020CA50: addu        $s0, $s1, $t8
    ctx->r16 = ADD32(ctx->r17, ctx->r24);
    // 0x8020CA54: mul.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020CA58: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8020CA5C: mul.s       $f2, $f16, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020CA60: nop

L_8020CA64:
    // 0x8020CA64: lhu         $t2, 0x0($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X0);
    // 0x8020CA68: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020CA6C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CA70: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8020CA74: bgez        $t2, L_8020CA88
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8020CA78: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020CA88;
    }
    // 0x8020CA78: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020CA7C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020CA80: nop

    // 0x8020CA84: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
L_8020CA88:
    // 0x8020CA88: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020CA8C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8020CA90: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CA94: add.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x8020CA98: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020CA9C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8020CAA0: nop

    // 0x8020CAA4: cvt.w.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020CAA8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8020CAAC: nop

    // 0x8020CAB0: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8020CAB4: beql        $t1, $zero, L_8020CB04
    if (ctx->r9 == 0) {
        // 0x8020CAB8: mfc1        $t1, $f16
        ctx->r9 = (int32_t)ctx->f16.u32l;
            goto L_8020CB04;
    }
    goto skip_11;
    // 0x8020CAB8: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    skip_11:
    // 0x8020CABC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020CAC0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8020CAC4: sub.s       $f16, $f6, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8020CAC8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8020CACC: nop

    // 0x8020CAD0: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8020CAD4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8020CAD8: nop

    // 0x8020CADC: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8020CAE0: bne         $t1, $zero, L_8020CAF8
    if (ctx->r9 != 0) {
        // 0x8020CAE4: nop
    
            goto L_8020CAF8;
    }
    // 0x8020CAE4: nop

    // 0x8020CAE8: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8020CAEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CAF0: b           L_8020CB10
    // 0x8020CAF4: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8020CB10;
    // 0x8020CAF4: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8020CAF8:
    // 0x8020CAF8: b           L_8020CB10
    // 0x8020CAFC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8020CB10;
    // 0x8020CAFC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8020CB00: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
L_8020CB04:
    // 0x8020CB04: nop

    // 0x8020CB08: bltz        $t1, L_8020CAF8
    if (SIGNED(ctx->r9) < 0) {
        // 0x8020CB0C: nop
    
            goto L_8020CAF8;
    }
    // 0x8020CB0C: nop

L_8020CB10:
    // 0x8020CB10: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020CB14: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
    // 0x8020CB18: bne         $v0, $t0, L_8020CA64
    if (ctx->r2 != ctx->r8) {
        // 0x8020CB1C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8020CA64;
    }
    // 0x8020CB1C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020CB20: beq         $t0, $a0, L_8020CE24
    if (ctx->r8 == ctx->r4) {
        // 0x8020CB24: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE24;
    }
L_8020CB24:
    // 0x8020CB24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020CB28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020CB2C: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020CB30: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020CB34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8020CB38: sub.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x8020CB3C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8020CB40: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x8020CB44: sll         $t5, $t0, 1
    ctx->r13 = S32(ctx->r8 << 1);
    // 0x8020CB48: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8020CB4C: addu        $s0, $s1, $t5
    ctx->r16 = ADD32(ctx->r17, ctx->r13);
    // 0x8020CB50: addu        $v0, $t3, $s1
    ctx->r2 = ADD32(ctx->r11, ctx->r17);
    // 0x8020CB54: mul.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020CB58: nop

L_8020CB5C:
    // 0x8020CB5C: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x8020CB60: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CB64: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020CB68: bgez        $t7, L_8020CB7C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020CB6C: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8020CB7C;
    }
    // 0x8020CB6C: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020CB70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020CB74: nop

    // 0x8020CB78: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_8020CB7C:
    // 0x8020CB7C: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020CB80: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CB84: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CB88: add.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x8020CB8C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020CB90: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CB94: nop

    // 0x8020CB98: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020CB9C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CBA0: nop

    // 0x8020CBA4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CBA8: beql        $t9, $zero, L_8020CBF8
    if (ctx->r25 == 0) {
        // 0x8020CBAC: mfc1        $t9, $f8
        ctx->r25 = (int32_t)ctx->f8.u32l;
            goto L_8020CBF8;
    }
    goto skip_12;
    // 0x8020CBAC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    skip_12:
    // 0x8020CBB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020CBB4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CBB8: sub.s       $f8, $f18, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8020CBBC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CBC0: nop

    // 0x8020CBC4: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020CBC8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CBCC: nop

    // 0x8020CBD0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CBD4: bne         $t9, $zero, L_8020CBEC
    if (ctx->r25 != 0) {
        // 0x8020CBD8: nop
    
            goto L_8020CBEC;
    }
    // 0x8020CBD8: nop

    // 0x8020CBDC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8020CBE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CBE4: b           L_8020CC04
    // 0x8020CBE8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020CC04;
    // 0x8020CBE8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020CBEC:
    // 0x8020CBEC: b           L_8020CC04
    // 0x8020CBF0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020CC04;
    // 0x8020CBF0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020CBF4: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
L_8020CBF8:
    // 0x8020CBF8: nop

    // 0x8020CBFC: bltz        $t9, L_8020CBEC
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020CC00: nop
    
            goto L_8020CBEC;
    }
    // 0x8020CC00: nop

L_8020CC04:
    // 0x8020CC04: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x8020CC08: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020CC0C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CC10: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8020CC14: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x8020CC18: bgez        $t8, L_8020CC2C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020CC1C: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020CC2C;
    }
    // 0x8020CC1C: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020CC20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020CC24: nop

    // 0x8020CC28: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
L_8020CC2C:
    // 0x8020CC2C: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020CC30: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020CC34: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CC38: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8020CC3C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020CC40: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020CC44: nop

    // 0x8020CC48: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020CC4C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020CC50: nop

    // 0x8020CC54: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020CC58: beql        $t4, $zero, L_8020CCA8
    if (ctx->r12 == 0) {
        // 0x8020CC5C: mfc1        $t4, $f18
        ctx->r12 = (int32_t)ctx->f18.u32l;
            goto L_8020CCA8;
    }
    goto skip_13;
    // 0x8020CC5C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    skip_13:
    // 0x8020CC60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020CC64: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020CC68: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8020CC6C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020CC70: nop

    // 0x8020CC74: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020CC78: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020CC7C: nop

    // 0x8020CC80: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020CC84: bne         $t4, $zero, L_8020CC9C
    if (ctx->r12 != 0) {
        // 0x8020CC88: nop
    
            goto L_8020CC9C;
    }
    // 0x8020CC88: nop

    // 0x8020CC8C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8020CC90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CC94: b           L_8020CCB4
    // 0x8020CC98: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020CCB4;
    // 0x8020CC98: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020CC9C:
    // 0x8020CC9C: b           L_8020CCB4
    // 0x8020CCA0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020CCB4;
    // 0x8020CCA0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020CCA4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
L_8020CCA8:
    // 0x8020CCA8: nop

    // 0x8020CCAC: bltz        $t4, L_8020CC9C
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020CCB0: nop
    
            goto L_8020CC9C;
    }
    // 0x8020CCB0: nop

L_8020CCB4:
    // 0x8020CCB4: lhu         $t1, 0x4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X4);
    // 0x8020CCB8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020CCBC: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
    // 0x8020CCC0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8020CCC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CCC8: bgez        $t1, L_8020CCDC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020CCCC: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020CCDC;
    }
    // 0x8020CCCC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020CCD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020CCD4: nop

    // 0x8020CCD8: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8020CCDC:
    // 0x8020CCDC: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020CCE0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020CCE4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CCE8: add.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020CCEC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020CCF0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020CCF4: nop

    // 0x8020CCF8: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020CCFC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020CD00: nop

    // 0x8020CD04: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020CD08: beql        $t5, $zero, L_8020CD58
    if (ctx->r13 == 0) {
        // 0x8020CD0C: mfc1        $t5, $f4
        ctx->r13 = (int32_t)ctx->f4.u32l;
            goto L_8020CD58;
    }
    goto skip_14;
    // 0x8020CD0C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    skip_14:
    // 0x8020CD10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020CD14: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020CD18: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8020CD1C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020CD20: nop

    // 0x8020CD24: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020CD28: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020CD2C: nop

    // 0x8020CD30: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020CD34: bne         $t5, $zero, L_8020CD4C
    if (ctx->r13 != 0) {
        // 0x8020CD38: nop
    
            goto L_8020CD4C;
    }
    // 0x8020CD38: nop

    // 0x8020CD3C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8020CD40: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CD44: b           L_8020CD64
    // 0x8020CD48: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020CD64;
    // 0x8020CD48: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020CD4C:
    // 0x8020CD4C: b           L_8020CD64
    // 0x8020CD50: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020CD64;
    // 0x8020CD50: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020CD54: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
L_8020CD58:
    // 0x8020CD58: nop

    // 0x8020CD5C: bltz        $t5, L_8020CD4C
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020CD60: nop
    
            goto L_8020CD4C;
    }
    // 0x8020CD60: nop

L_8020CD64:
    // 0x8020CD64: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
    // 0x8020CD68: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020CD6C: sh          $t5, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r13;
    // 0x8020CD70: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8020CD74: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CD78: bgez        $t7, L_8020CD8C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020CD7C: cvt.s.w     $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8020CD8C;
    }
    // 0x8020CD7C: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020CD80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020CD84: nop

    // 0x8020CD88: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_8020CD8C:
    // 0x8020CD8C: mul.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020CD90: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CD94: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CD98: add.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8020CD9C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020CDA0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CDA4: nop

    // 0x8020CDA8: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8020CDAC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CDB0: nop

    // 0x8020CDB4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CDB8: beql        $t9, $zero, L_8020CE08
    if (ctx->r25 == 0) {
        // 0x8020CDBC: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_8020CE08;
    }
    goto skip_15;
    // 0x8020CDBC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_15:
    // 0x8020CDC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020CDC4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CDC8: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8020CDCC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CDD0: nop

    // 0x8020CDD4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020CDD8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CDDC: nop

    // 0x8020CDE0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CDE4: bne         $t9, $zero, L_8020CDFC
    if (ctx->r25 != 0) {
        // 0x8020CDE8: nop
    
            goto L_8020CDFC;
    }
    // 0x8020CDE8: nop

    // 0x8020CDEC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8020CDF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CDF4: b           L_8020CE14
    // 0x8020CDF8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020CE14;
    // 0x8020CDF8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020CDFC:
    // 0x8020CDFC: b           L_8020CE14
    // 0x8020CE00: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020CE14;
    // 0x8020CE00: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020CE04: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_8020CE08:
    // 0x8020CE08: nop

    // 0x8020CE0C: bltz        $t9, L_8020CDFC
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020CE10: nop
    
            goto L_8020CDFC;
    }
    // 0x8020CE10: nop

L_8020CE14:
    // 0x8020CE14: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020CE18: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8020CE1C: bne         $s0, $v0, L_8020CB5C
    if (ctx->r16 != ctx->r2) {
        // 0x8020CE20: sh          $t9, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r25;
            goto L_8020CB5C;
    }
    // 0x8020CE20: sh          $t9, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r25;
L_8020CE24:
    // 0x8020CE24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020CE28:
    // 0x8020CE28: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8020CE2C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8020CE30: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8020CE34: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8020CE38: jr          $ra
    // 0x8020CE3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8020CE3C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void D_802A218C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A220C: jr          $ra
    // 0x802A2210: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    return;
    // 0x802A2210: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802DD094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802DD118: bne         $a0, $zero, L_802DD130
    if (ctx->r4 != 0) {
        // 0x802DD11C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802DD130;
    }
    // 0x802DD11C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DD120: jal         0x802C67EC
    // 0x802DD124: addiu       $a0, $zero, 0xD8
    ctx->r4 = ADD32(0, 0XD8);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802DD124: addiu       $a0, $zero, 0xD8
    ctx->r4 = ADD32(0, 0XD8);
    after_0:
    // 0x802DD128: beq         $v0, $zero, L_802DD148
    if (ctx->r2 == 0) {
        // 0x802DD12C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802DD148;
    }
    // 0x802DD12C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802DD130:
    // 0x802DD130: jal         0x80308668
    // 0x802DD134: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x802DD134: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802DD138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802DD13C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DD140: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802DD144: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
L_802DD148:
    // 0x802DD148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802DD14C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802DD150: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802DD154: jr          $ra
    // 0x802DD158: nop

    return;
    // 0x802DD158: nop

;}
RECOMP_FUNC void D_802E101C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E109C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802E10A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802E10A4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802E10A8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802E10AC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x802E10B0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802E10B4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802E10B8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802E10BC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802E10C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802E10C4: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x802E10C8: jal         0x8021BA90
    // 0x802E10CC: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x802E10CC: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    after_0:
    // 0x802E10D0: ori         $s5, $zero, 0xFFFF
    ctx->r21 = 0 | 0XFFFF;
    // 0x802E10D4: bne         $v0, $s5, L_802E10FC
    if (ctx->r2 != ctx->r21) {
        // 0x802E10D8: sw          $v0, 0x4($s4)
        MEM_W(0X4, ctx->r20) = ctx->r2;
            goto L_802E10FC;
    }
    // 0x802E10D8: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x802E10DC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E10E0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E10E4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802E10E8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802E10EC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E10F0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E10F4: jal         0x80231A24
    // 0x802E10F8: addiu       $a3, $zero, 0x147
    ctx->r7 = ADD32(0, 0X147);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802E10F8: addiu       $a3, $zero, 0x147
    ctx->r7 = ADD32(0, 0X147);
    after_1:
L_802E10FC:
    // 0x802E10FC: lw          $a0, 0x4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X4);
    // 0x802E1100: jal         0x8021ACB0
    // 0x802E1104: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x802E1104: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    after_2:
    // 0x802E1108: lw          $a0, 0x4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X4);
    // 0x802E110C: jal         0x8021B838
    // 0x802E1110: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B838(rdram, ctx);
        goto after_3;
    // 0x802E1110: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802E1114: lw          $t6, 0x300($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X300);
    // 0x802E1118: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802E111C: blez        $t6, L_802E11FC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802E1120: or          $s1, $s2, $zero
        ctx->r17 = ctx->r18 | 0;
            goto L_802E11FC;
    }
    // 0x802E1120: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x802E1124: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
    // 0x802E1128: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
L_802E112C:
    // 0x802E112C: jal         0x8021BA90
    // 0x802E1130: nop

    func_8021BA90(rdram, ctx);
        goto after_4;
    // 0x802E1130: nop

    after_4:
    // 0x802E1134: bne         $v0, $s5, L_802E115C
    if (ctx->r2 != ctx->r21) {
        // 0x802E1138: sw          $v0, 0x290($s0)
        MEM_W(0X290, ctx->r16) = ctx->r2;
            goto L_802E115C;
    }
    // 0x802E1138: sw          $v0, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->r2;
    // 0x802E113C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E1140: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E1144: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802E1148: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802E114C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E1150: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E1154: jal         0x80231A24
    // 0x802E1158: addiu       $a3, $zero, 0x153
    ctx->r7 = ADD32(0, 0X153);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x802E1158: addiu       $a3, $zero, 0x153
    ctx->r7 = ADD32(0, 0X153);
    after_5:
L_802E115C:
    // 0x802E115C: lw          $a0, 0x290($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X290);
    // 0x802E1160: jal         0x8021ACB0
    // 0x802E1164: addiu       $a1, $zero, 0xC5
    ctx->r5 = ADD32(0, 0XC5);
    static_3_8021ACB0(rdram, ctx);
        goto after_6;
    // 0x802E1164: addiu       $a1, $zero, 0xC5
    ctx->r5 = ADD32(0, 0XC5);
    after_6:
    // 0x802E1168: lw          $a0, 0x290($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X290);
    // 0x802E116C: jal         0x8021B838
    // 0x802E1170: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_7;
    // 0x802E1170: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x802E1174: jal         0x8022970C
    // 0x802E1178: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8022970C(rdram, ctx);
        goto after_8;
    // 0x802E1178: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x802E117C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802E1180: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x802E1184: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x802E1188: jal         0x8022A0D0
    // 0x802E118C: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    static_3_8022A0D0(rdram, ctx);
        goto after_9;
    // 0x802E118C: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    after_9:
    // 0x802E1190: lw          $a0, 0x290($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X290);
    // 0x802E1194: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E1198: jal         0x8021B4B0
    // 0x802E119C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_10;
    // 0x802E119C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_10:
    // 0x802E11A0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x802E11A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802E11A8: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x802E11AC: jal         0x80309758
    // 0x802E11B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_11;
    // 0x802E11B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x802E11B4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802E11B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802E11BC: swc1        $f0, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f0.u32l;
    // 0x802E11C0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E11C4: swc1        $f4, 0x2C8($s0)
    MEM_W(0X2C8, ctx->r16) = ctx->f4.u32l;
    // 0x802E11C8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E11CC: lw          $a1, 0x290($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X290);
    // 0x802E11D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802E11D4: jal         0x802AA4A4
    // 0x802E11D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802AA4A4(rdram, ctx);
        goto after_12;
    // 0x802E11D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_12:
    // 0x802E11DC: sw          $v0, 0x2E4($s0)
    MEM_W(0X2E4, ctx->r16) = ctx->r2;
    // 0x802E11E0: lw          $t7, 0x300($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X300);
    // 0x802E11E4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802E11E8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E11EC: slt         $at, $s3, $t7
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x802E11F0: bne         $at, $zero, L_802E112C
    if (ctx->r1 != 0) {
        // 0x802E11F4: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_802E112C;
    }
    // 0x802E11F4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x802E11F8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_802E11FC:
    // 0x802E11FC: jal         0x8021BA90
    // 0x802E1200: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
    func_8021BA90(rdram, ctx);
        goto after_13;
    // 0x802E1200: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
    after_13:
    // 0x802E1204: bne         $v0, $s5, L_802E122C
    if (ctx->r2 != ctx->r21) {
        // 0x802E1208: sw          $v0, 0x280($s4)
        MEM_W(0X280, ctx->r20) = ctx->r2;
            goto L_802E122C;
    }
    // 0x802E1208: sw          $v0, 0x280($s4)
    MEM_W(0X280, ctx->r20) = ctx->r2;
    // 0x802E120C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E1210: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E1214: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802E1218: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802E121C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E1220: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E1224: jal         0x80231A24
    // 0x802E1228: addiu       $a3, $zero, 0x16A
    ctx->r7 = ADD32(0, 0X16A);
    static_3_80231A24(rdram, ctx);
        goto after_14;
    // 0x802E1228: addiu       $a3, $zero, 0x16A
    ctx->r7 = ADD32(0, 0X16A);
    after_14:
L_802E122C:
    // 0x802E122C: lw          $a0, 0x280($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X280);
    // 0x802E1230: jal         0x8021ACB0
    // 0x802E1234: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    static_3_8021ACB0(rdram, ctx);
        goto after_15;
    // 0x802E1234: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    after_15:
    // 0x802E1238: lw          $a0, 0x280($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X280);
    // 0x802E123C: jal         0x8021B838
    // 0x802E1240: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_16;
    // 0x802E1240: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_16:
    // 0x802E1244: jal         0x8022970C
    // 0x802E1248: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8022970C(rdram, ctx);
        goto after_17;
    // 0x802E1248: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_17:
    // 0x802E124C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802E1250: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x802E1254: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x802E1258: jal         0x8022A0D0
    // 0x802E125C: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    static_3_8022A0D0(rdram, ctx);
        goto after_18;
    // 0x802E125C: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    after_18:
    // 0x802E1260: lw          $a0, 0x280($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X280);
    // 0x802E1264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E1268: jal         0x8021B4B0
    // 0x802E126C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_19;
    // 0x802E126C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_19:
    // 0x802E1270: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x802E1274: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802E1278: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x802E127C: jal         0x80309758
    // 0x802E1280: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_20;
    // 0x802E1280: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x802E1284: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802E1288: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802E128C: swc1        $f0, 0x284($s4)
    MEM_W(0X284, ctx->r20) = ctx->f0.u32l;
    // 0x802E1290: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E1294: swc1        $f6, 0x288($s4)
    MEM_W(0X288, ctx->r20) = ctx->f6.u32l;
    // 0x802E1298: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E129C: lw          $a1, 0x280($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X280);
    // 0x802E12A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802E12A4: jal         0x802AA4A4
    // 0x802E12A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802AA4A4(rdram, ctx);
        goto after_21;
    // 0x802E12A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_21:
    // 0x802E12AC: lw          $t8, 0x370($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X370);
    // 0x802E12B0: sw          $v0, 0x28C($s4)
    MEM_W(0X28C, ctx->r20) = ctx->r2;
    // 0x802E12B4: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x802E12B8: blez        $t8, L_802E134C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x802E12BC: or          $s0, $s4, $zero
        ctx->r16 = ctx->r20 | 0;
            goto L_802E134C;
    }
    // 0x802E12BC: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
L_802E12C0:
    // 0x802E12C0: jal         0x8021BA90
    // 0x802E12C4: nop

    func_8021BA90(rdram, ctx);
        goto after_22;
    // 0x802E12C4: nop

    after_22:
    // 0x802E12C8: bne         $v0, $s5, L_802E12F0
    if (ctx->r2 != ctx->r21) {
        // 0x802E12CC: sw          $v0, 0x304($s0)
        MEM_W(0X304, ctx->r16) = ctx->r2;
            goto L_802E12F0;
    }
    // 0x802E12CC: sw          $v0, 0x304($s0)
    MEM_W(0X304, ctx->r16) = ctx->r2;
    // 0x802E12D0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E12D4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E12D8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802E12DC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802E12E0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E12E4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E12E8: jal         0x80231A24
    // 0x802E12EC: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    static_3_80231A24(rdram, ctx);
        goto after_23;
    // 0x802E12EC: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    after_23:
L_802E12F0:
    // 0x802E12F0: lw          $a0, 0x304($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X304);
    // 0x802E12F4: jal         0x8021ACB0
    // 0x802E12F8: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    static_3_8021ACB0(rdram, ctx);
        goto after_24;
    // 0x802E12F8: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    after_24:
    // 0x802E12FC: lw          $a0, 0x304($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X304);
    // 0x802E1300: jal         0x8021B838
    // 0x802E1304: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_25;
    // 0x802E1304: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_25:
    // 0x802E1308: jal         0x8022970C
    // 0x802E130C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8022970C(rdram, ctx);
        goto after_26;
    // 0x802E130C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_26:
    // 0x802E1310: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802E1314: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x802E1318: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x802E131C: jal         0x8022A0D0
    // 0x802E1320: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    static_3_8022A0D0(rdram, ctx);
        goto after_27;
    // 0x802E1320: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    after_27:
    // 0x802E1324: lw          $a0, 0x304($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X304);
    // 0x802E1328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E132C: jal         0x8021B4B0
    // 0x802E1330: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_28;
    // 0x802E1330: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_28:
    // 0x802E1334: lw          $t9, 0x370($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X370);
    // 0x802E1338: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802E133C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E1340: slt         $at, $s3, $t9
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802E1344: bne         $at, $zero, L_802E12C0
    if (ctx->r1 != 0) {
        // 0x802E1348: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_802E12C0;
    }
    // 0x802E1348: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_802E134C:
    // 0x802E134C: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x802E1350: sw          $t0, 0x378($s4)
    MEM_W(0X378, ctx->r20) = ctx->r8;
    // 0x802E1354: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x802E1358: sw          $t1, 0x37C($s4)
    MEM_W(0X37C, ctx->r20) = ctx->r9;
    // 0x802E135C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802E1360: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802E1364: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802E1368: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802E136C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802E1370: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802E1374: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802E1378: jr          $ra
    // 0x802E137C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x802E137C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_8023F8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F8F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023F8F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F8F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8023F8FC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8023F900: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8023F904: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8023F908: beql        $t7, $zero, L_8023F980
    if (ctx->r15 == 0) {
        // 0x8023F90C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023F980;
    }
    goto skip_0;
    // 0x8023F90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F910: jal         0x80237840
    // 0x8023F914: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80237840(rdram, ctx);
        goto after_0;
    // 0x8023F914: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8023F918: beq         $v0, $zero, L_8023F97C
    if (ctx->r2 == 0) {
        // 0x8023F91C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8023F97C;
    }
    // 0x8023F91C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023F920: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8023F924: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x8023F928: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x8023F92C: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x8023F930: lw          $t1, 0xD8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD8);
    // 0x8023F934: sh          $t3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r11;
    // 0x8023F938: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x8023F93C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8023F940: lh          $t4, 0x2A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2A);
    // 0x8023F944: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x8023F948: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023F94C: jal         0x80237738
    // 0x8023F950: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_80237738(rdram, ctx);
        goto after_1;
    // 0x8023F950: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x8023F954: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F958: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F95C: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x8023F960: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8023F964: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8023F968: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8023F96C: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x8023F970: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F974: jalr        $t9
    // 0x8023F978: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8023F978: nop

    after_2:
L_8023F97C:
    // 0x8023F97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F980:
    // 0x8023F980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023F984: jr          $ra
    // 0x8023F988: nop

    return;
    // 0x8023F988: nop

;}
RECOMP_FUNC void D_8023FC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FC90: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x8023FC94: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x8023FC98: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8023FC9C: sw          $a1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r5;
    // 0x8023FCA0: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8023FCA4: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x8023FCA8: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x8023FCAC: sb          $t8, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r24;
    // 0x8023FCB0: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x8023FCB4: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x8023FCB8: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x8023FCBC: sb          $t1, 0x9($t3)
    MEM_B(0X9, ctx->r11) = ctx->r9;
    // 0x8023FCC0: lw          $t5, 0x60($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X60);
    // 0x8023FCC4: lbu         $t4, 0x2($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2);
    // 0x8023FCC8: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x8023FCCC: sb          $t4, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r12;
    // 0x8023FCD0: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8023FCD4: lh          $t7, 0xC($a1)
    ctx->r15 = MEM_H(ctx->r5, 0XC);
    // 0x8023FCD8: addu        $t8, $t9, $v0
    ctx->r24 = ADD32(ctx->r25, ctx->r2);
    // 0x8023FCDC: jr          $ra
    // 0x8023FCE0: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    return;
    // 0x8023FCE0: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
;}
RECOMP_FUNC void D_802EFA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFA88: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802EFA8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EFA90: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802EFA94: nop

    // 0x802EFA98: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802EFA9C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EFAA0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x802EFAA4: jr          $ra
    // 0x802EFAA8: sh          $t7, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r15;
    return;
    // 0x802EFAA8: sh          $t7, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void D_80282B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282C1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282C24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80282C28: beq         $a0, $zero, L_80282C74
    if (ctx->r4 == 0) {
        // 0x80282C2C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80282C74;
    }
    // 0x80282C2C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80282C30: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80282C34: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80282C38: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x80282C3C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80282C40: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80282C44: jal         0x8028D2B8
    // 0x80282C48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028D2B8(rdram, ctx);
        goto after_0;
    // 0x80282C48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80282C4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80282C50: jal         0x803086D4
    // 0x80282C54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_1;
    // 0x80282C54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80282C58: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80282C5C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80282C60: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80282C64: beql        $t8, $zero, L_80282C78
    if (ctx->r24 == 0) {
        // 0x80282C68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80282C78;
    }
    goto skip_0;
    // 0x80282C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80282C6C: jal         0x802C681C
    // 0x80282C70: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x80282C70: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_80282C74:
    // 0x80282C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80282C78:
    // 0x80282C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282C7C: jr          $ra
    // 0x80282C80: nop

    return;
    // 0x80282C80: nop

;}
RECOMP_FUNC void D_802082EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802082EC: beq         $a0, $zero, L_80208304
    if (ctx->r4 == 0) {
        // 0x802082F0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80208304;
    }
    // 0x802082F0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802082F4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
L_802082F8:
    // 0x802082F8: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x802082FC: bnel        $at, $zero, L_802082F8
    if (ctx->r1 != 0) {
        // 0x80208300: addiu       $v1, $v1, 0x20
        ctx->r3 = ADD32(ctx->r3, 0X20);
            goto L_802082F8;
    }
    goto skip_0;
    // 0x80208300: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    skip_0:
L_80208304:
    // 0x80208304: jr          $ra
    // 0x80208308: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80208308: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_8024A6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A6C0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8024A6C4: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8024A6C8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024A6CC: andi        $t7, $a0, 0x3
    ctx->r15 = ctx->r4 & 0X3;
    // 0x8024A6D0: beq         $t7, $zero, L_8024A6E0
    if (ctx->r15 == 0) {
        // 0x8024A6D4: nop
    
            goto L_8024A6E0;
    }
    // 0x8024A6D4: nop

    // 0x8024A6D8: b           L_8024A6E4
    // 0x8024A6DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8024A6E4;
    // 0x8024A6DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024A6E0:
    // 0x8024A6E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024A6E4:
    // 0x8024A6E4: jr          $ra
    // 0x8024A6E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8024A6E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_802D48F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D4970: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802D4974: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D4978: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x802D497C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D4980: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x802D4984: jal         0x8022970C
    // 0x802D4988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802D4988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802D498C: lui         $a1, 0x41B5
    ctx->r5 = S32(0X41B5 << 16);
    // 0x802D4990: lui         $a2, 0x4187
    ctx->r6 = S32(0X4187 << 16);
    // 0x802D4994: lui         $a3, 0x4134
    ctx->r7 = S32(0X4134 << 16);
    // 0x802D4998: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x802D499C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x802D49A0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x802D49A4: jal         0x8022A0D0
    // 0x802D49A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802D49A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802D49AC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x802D49B0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802D49B4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802D49B8: addiu       $a0, $a0, 0x448
    ctx->r4 = ADD32(ctx->r4, 0X448);
    // 0x802D49BC: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802D49C0: jal         0x802C4A20
    // 0x802D49C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_2;
    // 0x802D49C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x802D49C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D49CC: jal         0x802C5830
    // 0x802D49D0: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_3;
    // 0x802D49D0: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_3:
    // 0x802D49D4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D49D8: jal         0x802C580C
    // 0x802D49DC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_4;
    // 0x802D49DC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_4:
    // 0x802D49E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D49E4: jal         0x802C5818
    // 0x802D49E8: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_5;
    // 0x802D49E8: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_5:
    // 0x802D49EC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D49F0: jal         0x802C5824
    // 0x802D49F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_6;
    // 0x802D49F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x802D49F8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802D49FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D4A00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D4A04: jal         0x80309758
    // 0x802D4A08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_7;
    // 0x802D4A08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x802D4A0C: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x802D4A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4A14: jal         0x8022970C
    // 0x802D4A18: swc1        $f0, 0xC2C($t6)
    MEM_W(0XC2C, ctx->r14) = ctx->f0.u32l;
    func_8022970C(rdram, ctx);
        goto after_8;
    // 0x802D4A18: swc1        $f0, 0xC2C($t6)
    MEM_W(0XC2C, ctx->r14) = ctx->f0.u32l;
    after_8:
    // 0x802D4A1C: lui         $a1, 0xC1B5
    ctx->r5 = S32(0XC1B5 << 16);
    // 0x802D4A20: lui         $a2, 0x4187
    ctx->r6 = S32(0X4187 << 16);
    // 0x802D4A24: lui         $a3, 0x4134
    ctx->r7 = S32(0X4134 << 16);
    // 0x802D4A28: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x802D4A2C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x802D4A30: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x802D4A34: jal         0x8022A0D0
    // 0x802D4A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022A0D0(rdram, ctx);
        goto after_9;
    // 0x802D4A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802D4A3C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x802D4A40: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802D4A44: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802D4A48: addiu       $a0, $a0, 0x5DC
    ctx->r4 = ADD32(ctx->r4, 0X5DC);
    // 0x802D4A4C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802D4A50: jal         0x802C4A20
    // 0x802D4A54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802D4A54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x802D4A58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4A5C: jal         0x802C5830
    // 0x802D4A60: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_11;
    // 0x802D4A60: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_11:
    // 0x802D4A64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4A68: jal         0x802C580C
    // 0x802D4A6C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_12;
    // 0x802D4A6C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_12:
    // 0x802D4A70: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4A74: jal         0x802C5818
    // 0x802D4A78: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_13;
    // 0x802D4A78: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_13:
    // 0x802D4A7C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4A80: jal         0x802C5824
    // 0x802D4A84: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_14;
    // 0x802D4A84: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_14:
    // 0x802D4A88: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802D4A8C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D4A90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D4A94: jal         0x80309758
    // 0x802D4A98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_15;
    // 0x802D4A98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x802D4A9C: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x802D4AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4AA4: jal         0x8022970C
    // 0x802D4AA8: swc1        $f0, 0xC30($t7)
    MEM_W(0XC30, ctx->r15) = ctx->f0.u32l;
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x802D4AA8: swc1        $f0, 0xC30($t7)
    MEM_W(0XC30, ctx->r15) = ctx->f0.u32l;
    after_16:
    // 0x802D4AAC: lui         $a1, 0x435B
    ctx->r5 = S32(0X435B << 16);
    // 0x802D4AB0: lui         $a3, 0x4073
    ctx->r7 = S32(0X4073 << 16);
    // 0x802D4AB4: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x802D4AB8: ori         $a1, $a1, 0x4CCD
    ctx->r5 = ctx->r5 | 0X4CCD;
    // 0x802D4ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4AC0: jal         0x8022A0D0
    // 0x802D4AC4: lui         $a2, 0xC26E
    ctx->r6 = S32(0XC26E << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802D4AC4: lui         $a2, 0xC26E
    ctx->r6 = S32(0XC26E << 16);
    after_17:
    // 0x802D4AC8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x802D4ACC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802D4AD0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802D4AD4: addiu       $a0, $a0, 0x770
    ctx->r4 = ADD32(ctx->r4, 0X770);
    // 0x802D4AD8: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802D4ADC: jal         0x802C4A20
    // 0x802D4AE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_18;
    // 0x802D4AE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x802D4AE4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4AE8: jal         0x802C5830
    // 0x802D4AEC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_19;
    // 0x802D4AEC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_19:
    // 0x802D4AF0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4AF4: jal         0x802C580C
    // 0x802D4AF8: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_20;
    // 0x802D4AF8: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_20:
    // 0x802D4AFC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4B00: jal         0x802C5818
    // 0x802D4B04: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_21;
    // 0x802D4B04: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_21:
    // 0x802D4B08: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4B0C: jal         0x802C5824
    // 0x802D4B10: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_22;
    // 0x802D4B10: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_22:
    // 0x802D4B14: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x802D4B18: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D4B1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D4B20: jal         0x80309758
    // 0x802D4B24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_23;
    // 0x802D4B24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_23:
    // 0x802D4B28: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x802D4B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4B30: jal         0x8022970C
    // 0x802D4B34: swc1        $f0, 0xC34($t8)
    MEM_W(0XC34, ctx->r24) = ctx->f0.u32l;
    func_8022970C(rdram, ctx);
        goto after_24;
    // 0x802D4B34: swc1        $f0, 0xC34($t8)
    MEM_W(0XC34, ctx->r24) = ctx->f0.u32l;
    after_24:
    // 0x802D4B38: lui         $a1, 0xC35B
    ctx->r5 = S32(0XC35B << 16);
    // 0x802D4B3C: lui         $a3, 0x4073
    ctx->r7 = S32(0X4073 << 16);
    // 0x802D4B40: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x802D4B44: ori         $a1, $a1, 0x4CCD
    ctx->r5 = ctx->r5 | 0X4CCD;
    // 0x802D4B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4B4C: jal         0x8022A0D0
    // 0x802D4B50: lui         $a2, 0xC26E
    ctx->r6 = S32(0XC26E << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_25;
    // 0x802D4B50: lui         $a2, 0xC26E
    ctx->r6 = S32(0XC26E << 16);
    after_25:
    // 0x802D4B54: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x802D4B58: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802D4B5C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802D4B60: addiu       $a0, $a0, 0x904
    ctx->r4 = ADD32(ctx->r4, 0X904);
    // 0x802D4B64: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802D4B68: jal         0x802C4A20
    // 0x802D4B6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_26;
    // 0x802D4B6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_26:
    // 0x802D4B70: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4B74: jal         0x802C5830
    // 0x802D4B78: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_27;
    // 0x802D4B78: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_27:
    // 0x802D4B7C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4B80: jal         0x802C580C
    // 0x802D4B84: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_28;
    // 0x802D4B84: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_28:
    // 0x802D4B88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4B8C: jal         0x802C5818
    // 0x802D4B90: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_29;
    // 0x802D4B90: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_29:
    // 0x802D4B94: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4B98: jal         0x802C5824
    // 0x802D4B9C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_30;
    // 0x802D4B9C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_30:
    // 0x802D4BA0: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x802D4BA4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D4BA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D4BAC: jal         0x80309758
    // 0x802D4BB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_31;
    // 0x802D4BB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_31:
    // 0x802D4BB4: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x802D4BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4BBC: jal         0x8022970C
    // 0x802D4BC0: swc1        $f0, 0xC38($t9)
    MEM_W(0XC38, ctx->r25) = ctx->f0.u32l;
    func_8022970C(rdram, ctx);
        goto after_32;
    // 0x802D4BC0: swc1        $f0, 0xC38($t9)
    MEM_W(0XC38, ctx->r25) = ctx->f0.u32l;
    after_32:
    // 0x802D4BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4BC8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D4BCC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802D4BD0: jal         0x8022A0D0
    // 0x802D4BD4: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_33;
    // 0x802D4BD4: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    after_33:
    // 0x802D4BD8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x802D4BDC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802D4BE0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802D4BE4: addiu       $a0, $a0, 0xA98
    ctx->r4 = ADD32(ctx->r4, 0XA98);
    // 0x802D4BE8: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802D4BEC: jal         0x802C4A20
    // 0x802D4BF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_34;
    // 0x802D4BF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_34:
    // 0x802D4BF4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D4BF8: jal         0x802C5830
    // 0x802D4BFC: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    static_3_802C5830(rdram, ctx);
        goto after_35;
    // 0x802D4BFC: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    after_35:
    // 0x802D4C00: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x802D4C04: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x802D4C08: jal         0x802C580C
    // 0x802D4C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C580C(rdram, ctx);
        goto after_36;
    // 0x802D4C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x802D4C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4C14: jal         0x802C5818
    // 0x802D4C18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5818(rdram, ctx);
        goto after_37;
    // 0x802D4C18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_37:
    // 0x802D4C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D4C20: jal         0x802C5824
    // 0x802D4C24: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_38;
    // 0x802D4C24: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    after_38:
    // 0x802D4C28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D4C2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D4C30: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x802D4C34: jr          $ra
    // 0x802D4C38: nop

    return;
    // 0x802D4C38: nop

;}
RECOMP_FUNC void D_80204310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80204310: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80204314: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80204318: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8020431C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80204320: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80204324: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80204328: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8020432C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80204330: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80204334: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80204338: bne         $at, $zero, L_80204358
    if (ctx->r1 != 0) {
        // 0x8020433C: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_80204358;
    }
    // 0x8020433C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80204340: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204344: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80204348: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8020434C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204350: jal         0x80231C9C
    // 0x80204354: addiu       $a2, $zero, 0x13C
    ctx->r6 = ADD32(0, 0X13C);
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80204354: addiu       $a2, $zero, 0x13C
    ctx->r6 = ADD32(0, 0X13C);
    after_0:
L_80204358:
    // 0x80204358: beq         $s0, $zero, L_80204374
    if (ctx->r16 == 0) {
        // 0x8020435C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80204374;
    }
    // 0x8020435C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204360: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80204364: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80204368: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020436C: jal         0x80231C9C
    // 0x80204370: addiu       $a2, $zero, 0x13D
    ctx->r6 = ADD32(0, 0X13D);
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80204370: addiu       $a2, $zero, 0x13D
    ctx->r6 = ADD32(0, 0X13D);
    after_1:
L_80204374:
    // 0x80204374: beq         $s4, $zero, L_80204390
    if (ctx->r20 == 0) {
        // 0x80204378: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80204390;
    }
    // 0x80204378: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020437C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80204380: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80204384: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204388: jal         0x80231C9C
    // 0x8020438C: addiu       $a2, $zero, 0x13E
    ctx->r6 = ADD32(0, 0X13E);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x8020438C: addiu       $a2, $zero, 0x13E
    ctx->r6 = ADD32(0, 0X13E);
    after_2:
L_80204390:
    // 0x80204390: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x80204394: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x80204398: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8020439C: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x802043A0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802043A4: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802043A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802043AC: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x802043B0: lw          $s2, 0x50($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X50);
    // 0x802043B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802043B8: blez        $s2, L_80204498
    if (SIGNED(ctx->r18) <= 0) {
        // 0x802043BC: andi        $a0, $s2, 0x3
        ctx->r4 = ctx->r18 & 0X3;
            goto L_80204498;
    }
    // 0x802043BC: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x802043C0: beq         $a0, $zero, L_802043FC
    if (ctx->r4 == 0) {
        // 0x802043C4: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_802043FC;
    }
    // 0x802043C4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802043C8: sll         $t2, $zero, 3
    ctx->r10 = S32(0 << 3);
    // 0x802043CC: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x802043D0: addu        $s0, $t2, $t8
    ctx->r16 = ADD32(ctx->r10, ctx->r24);
    // 0x802043D4: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
L_802043D8:
    // 0x802043D8: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x802043DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802043E0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802043E4: sw          $at, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r1;
    // 0x802043E8: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x802043EC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802043F0: bne         $v1, $s1, L_802043D8
    if (ctx->r3 != ctx->r17) {
        // 0x802043F4: sw          $t4, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r12;
            goto L_802043D8;
    }
    // 0x802043F4: sw          $t4, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r12;
    // 0x802043F8: beq         $s1, $s2, L_80204494
    if (ctx->r17 == ctx->r18) {
        // 0x802043FC: sll         $t2, $s1, 3
        ctx->r10 = S32(ctx->r17 << 3);
            goto L_80204494;
    }
L_802043FC:
    // 0x802043FC: sll         $t2, $s1, 3
    ctx->r10 = S32(ctx->r17 << 3);
    // 0x80204400: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x80204404: addu        $s0, $t2, $t5
    ctx->r16 = ADD32(ctx->r10, ctx->r13);
    // 0x80204408: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
    // 0x8020440C: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x80204410: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x80204414: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80204418: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x8020441C: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x80204420: addiu       $t0, $v0, 0x18
    ctx->r8 = ADD32(ctx->r2, 0X18);
    // 0x80204424: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80204428: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x8020442C: addiu       $v1, $s0, 0x18
    ctx->r3 = ADD32(ctx->r16, 0X18);
L_80204430:
    // 0x80204430: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80204434: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x80204438: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x8020443C: sw          $at, -0x20($s0)
    MEM_W(-0X20, ctx->r16) = ctx->r1;
    // 0x80204440: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80204444: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80204448: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x8020444C: sw          $t9, -0x1C($s0)
    MEM_W(-0X1C, ctx->r16) = ctx->r25;
    // 0x80204450: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x80204454: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80204458: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x8020445C: sw          $at, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = ctx->r1;
    // 0x80204460: lw          $t5, -0x1C($a2)
    ctx->r13 = MEM_W(ctx->r6, -0X1C);
    // 0x80204464: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x80204468: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x8020446C: sw          $t5, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = ctx->r13;
    // 0x80204470: lw          $at, -0x20($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X20);
    // 0x80204474: sw          $at, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r1;
    // 0x80204478: lw          $t7, -0x1C($a3)
    ctx->r15 = MEM_W(ctx->r7, -0X1C);
    // 0x8020447C: sw          $t7, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r15;
    // 0x80204480: lw          $at, -0x20($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X20);
    // 0x80204484: sw          $at, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r1;
    // 0x80204488: lw          $t9, -0x1C($t0)
    ctx->r25 = MEM_W(ctx->r8, -0X1C);
    // 0x8020448C: bne         $v1, $t1, L_80204430
    if (ctx->r3 != ctx->r9) {
        // 0x80204490: sw          $t9, -0x1C($v1)
        MEM_W(-0X1C, ctx->r3) = ctx->r25;
            goto L_80204430;
    }
    // 0x80204490: sw          $t9, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r25;
L_80204494:
    // 0x80204494: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80204498:
    // 0x80204498: blez        $s2, L_802044C0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8020449C: addiu       $s0, $sp, 0x64
        ctx->r16 = ADD32(ctx->r29, 0X64);
            goto L_802044C0;
    }
    // 0x8020449C: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
L_802044A0:
    // 0x802044A0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x802044A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802044A8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802044AC: jalr        $t9
    // 0x802044B0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802044B0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_3:
    // 0x802044B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802044B8: bne         $s1, $s2, L_802044A0
    if (ctx->r17 != ctx->r18) {
        // 0x802044BC: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_802044A0;
    }
    // 0x802044BC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_802044C0:
    // 0x802044C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802044C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802044C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802044CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802044D0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802044D4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802044D8: jr          $ra
    // 0x802044DC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x802044DC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void D_802232CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802232CC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802232D0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802232D4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802232D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802232DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802232E0: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x802232E4: bne         $at, $zero, L_80223300
    if (ctx->r1 != 0) {
        // 0x802232E8: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_80223300;
    }
    // 0x802232E8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802232EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802232F0: jal         0x80231A24
    // 0x802232F4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802232F4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802232F8: b           L_80223320
    // 0x802232FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80223320;
    // 0x802232FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80223300:
    // 0x80223300: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80223304: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80223308: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022330C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80223310: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80223314: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x80223318: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x8022331C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80223320:
    // 0x80223320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80223324: jr          $ra
    // 0x80223328: nop

    return;
    // 0x80223328: nop

;}
RECOMP_FUNC void D_802E850C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E858C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E8590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E8594: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E8598: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E859C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E85A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E85A4: bne         $v1, $zero, L_802E85CC
    if (ctx->r3 != 0) {
        // 0x802E85A8: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E85CC;
    }
    // 0x802E85A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E85AC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E85B0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E85B4: jal         0x80231A24
    // 0x802E85B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E85B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E85BC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E85C0: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E85C4: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E85C8: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E85CC:
    // 0x802E85CC: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E85D0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802E85D4: lw          $t9, 0x7C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X7C);
    // 0x802E85D8: lh          $t7, 0x78($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X78);
    // 0x802E85DC: jalr        $t9
    // 0x802E85E0: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E85E0: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E85E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E85E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E85EC: jr          $ra
    // 0x802E85F0: nop

    return;
    // 0x802E85F0: nop

;}
RECOMP_FUNC void D_8028B6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028B76C: bne         $a0, $zero, L_8028B784
    if (ctx->r4 != 0) {
        // 0x8028B770: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8028B784;
    }
    // 0x8028B770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028B774: jal         0x802C67EC
    // 0x8028B778: addiu       $a0, $zero, 0x24C
    ctx->r4 = ADD32(0, 0X24C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x8028B778: addiu       $a0, $zero, 0x24C
    ctx->r4 = ADD32(0, 0X24C);
    after_0:
    // 0x8028B77C: beq         $v0, $zero, L_8028B788
    if (ctx->r2 == 0) {
        // 0x8028B780: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8028B788;
    }
    // 0x8028B780: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8028B784:
    // 0x8028B784: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
L_8028B788:
    // 0x8028B788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028B78C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028B790: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8028B794: jr          $ra
    // 0x8028B798: nop

    return;
    // 0x8028B798: nop

;}
RECOMP_FUNC void D_802EFFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0064: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x802F0068: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802F006C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802F0070: beq         $v0, $at, L_802F0094
    if (ctx->r2 == ctx->r1) {
        // 0x802F0074: sll         $t6, $v0, 3
        ctx->r14 = S32(ctx->r2 << 3);
            goto L_802F0094;
    }
    // 0x802F0074: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x802F0078: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x802F007C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802F0080: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802F0084: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802F0088: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802F008C: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x802F0090: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_802F0094:
    // 0x802F0094: jr          $ra
    // 0x802F0098: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802F0098: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_802B917C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B91FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B9200: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B9204: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B9208: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802B920C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802B9210: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B9214: bne         $a3, $v1, L_802B9288
    if (ctx->r7 != ctx->r3) {
        // 0x802B9218: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_802B9288;
    }
    // 0x802B9218: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802B921C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802B9220: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802B9224: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B9228: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B922C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B9230: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802B9234: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802B9238: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x802B923C: nop

    // 0x802B9240: sh          $t7, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r15;
    // 0x802B9244: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B9248: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B924C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802B9250: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802B9254: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x802B9258: nop

    // 0x802B925C: sh          $t9, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = ctx->r25;
    // 0x802B9260: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B9264: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B9268: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B926C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802B9270: sh          $v1, 0x8E($a0)
    MEM_H(0X8E, ctx->r4) = ctx->r3;
    // 0x802B9274: swc1        $f10, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f10.u32l;
    // 0x802B9278: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802B927C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x802B9280: b           L_802B9354
    // 0x802B9284: sh          $t1, 0x7E($a0)
    MEM_H(0X7E, ctx->r4) = ctx->r9;
        goto L_802B9354;
    // 0x802B9284: sh          $t1, 0x7E($a0)
    MEM_H(0X7E, ctx->r4) = ctx->r9;
L_802B9288:
    // 0x802B9288: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B928C: bne         $a3, $at, L_802B92F8
    if (ctx->r7 != ctx->r1) {
        // 0x802B9290: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_802B92F8;
    }
    // 0x802B9290: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802B9294: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802B9298: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B929C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B92A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B92A4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B92A8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802B92AC: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x802B92B0: nop

    // 0x802B92B4: sh          $t3, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r11;
    // 0x802B92B8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B92BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B92C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B92C4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802B92C8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B92CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B92D0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B92D4: sh          $v1, 0x8E($s0)
    MEM_H(0X8E, ctx->r16) = ctx->r3;
    // 0x802B92D8: swc1        $f6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f6.u32l;
    // 0x802B92DC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802B92E0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802B92E4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x802B92E8: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x802B92EC: sh          $t5, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = ctx->r13;
    // 0x802B92F0: b           L_802B9354
    // 0x802B92F4: sh          $t7, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r15;
        goto L_802B9354;
    // 0x802B92F4: sh          $t7, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r15;
L_802B92F8:
    // 0x802B92F8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B92FC: bne         $a3, $at, L_802B9354
    if (ctx->r7 != ctx->r1) {
        // 0x802B9300: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_802B9354;
    }
    // 0x802B9300: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802B9304: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802B9308: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B930C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B9310: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B9314: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802B9318: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802B931C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802B9320: nop

    // 0x802B9324: sh          $v0, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r2;
    // 0x802B9328: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B932C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B9330: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B9334: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802B9338: sh          $v1, 0x8E($s0)
    MEM_H(0X8E, ctx->r16) = ctx->r3;
    // 0x802B933C: sh          $v0, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r2;
    // 0x802B9340: swc1        $f8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f8.u32l;
    // 0x802B9344: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802B9348: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x802B934C: nop

    // 0x802B9350: sh          $t0, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = ctx->r8;
L_802B9354:
    // 0x802B9354: lw          $v0, 0xB4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB4);
    // 0x802B9358: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B935C: lh          $t1, 0x18($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X18);
    // 0x802B9360: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802B9364: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    // 0x802B9368: jalr        $t9
    // 0x802B936C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802B936C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x802B9370: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x802B9374: jal         0x80228DE0
    // 0x802B9378: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802B9378: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x802B937C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802B9380: sb          $t2, 0xB0($s0)
    MEM_B(0XB0, ctx->r16) = ctx->r10;
    // 0x802B9384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B9388: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B938C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B9390: jr          $ra
    // 0x802B9394: nop

    return;
    // 0x802B9394: nop

;}
RECOMP_FUNC void D_8022C304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C304: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C308: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8022C30C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022C310: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C314: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C318: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022C31C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022C320: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022C324: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022C328: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C32C: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8022C330: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8022C334: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8022C338: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x8022C33C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022C340: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x8022C344: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x8022C348: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8022C34C: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x8022C350: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022C354: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8022C358: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x8022C35C: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x8022C360: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
L_8022C364:
    // 0x8022C364: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022C368: jal         0x80231A24
    // 0x8022C36C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C36C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8022C370: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8022C374: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C378: beq         $v0, $s3, L_8022C398
    if (ctx->r2 == ctx->r19) {
        // 0x8022C37C: nop
    
            goto L_8022C398;
    }
    // 0x8022C37C: nop

    // 0x8022C380: beq         $v0, $s4, L_8022C3A8
    if (ctx->r2 == ctx->r20) {
        // 0x8022C384: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8022C3A8;
    }
    // 0x8022C384: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C388: beq         $v0, $s5, L_8022C3B8
    if (ctx->r2 == ctx->r21) {
        // 0x8022C38C: nop
    
            goto L_8022C3B8;
    }
    // 0x8022C38C: nop

    // 0x8022C390: b           L_8022C3C8
    // 0x8022C394: nop

        goto L_8022C3C8;
    // 0x8022C394: nop

L_8022C398:
    // 0x8022C398: jal         0x80231A24
    // 0x8022C39C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022C39C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x8022C3A0: b           L_8022C3D4
    // 0x8022C3A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8022C3D4;
    // 0x8022C3A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8022C3A8:
    // 0x8022C3A8: jal         0x80231A24
    // 0x8022C3AC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022C3AC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x8022C3B0: b           L_8022C3D4
    // 0x8022C3B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8022C3D4;
    // 0x8022C3B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8022C3B8:
    // 0x8022C3B8: jal         0x80231A24
    // 0x8022C3BC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x8022C3BC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_3:
    // 0x8022C3C0: b           L_8022C3D4
    // 0x8022C3C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8022C3D4;
    // 0x8022C3C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8022C3C8:
    // 0x8022C3C8: jal         0x80231A24
    // 0x8022C3CC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x8022C3CC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_4:
    // 0x8022C3D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8022C3D4:
    // 0x8022C3D4: bne         $s0, $s7, L_8022C364
    if (ctx->r16 != ctx->r23) {
        // 0x8022C3D8: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8022C364;
    }
    // 0x8022C3D8: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8022C3DC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C3E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C3E4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C3E8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022C3EC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022C3F0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022C3F4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C3F8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022C3FC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022C400: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8022C404: jr          $ra
    // 0x8022C408: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8022C408: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802AB580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB600: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802AB604: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802AB608: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802AB60C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AB610: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AB614: bne         $t6, $zero, L_802AB624
    if (ctx->r14 != 0) {
        // 0x802AB618: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_802AB624;
    }
    // 0x802AB618: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AB61C: b           L_802AB628
    // 0x802AB620: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
        goto L_802AB628;
    // 0x802AB620: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
L_802AB624:
    // 0x802AB624: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
L_802AB628:
    // 0x802AB628: jal         0x8021ACB0
    // 0x802AB62C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AB62C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x802AB630: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AB634: jal         0x8021B838
    // 0x802AB638: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AB638: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AB63C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AB640: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AB644: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AB648: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802AB64C: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x802AB650: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AB654: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AB658: lh          $t8, 0xB8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XB8);
    // 0x802AB65C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AB660: jalr        $t9
    // 0x802AB664: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AB664: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_2:
    // 0x802AB668: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802AB66C: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x802AB670: jal         0x802FD4B0
    // 0x802AB674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802AB674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x802AB678: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802AB67C: jal         0x802FD498
    // 0x802AB680: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802AB680: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802AB684: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802AB688: jal         0x802FD4A4
    // 0x802AB68C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802AB68C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_5:
    // 0x802AB690: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802AB694: jal         0x802FD480
    // 0x802AB698: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802AB698: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_6:
    // 0x802AB69C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802AB6A0: jal         0x802FD48C
    // 0x802AB6A4: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802AB6A4: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    after_7:
    // 0x802AB6A8: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x802AB6AC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802AB6B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AB6B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AB6B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AB6BC: jal         0x80317194
    // 0x802AB6C0: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802AB6C0: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802AB6C4: addiu       $t1, $zero, 0x18
    ctx->r9 = ADD32(0, 0X18);
    // 0x802AB6C8: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x802AB6CC: addiu       $t3, $zero, 0x1A
    ctx->r11 = ADD32(0, 0X1A);
    // 0x802AB6D0: addiu       $t4, $zero, 0x1B
    ctx->r12 = ADD32(0, 0X1B);
    // 0x802AB6D4: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x802AB6D8: sw          $t1, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r9;
    // 0x802AB6DC: sw          $t2, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r10;
    // 0x802AB6E0: sw          $t3, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r11;
    // 0x802AB6E4: sw          $t4, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r12;
    // 0x802AB6E8: sw          $t5, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r13;
    // 0x802AB6EC: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AB6F0: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AB6F4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x802AB6F8: jal         0x802D51DC
    // 0x802AB6FC: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802AB6FC: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    after_9:
    // 0x802AB700: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802AB704: jal         0x8022970C
    // 0x802AB708: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_10;
    // 0x802AB708: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_10:
    // 0x802AB70C: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802AB710: jal         0x8022970C
    // 0x802AB714: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_11;
    // 0x802AB714: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_11:
    // 0x802AB718: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AB71C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802AB720: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AB724: jal         0x802C4A20
    // 0x802AB728: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802AB728: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802AB72C: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AB730: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802AB734: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AB738: jal         0x802C4A20
    // 0x802AB73C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_13;
    // 0x802AB73C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_13:
    // 0x802AB740: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AB744: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802AB748: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802AB74C: jal         0x802C4A20
    // 0x802AB750: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_14;
    // 0x802AB750: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_14:
    // 0x802AB754: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AB758: addiu       $a0, $s0, 0x728
    ctx->r4 = ADD32(ctx->r16, 0X728);
    // 0x802AB75C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AB760: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AB764: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802AB768: jal         0x8022A0D0
    // 0x802AB76C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_15;
    // 0x802AB76C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_15:
    // 0x802AB770: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AB774: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802AB778: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802AB77C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x802AB780: jal         0x802C4A20
    // 0x802AB784: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    static_3_802C4A20(rdram, ctx);
        goto after_16;
    // 0x802AB784: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_16:
    // 0x802AB788: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802AB78C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AB790: jal         0x802C5858
    // 0x802AB794: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    static_3_802C5858(rdram, ctx);
        goto after_17;
    // 0x802AB794: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_17:
    // 0x802AB798: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x802AB79C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AB7A0: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x802AB7A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AB7A8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802AB7AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AB7B0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802AB7B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AB7B8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802AB7BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AB7C0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AB7C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AB7C8: lui         $a1, 0xC0B2
    ctx->r5 = S32(0XC0B2 << 16);
    // 0x802AB7CC: lui         $a2, 0xC037
    ctx->r6 = S32(0XC037 << 16);
    // 0x802AB7D0: lui         $a3, 0xBE59
    ctx->r7 = S32(0XBE59 << 16);
    // 0x802AB7D4: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AB7D8: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802AB7DC: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802AB7E0: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
    // 0x802AB7E4: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x802AB7E8: swc1        $f4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f4.u32l;
    // 0x802AB7EC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802AB7F0: ori         $a3, $a3, 0x1687
    ctx->r7 = ctx->r7 | 0X1687;
    // 0x802AB7F4: ori         $a2, $a2, 0x8D50
    ctx->r6 = ctx->r6 | 0X8D50;
    // 0x802AB7F8: jal         0x8022A0D0
    // 0x802AB7FC: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    static_3_8022A0D0(rdram, ctx);
        goto after_18;
    // 0x802AB7FC: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    after_18:
    // 0x802AB800: lui         $a1, 0x40B2
    ctx->r5 = S32(0X40B2 << 16);
    // 0x802AB804: lui         $a2, 0xC037
    ctx->r6 = S32(0XC037 << 16);
    // 0x802AB808: lui         $a3, 0xBE59
    ctx->r7 = S32(0XBE59 << 16);
    // 0x802AB80C: ori         $a3, $a3, 0x1687
    ctx->r7 = ctx->r7 | 0X1687;
    // 0x802AB810: ori         $a2, $a2, 0x8D50
    ctx->r6 = ctx->r6 | 0X8D50;
    // 0x802AB814: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x802AB818: jal         0x8022A0D0
    // 0x802AB81C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_8022A0D0(rdram, ctx);
        goto after_19;
    // 0x802AB81C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_19:
    // 0x802AB820: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802AB824: jal         0x803169A0
    // 0x802AB828: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    static_3_803169A0(rdram, ctx);
        goto after_20;
    // 0x802AB828: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_20:
    // 0x802AB82C: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802AB830: jal         0x803169A0
    // 0x802AB834: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_803169A0(rdram, ctx);
        goto after_21;
    // 0x802AB834: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_21:
    // 0x802AB838: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AB83C: sb          $t6, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r14;
    // 0x802AB840: jal         0x802DD0BC
    // 0x802AB844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802DD0BC(rdram, ctx);
        goto after_22;
    // 0x802AB844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x802AB848: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802AB84C: sb          $t7, 0x968($s0)
    MEM_B(0X968, ctx->r16) = ctx->r15;
    // 0x802AB850: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AB854: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AB858: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802AB85C: jr          $ra
    // 0x802AB860: nop

    return;
    // 0x802AB860: nop

;}

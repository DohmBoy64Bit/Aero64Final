#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8020372C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020372C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80203730: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80203734: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80203738: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020373C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80203740: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80203744: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80203748: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020374C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80203750: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203754: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80203758: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8020375C: jr          $ra
    // 0x80203760: lw          $v0, 0xA8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA8);
    return;
    // 0x80203760: lw          $v0, 0xA8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA8);
;}
RECOMP_FUNC void func_802496B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802496B8: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x802496BC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802496C0: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x802496C4: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x802496C8: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x802496CC: sll         $t8, $v1, 8
    ctx->r24 = S32(ctx->r3 << 8);
    // 0x802496D0: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x802496D4: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x802496D8: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x802496DC: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802496E0: jr          $ra
    // 0x802496E4: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    return;
    // 0x802496E4: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
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
RECOMP_FUNC void func_80234F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234F20: lw          $a2, 0x44($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X44);
    // 0x80234F24: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80234F28: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80234F2C: blez        $a2, L_80234FB0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80234F30: addiu       $a3, $zero, 0x30
        ctx->r7 = ADD32(0, 0X30);
            goto L_80234FB0;
    }
    // 0x80234F30: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
L_80234F34:
    // 0x80234F34: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234F38: mflo        $t6
    ctx->r14 = lo;
    // 0x80234F3C: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x80234F40: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x80234F44: bne         $t7, $zero, L_80234F98
    if (ctx->r15 != 0) {
        // 0x80234F48: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80234F98;
    }
    // 0x80234F48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80234F4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80234F50: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80234F54: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80234F58: sw          $a1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r5;
    // 0x80234F5C: sh          $t8, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r24;
    // 0x80234F60: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80234F64: sb          $t9, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r25;
    // 0x80234F68: sb          $zero, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = 0;
    // 0x80234F6C: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x80234F70: lbu         $t0, 0xD($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XD);
    // 0x80234F74: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x80234F78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80234F7C: sll         $t1, $t0, 15
    ctx->r9 = S32(ctx->r8 << 15);
    // 0x80234F80: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80234F84: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80234F88: mflo        $t2
    ctx->r10 = lo;
    // 0x80234F8C: sh          $t2, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r10;
    // 0x80234F90: jr          $ra
    // 0x80234F94: nop

    return;
    // 0x80234F94: nop

L_80234F98:
    // 0x80234F98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234F9C: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x80234FA0: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80234FA4: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80234FA8: bne         $at, $zero, L_80234F34
    if (ctx->r1 != 0) {
        // 0x80234FAC: nop
    
            goto L_80234F34;
    }
    // 0x80234FAC: nop

L_80234FB0:
    // 0x80234FB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234FB4: jr          $ra
    // 0x80234FB8: nop

    return;
    // 0x80234FB8: nop

;}
RECOMP_FUNC void func_802E86F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8770: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802E8774: nop

    // 0x802E8778: swc1        $f12, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f12.u32l;
    // 0x802E877C: jr          $ra
    // 0x802E8780: swc1        $f12, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802E8780: swc1        $f12, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_802E8878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E88F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E88FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E8900: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E8904: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x802E8908: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802E890C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E8910: bne         $a2, $zero, L_802E8938
    if (ctx->r6 != 0) {
        // 0x802E8914: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E8938;
    }
    // 0x802E8914: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E8918: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E891C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E8920: jal         0x80231A24
    // 0x802E8924: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E8924: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x802E8928: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802E892C: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E8930: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E8934: lw          $a2, 0xC($a3)
    ctx->r6 = MEM_W(ctx->r7, 0XC);
L_802E8938:
    // 0x802E8938: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802E893C: jal         0x802D2990
    // 0x802E8940: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    static_3_802D2990(rdram, ctx);
        goto after_1;
    // 0x802E8940: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x802E8944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E8948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E894C: jr          $ra
    // 0x802E8950: nop

    return;
    // 0x802E8950: nop

;}
RECOMP_FUNC void func_80241620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80241628: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8024162C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80241630: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80241634: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80241638: beql        $t6, $zero, L_802416F8
    if (ctx->r14 == 0) {
        // 0x8024163C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802416F8;
    }
    goto skip_0;
    // 0x8024163C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80241640: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80241644: jal         0x80237840
    // 0x80241648: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    static_3_80237840(rdram, ctx);
        goto after_0;
    // 0x80241648: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8024164C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80241650: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80241654: beq         $v0, $zero, L_802416F4
    if (ctx->r2 == 0) {
        // 0x80241658: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_802416F4;
    }
    // 0x80241658: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8024165C: lbu         $v1, 0x3B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3B);
    // 0x80241660: bgez        $v1, L_80241674
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80241664: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80241674;
    }
    // 0x80241664: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80241668: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    // 0x8024166C: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x80241670: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80241674:
    // 0x80241674: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80241678: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x8024167C: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x80241680: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x80241684: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80241688: sh          $t2, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r10;
    // 0x8024168C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80241690: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x80241694: lh          $t3, 0x1A($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X1A);
    // 0x80241698: sh          $t3, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r11;
    // 0x8024169C: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x802416A0: sb          $t4, 0x12($a2)
    MEM_B(0X12, ctx->r6) = ctx->r12;
    // 0x802416A4: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x802416A8: sb          $v1, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r3;
    // 0x802416AC: sh          $t5, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r13;
    // 0x802416B0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802416B4: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x802416B8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802416BC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x802416C0: jal         0x80237738
    // 0x802416C4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    static_3_80237738(rdram, ctx);
        goto after_1;
    // 0x802416C4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x802416C8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802416CC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802416D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802416D4: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x802416D8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x802416DC: sw          $t6, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r14;
    // 0x802416E0: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x802416E4: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x802416E8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x802416EC: jalr        $t9
    // 0x802416F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802416F0: nop

    after_2:
L_802416F4:
    // 0x802416F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802416F8:
    // 0x802416F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802416FC: jr          $ra
    // 0x80241700: nop

    return;
    // 0x80241700: nop

;}
RECOMP_FUNC void func_802E8784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8804: jr          $ra
    // 0x802E8808: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
    return;
    // 0x802E8808: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8023F5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F5A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F5A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F5A8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8023F5AC: lw          $a3, 0x14($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X14);
    // 0x8023F5B0: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8023F5B4: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8023F5B8: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8023F5BC: beq         $a3, $zero, L_8023F5F4
    if (ctx->r7 == 0) {
        // 0x8023F5C0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8023F5F4;
    }
    // 0x8023F5C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8023F5C4: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8023F5C8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8023F5CC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8023F5D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023F5D4: jal         0x80237120
    // 0x8023F5D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80237120(rdram, ctx);
        goto after_0;
    // 0x8023F5D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8023F5DC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8023F5E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8023F5E4: jal         0x80237150
    // 0x8023F5E8: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    static_3_80237150(rdram, ctx);
        goto after_1;
    // 0x8023F5E8: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_1:
    // 0x8023F5EC: b           L_8023F674
    // 0x8023F5F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_8023F674;
    // 0x8023F5F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8023F5F4:
    // 0x8023F5F4: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x8023F5F8: beq         $a3, $zero, L_8023F62C
    if (ctx->r7 == 0) {
        // 0x8023F5FC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8023F62C;
    }
    // 0x8023F5FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8023F600: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8023F604: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8023F608: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8023F60C: jal         0x80237120
    // 0x8023F610: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_80237120(rdram, ctx);
        goto after_2;
    // 0x8023F610: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8023F614: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8023F618: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8023F61C: jal         0x80237150
    // 0x8023F620: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    static_3_80237150(rdram, ctx);
        goto after_3;
    // 0x8023F620: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_3:
    // 0x8023F624: b           L_8023F674
    // 0x8023F628: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_8023F674;
    // 0x8023F628: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8023F62C:
    // 0x8023F62C: lw          $a3, 0xC($t0)
    ctx->r7 = MEM_W(ctx->r8, 0XC);
    // 0x8023F630: beql        $a3, $zero, L_8023F678
    if (ctx->r7 == 0) {
        // 0x8023F634: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023F678;
    }
    goto skip_0;
    // 0x8023F634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F638: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
L_8023F63C:
    // 0x8023F63C: lh          $t9, 0x16($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X16);
    // 0x8023F640: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023F644: bnel        $at, $zero, L_8023F66C
    if (ctx->r1 != 0) {
        // 0x8023F648: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8023F66C;
    }
    goto skip_1;
    // 0x8023F648: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_1:
    // 0x8023F64C: lw          $t1, 0xD8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XD8);
    // 0x8023F650: bnel        $t1, $zero, L_8023F66C
    if (ctx->r9 != 0) {
        // 0x8023F654: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8023F66C;
    }
    goto skip_2;
    // 0x8023F654: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_2:
    // 0x8023F658: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8023F65C: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x8023F660: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023F664: lh          $a2, 0x16($t2)
    ctx->r6 = MEM_H(ctx->r10, 0X16);
    // 0x8023F668: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_8023F66C:
    // 0x8023F66C: bnel        $a3, $zero, L_8023F63C
    if (ctx->r7 != 0) {
        // 0x8023F670: lw          $t8, 0x8($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X8);
            goto L_8023F63C;
    }
    goto skip_3;
    // 0x8023F670: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    skip_3:
L_8023F674:
    // 0x8023F674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F678:
    // 0x8023F678: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023F67C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8023F680: jr          $ra
    // 0x8023F684: nop

    return;
    // 0x8023F684: nop

;}
RECOMP_FUNC void func_8022FF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FF40: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022FF44: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8022FF48: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FF4C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022FF50: beq         $t6, $zero, L_8022FF70
    if (ctx->r14 == 0) {
        // 0x8022FF54: nop
    
            goto L_8022FF70;
    }
    // 0x8022FF54: nop

    // 0x8022FF58: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_8022FF5C:
    // 0x8022FF5C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FF60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FF64: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022FF68: bnel        $t7, $zero, L_8022FF5C
    if (ctx->r15 != 0) {
        // 0x8022FF6C: lbu         $v0, 0x0($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X0);
            goto L_8022FF5C;
    }
    goto skip_0;
    // 0x8022FF6C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    skip_0:
L_8022FF70:
    // 0x8022FF70: jr          $ra
    // 0x8022FF74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8022FF74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_802E790C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E798C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802E7990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7994: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802E7998: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E799C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E79A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E79A4: bne         $v1, $zero, L_802E79CC
    if (ctx->r3 != 0) {
        // 0x802E79A8: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E79CC;
    }
    // 0x802E79A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E79AC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E79B0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E79B4: jal         0x80231A24
    // 0x802E79B8: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E79B8: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E79BC: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802E79C0: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E79C4: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E79C8: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E79CC:
    // 0x802E79CC: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E79D0: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802E79D4: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E79D8: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802E79DC: jalr        $t9
    // 0x802E79E0: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E79E0: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E79E4: jal         0x803183D0
    // 0x802E79E8: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    static_3_803183D0(rdram, ctx);
        goto after_2;
    // 0x802E79E8: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_2:
    // 0x802E79EC: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E79F0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802E79F4: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E79F8: lh          $t8, 0x10($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X10);
    // 0x802E79FC: jalr        $t9
    // 0x802E7A00: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802E7A00: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_3:
    // 0x802E7A04: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7A08: jal         0x802AED58
    // 0x802E7A0C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AED58(rdram, ctx);
        goto after_4;
    // 0x802E7A0C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_4:
    // 0x802E7A10: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x802E7A14: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x802E7A18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7A1C: bne         $v0, $t0, L_802E7A30
    if (ctx->r2 != ctx->r8) {
        // 0x802E7A20: nop
    
            goto L_802E7A30;
    }
    // 0x802E7A20: nop

    // 0x802E7A24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802E7A28: nop

    // 0x802E7A2C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
L_802E7A30:
    // 0x802E7A30: jal         0x802AEE80
    // 0x802E7A34: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEE80(rdram, ctx);
        goto after_5;
    // 0x802E7A34: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_5:
    // 0x802E7A38: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x802E7A3C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802E7A40: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802E7A44: bne         $v0, $t1, L_802E7A58
    if (ctx->r2 != ctx->r9) {
        // 0x802E7A48: nop
    
            goto L_802E7A58;
    }
    // 0x802E7A48: nop

    // 0x802E7A4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802E7A50: nop

    // 0x802E7A54: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
L_802E7A58:
    // 0x802E7A58: jal         0x802CF888
    // 0x802E7A5C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_802CF888(rdram, ctx);
        goto after_6;
    // 0x802E7A5C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x802E7A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7A64: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802E7A68: jr          $ra
    // 0x802E7A6C: nop

    return;
    // 0x802E7A6C: nop

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
RECOMP_FUNC void func_802D2728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D27A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D27AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802D27B0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802D27B4: jr          $ra
    // 0x802D27B8: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802D27B8: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8029DB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DBB4: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x8029DBB8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8029DBBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029DBC0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8029DBC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029DBC8: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x8029DBCC: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8029DBD0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8029DBD4: jal         0x80316B90
    // 0x8029DBD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80316B90(rdram, ctx);
        goto after_0;
    // 0x8029DBD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8029DBDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8029DBE0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029DBE4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029DBE8: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8029DBEC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8029DBF0: mul.s       $f14, $f12, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8029DBF4: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x8029DBF8: nop

    // 0x8029DBFC: bc1fl       L_8029DC0C
    if (!c1cs) {
        // 0x8029DC00: sub.s       $f6, $f12, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8029DC0C;
    }
    goto skip_0;
    // 0x8029DC00: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
    skip_0:
    // 0x8029DC04: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x8029DC08: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
L_8029DC0C:
    // 0x8029DC0C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8029DC10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029DC14: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x8029DC18: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8029DC1C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8029DC20: nop

    // 0x8029DC24: bc1fl       L_8029DC34
    if (!c1cs) {
        // 0x8029DC28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029DC34;
    }
    goto skip_1;
    // 0x8029DC28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8029DC2C: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x8029DC30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029DC34:
    // 0x8029DC34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029DC38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8029DC3C: jr          $ra
    // 0x8029DC40: nop

    return;
    // 0x8029DC40: nop

;}
RECOMP_FUNC void func_80245A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245A80: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80245A84: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80245A88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80245A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245A90: bne         $t6, $zero, L_80245AA0
    if (ctx->r14 != 0) {
        // 0x80245A94: nop
    
            goto L_80245AA0;
    }
    // 0x80245A94: nop

    // 0x80245A98: jal         0x80245A80
    // 0x80245A9C: nop

    func_80245A80(rdram, ctx);
        goto after_0;
    // 0x80245A9C: nop

    after_0:
L_80245AA0:
    // 0x80245AA0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80245AA4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80245AA8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80245AAC: jal         0x802374B0
    // 0x80245AB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_1;
    // 0x80245AB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80245AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245AB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80245ABC: jr          $ra
    // 0x80245AC0: nop

    return;
    // 0x80245AC0: nop

;}
RECOMP_FUNC void func_802CCD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCDB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802CCDB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802CCDB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CCDBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CCDC0: jal         0x803183C0
    // 0x802CCDC4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_803183C0(rdram, ctx);
        goto after_0;
    // 0x802CCDC4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802CCDC8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802CCDCC: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x802CCDD0: lwc1        $f4, -0x64FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X64FC);
    // 0x802CCDD4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802CCDD8: nop

    // 0x802CCDDC: bc1fl       L_802CCE44
    if (!c1cs) {
        // 0x802CCDE0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802CCE44;
    }
    goto skip_0;
    // 0x802CCDE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802CCDE4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CCDE8: jal         0x80302980
    // 0x802CCDEC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_1;
    // 0x802CCDEC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802CCDF0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CCDF4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802CCDF8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802CCDFC: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    // 0x802CCE00: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CCE04: jal         0x80302988
    // 0x802CCE08: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_2;
    // 0x802CCE08: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802CCE0C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CCE10: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802CCE14: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802CCE18: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x802CCE1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CCE20: jal         0x80302988
    // 0x802CCE24: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_3;
    // 0x802CCE24: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802CCE28: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CCE2C: jal         0x80302A7C
    // 0x802CCE30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_4;
    // 0x802CCE30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802CCE34: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802CCE38: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x802CCE3C: sb          $t6, 0x1AFD($at)
    MEM_B(0X1AFD, ctx->r1) = ctx->r14;
    // 0x802CCE40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802CCE44:
    // 0x802CCE44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802CCE48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802CCE4C: jr          $ra
    // 0x802CCE50: nop

    return;
    // 0x802CCE50: nop

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
RECOMP_FUNC void func_80248040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80248048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8024804C: jal         0x8024A710
    // 0x80248050: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_8024A710(rdram, ctx);
        goto after_0;
    // 0x80248050: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80248054: beq         $v0, $zero, L_80248064
    if (ctx->r2 == 0) {
        // 0x80248058: nop
    
            goto L_80248064;
    }
    // 0x80248058: nop

    // 0x8024805C: b           L_8024807C
    // 0x80248060: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8024807C;
    // 0x80248060: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80248064:
    // 0x80248064: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80248068: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8024806C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80248070: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80248074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80248078: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
L_8024807C:
    // 0x8024807C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80248080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80248084: jr          $ra
    // 0x80248088: nop

    return;
    // 0x80248088: nop

;}
RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200050: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80200054: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80200058: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020005C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80200060:
    // 0x80200060: jal         0x802000DC
    // 0x80200064: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_802000DC(rdram, ctx);
        goto after_0;
    // 0x80200064: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x80200068: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8020006C: andi        $t6, $s0, 0xFFFF
    ctx->r14 = ctx->r16 & 0XFFFF;
    // 0x80200070: blez        $t6, L_80200060
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80200074: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_80200060;
    }
    // 0x80200074: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80200078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8020007C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80200080: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80200084: jr          $ra
    // 0x80200088: nop

    return;
    // 0x80200088: nop

    // 0x8020008C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80200090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200094: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80200098: jal         0x8022970C
    // 0x8020009C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x8020009C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_1:
;}
RECOMP_FUNC void func_80246F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246F88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80246F8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80246F90: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80246F94: jal         0x80247060
    // 0x80246F98: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    static_3_80247060(rdram, ctx);
        goto after_0;
    // 0x80246F98: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80246F9C: beq         $v0, $zero, L_80246FAC
    if (ctx->r2 == 0) {
        // 0x80246FA0: nop
    
            goto L_80246FAC;
    }
    // 0x80246FA0: nop

    // 0x80246FA4: b           L_80246FFC
    // 0x80246FA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80246FFC;
    // 0x80246FA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80246FAC:
    // 0x80246FAC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80246FB0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80246FB4: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80246FB8: jal         0x802375F0
    // 0x80246FBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x80246FBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80246FC0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80246FC4: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x80246FC8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80246FCC: bne         $t9, $zero, L_80246FE8
    if (ctx->r25 != 0) {
        // 0x80246FD0: nop
    
            goto L_80246FE8;
    }
    // 0x80246FD0: nop

    // 0x80246FD4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80246FD8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80246FDC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80246FE0: b           L_80246FF8
    // 0x80246FE4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
        goto L_80246FF8;
    // 0x80246FE4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_80246FE8:
    // 0x80246FE8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80246FEC: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80246FF0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80246FF4: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
L_80246FF8:
    // 0x80246FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80246FFC:
    // 0x80246FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80247004: jr          $ra
    // 0x80247008: nop

    return;
    // 0x80247008: nop

;}
RECOMP_FUNC void func_8024A8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A8A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024A8A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024A8A8: jal         0x80241760
    // 0x8024A8AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8024A8AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8024A8B0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8024A8B4: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8024A8B8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8024A8BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8024A8C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024A8C4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8024A8C8: jal         0x80241DFC
    // 0x8024A8CC: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    static_3_80241DFC(rdram, ctx);
        goto after_1;
    // 0x8024A8CC: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    after_1:
    // 0x8024A8D0: jal         0x80241780
    // 0x8024A8D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_2;
    // 0x8024A8D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8024A8D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024A8DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024A8E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024A8E4: jr          $ra
    // 0x8024A8E8: nop

    return;
    // 0x8024A8E8: nop

;}
RECOMP_FUNC void func_802D273C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D27BC: jr          $ra
    // 0x802D27C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802D27C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80237F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237F20: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80237F24: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80237F28: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80237F2C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80237F30: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x80237F34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80237F38: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80237F3C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80237F40: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x80237F44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80237F48: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80237F4C: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
L_80237F50:
    // 0x80237F50: lw          $t9, 0x18($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X18);
    // 0x80237F54: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80237F58: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80237F5C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80237F60: lw          $t1, 0x58($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X58);
    // 0x80237F64: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80237F68: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80237F6C: sw          $t1, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r9;
    // 0x80237F70: lbu         $t2, 0x98($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X98);
    // 0x80237F74: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80237F78: sb          $t2, 0x8A($a3)
    MEM_B(0X8A, ctx->r7) = ctx->r10;
    // 0x80237F7C: lbu         $t3, 0xA6($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XA6);
    // 0x80237F80: sb          $t3, 0x9A($a3)
    MEM_B(0X9A, ctx->r7) = ctx->r11;
    // 0x80237F84: lw          $t4, 0xB0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XB0);
    // 0x80237F88: sw          $t4, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->r12;
    // 0x80237F8C: lw          $t5, 0x14($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X14);
    // 0x80237F90: sw          $t5, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r13;
    // 0x80237F94: lw          $t6, 0x54($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X54);
    // 0x80237F98: sw          $t6, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r14;
    // 0x80237F9C: lbu         $t7, 0x97($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X97);
    // 0x80237FA0: sb          $t7, 0x8B($a3)
    MEM_B(0X8B, ctx->r7) = ctx->r15;
    // 0x80237FA4: lbu         $t8, 0xA7($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0XA7);
    // 0x80237FA8: sb          $t8, 0x9B($a3)
    MEM_B(0X9B, ctx->r7) = ctx->r24;
    // 0x80237FAC: lw          $t9, 0xB4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XB4);
    // 0x80237FB0: bne         $v0, $a0, L_80237F50
    if (ctx->r2 != ctx->r4) {
        // 0x80237FB4: sw          $t9, 0xA8($v1)
        MEM_W(0XA8, ctx->r3) = ctx->r25;
            goto L_80237F50;
    }
    // 0x80237FB4: sw          $t9, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r25;
    // 0x80237FB8: jr          $ra
    // 0x80237FBC: nop

    return;
    // 0x80237FBC: nop

;}
RECOMP_FUNC void func_8021BA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021BA90: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021BA94: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x8021BA98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021BA9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021BAA0: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8021BAA4: bne         $at, $zero, L_8021BAC4
    if (ctx->r1 != 0) {
        // 0x8021BAA8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8021BAC4;
    }
    // 0x8021BAA8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021BAAC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021BAB0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021BAB4: jal         0x80231A24
    // 0x8021BAB8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021BAB8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8021BABC: b           L_8021BB28
    // 0x8021BAC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021BB28;
    // 0x8021BAC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BAC4:
    // 0x8021BAC4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021BAC8: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021BACC: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x8021BAD0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8021BAD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8021BAD8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8021BADC: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x8021BAE0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8021BAE4: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x8021BAE8: bne         $t9, $zero, L_8021BB08
    if (ctx->r25 != 0) {
        // 0x8021BAEC: nop
    
            goto L_8021BB08;
    }
    // 0x8021BAEC: nop

    // 0x8021BAF0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021BAF4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021BAF8: jal         0x80231A24
    // 0x8021BAFC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021BAFC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x8021BB00: b           L_8021BB28
    // 0x8021BB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021BB28;
    // 0x8021BB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BB08:
    // 0x8021BB08: jal         0x8021ACB0
    // 0x8021BB0C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x8021BB0C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8021BB10: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021BB14: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8021BB18: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8021BB1C: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x8021BB20: sb          $zero, 0x9($t1)
    MEM_B(0X9, ctx->r9) = 0;
    // 0x8021BB24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BB28:
    // 0x8021BB28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021BB2C: jr          $ra
    // 0x8021BB30: nop

    return;
    // 0x8021BB30: nop

;}
RECOMP_FUNC void func_80237828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237828: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8023782C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80237830: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80237834: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80237838: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8023783C: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80237840: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x80237844: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80237848: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8023784C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80237850: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80237854: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80237858: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8023785C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80237860: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x80237864: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x80237868: sh          $zero, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = 0;
    // 0x8023786C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80237870: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x80237874: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80237878: bne         $t7, $zero, L_8023788C
    if (ctx->r15 != 0) {
        // 0x8023787C: or          $s5, $a2, $zero
        ctx->r21 = ctx->r6 | 0;
            goto L_8023788C;
    }
    // 0x8023787C: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80237880: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80237884: b           L_80237A8C
    // 0x80237888: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80237A8C;
    // 0x80237888: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8023788C:
    // 0x8023788C: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x80237890: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80237894: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x80237898: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8023789C: beq         $v0, $zero, L_802378D8
    if (ctx->r2 == 0) {
        // 0x802378A0: addiu       $s2, $zero, -0x10
        ctx->r18 = ADD32(0, -0X10);
            goto L_802378D8;
    }
    // 0x802378A0: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
    // 0x802378A4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802378A8: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
L_802378AC:
    // 0x802378AC: subu        $t0, $t9, $a0
    ctx->r8 = SUB32(ctx->r25, ctx->r4);
    // 0x802378B0: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802378B4: beql        $at, $zero, L_802378D0
    if (ctx->r1 == 0) {
        // 0x802378B8: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_802378D0;
    }
    goto skip_0;
    // 0x802378B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x802378BC: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x802378C0: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x802378C4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802378C8: subu        $v1, $t1, $a0
    ctx->r3 = SUB32(ctx->r9, ctx->r4);
    // 0x802378CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_802378D0:
    // 0x802378D0: bnel        $v0, $zero, L_802378AC
    if (ctx->r2 != 0) {
        // 0x802378D4: lw          $t9, 0x10($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X10);
            goto L_802378AC;
    }
    goto skip_1;
    // 0x802378D4: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    skip_1:
L_802378D8:
    // 0x802378D8: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x802378DC: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802378E0: lw          $v0, 0x10($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X10);
    // 0x802378E4: subu        $t3, $v0, $a0
    ctx->r11 = SUB32(ctx->r2, ctx->r4);
    // 0x802378E8: slt         $at, $t3, $s3
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x802378EC: beq         $at, $zero, L_802379D0
    if (ctx->r1 == 0) {
        // 0x802378F0: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_802379D0;
    }
    // 0x802378F0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x802378F4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802378F8: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x802378FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80237900: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80237904: ldc1        $f20, 0x0($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X0);
L_80237908:
    // 0x80237908: lw          $t4, 0x1C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X1C);
    // 0x8023790C: lui         $s0, 0x7FFF
    ctx->r16 = S32(0X7FFF << 16);
    // 0x80237910: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x80237914: and         $t5, $t4, $s2
    ctx->r13 = ctx->r12 & ctx->r18;
    // 0x80237918: sw          $t5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r13;
    // 0x8023791C: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x80237920: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80237924: jalr        $t9
    // 0x80237928: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80237928: nop

    after_0:
    // 0x8023792C: lw          $t8, 0x44($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X44);
    // 0x80237930: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80237934: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80237938: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8023793C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80237940: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80237944: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80237948: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8023794C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80237950: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x80237954: add.d       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f4.d + ctx->f22.d;
    // 0x80237958: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8023795C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80237960: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80237964: nop

    // 0x80237968: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8023796C: sw          $t2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r10;
    // 0x80237970: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x80237974: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80237978: beql        $v1, $zero, L_802379B8
    if (ctx->r3 == 0) {
        // 0x8023797C: lw          $t7, 0xB4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB4);
            goto L_802379B8;
    }
    goto skip_2;
    // 0x8023797C: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    skip_2:
    // 0x80237980: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80237984: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
L_80237988:
    // 0x80237988: subu        $t4, $t3, $a0
    ctx->r12 = SUB32(ctx->r11, ctx->r4);
    // 0x8023798C: slt         $at, $t4, $s0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80237990: beql        $at, $zero, L_802379AC
    if (ctx->r1 == 0) {
        // 0x80237994: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_802379AC;
    }
    goto skip_3;
    // 0x80237994: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x80237998: sw          $v1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r3;
    // 0x8023799C: lw          $t5, 0x10($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X10);
    // 0x802379A0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802379A4: subu        $s0, $t5, $a0
    ctx->r16 = SUB32(ctx->r13, ctx->r4);
    // 0x802379A8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_802379AC:
    // 0x802379AC: bnel        $v1, $zero, L_80237988
    if (ctx->r3 != 0) {
        // 0x802379B0: lw          $t3, 0x10($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X10);
            goto L_80237988;
    }
    goto skip_4;
    // 0x802379B0: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    skip_4:
    // 0x802379B4: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
L_802379B8:
    // 0x802379B8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802379BC: lw          $v0, 0x10($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X10);
    // 0x802379C0: subu        $t9, $v0, $a0
    ctx->r25 = SUB32(ctx->r2, ctx->r4);
    // 0x802379C4: slt         $at, $t9, $s3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x802379C8: bne         $at, $zero, L_80237908
    if (ctx->r1 != 0) {
        // 0x802379CC: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_80237908;
    }
    // 0x802379CC: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_802379D0:
    // 0x802379D0: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    // 0x802379D4: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
    // 0x802379D8: addiu       $s7, $sp, 0xAA
    ctx->r23 = ADD32(ctx->r29, 0XAA);
    // 0x802379DC: and         $t6, $t8, $s2
    ctx->r14 = ctx->r24 & ctx->r18;
    // 0x802379E0: blez        $s3, L_80237A6C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x802379E4: sw          $t6, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r14;
            goto L_80237A6C;
    }
    // 0x802379E4: sw          $t6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r14;
    // 0x802379E8: lui         $s6, 0x700
    ctx->r22 = S32(0X700 << 16);
L_802379EC:
    // 0x802379EC: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x802379F0: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x802379F4: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x802379F8: beq         $at, $zero, L_80237A08
    if (ctx->r1 == 0) {
        // 0x802379FC: nop
    
            goto L_80237A08;
    }
    // 0x802379FC: nop

    // 0x80237A00: b           L_80237A08
    // 0x80237A04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80237A08;
    // 0x80237A04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80237A08:
    // 0x80237A08: sw          $s6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r22;
    // 0x80237A0C: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x80237A10: lw          $s2, 0x38($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X38);
    // 0x80237A14: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80237A18: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80237A1C: lw          $t9, 0x8($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8);
    // 0x80237A20: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80237A24: jalr        $t9
    // 0x80237A28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80237A28: nop

    after_1:
    // 0x80237A2C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x80237A30: addiu       $t1, $s4, 0x8
    ctx->r9 = ADD32(ctx->r20, 0X8);
    // 0x80237A34: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80237A38: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x80237A3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80237A40: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80237A44: jalr        $t9
    // 0x80237A48: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80237A48: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x80237A4C: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x80237A50: subu        $s3, $s3, $s0
    ctx->r19 = SUB32(ctx->r19, ctx->r16);
    // 0x80237A54: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80237A58: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80237A5C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80237A60: addu        $s5, $s5, $t0
    ctx->r21 = ADD32(ctx->r21, ctx->r8);
    // 0x80237A64: bgtz        $s3, L_802379EC
    if (SIGNED(ctx->r19) > 0) {
        // 0x80237A68: sw          $t4, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r12;
            goto L_802379EC;
    }
    // 0x80237A68: sw          $t4, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r12;
L_80237A6C:
    // 0x80237A6C: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x80237A70: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x80237A74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237A78: subu        $t7, $s4, $t5
    ctx->r15 = SUB32(ctx->r20, ctx->r13);
    // 0x80237A7C: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80237A80: jal         0x802377C8
    // 0x80237A84: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    static_3_802377C8(rdram, ctx);
        goto after_3;
    // 0x80237A84: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    after_3:
    // 0x80237A88: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_80237A8C:
    // 0x80237A8C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80237A90: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80237A94: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80237A98: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80237A9C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80237AA0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80237AA4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80237AA8: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80237AAC: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80237AB0: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x80237AB4: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x80237AB8: jr          $ra
    // 0x80237ABC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80237ABC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_8029ED40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029EDC0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EDC4: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EDC8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8029EDCC: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8029EDD0: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8029EDD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EDD8: bc1f        L_8029EDF8
    if (!c1cs) {
        // 0x8029EDDC: nop
    
            goto L_8029EDF8;
    }
    // 0x8029EDDC: nop

    // 0x8029EDE0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EDE4: sub.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f18.fl;
L_8029EDE8:
    // 0x8029EDE8: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8029EDEC: nop

    // 0x8029EDF0: bc1tl       L_8029EDE8
    if (c1cs) {
        // 0x8029EDF4: sub.s       $f12, $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_8029EDE8;
    }
    goto skip_0;
    // 0x8029EDF4: sub.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f18.fl;
    skip_0:
L_8029EDF8:
    // 0x8029EDF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EDFC: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EE00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EE04: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EE08: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8029EE0C: nop

    // 0x8029EE10: bc1fl       L_8029EE30
    if (!c1cs) {
        // 0x8029EE14: c.lt.s      $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
            goto L_8029EE30;
    }
    goto skip_1;
    // 0x8029EE14: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    skip_1:
    // 0x8029EE18: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
L_8029EE1C:
    // 0x8029EE1C: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8029EE20: nop

    // 0x8029EE24: bc1tl       L_8029EE1C
    if (c1cs) {
        // 0x8029EE28: add.s       $f12, $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
            goto L_8029EE1C;
    }
    goto skip_2;
    // 0x8029EE28: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
    skip_2:
    // 0x8029EE2C: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
L_8029EE30:
    // 0x8029EE30: nop

    // 0x8029EE34: bc1fl       L_8029EE54
    if (!c1cs) {
        // 0x8029EE38: c.lt.s      $f14, $f20
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
            goto L_8029EE54;
    }
    goto skip_3;
    // 0x8029EE38: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    skip_3:
    // 0x8029EE3C: sub.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f18.fl;
L_8029EE40:
    // 0x8029EE40: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x8029EE44: nop

    // 0x8029EE48: bc1tl       L_8029EE40
    if (c1cs) {
        // 0x8029EE4C: sub.s       $f14, $f14, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f18.fl;
            goto L_8029EE40;
    }
    goto skip_4;
    // 0x8029EE4C: sub.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f18.fl;
    skip_4:
    // 0x8029EE50: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
L_8029EE54:
    // 0x8029EE54: nop

    // 0x8029EE58: bc1fl       L_8029EE78
    if (!c1cs) {
        // 0x8029EE5C: sub.s       $f0, $f14, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_8029EE78;
    }
    goto skip_5;
    // 0x8029EE5C: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    skip_5:
    // 0x8029EE60: add.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f18.fl;
L_8029EE64:
    // 0x8029EE64: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8029EE68: nop

    // 0x8029EE6C: bc1tl       L_8029EE64
    if (c1cs) {
        // 0x8029EE70: add.s       $f14, $f14, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f18.fl;
            goto L_8029EE64;
    }
    goto skip_6;
    // 0x8029EE70: add.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f18.fl;
    skip_6:
    // 0x8029EE74: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
L_8029EE78:
    // 0x8029EE78: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8029EE7C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8029EE80: bc1fl       L_8029EE94
    if (!c1cs) {
        // 0x8029EE84: c.lt.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
            goto L_8029EE94;
    }
    goto skip_7;
    // 0x8029EE84: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    skip_7:
    // 0x8029EE88: b           L_8029EEA4
    // 0x8029EE8C: sub.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f18.fl;
        goto L_8029EEA4;
    // 0x8029EE8C: sub.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x8029EE90: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_8029EE94:
    // 0x8029EE94: nop

    // 0x8029EE98: bc1fl       L_8029EEA8
    if (!c1cs) {
        // 0x8029EE9C: ldc1        $f20, 0x8($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
            goto L_8029EEA8;
    }
    goto skip_8;
    // 0x8029EE9C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    skip_8:
    // 0x8029EEA0: add.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f18.fl;
L_8029EEA4:
    // 0x8029EEA4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8029EEA8:
    // 0x8029EEA8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8029EEAC: jr          $ra
    // 0x8029EEB0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8029EEB0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_802A1F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F80: jr          $ra
    // 0x802A1F84: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
    return;
    // 0x802A1F84: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
;}
RECOMP_FUNC void func_8024A8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A8F0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8024A8F4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8024A8F8: andi        $t6, $s3, 0xFFFF
    ctx->r14 = ctx->r19 & 0XFFFF;
    // 0x8024A8FC: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8024A900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024A904: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8024A908: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8024A90C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8024A910:
    // 0x8024A910: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024A914: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x8024A918: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8024A91C: bne         $at, $zero, L_8024A910
    if (ctx->r1 != 0) {
        // 0x8024A920: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_8024A910;
    }
    // 0x8024A920: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x8024A924: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8024A928: sw          $t7, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r15;
    // 0x8024A92C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8024A930: addiu       $t9, $zero, 0x23
    ctx->r25 = ADD32(0, 0X23);
    // 0x8024A934: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8024A938: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8024A93C: sb          $t8, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r24;
    // 0x8024A940: sb          $t9, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r25;
    // 0x8024A944: sb          $t6, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r14;
    // 0x8024A948: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    // 0x8024A94C: jal         0x8024A590
    // 0x8024A950: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    static_3_8024A590(rdram, ctx);
        goto after_0;
    // 0x8024A950: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    after_0:
    // 0x8024A954: sll         $t8, $s3, 5
    ctx->r24 = S32(ctx->r19 << 5);
    // 0x8024A958: or          $t9, $v0, $t8
    ctx->r25 = ctx->r2 | ctx->r24;
    // 0x8024A95C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8024A960: sh          $t9, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r25;
    // 0x8024A964: sb          $t6, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r14;
    // 0x8024A968: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x8024A96C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
L_8024A970:
    // 0x8024A970: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x8024A974: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8024A978: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8024A97C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8024A980: bne         $at, $zero, L_8024A970
    if (ctx->r1 != 0) {
        // 0x8024A984: sb          $t7, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r15;
            goto L_8024A970;
    }
    // 0x8024A984: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8024A988: beq         $s2, $zero, L_8024A9D4
    if (ctx->r18 == 0) {
        // 0x8024A98C: addiu       $t8, $sp, 0x24
        ctx->r24 = ADD32(ctx->r29, 0X24);
            goto L_8024A9D4;
    }
    // 0x8024A98C: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x8024A990: blez        $s2, L_8024A9D4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8024A994: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8024A9D4;
    }
    // 0x8024A994: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8024A998: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x8024A99C: beq         $a0, $zero, L_8024A9B8
    if (ctx->r4 == 0) {
        // 0x8024A9A0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8024A9B8;
    }
    // 0x8024A9A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8024A9A4:
    // 0x8024A9A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024A9A8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8024A9AC: bne         $v0, $v1, L_8024A9A4
    if (ctx->r2 != ctx->r3) {
        // 0x8024A9B0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8024A9A4;
    }
    // 0x8024A9B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8024A9B4: beq         $v1, $s2, L_8024A9D4
    if (ctx->r3 == ctx->r18) {
        // 0x8024A9B8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8024A9D4;
    }
L_8024A9B8:
    // 0x8024A9B8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8024A9BC: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8024A9C0: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8024A9C4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8024A9C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8024A9CC: bne         $v1, $s2, L_8024A9B8
    if (ctx->r3 != ctx->r18) {
        // 0x8024A9D0: sb          $zero, -0x4($s0)
        MEM_B(-0X4, ctx->r16) = 0;
            goto L_8024A9B8;
    }
    // 0x8024A9D0: sb          $zero, -0x4($s0)
    MEM_B(-0X4, ctx->r16) = 0;
L_8024A9D4:
    // 0x8024A9D4: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x8024A9D8: addiu       $t6, $t8, 0x24
    ctx->r14 = ADD32(ctx->r24, 0X24);
L_8024A9DC:
    // 0x8024A9DC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8024A9E0: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8024A9E4: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x8024A9E8: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x8024A9EC: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8024A9F0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8024A9F4: swl         $at, -0x8($t7)
    do_swl(rdram, -0X8, ctx->r15, ctx->r1);
    // 0x8024A9F8: swr         $at, -0x5($t7)
    do_swr(rdram, -0X5, ctx->r15, ctx->r1);
    // 0x8024A9FC: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8024AA00: nop

    // 0x8024AA04: swl         $at, -0x4($t7)
    do_swl(rdram, -0X4, ctx->r15, ctx->r1);
    // 0x8024AA08: bne         $t8, $t6, L_8024A9DC
    if (ctx->r24 != ctx->r14) {
        // 0x8024AA0C: swr         $at, -0x1($t7)
        do_swr(rdram, -0X1, ctx->r15, ctx->r1);
            goto L_8024A9DC;
    }
    // 0x8024AA0C: swr         $at, -0x1($t7)
    do_swr(rdram, -0X1, ctx->r15, ctx->r1);
    // 0x8024AA10: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8024AA14: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x8024AA18: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x8024AA1C: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x8024AA20: sb          $t9, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r25;
    // 0x8024AA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024AA28: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8024AA2C: jr          $ra
    // 0x8024AA30: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024AA30: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
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
RECOMP_FUNC void func_8022970C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022970C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80229710: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229714: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80229718: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8022971C: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x80229720: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80229724: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80229728: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8022972C: sw          $v1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r3;
    // 0x80229730: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80229734: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80229738: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x8022973C: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80229740: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80229744: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x80229748: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x8022974C: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x80229750: jr          $ra
    // 0x80229754: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    return;
    // 0x80229754: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
;}
RECOMP_FUNC void static_3_80201448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80201FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_8021ACB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_8021B838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_8022FF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80231A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80234C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80234C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80234D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80237120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80237150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802374B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802375F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80237738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802377C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80237840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80241760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}

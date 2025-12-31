#include "/home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"stdio.c"
	.option nopic
	.text
	.globl	__umodsi3
	.globl	__modsi3
	.globl	__udivsi3
	.globl	__divsi3
	.section	.text.number,"ax",@progbits
	.align	2
	.type	number, @function
number:
	addi	sp,sp,-424
	addi	a5,a0,1
	sw	ra,420(sp)
	sw	s0,416(sp)
	sw	s1,412(sp)
	sw	a5,8(sp)
	bne	a1,zero,.L2
	li	a5,48
	sb	a5,0(a0)
	lw	ra,420(sp)
	lw	s0,416(sp)
	lw	a0,8(sp)
	lw	s1,412(sp)
	addi	sp,sp,424
	jr	ra
.L2:
	mv	a4,a1
	mv	s1,a2
	bge	a1,zero,.L8
	li	a5,45
	sb	a5,0(a0)
	neg	a4,a1
.L4:
	addi	s0,sp,12
	li	a3,0
.L5:
	mv	a1,s1
	mv	a0,a4
	sw	a3,4(sp)
	sw	a4,0(sp)
	call	__modsi3
	lw	a4,0(sp)
	mv	a5,a0
	mv	a1,s1
	mv	a0,a4
	sw	a5,0(s0)
	sw	a5,0(sp)
	call	__divsi3
	lw	a3,4(sp)
	lw	a5,0(sp)
	mv	a4,a0
	mv	a2,a3
	addi	s0,s0,4
	addi	a3,a3,1
	bne	a0,zero,.L5
	slli	a4,a2,2
	addi	a4,a4,8
	lw	a3,8(sp)
	add	a4,a4,sp
	addi	a1,sp,8
	j	.L6
.L7:
	lw	a5,0(a4)
	addi	a4,a4,-4
.L6:
	addi	a5,a5,48
	sb	a5,0(a3)
	addi	a3,a3,1
	bne	a4,a1,.L7
	lw	a5,8(sp)
	lw	ra,420(sp)
	lw	s0,416(sp)
	addi	a2,a2,1
	add	a5,a5,a2
	sw	a5,8(sp)
	lw	a0,8(sp)
	lw	s1,412(sp)
	addi	sp,sp,424
	jr	ra
.L8:
	sw	a0,8(sp)
	j	.L4
	.size	number, .-number
	.section	.rodata.vsprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"AM Panic: "
	.align	2
.LC1:
	.string	"Not implemented"
	.align	2
.LC2:
	.string	" @ /home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/klib/src/stdio.c:108  \n"
	.align	2
.LC3:
	.string	" @ /home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/klib/src/stdio.c:113  \n"
	.section	.text.vsprintf,"ax",@progbits
	.align	2
	.globl	vsprintf
	.hidden	vsprintf
	.type	vsprintf, @function
vsprintf:
	addi	sp,sp,-24
	sw	ra,20(sp)
	sw	s0,16(sp)
	sw	s1,12(sp)
	lbu	a4,0(a1)
	sw	a0,0(sp)
	beq	a4,zero,.L43
	mv	t1,a2
	li	s0,0
	mv	a2,a0
	j	.L42
.L14:
	sb	a4,0(a2)
	mv	a1,s1
	addi	a2,a2,1
.L24:
	lbu	a4,0(a1)
	beq	a4,zero,.L61
.L42:
	li	a3,37
	addi	s1,a1,1
	bne	a4,a3,.L14
	lbu	a3,1(a1)
	li	a1,9
	addi	a4,a3,-48
	andi	a4,a4,0xff
	bgtu	a4,a1,.L15
.L16:
	lbu	a3,1(s1)
	addi	s1,s1,1
	addi	a4,a3,-48
	andi	a4,a4,0xff
	bleu	a4,a1,.L16
.L15:
	addi	a3,a3,-99
	andi	a3,a3,0xff
	li	a4,21
	bgtu	a3,a4,.L17
	lla	a5,.L19
	slli	a3,a3,2
	add	a3,a3,a5
	lw	a4,0(a3)
	add	a4,a4,a5
	jr	a4
	.section	.rodata.vsprintf,"a",@progbits
	.align	2
	.align	2
.L19:
	.word	.L23-.L19
	.word	.L22-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L21-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L20-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L17-.L19
	.word	.L18-.L19
	.section	.text.vsprintf
.L18:
	lw	a1,0(t1)
	mv	a0,a2
	sw	t1,4(sp)
	li	a2,16
.L60:
	call	number
	lw	t1,4(sp)
	mv	a2,a0
	addi	t1,t1,4
.L59:
	addi	a1,s1,1
.L62:
	lbu	a4,0(a1)
	bne	a4,zero,.L42
.L61:
	lw	a5,0(sp)
	sub	a0,a2,a5
.L13:
	sb	zero,0(a2)
	lw	ra,20(sp)
	lw	s0,16(sp)
	lw	s1,12(sp)
	addi	sp,sp,24
	jr	ra
.L20:
	mv	a0,s0
	sw	t1,8(sp)
	sw	a2,4(sp)
	call	strlen
	lw	a2,4(sp)
	lw	t1,8(sp)
	add	a4,s0,a0
	ble	a0,zero,.L29
.L28:
	sb	zero,0(s0)
	addi	s0,s0,1
	bne	s0,a4,.L28
.L29:
	lw	s0,0(t1)
	addi	t1,t1,4
	sw	a2,8(sp)
	mv	a0,s0
	sw	t1,4(sp)
	call	strlen
	lw	a2,8(sp)
	lw	t1,4(sp)
	mv	a4,s0
	add	a1,a2,a0
	beq	a0,zero,.L59
.L30:
	lbu	a3,0(a4)
	addi	a2,a2,1
	addi	a4,a4,1
	sb	a3,-1(a2)
	bne	a1,a2,.L30
	add	s0,s0,a0
	addi	a1,s1,1
	j	.L62
.L21:
	lbu	a4,1(s1)
	li	a3,100
	beq	a4,a3,.L31
	li	a3,120
	bne	a4,a3,.L63
	lw	a1,0(t1)
	mv	a0,a2
	addi	t1,t1,4
	li	a2,16
	sw	t1,4(sp)
	call	number
	lw	t1,4(sp)
	mv	a2,a0
	addi	a1,s1,2
	j	.L24
.L22:
	mv	a0,a2
	lw	a1,0(t1)
	sw	t1,4(sp)
	li	a2,10
	j	.L60
.L23:
	lw	a4,0(t1)
	addi	a1,s1,1
	addi	t1,t1,4
	sb	a4,0(a2)
	addi	a2,a2,1
	j	.L24
.L31:
	lw	a1,0(t1)
	mv	a0,a2
	addi	t1,t1,4
	li	a2,10
	sw	t1,4(sp)
	call	number
	lw	t1,4(sp)
	mv	a2,a0
	addi	a1,s1,2
	j	.L24
.L17:
	li	a0,10
	call	putch
	lbu	a0,0(s1)
	lla	s0,.LC0
	call	putch
	li	a0,10
	call	putch
	li	a0,65
.L38:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L38
	lla	s0,.LC1
	li	a0,78
.L39:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L39
	lla	s0,.LC3
	li	a0,32
.L40:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L40
.L41:
	li	a0,1
	call	halt
.L43:
	lw	a2,0(sp)
	li	a0,0
	j	.L13
.L63:
	li	a0,10
	call	putch
	li	a0,108
	call	putch
	lbu	a0,1(s1)
	lla	s0,.LC0
	call	putch
	li	a0,10
	call	putch
	li	a0,65
.L35:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L35
	lla	s0,.LC1
	li	a0,78
.L36:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L36
	lla	s0,.LC2
	li	a0,32
.L37:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L37
	j	.L41
	.size	vsprintf, .-vsprintf
	.section	.text.printf,"ax",@progbits
	.align	2
	.globl	printf
	.hidden	printf
	.type	printf, @function
printf:
	addi	sp,sp,-40
	sw	s0,12(sp)
	sw	a5,36(sp)
	mv	s0,a0
	addi	a5,sp,20
	lla	a0,buffer
	sw	ra,16(sp)
	sw	s1,8(sp)
	sw	a1,20(sp)
	sw	a2,24(sp)
	sw	a3,28(sp)
	sw	a4,32(sp)
	sw	a5,4(sp)
	call	strlen
	ble	a0,zero,.L65
	lla	a5,buffer
	add	a4,a0,a5
.L66:
	sb	zero,0(a5)
	addi	a5,a5,1
	bne	a5,a4,.L66
.L65:
	lw	a2,4(sp)
	mv	a1,s0
	lla	a0,buffer
	call	vsprintf
	sw	a0,0(sp)
	ble	a0,zero,.L64
	lla	s1,buffer
	add	s0,a0,s1
.L68:
	lbu	a0,0(s1)
	addi	s1,s1,1
	call	putch
	bne	s0,s1,.L68
.L64:
	lw	ra,16(sp)
	lw	s0,12(sp)
	lw	a0,0(sp)
	lw	s1,8(sp)
	addi	sp,sp,40
	jr	ra
	.size	printf, .-printf
	.section	.text.sprintf,"ax",@progbits
	.align	2
	.globl	sprintf
	.hidden	sprintf
	.type	sprintf, @function
sprintf:
	addi	sp,sp,-32
	sw	a5,28(sp)
	addi	a5,sp,16
	sw	s0,8(sp)
	sw	s1,4(sp)
	sw	ra,12(sp)
	mv	s0,a0
	mv	s1,a1
	sw	a2,16(sp)
	sw	a3,20(sp)
	sw	a4,24(sp)
	sw	a5,0(sp)
	call	strlen
	ble	a0,zero,.L73
	mv	a5,s0
	add	a4,a0,s0
.L74:
	sb	zero,0(a5)
	addi	a5,a5,1
	bne	a5,a4,.L74
.L73:
	lw	a2,0(sp)
	mv	a1,s1
	mv	a0,s0
	call	vsprintf
	lw	ra,12(sp)
	lw	s0,8(sp)
	lw	s1,4(sp)
	addi	sp,sp,32
	jr	ra
	.size	sprintf, .-sprintf
	.section	.rodata.snprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC4:
	.string	" @ /home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/klib/src/stdio.c:141  \n"
	.section	.text.snprintf,"ax",@progbits
	.align	2
	.globl	snprintf
	.hidden	snprintf
	.type	snprintf, @function
snprintf:
	addi	sp,sp,-24
	sw	s0,4(sp)
	sw	ra,8(sp)
	sw	a3,12(sp)
	sw	a4,16(sp)
	sw	a5,20(sp)
	lla	s0,.LC0
	li	a0,65
.L78:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L78
	lla	s0,.LC1
	li	a0,78
.L79:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L79
	lla	s0,.LC4
	li	a0,32
.L80:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L80
	li	a0,1
	call	halt
	.size	snprintf, .-snprintf
	.section	.rodata.vsnprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC5:
	.string	" @ /home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/klib/src/stdio.c:145  \n"
	.section	.text.vsnprintf,"ax",@progbits
	.align	2
	.globl	vsnprintf
	.hidden	vsnprintf
	.type	vsnprintf, @function
vsnprintf:
	addi	sp,sp,-12
	sw	s0,4(sp)
	sw	ra,8(sp)
	lla	s0,.LC0
	li	a0,65
.L86:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L86
	lla	s0,.LC1
	li	a0,78
.L87:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L87
	lla	s0,.LC5
	li	a0,32
.L88:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L88
	li	a0,1
	call	halt
	.size	vsnprintf, .-vsnprintf
	.section	.bss.buffer,"aw",@nobits
	.align	2
	.type	buffer, @object
	.size	buffer, 32768
buffer:
	.zero	32768
	.ident	"GCC: (Ubuntu 11.2.0-16ubuntu1) 11.2.0"
	.section	.note.GNU-stack,"",@progbits

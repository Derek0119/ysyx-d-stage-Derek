#include "/home/derek/D-stage-ci/workbench/ics2025~v/abstract-machine/tools/minirv/inst-replace.h"
	.file	"stdio.c"
	.option nopic
	.text
	.section	.rodata.printf.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"AM Panic: "
	.align	2
.LC1:
	.string	"Not implemented"
	.align	2
.LC2:
	.string	" @ /home/derek/D-stage-ci/workbench/ics2025~v/abstract-machine/klib/src/stdio.c:9  \n"
	.section	.text.printf,"ax",@progbits
	.align	2
	.globl	printf
	.hidden	printf
	.type	printf, @function
printf:
	addi	sp,sp,-32
	sw	s0,4(sp)
	sw	ra,8(sp)
	sw	a1,12(sp)
	sw	a2,16(sp)
	sw	a3,20(sp)
	sw	a4,24(sp)
	sw	a5,28(sp)
	lla	s0,.LC0
	li	a0,65
.L2:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L2
	lla	s0,.LC1
	li	a0,78
.L3:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L3
	lla	s0,.LC2
	li	a0,32
.L4:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L4
	li	a0,1
	call	halt
	.size	printf, .-printf
	.section	.rodata.vsprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC3:
	.string	" @ /home/derek/D-stage-ci/workbench/ics2025~v/abstract-machine/klib/src/stdio.c:13  \n"
	.section	.text.vsprintf,"ax",@progbits
	.align	2
	.globl	vsprintf
	.hidden	vsprintf
	.type	vsprintf, @function
vsprintf:
	addi	sp,sp,-12
	sw	s0,4(sp)
	sw	ra,8(sp)
	lla	s0,.LC0
	li	a0,65
.L11:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L11
	lla	s0,.LC1
	li	a0,78
.L12:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L12
	lla	s0,.LC3
	li	a0,32
.L13:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L13
	li	a0,1
	call	halt
	.size	vsprintf, .-vsprintf
	.section	.rodata.sprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC4:
	.string	" @ /home/derek/D-stage-ci/workbench/ics2025~v/abstract-machine/klib/src/stdio.c:17  \n"
	.section	.text.sprintf,"ax",@progbits
	.align	2
	.globl	sprintf
	.hidden	sprintf
	.type	sprintf, @function
sprintf:
	addi	sp,sp,-28
	sw	s0,4(sp)
	sw	ra,8(sp)
	sw	a2,12(sp)
	sw	a3,16(sp)
	sw	a4,20(sp)
	sw	a5,24(sp)
	lla	s0,.LC0
	li	a0,65
.L19:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L19
	lla	s0,.LC1
	li	a0,78
.L20:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L20
	lla	s0,.LC4
	li	a0,32
.L21:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L21
	li	a0,1
	call	halt
	.size	sprintf, .-sprintf
	.section	.rodata.snprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC5:
	.string	" @ /home/derek/D-stage-ci/workbench/ics2025~v/abstract-machine/klib/src/stdio.c:21  \n"
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
.L27:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L27
	lla	s0,.LC1
	li	a0,78
.L28:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L28
	lla	s0,.LC5
	li	a0,32
.L29:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L29
	li	a0,1
	call	halt
	.size	snprintf, .-snprintf
	.section	.rodata.vsnprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC6:
	.string	" @ /home/derek/D-stage-ci/workbench/ics2025~v/abstract-machine/klib/src/stdio.c:25  \n"
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
	lla	s0,.LC6
	li	a0,32
.L37:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L37
	li	a0,1
	call	halt
	.size	vsnprintf, .-vsnprintf
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits

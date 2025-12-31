#include "/home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"string.c"
	.option nopic
	.text
	.section	.text.strlen,"ax",@progbits
	.align	2
	.globl	strlen
	.hidden	strlen
	.type	strlen, @function
strlen:
	mv	a4,a0
	beq	a0,zero,.L4
	lbu	a5,0(a0)
	li	a0,0
	beq	a5,zero,.L5
.L3:
	addi	a0,a0,1
	add	a5,a4,a0
	lbu	a5,0(a5)
	bne	a5,zero,.L3
	ret
.L4:
	li	a0,0
	ret
.L5:
	ret
	.size	strlen, .-strlen
	.section	.text.strcpy,"ax",@progbits
	.align	2
	.globl	strcpy
	.hidden	strcpy
	.type	strcpy, @function
strcpy:
	beq	a1,zero,.L9
	lbu	a5,0(a1)
	mv	a4,a0
	beq	a5,zero,.L10
.L11:
	sb	a5,0(a4)
	lbu	a5,1(a1)
	addi	a4,a4,1
	addi	a1,a1,1
	bne	a5,zero,.L11
.L10:
	sb	zero,0(a4)
.L9:
	ret
	.size	strcpy, .-strcpy
	.section	.text.strncpy,"ax",@progbits
	.align	2
	.globl	strncpy
	.hidden	strncpy
	.type	strncpy, @function
strncpy:
	beq	a1,zero,.L19
	beq	a2,zero,.L25
	mv	a4,a0
	li	a5,0
	j	.L24
.L21:
	sb	a3,0(a4)
	addi	a5,a5,1
	addi	a4,a4,1
	beq	a2,a5,.L22
.L24:
	add	a3,a1,a5
	lbu	a3,0(a3)
	bne	a3,zero,.L21
	sb	zero,0(a4)
	beq	a2,a5,.L22
.L19:
	ret
.L22:
	add	a2,a0,a2
	sb	zero,0(a2)
.L28:
	ret
.L25:
	mv	a2,a0
	sb	zero,0(a2)
	j	.L28
	.size	strncpy, .-strncpy
	.section	.text.strcat,"ax",@progbits
	.align	2
	.globl	strcat
	.hidden	strcat
	.type	strcat, @function
strcat:
	lbu	a5,0(a0)
	beq	a5,zero,.L34
	mv	a5,a0
.L31:
	lbu	a4,1(a5)
	addi	a5,a5,1
	bne	a4,zero,.L31
.L30:
	lbu	a4,0(a1)
	beq	a4,zero,.L32
.L33:
	sb	a4,0(a5)
	lbu	a4,1(a1)
	addi	a5,a5,1
	addi	a1,a1,1
	bne	a4,zero,.L33
.L32:
	sb	zero,0(a5)
	ret
.L34:
	mv	a5,a0
	j	.L30
	.size	strcat, .-strcat
	.section	.text.strcmp,"ax",@progbits
	.align	2
	.globl	strcmp
	.hidden	strcmp
	.type	strcmp, @function
strcmp:
	lbu	a4,0(a0)
	li	a3,0
	beq	a4,zero,.L42
.L41:
	add	a5,a1,a3
	lbu	a5,0(a5)
	beq	a5,zero,.L50
	beq	a5,a4,.L51
	sltu	a0,a5,a4
	slli	a0,a0,1
	addi	a0,a0,-1
	ret
.L51:
	addi	a3,a3,1
	add	a5,a0,a3
	lbu	a4,0(a5)
	bne	a4,zero,.L41
	add	a1,a1,a3
.L42:
	lbu	a0,0(a1)
	snez	a0,a0
	neg	a0,a0
	ret
.L50:
	li	a0,1
	ret
	.size	strcmp, .-strcmp
	.section	.text.strncmp,"ax",@progbits
	.align	2
	.globl	strncmp
	.hidden	strncmp
	.type	strncmp, @function
strncmp:
	beq	a2,zero,.L57
	add	a2,a0,a2
.L56:
	lbu	a5,0(a0)
	lbu	a4,0(a1)
	bne	a5,zero,.L54
	snez	a4,a4
	neg	a0,a4
	ret
.L54:
	beq	a4,zero,.L58
	beq	a5,a4,.L61
	sgtu	a0,a5,a4
	slli	a0,a0,1
	addi	a0,a0,-1
	ret
.L61:
	addi	a0,a0,1
	addi	a1,a1,1
	bne	a2,a0,.L56
.L57:
	li	a0,0
	ret
.L58:
	li	a0,1
	ret
	.size	strncmp, .-strncmp
	.section	.text.memset,"ax",@progbits
	.align	2
	.globl	memset
	.hidden	memset
	.type	memset, @function
memset:
	andi	a1,a1,0xff
	add	a4,a0,a2
	mv	a5,a0
	beq	a2,zero,.L68
.L64:
	addi	a5,a5,1
	sb	a1,-1(a5)
	bne	a5,a4,.L64
.L68:
	ret
	.size	memset, .-memset
	.section	.text.memmove,"ax",@progbits
	.align	2
	.globl	memmove
	.hidden	memmove
	.type	memmove, @function
memmove:
	bgeu	a0,a1,.L70
	beq	a2,zero,.L71
	add	a2,a0,a2
	mv	a5,a0
.L72:
	lbu	a4,0(a1)
	addi	a5,a5,1
	addi	a1,a1,1
	sb	a4,-1(a5)
	bne	a5,a2,.L72
	ret
.L70:
	addi	a4,a2,-1
	add	a5,a0,a4
	add	a1,a1,a4
	beq	a2,zero,.L71
	addi	a3,a0,-1
.L73:
	lbu	a4,0(a1)
	addi	a5,a5,-1
	addi	a1,a1,-1
	sb	a4,1(a5)
	bne	a3,a5,.L73
.L71:
	ret
	.size	memmove, .-memmove
	.section	.text.memcpy,"ax",@progbits
	.align	2
	.globl	memcpy
	.hidden	memcpy
	.type	memcpy, @function
memcpy:
	beq	a2,zero,.L83
	add	a2,a0,a2
	mv	a5,a0
.L84:
	lbu	a4,0(a1)
	addi	a5,a5,1
	addi	a1,a1,1
	sb	a4,-1(a5)
	bne	a5,a2,.L84
.L83:
	ret
	.size	memcpy, .-memcpy
	.section	.text.memcmp,"ax",@progbits
	.align	2
	.globl	memcmp
	.hidden	memcmp
	.type	memcmp, @function
memcmp:
	beq	a2,zero,.L93
	add	a2,a0,a2
.L92:
	lbu	a5,0(a0)
	lbu	a4,0(a1)
	beq	a5,a4,.L96
	sltu	a0,a5,a4
	neg	a0,a0
	ori	a0,a0,1
	ret
.L96:
	addi	a0,a0,1
	addi	a1,a1,1
	bne	a0,a2,.L92
.L93:
	li	a0,0
	ret
	.size	memcmp, .-memcmp
	.ident	"GCC: (Ubuntu 11.2.0-16ubuntu1) 11.2.0"
	.section	.note.GNU-stack,"",@progbits

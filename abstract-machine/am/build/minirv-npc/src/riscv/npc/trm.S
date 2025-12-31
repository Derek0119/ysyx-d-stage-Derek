#include "/home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"trm.c"
	.option nopic
	.text
	.section	.text.putch,"ax",@progbits
	.align	2
	.globl	putch
	.hidden	putch
	.type	putch, @function
putch:
	li	a4,268435456
.L2:
	lbu	a5,5(a4)
	andi	a5,a5,32
	beq	a5,zero,.L2
	sb	a0,0(a4)
	ret
	.size	putch, .-putch
	.section	.text.halt,"ax",@progbits
	.align	2
	.globl	halt
	.hidden	halt
	.type	halt, @function
halt:
#APP
# 22 "/home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/am/src/riscv/npc/trm.c" 1
	mv a0, a0; ebreak
# 0 "" 2
#NO_APP
.L7:
	j	.L7
	.size	halt, .-halt
	.section	.text.uart_init,"ax",@progbits
	.align	2
	.globl	uart_init
	.hidden	uart_init
	.type	uart_init, @function
uart_init:
	li	a5,268435456
	li	a4,-125
	sb	a4,3(a5)
	sb	zero,1(a5)
	li	a4,2
	sb	a4,0(a5)
	li	a4,3
	sb	a4,3(a5)
	ret
	.size	uart_init, .-uart_init
	.section	.text._trm_init,"ax",@progbits
	.align	2
	.globl	_trm_init
	.hidden	_trm_init
	.type	_trm_init, @function
_trm_init:
	addi	sp,sp,-12
	lla	a0,.LANCHOR0
	sw	ra,8(sp)
	call	main
#APP
# 22 "/home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/am/src/riscv/npc/trm.c" 1
	mv a0, a0; ebreak
# 0 "" 2
#NO_APP
.L10:
	j	.L10
	.size	_trm_init, .-_trm_init
	.hidden	heap
	.globl	heap
	.section	.rodata.mainargs,"a"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	mainargs, @object
	.size	mainargs, 64
mainargs:
	.string	"h"
	.zero	62
	.section	.sdata.heap,"aw"
	.align	2
	.type	heap, @object
	.size	heap, 8
heap:
	.word	_heap_start
	.word	_pmem_start+134217728
	.ident	"GCC: (Ubuntu 11.2.0-16ubuntu1) 11.2.0"
	.section	.note.GNU-stack,"",@progbits

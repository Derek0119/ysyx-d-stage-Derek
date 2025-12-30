#include "/home/derek/D-stage-ci/workbench/ics2025~v/abstract-machine/tools/minirv/inst-replace.h"
	.file	"trm.c"
	.option nopic
	.text
	.section	.text.init_uart,"ax",@progbits
	.align	2
	.globl	init_uart
	.hidden	init_uart
	.type	init_uart, @function
init_uart:
	li	a5,268435456
	li	a4,-128
	sb	a4,3(a5)
	sb	zero,1(a5)
	li	a4,8
	sb	a4,0(a5)
	li	a4,7
	sb	a4,3(a5)
	ret
	.size	init_uart, .-init_uart
	.section	.text.putch,"ax",@progbits
	.align	2
	.globl	putch
	.hidden	putch
	.type	putch, @function
putch:
	li	a5,-1610612736
	sb	a0,1016(a5)
	ret
	.size	putch, .-putch
	.section	.text.halt,"ax",@progbits
	.align	2
	.globl	halt
	.hidden	halt
	.type	halt, @function
halt:
#APP
# 42 "/home/derek/D-stage-ci/workbench/ics2025~v/abstract-machine/am/src/riscv/npc/trm.c" 1
	mv a0, a0; ebreak
# 0 "" 2
#NO_APP
.L5:
	j	.L5
	.size	halt, .-halt
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
# 42 "/home/derek/D-stage-ci/workbench/ics2025~v/abstract-machine/am/src/riscv/npc/trm.c" 1
	mv a0, a0; ebreak
# 0 "" 2
#NO_APP
.L7:
	j	.L7
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
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits

#include "/home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"timer.c"
	.option nopic
	.text
	.section	.text.__am_timer_init,"ax",@progbits
	.align	2
	.globl	__am_timer_init
	.hidden	__am_timer_init
	.type	__am_timer_init, @function
__am_timer_init:
	ret
	.size	__am_timer_init, .-__am_timer_init
	.section	.text.__am_timer_uptime,"ax",@progbits
	.align	2
	.globl	__am_timer_uptime
	.hidden	__am_timer_uptime
	.type	__am_timer_uptime, @function
__am_timer_uptime:
#APP
# 22 "/home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/am/src/riscv/npc/timer.c" 1
	csrr a4, 2944
# 0 "" 2
# 23 "/home/zjt/npc-test-ci/ysyx-workbench/abstract-machine/am/src/riscv/npc/timer.c" 1
	csrr a5, 2816
# 0 "" 2
#NO_APP
	slli	a3,a4,31
	srli	a5,a5,1
	or	a5,a5,a3
	srli	a4,a4,1
	sw	a5,0(a0)
	sw	a4,4(a0)
	ret
	.size	__am_timer_uptime, .-__am_timer_uptime
	.section	.text.__am_timer_rtc,"ax",@progbits
	.align	2
	.globl	__am_timer_rtc
	.hidden	__am_timer_rtc
	.type	__am_timer_rtc, @function
__am_timer_rtc:
	li	a5,1900
	sw	zero,20(a0)
	sw	zero,16(a0)
	sw	zero,12(a0)
	sw	zero,8(a0)
	sw	zero,4(a0)
	sw	a5,0(a0)
	ret
	.size	__am_timer_rtc, .-__am_timer_rtc
	.ident	"GCC: (Ubuntu 11.2.0-16ubuntu1) 11.2.0"
	.section	.note.GNU-stack,"",@progbits

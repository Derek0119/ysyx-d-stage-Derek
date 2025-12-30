#include "/home/derek/D-stage-ci/workbench/ics2025~v/abstract-machine/tools/minirv/inst-replace.h"
.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer
  call _trm_init

.size _start, . - _start

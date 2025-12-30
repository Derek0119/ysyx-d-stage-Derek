#include <am.h>
#include <klib-macros.h>
// #include <stdio.h>
#include "../riscv.h"

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
// #define MAINARGS_MAX_LEN 64

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

# define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))  //将参数 code 移动到寄存器 a0 中，执行断点指令

void init_uart(void)
{
  // outb(UART16550_LCR, inb(UART16550_LCR) | 0x80);
  outb(UART16550_LCR, 0x80); //选择除数寄存器，设置LCR寄存器的DLAB位（第7位），启用除数寄存器
  outb(UART16550_DL2, 0);   //设置除数寄存器高字节
  outb(UART16550_DL1, 0x08);   //设置除数寄存器低字节，除数=系统时钟频率/(16*波特率)
  outb(UART16550_LCR, 0x07); //选择数据位、停止位、奇偶校验位。8数据位、1停止位、无奇偶校验
  
  // outb(UART16550_LCR, inb(UART16550_LCR) | 0x80);
  // uint16_t divisior = 50000000/(16 * 115200);
  // outb(UART16550_DL2, divisior >> 8);
  // outb(UART16550_DL1, divisior);
  // outb(UART16550_LCR, inb(UART16550_LCR) & (~0x80));

  // outb(0x10000000+0x2,0x01); // FCR寄存器，
  // outb(0x10000000+0x1,0x01); // 使能接收中断
}

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  npc_trap(code);
  while (1);
}

void _trm_init() {
  // init_uart();
  int ret = main(mainargs);
  // printf("ret: %d\n", ret);
  // putch('a');
  halt(ret);
}

#ifndef RISCV_H__
#define RISCV_H__

#include <stdint.h>

static inline uint8_t  inb(uintptr_t addr) { return *(volatile uint8_t  *)addr; }
static inline uint16_t inw(uintptr_t addr) { return *(volatile uint16_t *)addr; }
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }
static inline void outw(uintptr_t addr, uint16_t data) { *(volatile uint16_t *)addr = data; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }

#define PTE_V 0x01
#define PTE_R 0x02
#define PTE_W 0x04
#define PTE_X 0x08
#define PTE_U 0x10
#define PTE_A 0x40
#define PTE_D 0x80

enum { MODE_U, MODE_S, MODE_M = 3 };
#define MSTATUS_MXR  (1 << 19)
#define MSTATUS_SUM  (1 << 18)

#if __riscv_xlen == 64
#define MSTATUS_SXL  (2ull << 34)
#define MSTATUS_UXL  (2ull << 32)
#else
#define MSTATUS_SXL  0
#define MSTATUS_UXL  0
#endif

#define DEVICE_BASE     0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)

//串口
#define UART16550_BASE 0x10000000
#define UART16550_TX   UART16550_BASE + 0x00 //用于发送数据

#define UART16550_LCR  UART16550_BASE + 0x03  //用于设置串口的基本参数，数据位，停止位，奇偶校验位
#define UART16550_DL1  UART16550_BASE + 0x00  //用于设置波特率的除数寄存器
#define UART16550_DL2  UART16550_BASE + 0x01
#define UART16550_LSR  UART16550_BASE + 0x05 //用于查看uart的状态，包括发送队列是否满


//PS2键盘
#define PS2_KBD_ADDR  0x10011000
#define PS2_KBD_REG_SCANCODE  0x0


//VGA显示
#define VGA_FB_ADDR    0x21000000
#define VGA_CTL_ADDR   0x211FFFF0
#define VGA_SYNC_ADDR  (VGA_CTL_ADDR + 0x4)

typedef uintptr_t PTE;


#endif

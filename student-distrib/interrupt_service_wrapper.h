#ifndef INTERRUPT_SERVICE_WRAPPER_H
#define INTERRUPT_SERVICE_WRAPPER_H
#ifndef ASM
#include "x86_desc.h"

extern void keyboard_handler_asm();
extern void rtc_handler_asm();
extern void syscall_asm();
extern void switch_usr_mode(int entry);

#endif
#endif

#include <stdint.h>
/* A1: Bootloader-to-application handoff — course-owned diagnostic fixture. */
#define APPLICATION_VTOR 0x08000000u
volatile uint32_t scenario_result; int main(void){scenario_result=APPLICATION_VTOR;while(1){__asm volatile("nop");}}

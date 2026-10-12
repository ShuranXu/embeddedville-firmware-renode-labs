#include <stdint.h>
/* A4: Burst-safe command channel — course-owned diagnostic fixture. */
#define RING_WRAP_MASK 0xFFu
volatile uint32_t scenario_result; int main(void){scenario_result=RING_WRAP_MASK;while(1){__asm volatile("nop");}}

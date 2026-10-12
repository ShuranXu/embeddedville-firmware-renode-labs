#include <stdint.h>
/* A2: Crash record across watchdog reset — course-owned diagnostic fixture. */
#define CRASH_COMMIT_LAST 0
volatile uint32_t scenario_result; int main(void){scenario_result=CRASH_COMMIT_LAST;while(1){__asm volatile("nop");}}

#include <stdint.h>
/* A7: CI-gated production image — course-owned diagnostic fixture. */
#define NEGATIVE_FIXTURES_REQUIRED 0
volatile uint32_t scenario_result; int main(void){scenario_result=NEGATIVE_FIXTURES_REQUIRED;while(1){__asm volatile("nop");}}

#include <stdint.h>
/* B2: Cortex-M reset trace — course-owned diagnostic fixture. */
volatile uint32_t reached_main; int main(void){reached_main=1u;while(1){}}

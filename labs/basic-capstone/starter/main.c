#include <stdint.h>
/* B7: Recover first communication — course-owned diagnostic fixture. */
#define VECTOR_OK 0
#define CLOCK_OK 0
#define UART_OK 0
volatile uint32_t heartbeat; int main(void){if(VECTOR_OK&&CLOCK_OK&&UART_OK)heartbeat=0x45564842u;while(1){}}

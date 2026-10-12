#include <stdint.h>
/* B6: First trustworthy byte — course-owned diagnostic fixture. */
#define USART_BRR 0x0116u
const uint32_t peripheral_clock_hz=42000000u,target_baud=115200u; volatile uint8_t tx_pattern=0x55u; int main(void){while(1){}}

#include <stdint.h>
extern int main(void);
extern unsigned long _estack;
void Reset_Handler(void);
__attribute__((section(".isr_vector"))) const uintptr_t vectors[] = {(uintptr_t)&_estack, (uintptr_t)Reset_Handler};
void Reset_Handler(void) { (void)main(); while (1) {} }

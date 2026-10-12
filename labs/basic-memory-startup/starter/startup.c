#include <stdint.h>
extern int main(void);
extern uint32_t _sidata, _sdata, _edata, _sbss, _ebss;
extern unsigned long _estack;
void Reset_Handler(void);
__attribute__((section(".isr_vector"))) const uintptr_t vectors[] = {(uintptr_t)&_estack, (uintptr_t)Reset_Handler};
void Reset_Handler(void)
{
    uint32_t *src = &_sidata;
    uint32_t *dst = &_sdata;
    uint32_t *copy_end = &_edata - 1u; /* SEEDED DEFECT: stops one word early */
    while (dst < copy_end) *dst++ = *src++;
    for (dst = &_sbss; dst < &_ebss; ++dst) *dst = 0u;
    (void)main();
    while (1) {}
}

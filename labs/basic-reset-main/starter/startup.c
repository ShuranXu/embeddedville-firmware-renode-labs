#include <stdint.h>
extern int main(void);
extern unsigned long _estack;
void Reset_Handler(void);
/* The linker places these two entries at 0x08000000 and 0x08000004.
 * Their numeric contents are visible after linking with read-vectors. */
__attribute__((section(".isr_vector")))
const uintptr_t vectors[] = {
    (uintptr_t)&_estack,       /* vector[0]: initial MSP */
    (uintptr_t)Reset_Handler, /* vector[1]: reset vector */
};
void Reset_Handler(void) { (void)main(); while (1) {} }

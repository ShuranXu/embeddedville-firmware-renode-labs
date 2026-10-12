#include <stdint.h>
/* B3: Repair a broken runtime image — memory lifetime sentinels. */
volatile uint32_t initialized_words[2] = {0x11223344u, 0x55667788u};
volatile uint32_t zero_word;
__attribute__((section(".noinit"))) volatile uint32_t retained_word;
volatile uint32_t startup_result;
int main(void)
{
    startup_result = initialized_words[0] == 0x11223344u && initialized_words[1] == 0x55667788u && zero_word == 0u ? 0x600D600Du : 0xBAD00003u;
    if (retained_word != 0xCAFEBABEu) retained_word = 0xCAFEBABEu;
    while (1) { __asm volatile ("nop"); }
}

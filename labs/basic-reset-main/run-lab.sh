#!/usr/bin/env sh
set -eu
mkdir -p build
arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -ffreestanding -nostdlib -g3 -Wl,-T,starter/linker.ld,-Map,build/firmware.map -o build/firmware.elf starter/startup.c starter/main.c
exec renode --disable-xwt --console -e 'include @simulation/run.resc; start'

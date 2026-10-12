TOOLCHAIN ?= arm-none-eabi-
CFLAGS = -mcpu=cortex-m4 -mthumb -ffreestanding -Os -g3 -Wall -Wextra
all: build/firmware.elf
build/firmware.elf: starter/main.c starter/startup.c starter/linker.ld
	mkdir -p build
	$(TOOLCHAIN)gcc $(CFLAGS) -nostdlib -Wl,-T,starter/linker.ld,-Map,build/firmware.map -o $@ starter/startup.c starter/main.c
	$(TOOLCHAIN)size $@
check:
	python3 tools/validate.py
clean:
	rm -rf build lab-report.json

$ErrorActionPreference = "Stop"
New-Item -ItemType Directory -Force -Path build | Out-Null
& arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -ffreestanding -nostdlib -g3 -Wl,-T,starter/linker.ld,-Map,build/firmware.map -o build/firmware.elf starter/startup.c starter/main.c
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
& renode --disable-xwt --console -e "include @simulation/run.resc; start"

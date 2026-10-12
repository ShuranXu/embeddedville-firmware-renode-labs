#!/usr/bin/env bash
set -euo pipefail

chmod +x .devcontainer/bin/lab-command
for command in \
  read-vectors read-registers trace-reset-to-main show-memory-map run-memory-test warm-reset-test \
  calculate-brr run-uart-pattern run-uart-check triage-capstone run-capstone inspect-scenario \
  run-handoff-test run-crash-recovery run-dma-burst run-release-matrix; do
  sudo ln -sfn "$PWD/.devcontainer/bin/lab-command" "/usr/local/bin/$command"
done

renode --version
arm-none-eabi-gcc --version | head -n 1
qemu-system-arm --version | head -n 1
printf '\nWorkspace ready. Open the course lesson, then run: cd labs/<lesson-id>\n'

# EmbeddedVille Firmware Renode Labs

This public repository supplies the browser-hosted Renode workspaces used by the EmbeddedVille Firmware Basic and Firmware Advanced courses. It contains only retained learner starters; solutions and private course material are not included.

## Start a retained lab

1. Open this repository in GitHub Codespaces.
2. In the terminal, change to the directory named by the course lesson, for example `cd labs/basic-reset-main`.
3. Follow the lesson's evidence commands. Use `make` to build, `./run-lab.sh` to launch Renode, and `make check` to create `lab-report.json`.
4. Upload `lab-report.json` on EmbeddedVille to save the accepted result.

The development container pins Renode 1.16.1 and Arm GNU Toolchain 15.2.rel1. QEMU is present for the retained production-image activity.

## Retained workspaces

| Course | Lab directories |
|---|---|
| Firmware Basic | `basic-reset-main`, `basic-memory-startup`, `basic-uart`, `basic-capstone` |
| Firmware Advanced | `advanced-multi-image`, `advanced-crash-records`, `advanced-dma-uart`, `advanced-capstone` |

Each Codespace belongs to the learner's GitHub account. GitHub's included personal Codespaces allowance applies, and the same Codespace can be resumed across lessons.

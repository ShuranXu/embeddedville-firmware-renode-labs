# B6 · First trustworthy byte

Package: basic-uart v1.1.0 (starter)
Runtime: Renode 1.16.1

## Lab question

Why does the supplied UART pattern frame incorrectly, and what timing evidence proves the repair?

## Try it yourself first

1. Inspect the manifest-approved starter files without editing them.
2. Predict the first failed invariant and the evidence that would distinguish it from the next plausible cause.
3. Build and run the supplied fixture; save the first observation before reading the guided steps.

## Guided steps — reveal after your first attempt

<details>
<summary>I have tried; show the exact lab steps</summary>

1. Run `calculate-brr`; derive BRR from the 42 MHz peripheral clock.
2. Run `run-uart-pattern`; record the failing 0x55 timing.
3. In `starter/main.c`, change `USART_BRR 0x0116u` to `USART_BRR 0x016Du`.
4. Run `run-uart-check`; save the 115200-baud, no-framing-error result.

</details>

## Submit

Run `make check` to create `lab-report.json`, then upload that report to EmbeddedVille. Only manifest-approved files below `starter/` are learner-editable; build output is never checkpointed.

## Solution — read last

The answer is intentionally omitted from the starter package. Complete and submit the deterministic evidence to unlock the solution package.

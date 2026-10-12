# B7 · Recover first communication

Package: basic-capstone v1.1.0 (starter)
Runtime: Renode 1.16.1

## Lab question

In what dependency order should vector, clock and UART failures be investigated?

## Try it yourself first

1. Inspect the manifest-approved starter files without editing them.
2. Predict the first failed invariant and the evidence that would distinguish it from the next plausible cause.
3. Build and run the supplied fixture; save the first observation before reading the guided steps.

## Guided steps — reveal after your first attempt

<details>
<summary>I have tried; show the exact lab steps</summary>

1. Run `triage-capstone`; record vector as the first failed boundary.
2. Change VECTOR_OK, CLOCK_OK and UART_OK from 0 to 1 only after collecting evidence for each boundary.
3. Run `run-capstone`; save the PC, 84 MHz clock and EVHB UART evidence chain.

</details>

## Submit

Run `make check` to create `lab-report.json`, then upload that report to EmbeddedVille. Only manifest-approved files below `starter/` are learner-editable; build output is never checkpointed.

## Solution — read last

The answer is intentionally omitted from the starter package. Complete and submit the deterministic evidence to unlock the solution package.

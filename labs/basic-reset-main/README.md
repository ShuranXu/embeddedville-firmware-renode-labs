# B2 · Cortex-M reset trace

Package: basic-reset-main v1.1.0 (starter)
Runtime: Renode 1.16.1

## Lab question

How do the vector words, live registers and trace prove that startup reached main()?

## Try it yourself first

1. Inspect the manifest-approved starter files without editing them.
2. Predict the first failed invariant and the evidence that would distinguish it from the next plausible cause.
3. Build and run the supplied fixture; save the first observation before reading the guided steps.

## Guided steps — reveal after your first attempt

<details>
<summary>I have tried; show the exact lab steps</summary>

1. Run `read-vectors` and identify the initial MSP and Thumb reset vector.
2. Run `read-registers`; prove live MSP/PC agree with those vector words.
3. Run `trace-reset-to-main`; save the ordered Reset_Handler-to-main trace.

</details>

## Submit

Run `make check` to create `lab-report.json`, then upload that report to EmbeddedVille. Only manifest-approved files below `starter/` are learner-editable; build output is never checkpointed.

## Solution — read last

The answer is intentionally omitted from the starter package. Complete and submit the deterministic evidence to unlock the solution package.

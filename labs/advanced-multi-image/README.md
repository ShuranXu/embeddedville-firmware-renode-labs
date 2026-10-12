# A1 · Bootloader-to-application handoff

Package: advanced-multi-image v1.1.0 (starter)
Runtime: Renode 1.16.1

## Lab question

Why can application main run while interrupts still vector into the bootloader?

## Try it yourself first

1. Inspect the manifest-approved starter files without editing them.
2. Predict the first failed invariant and the evidence that would distinguish it from the next plausible cause.
3. Build and run the supplied fixture; save the first observation before reading the guided steps.

## Guided steps — reveal after your first attempt

<details>
<summary>I have tried; show the exact lab steps</summary>

1. Run `inspect-scenario` and `run-handoff-test`; compare VTOR, MSP and PC with image boundaries.
2. Change `APPLICATION_VTOR 0x08000000u` to `APPLICATION_VTOR 0x08020000u`.
3. Run `run-handoff-test --verify`; save the application interrupt-routing result.

</details>

## Submit

Run `make check` to create `lab-report.json`, then upload that report to EmbeddedVille. Only manifest-approved files below `starter/` are learner-editable; build output is never checkpointed.

## Solution — read last

The answer is intentionally omitted from the starter package. Complete and submit the deterministic evidence to unlock the solution package.

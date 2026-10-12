# B3 · Repair a broken runtime image

Package: basic-memory-startup v1.1.0 (starter)
Runtime: Renode 1.16.1

## Lab question

Which startup boundary is wrong when only the final initialized word is corrupt?

## Try it yourself first

1. Inspect the manifest-approved starter files without editing them.
2. Predict the first failed invariant and the evidence that would distinguish it from the next plausible cause.
3. Build and run the supplied fixture; save the first observation before reading the guided steps.

## Guided steps — reveal after your first attempt

<details>
<summary>I have tried; show the exact lab steps</summary>

1. Run `make && show-memory-map`; record .data LMA/VMA and .bss bounds.
2. Run `run-memory-test`; identify the last initialized word as the failed sentinel.
3. In `starter/startup.c`, change `copy_end = &_edata - 1u` to `copy_end = &_edata`.
4. Run `make && run-memory-test && warm-reset-test`; record .data, .bss and .noinit results.

</details>

## Submit

Run `make check` to create `lab-report.json`, then upload that report to EmbeddedVille. Only manifest-approved files below `starter/` are learner-editable; build output is never checkpointed.

## Solution — read last

The answer is intentionally omitted from the starter package. Complete and submit the deterministic evidence to unlock the solution package.

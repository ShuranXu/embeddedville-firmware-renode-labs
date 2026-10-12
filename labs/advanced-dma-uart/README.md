# A4 · Burst-safe command channel

Package: advanced-dma-uart v1.1.0 (starter)
Runtime: Renode 1.16.1

## Lab question

Why does the DMA ring lose bytes at wraparound, and which boundary corpus proves it?

## Try it yourself first

1. Inspect the manifest-approved starter files without editing them.
2. Predict the first failed invariant and the evidence that would distinguish it from the next plausible cause.
3. Build and run the supplied fixture; save the first observation before reading the guided steps.

## Guided steps — reveal after your first attempt

<details>
<summary>I have tried; show the exact lab steps</summary>

1. Run `inspect-scenario` and `run-dma-burst`; record produced, consumed and silently lost bytes.
2. Change `RING_WRAP_MASK 0xFFu` to `RING_WRAP_MASK 0x7Fu`.
3. Run `run-dma-burst --verify`; save the N-1/N/N+1 zero-loss matrix.

</details>

## Submit

Run `make check` to create `lab-report.json`, then upload that report to EmbeddedVille. Only manifest-approved files below `starter/` are learner-editable; build output is never checkpointed.

## Solution — read last

The answer is intentionally omitted from the starter package. Complete and submit the deterministic evidence to unlock the solution package.

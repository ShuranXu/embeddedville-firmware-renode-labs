# A2 · Crash record across watchdog reset

Package: advanced-crash-records v1.1.0 (starter)
Runtime: Renode 1.16.1

## Lab question

How can firmware distinguish a complete PSP crash record from an interrupted write?

## Try it yourself first

1. Inspect the manifest-approved starter files without editing them.
2. Predict the first failed invariant and the evidence that would distinguish it from the next plausible cause.
3. Build and run the supplied fixture; save the first observation before reading the guided steps.

## Guided steps — reveal after your first attempt

<details>
<summary>I have tried; show the exact lab steps</summary>

1. Run `inspect-scenario` and `run-crash-recovery`; identify the partial crash record.
2. Change `CRASH_COMMIT_LAST 0` to `CRASH_COMMIT_LAST 1`.
3. Run `run-crash-recovery --verify`; save EXC_RETURN, PSP frame and sealed-record evidence.

</details>

## Submit

Run `make check` to create `lab-report.json`, then upload that report to EmbeddedVille. Only manifest-approved files below `starter/` are learner-editable; build output is never checkpointed.

## Solution — read last

The answer is intentionally omitted from the starter package. Complete and submit the deterministic evidence to unlock the solution package.

# A7 · CI-gated production image

Package: advanced-capstone v1.1.0 (starter)
Runtime: Renode 1.16.1 + QEMU

## Lab question

Why must a release matrix prove that deliberately broken fixtures fail?

## Try it yourself first

1. Inspect the manifest-approved starter files without editing them.
2. Predict the first failed invariant and the evidence that would distinguish it from the next plausible cause.
3. Build and run the supplied fixture; save the first observation before reading the guided steps.

## Guided steps — reveal after your first attempt

<details>
<summary>I have tried; show the exact lab steps</summary>

1. Run `inspect-scenario` and `run-release-matrix`; verify the current gate incorrectly accepts broken fixtures.
2. Change `NEGATIVE_FIXTURES_REQUIRED 0` to `NEGATIVE_FIXTURES_REQUIRED 1`.
3. Run `run-release-matrix --verify`; save clean PASS and intended broken-fixture failures.

</details>

## Submit

Run `make check` to create `lab-report.json`, then upload that report to EmbeddedVille. Only manifest-approved files below `starter/` are learner-editable; build output is never checkpointed.

## Solution — read last

The answer is intentionally omitted from the starter package. Complete and submit the deterministic evidence to unlock the solution package.

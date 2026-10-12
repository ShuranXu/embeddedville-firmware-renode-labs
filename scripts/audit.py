from __future__ import annotations

import json
import pathlib
import sys


ROOT = pathlib.Path(__file__).resolve().parents[1]
EXPECTED = {
    "basic-reset-main",
    "basic-memory-startup",
    "basic-uart",
    "basic-capstone",
    "advanced-multi-image",
    "advanced-crash-records",
    "advanced-dma-uart",
    "advanced-capstone",
}

errors: list[str] = []
found = {path.name for path in (ROOT / "labs").iterdir() if path.is_dir()}
if found != EXPECTED:
    errors.append(f"retained lab set mismatch: expected {sorted(EXPECTED)}, found {sorted(found)}")

for lesson_id in sorted(EXPECTED):
    lab = ROOT / "labs" / lesson_id
    required = {
        "README.md",
        "Makefile",
        "lab-package.json",
        "run-lab.sh",
        "simulation/run.resc",
        "starter/main.c",
        "starter/startup.c",
        "starter/linker.ld",
        "tools/validate.py",
    }
    missing = sorted(item for item in required if not (lab / item).is_file())
    if missing:
        errors.append(f"{lesson_id}: missing {missing}")
        continue
    manifest = json.loads((lab / "lab-package.json").read_text())
    if manifest.get("lessonId") != lesson_id:
        errors.append(f"{lesson_id}: manifest lessonId mismatch")
    if manifest.get("engine") not in {"renode", "renode-qemu"}:
        errors.append(f"{lesson_id}: unsupported engine {manifest.get('engine')}")
    readme = (lab / "README.md").read_text()
    if "Renode" not in readme or "1.16.1" not in readme:
        errors.append(f"{lesson_id}: missing pinned Renode identity")

devcontainer = json.loads((ROOT / ".devcontainer/devcontainer.json").read_text())
if devcontainer.get("build", {}).get("dockerfile") != "Dockerfile":
    errors.append("devcontainer must build the reviewed Dockerfile")

dockerfile = (ROOT / ".devcontainer/Dockerfile").read_text()
for expected in ("RENODE_VERSION=1.16.1", "ARM_GNU_VERSION=15.2.rel1", "RENODE_SHA256="):
    if expected not in dockerfile:
        errors.append(f"Dockerfile missing {expected}")

if errors:
    print("\n".join(f"ERROR: {error}" for error in errors), file=sys.stderr)
    raise SystemExit(1)
print(f"Validated {len(EXPECTED)} retained Renode workspaces.")

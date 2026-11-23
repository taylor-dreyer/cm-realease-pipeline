#!/usr/bin/env python3
"""Generate buildinfo.h so every binary is traceable to an exact commit."""
import datetime
import os
import subprocess
import sys


def sh(cmd):
    return subprocess.check_output(cmd, text=True).strip()


version = sh(["git", "describe", "--tags", "--always", "--dirty"])
commit = sh(["git", "rev-parse", "HEAD"])
branch = os.environ.get("BRANCH_NAME") or sh(["git", "rev-parse", "--abbrev-ref", "HEAD"])
stamp = datetime.datetime.now(datetime.timezone.utc).isoformat()

out = sys.argv[1] if len(sys.argv) > 1 else "buildinfo.h"
with open(out, "w") as f:
    f.write(f'#define BUILD_VERSION "{version}"\n')
    f.write(f'#define BUILD_COMMIT "{commit}"\n')
    f.write(f'#define BUILD_BRANCH "{branch}"\n')
    f.write(f'#define BUILD_TIME_UTC "{stamp}"\n')
print(f"Wrote {out}: {version}")
#!/usr/bin/env bash
set -euo pipefail

BUILD_DIR=${1:-build}
JOBS=$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 2)

python3 scripts/gen_buildinfo.py app/buildinfo.h
cmake -S . -B "$BUILD_DIR" -DCMAKE_BUILD_TYPE=Release
cmake --build "$BUILD_DIR" -j"$JOBS"
ctest --test-dir "$BUILD_DIR" --output-on-failure
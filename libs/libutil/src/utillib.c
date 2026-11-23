#include <stdio.h>
#include "utillib.h"

void ul_make_banner(char *buf, size_t n, const char *name, const char *version) {
    snprintf(buf, n, "=== %s %s ===", name, version);
}
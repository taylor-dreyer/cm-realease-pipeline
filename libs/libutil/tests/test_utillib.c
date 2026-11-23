#include <stdio.h>
#include <string.h>
#include "utillib.h"

int main(void) {
    char buf[64];
    ul_make_banner(buf, sizeof buf, "myapp", "v1.0.0");
    if (strcmp(buf, "=== myapp v1.0.0 ===") != 0) {
        fprintf(stderr, "banner mismatch: %s\n", buf);
        return 1;
    }
    return 0;
}
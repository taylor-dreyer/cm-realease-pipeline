#include <stdio.h>
#include "mathlib.h"

int main(void) {
    if (ml_add(2, 3) != 5) { fprintf(stderr, "ml_add failed\n"); return 1; }
    if (ml_multiply(4, 5) != 20) { fprintf(stderr, "ml_multiply failed\n"); return 1; }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include "buildinfo.h"
#include "mathlib.h"
#include "utillib.h"
#include "cJSON.h"

static void print_version_text(void) {
    printf("myapp %s\n", BUILD_VERSION);
    printf("commit: %s\n", BUILD_COMMIT);
    printf("branch: %s\n", BUILD_BRANCH);
    printf("built:  %s\n", BUILD_TIME_UTC);
}

static void print_version_json(void) {
    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "version", BUILD_VERSION);
    cJSON_AddStringToObject(root, "commit", BUILD_COMMIT);
    cJSON_AddStringToObject(root, "branch", BUILD_BRANCH);
    cJSON_AddStringToObject(root, "built_utc", BUILD_TIME_UTC);
    char *text = cJSON_Print(root);
    printf("%s\n", text);
    cJSON_free(text);
    cJSON_Delete(root);
}

int main(int argc, char **argv) {
    if (argc > 1 && strcmp(argv[1], "--version") == 0) {
        print_version_text();
        return 0;
    }
    if (argc > 1 && strcmp(argv[1], "--json") == 0) {
        print_version_json();
        return 0;
    }

    char banner[80];
    ul_make_banner(banner, sizeof banner, "myapp", BUILD_VERSION);
    printf("%s\n", banner);
    printf("2 + 3 = %d\n", ml_add(2, 3));
    printf("4 * 5 = %d\n", ml_multiply(4, 5));
    return 0;
}
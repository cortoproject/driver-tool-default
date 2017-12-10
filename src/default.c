
#include <corto/corto.h>
#include <driver/tool/default/default.h>

int cortomain(int argc, char *argv[]) {

    int8_t rc, sig = corto_proc_cmd("corto --logo", &rc);
    if (sig || rc) {
        corto_throw("cannot invoke corto tool");
        goto error;
    }
    printf("Welcome to Corto! Unsure about what to do? Here are some ideas:\n");
    printf("\n");
    printf("corto create myApp\n");
    printf("  Create an executable corto application.\n");
    printf("\n");
    printf("corto create package myPackage\n");
    printf("  Create a corto package.\n");
    printf("\n");
    printf("corto sh\n");
    printf("  Start the corto shell.\n");
    printf("\n");
    printf("corto --help\n");
    printf("  Show all available corto commands.\n");
    printf("\n");
    printf("Happy coding!\n");

    return 0;
error:
    return -1;
}

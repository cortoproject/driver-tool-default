
#include <driver.tool.default>

int cortomain(int argc, char *argv[]) {

    int8_t rc, sig = ut_proc_cmd("corto --logo", &rc);
    if (sig || rc) {
        ut_throw("cannot invoke corto tool");
        goto error;
    }
    printf("Welcome to Corto! Unsure about what to do? Here are some ideas:\n");
    printf("\n");
    printf("corto create my_app\n");
    printf("  Create an executable corto application.\n");
    printf("\n");
    printf("corto create package my_package\n");
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

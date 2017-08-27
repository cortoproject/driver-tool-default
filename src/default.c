
#include <corto/corto.h>
#include <driver/tool/default/default.h>

int cortomain(int argc, char *argv[]) {

    if ((corto_fileTest("rakefile") && !corto_isdir("rakefile")) || corto_fileTest("project.json")) {
        corto_run("driver/tool/build", 1, (char*[]){"build", NULL});
    } else {
        int8_t rc, sig = corto_proccmd("corto --logo", &rc);
        if (sig || rc) {
            corto_seterr("cannot invoke corto tool");
            goto error;
        }
        printf("Welcome to Corto! Unsure about what to do? Here are some ideas:\n");
        printf("\n");
        printf("corto create myApp\n");
        printf("  Create a new corto app.\n");
        printf("\n");
        printf("corto create package myPackage\n");
        printf("  Create a new corto package.\n");
        printf("\n");
        printf("corto sh\n");
        printf("  Start the corto shell.\n");
        printf("\n");
        printf("corto --help\n");
        printf("  Show all available corto commands.\n");
        printf("\n");
        printf("Happy coding!\n");
    }

    return 0;
error:
    return -1;
}

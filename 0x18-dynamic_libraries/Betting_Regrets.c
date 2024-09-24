#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <dlfcn.h>

int printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    // Check if the format string matches "Sorry, try again!"
    if (strcmp(format, "Sorry, try again!\n") == 0) {
        const char *new_msg = "--> Please make me win!\n";
        va_end(args);
        return vprintf(new_msg, args);
    }

    // Otherwise, call the original printf
    int (*original_printf)(const char *, ...) = dlsym(RTLD_NEXT, "printf");
    int ret = original_printf(format, args);
    va_end(args);
    return ret;
}


//
// Created by ARmi on 2022/8/25.
//
#include <stdio.h>

/**
 *
 * @param argc argument count
 * @param argv argument vector
 * By convention, argv[0] is the name of the program.
 * By the C standard, argv[argc] is NULL.
 * @return
 */
int main(int argc, char *argv[]) {
//    printf("%d\n", argc);
    /**
     * 1st version: treat argv as an array of character pointers
     */
    for (int i = 1; i < argc; ++i) {
        printf("%s%s", argv[i], (i < argc - 1) ? " " : "");
    }
    printf("\n");

    /**
     * 2nd version: treat argv as a pointer to pointer to char
     */
    int i = argc;
    while (--i > 0) {
        printf("%s%s", *++argv, (i > 1) ? " " : "");
    }
    printf("\n");

    /**
     * 3rd version: use an expression as the format argument of printf
     */
    while (--argc > 0) {
        printf((argc > 1) ? "%s " : "%s", *++argv);
    }


    return 0;
}
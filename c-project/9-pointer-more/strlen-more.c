//
// Created by ARmi on 2022/8/24.
//
#include <stdlib.h>
#include <stdio.h>

size_t StrlenStd(const char *s);
int main() {
    char *msg = "Hello World!";
    // Don't do this!
    // *msg = 'N';

    printf("The length of the message \"%s\" = %zu\n",
           msg, StrlenStd(msg));

    return 0;
}

size_t StrlenStd(const char *s) {
    const char *sc;
    for (sc = s; *sc != '\0'; sc++);

    return (sc - s);
}
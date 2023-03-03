//
// Created by ARmi on 2022/8/24.
//
#include <stdio.h>

int Strlen(const char *s);
int main() {
    char msg[20] = "Hello World!";
    // This is OK
    msg[0] = 'N';

    printf("The length of the message \"%s\" = %d\n",
           msg, Strlen(msg));

    return 0;
}// close main


int Strlen(const char *s) {
    int length = 0;
    while(*s != '\0') {
        length ++;
        s++;
    }
    return 0;
}
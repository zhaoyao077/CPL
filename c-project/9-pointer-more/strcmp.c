//
// Created by ARmi on 2022/8/24.
//
#include <stdio.h>

int StrCmp(const char *s1, const char *s2);
int main() {
    const char * s1 = "Hello";
    const char * s2 = "Hell";
    printf("%d", StrCmp(s1, s2));
    return 0;
}


int StrCmp(const char *s1, const char *s2) {
    while(*s1 != '\0' && *s2 != '\0') {
        if(*s1 > *s2){
            return 1;
        } else if (*s1 < *s2) {
            return -1;
        }
        s1++;
        s2++;
    }
    if(*s1 == '\0' && *s2 != '\0') {
        return -1;
    }

    if(*s1 != '\0' && *s2 == '\0') {
        return 1;
    }

    return 0;
}
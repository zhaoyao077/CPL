//
// Created by ARmi on 2022/8/24.
//
#include <stdio.h>
#include <string.h>

void StrCpy1(char *dest, const char *src);
void StrCpy2(char *dest, const char *src);
void StrCpy3(char *dest, const char *src);
void StrCpy4(char *dest, const char *src);
char *StrCpyStd(char *s1, const char *s2);
int main() {
    const char *s = "Hello World";
    char d[strlen(s) + 1];

    StrCpy4(d, s);
    printf("%s\n", d);

    return 0;
}

void StrCpy1(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}


void StrCpy2(char *dest, const char *src) {
    int i = 0;
    while ((dest[i] = src[i]) != '\0') {
        i++;
    }
}


void StrCpy3(char *dest, const char *src) {
    int i = 0;
    while ((*(dest + i) = *(src + i)) != '\0') {
        i++;
    }
}


void StrCpy4(char *dest, const char *src) {
    while ((*(dest++) = *(src++)) != '\0');
    // 等价：while ((*dest++ = *src++) != '\0');
    // 等价：while ((*dest++ = *src++));
}

char *StrCpyStd(char *s1, const char *s2) {
    char *s = s1;
    for (s = s1; (*s++ = *s2++) != '\0';);

    return s1;
}
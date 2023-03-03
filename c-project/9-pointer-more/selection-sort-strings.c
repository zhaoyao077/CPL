//
// Created by ARmi on 2022/8/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintStrs(const char *str[], int len);
int CompareStrs(const void *left, const void *right);

int main(){
    const char *strings[] = {"he","she","hee","bee","apple"};
    int len = 5;

    qsort(strings, len, sizeof *strings,
          CompareStrs);

    PrintStrs(strings, len);

    return 0;
}


int CompareStrs(const void *left, const void *right) {
    char **pp1 = left;
    char **pp2 = right;
    return strcmp(*pp1, *pp2);
}


void PrintStrs(const char *str[], int len) {
    for (int i = 0; i < len; ++i) {
        printf("%s\n", str[i]);
    }
}
//
// Created by ARmi on 2022/8/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int CompareInts(const void *left, const void *right);
void PrintInts(const int integers[], int len);

int main(){
    int numbers[] = {-2, 99, 0, -743, 2, INT_MIN, 4};

    // calculate the length
    int size_of_numbers = sizeof numbers / sizeof *numbers;

    // assignment of pointer to function 函数指针赋值
    int (*comp)(const void *, const void *) = CompareInts;

    qsort(numbers, size_of_numbers, sizeof *numbers,
          comp);

    PrintInts(numbers, size_of_numbers);

    return 0;
}


int CompareInts(const void *left, const void *right) {
    int int_left = * (const int *) left;
    int int_right = * (const int *) right;

    if (int_left > int_right) {
        return 1;
    } else if (int_left < int_right) {
        return -1;
    } else {
        return 0;
    }
}


void PrintInts(const int integers[], int len) {
    for (int i = 0; i < len; ++i) {
        printf(i < len - 1 ? "%d " : "%d", integers[i]);
    }
}

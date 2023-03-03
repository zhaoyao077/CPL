//
// Created by ARmi on 2022/8/23.
//
#include<stdio.h>

int main() {
    int radius = 10;
    printf("radius = %d\n", radius);

    int *ptr_radius = &radius;// assignment
    printf("ptr = %p\n", ptr_radius);
    printf("value = %d\n", *ptr_radius);

    radius = 20;// change value
    *ptr_radius = 200;// change value
    printf("radius = %d\n", radius);

    printf("ptr = %p\n", ptr_radius);
    printf("value = %d\n", *ptr_radius);


    return 0;
}
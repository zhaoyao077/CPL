//
// Created by ARmi on 2022/7/15.
//
#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;

    scanf("%d%d",&a, &b);

    int min;
    if (a >= b){
        min = b;
    } else{
        min = a;
    }
    printf("min(%d,%d) = %d", a, b, min);

    return 0;
}
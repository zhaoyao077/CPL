//
// Created by ARmi on 2022/8/5.
//
#include<stdio.h>

int GCD(int a, int b);

int main(){
    int a;
    int b;
    scanf("%d %d", &a, &b);

    printf("%d", GCD(a, b));

    return 0;
}

int GCD(int a, int b){
    while(a != b){
        if (a > b){
            a = a - b;
        } else {
            b = b - a;
        }
    }

    return a;
}
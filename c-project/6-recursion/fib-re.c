//
// Created by ARmi on 2022/8/5.
//
#include<stdio.h>

#define LEN 30

int Fib(int n);

int main(){

    for (int i = 0; i < LEN; i++) {
        printf("Fib(%d) = %d\n", i, Fib(i));
    }

    return 0;
}

int Fib(int n){
    if (n < 2){
        return n;
    }

    // n >= 2
    return Fib(n-1) + Fib(n-2);
}
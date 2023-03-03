//
// Created by ARmi on 2022/8/5.
//
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    long long fib1 = 0;
    long long fib2 = 1;

    printf("%lld %lld ",fib1,fib2);

    for (int i = 0; i < n; i++) {
        long long fib3 = fib1 + fib2;
        printf("%lld ",fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    return 0;
}
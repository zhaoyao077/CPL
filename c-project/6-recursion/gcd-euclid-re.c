//
// Created by ARmi on 2022/8/5.
// 使用欧几里得算法求最大公约数
//
#include <stdio.h>

int GCD(int a, int b);
int GCD2(int a, int b);

int main(){
    int a;
    int b;

    scanf("%d %d", &a, &b);

    printf("gcd(%d,%d) = %d\n", a, b, GCD2(a, b));

    return 0;
}

int GCD(int a, int b){
    if(a == b) {
        return a;
    }

    if(a > b){
        return GCD(a - b, b);
    }

    return GCD(a, b - a);
}

int GCD2(int a, int b){
    if(b == 0){
        return a;
    }

    return GCD2(b, a % b);
}
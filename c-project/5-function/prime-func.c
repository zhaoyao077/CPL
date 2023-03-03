//
// Created by ARmi on 2022/7/17.
//
#include <stdio.h>
#include <math.h>

//function declaration
int IsPrime(int number);

int main(){
    int max = 100;
    for (int i = 2; i < max; i++) {
        if(IsPrime(i)){
            printf("%d ",i);
        }
    }

    return 0;
}

int IsPrime(int number){
    for (int i = 2; i < number; ++i) {
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}

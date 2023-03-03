//
// Created by ARmi on 2022/7/17.
//
#include <stdio.h>
#include <math.h>

int main(){
    int max = 100;
    int is_prime = 1;
    for (int i = 2; i < max; i++) {
        for (int j = 2; j <= ceil(sqrt(i)); j++) {
            if(i % j == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime){
            printf("%d ",i);
        }
        is_prime = 1;
    }

    return 0;
}

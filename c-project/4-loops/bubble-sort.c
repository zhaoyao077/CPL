//
// Created by ARmi on 2022/7/19.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LEN 1000
int numbers[LEN] = {0};

int main(){
    srand(time(NULL));
    for (int i = 0; i < LEN; ++i) {
        numbers[i] = rand() % LEN;
    }

    clock_t start = clock();

    for (int i = 0; i < LEN - 1; ++i) {
        for (int j = 0; j < LEN - i - 1; ++j) {
            if(numbers[j] > numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    clock_t diff = clock() - start;
    printf("It takes %d seconds to sort",diff / CLOCKS_PER_SEC);
    for (int i = 0; i < LEN; ++i) {
        printf("%d ",numbers[i]);
        if(i % 10 == 0){
            printf("\n");
        }
    }

}
//
// Created by ARmi on 2022/8/5.
//
#include <stdio.h>

#define NUM 5

int Min(int nums[], int len);

int main(){
    int numbers[NUM] = {23,45,10,3,10};

    printf("%d\n",Min(numbers, NUM));

    return 0;
}

int Min(int nums[], int len){
    if (len == 1){
        return nums[0];
    }

    int min = Min(nums, len - 1);
    return nums[len - 1] > min ? min :nums[len - 1];
}
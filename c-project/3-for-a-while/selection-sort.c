//
// Created by ARmi on 2022/7/17.
//
#include <stdio.h>

int main(){
//    int n = 0;
//    scanf("%d",&n);
//    /**
//     * VLA: variable-length array
//     * C99 introduces VLA
//     * C11 makes it optional
//     */
//     int numbers[n];

    int numbers[] = {2,1,20,3,0,7};
    int len = 6;

    /**
     * selection sort
     */
    for (int i = 0; i < len; i++) {
        /**
         * select the minimum number
         */
        int min = numbers[i];
        int min_index = i;
        for (int j = i + 1; j < len; j++) {
            if(min > numbers[j]){
                min = numbers[j];
                min_index = j;
            }
        }

        /**
         * swap numbers[i] and numbers[min_index]
         */
        int temp = numbers[i];
        numbers[i] = numbers[min_index];
        numbers[min_index] = temp;
    }

    /**
     * print the sorted array
     */
    for (int i = 0; i < len; ++i) {
        printf("%d ",numbers[i]);
    }

    return 0;
}
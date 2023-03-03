//
// Created by ARmi on 2022/7/17.
//
#include <stdio.h>

void SelectionSort(int array[], int len);

int main(){
    int numbers[] = {2,1,20,3,0,7};
    int len = 6;

    SelectionSort(numbers, len);

    for (int i = 0; i < len; ++i) {
        printf("%d ",numbers[i]);
    }

    return 0;
}

void Swap(int left, int right){
    int temp = left;
    left = right;
    right = temp;
}

void SelectionSort(int numbers[], int len){
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

}
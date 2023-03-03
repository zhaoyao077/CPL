//
// Created by ARmi on 2022/7/17.
//
#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int array[], int len);
void Swap(int *left, int *right);

int main(){
//    int numbers[] = {2,1,20,3,0,7};
//    int len = 6;

    int len = 0;
    printf("Please enter the length of the array.\n");
    scanf("%d", &len);


    // Memory Allocation
    int * numbers = malloc(len * sizeof(*numbers));
    if(numbers == NULL) {
        printf("Error! Memory Not Allocated.\n");
        return 0;
    }

    printf("Please enter %d numbers.\n", len);
    for (int i = 0; i < len; ++i) {
        scanf("%d", &numbers[i]);
    }

    SelectionSort(numbers, len);

    for (int i = 0; i < len; ++i) {
        printf("%d ",numbers[i]);
    }

    free(numbers);

    return 0;
}// close main


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


        Swap(&numbers[i], &numbers[min_index]);
    }
}//close function


void Swap(int *left, int *right){
    int temp = *left;
    *left = *right;
    *right = temp;
}//close function
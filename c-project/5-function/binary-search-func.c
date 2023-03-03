//
// Created by ARmi on 2022/7/17.
//
#include <stdio.h>

#define LEN 10

int BinarySearch(int key, const int dict[], int len);

int main(){
    int dict[LEN] = {1,2,4,5,6,8,9,10,11,13};

    /**
     * input the key to search
     */
    int key;
    printf("\nPlease input the key to search\n");
    scanf("%d",&key);


    /**
     * binary search
     */
    int index = BinarySearch(key, dict, LEN);


    /**
     * print the result
     */
    if(index == -1){
        printf("NOT FOUND\n");
    }else{
        printf("FOUND, THE INDEX IS %d\n",index);
    }

    return 0;
}

/**
 * Binary Search the DICT for the KEY
 * @param key the key to search
 * @param dict the DICT
 * @param len length of DICT
 * @return the index of key if exists, -1 otherwise
 */
int BinarySearch(int key, const int dict[], int len){
    int low = 0;
    int high = len - 1;
    int mid;

    while(low <= high){
        mid = (low + high) / 2;
        if(key > dict[mid]){
            low = mid + 1;
        }else if (key < dict[mid]){
            high = mid - 1;
        }else{
            return mid;
        }
    }

    return -1;
}
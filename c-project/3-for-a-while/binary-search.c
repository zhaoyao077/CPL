//
// Created by ARmi on 2022/7/17.
//
#include <stdio.h>

#define LEN 10

int main(){
    int dict[LEN] = {1,2,4,5,6,8,9,10,11,13};

    /**
     * the low and high defines the scale to search
     */
    int low = 0;
    int high = LEN - 1;

    /**
     * the key to search
     */
    int key;
    printf("Please input the key to search\n");
    scanf("%d",&key);
    int index = -1;

    /**
     * search
     */
    while(low <= high){
        int mid = (low + high) / 2;
        if(key > dict[mid]){
            low = mid + 1;
        }else if (key < dict[mid]){
            high = mid - 1;
        }else{
            index = mid;
            break;
        }
    }

    /**
     * print the result
     */
    if(index == -1){
        printf("NOT FOUND");
    }else{
        printf("find the item, its index is %d",index);
    }

    return 0;
}
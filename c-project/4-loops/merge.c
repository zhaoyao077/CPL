//
// Created by ARmi on 2022/7/19.
//
#include<stdio.h>
#define L_LEN 5
#define R_LEN 9

int arr1[L_LEN] = {1, 3, 5, 7, 9};
int arr2[R_LEN] = {0, 2, 4, 6, 8, 10, 12, 14, 16};

int main(){
    int l = 0;
    int r = 0;
    while(l < L_LEN && r < R_LEN){
        if(arr1[l] < arr2[r]){
            printf("%d ",arr1[l]);
            l++;
        } else{
            printf("%d ",arr2[r]);
            r++;
        }
    }

    while(l < L_LEN){
        printf("%d ",arr1[l]);
        l++;
    }

    while(r < R_LEN){
        printf("%d ",arr2[r]);
        r++;
    }

    return 0;
}
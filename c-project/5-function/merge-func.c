//
// Created by ARmi on 2022/7/19.
//
#include<stdio.h>
#define L_LEN 5
#define R_LEN 9

void Merge(const int left[], int left_len, const int right[], int right_len);

int main(){
    int left[L_LEN] = {1, 3, 5, 7, 9};
    int right[R_LEN] = {0, 2, 4, 6, 8, 10, 12, 14, 16};

    Merge(left, L_LEN, right, R_LEN);

    return 0;
}

void Merge(const int left[], int left_len, const int right[], int right_len){
    int l = 0;
    int r = 0;
    while(l < left_len && r < right_len){
        if(left[l] < right[r]){
            printf("%d ",left[l]);
            l++;
        } else{
            printf("%d ",right[r]);
            r++;
        }
    }

    while(l < left_len){
        printf("%d ",left[l]);
        l++;
    }

    while(r < right_len){
        printf("%d ",right[r]);
        r++;
    }
}
//
// Created by ARmi on 2022/7/17.
//
#include <stdio.h>

int main(){
    int rows = 10;
    for(int i = 0;i < rows;i++){
        for(int k = 0;k < rows - i;k++){
            printf(" ");
        }
        for (int j = 0;j < 2 * i -1;j++){
            printf("*");
        }
        if(i != rows - 1){
            printf("\n");
        }

    }
    return 0;
}
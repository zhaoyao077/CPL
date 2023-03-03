//
// Created by ARmi on 2022/7/17.
//
#include <stdio.h>

#define MAX 21
char string[MAX] = "";

int main(){
    scanf("%20s",string);
    int len = 0;
    while(string[len] != '\0'){
        len ++;
    }

    printf("length : %d\n",len);

    int is_palindrome = 1;
    for (int i = 0, j = len -1; i < j; i++, j--) {
        if(string[i] != string[j]){
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome){
        printf("The string '%s' is a palindrome",string);
    }else{
        printf("The string '%s' is NOT a palindrome",string);
    }

}
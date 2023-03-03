//
// Created by ARmi on 2022/7/17.
//
#include <stdio.h>
#define MAX 21

int IsPalindrome(const char str[]);

int main(){
    char string[MAX] = "";
    scanf("%20s",string);
    printf("The string '%s' is %sa palindrome",string, IsPalindrome(string) ? "": "NOT ");

    return 0;
}

int Len(const char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len ++;
    }
    return len;
}

int IsPalindrome(const char str[]){
    int len = Len(str);

    for (int i = 0, j = len -1; i < j; i++, j--) {
        if(str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}
//
// Created by ARmi on 2022/7/19.
//
#include <stdio.h>

int IsLeapYear(int year){
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main(){
    int year;
    scanf("%d",&year);

    if (IsLeapYear(year)) {
        printf("The year %d is a leap year\n",year);
    } else {
        printf("The year %d is not a leap year\n",year);
    }

    return 0;
}
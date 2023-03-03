//
// Created by ARmi on 2022/7/15.
//
#include <stdio.h>
#include <math.h>

int main(){
    char first_name[5];
    char last_name[3];
    char gender;

    int birth_year;
    int birth_month;
    int birth_day;
    char weekday[10];

    /**
     * Tayu lo
     * M
     * 1957-7-20
     * Tuesday
     */
     /**
      * %4s: only allowed to input four chars
      */
    scanf("%4s %2s %c %d-%d-%d %s",
          first_name, last_name, &gender,
          &birth_year, &birth_month, &birth_day, weekday);
    printf("first_name: %s\nlast_name: %s\ngender: %c\n"
           "%d-%d-%d %s\n",
           first_name, last_name, gender,
           birth_year, birth_month, birth_day, weekday);


    return 0;
}
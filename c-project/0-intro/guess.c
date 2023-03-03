//
// Created by ARmi on 2022/7/14.
//
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    int high = 100;
    int num_of_tries = 7;

    /**
     * (1) print the rules of the game
     */
     printf("Let us play the \"Guess the Number\" game\n"
            "The computer will generate a random number (r) between 1 and %d\n"
            "You have %d tries\n",high,num_of_tries);

    /**
     * (2) generate a random number
     */
     srand(time(NULL));
     int r = rand() % high + 1;
     printf("r = %d",r);


    /**
     * (5) repeat step (3) and (4) seven times at most
     */
     while(num_of_tries > 0){
         num_of_tries --;

         /**
          * (3) get the input number
          */
         printf("Please input your number\n");
         int guess;
         scanf("%d",&guess);

         /**
          * (4) compare it with the random number
          */
         if(guess == r){
             printf("Congs!You win\n");
             break;
         } else if (guess < r){
             printf("guess < r\n");
         } else if (guess > r){
             printf("guess > r\n");
         }
     }

    return 0;
}
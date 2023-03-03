//
// Created by ARmi on 2022/7/18.
//
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 6
#define ROUND 10
int board[SIZE][SIZE] = {
    {0},
    {0},
    {0,0,1,1,1,0},
    {0,1,1,1,0,0},
    {0},
    {0}};

int main(){
    int old_board[SIZE + 2][SIZE + 2];
    for (int row = 0; row < SIZE + 2; row++) {
        for (int col = 0; col < SIZE + 2; col++) {
            if(row == 0 || row == SIZE + 1 || col == 0 || col == SIZE + 1) {
                old_board[row][col] = 0;
            } else{
              old_board[row][col] = board[row - 1][col - 1];
            }
        }
    }

//    /**
//     * print the old board
//     */
//    for (int i = 0; i < SIZE + 1; ++i) {
//        for (int j = 0; j < SIZE + 1; ++j) {
//            printf("%c ",old_board[i][j] ? '*' : ' ');
//        }
//        printf("\n");
//    }

    /**
     * generate the next-round board
     */
    int new_board[SIZE + 2][SIZE + 2];

    /**
     * run the game as loops
     */
    for (int r = 0; r < ROUND; ++r) {
        for (int row = 1; row < SIZE + 1; row++) {
            for (int col = 1; col < SIZE + 1; col++) {

                // calculate neighbours who are alive
                int neighbours = old_board[row - 1][col - 1] + old_board[row - 1][col] + old_board[row - 1][col + 1]
                                 + old_board[row][col - 1] + old_board[row][col + 1]
                                 + old_board[row + 1][col - 1] + old_board[row + 1][col] + old_board[row + 1][col + 1];

                // live or die depends on neighbours
                new_board[row][col] =
                        (old_board[row][col] && (neighbours == 2 || neighbours == 3))
                        || (!old_board[row][col] && neighbours == 3);
            }
        }


        /**
         * print the new board
         */
        for (int i = 1; i < SIZE + 1; ++i) {
            for (int j = 1; j < SIZE + 1; ++j) {
                printf("%c ", new_board[i][j] ? '*' : ' ');
            }
            printf("\n");
        }
//        system("cls");
//        sleep(1);




        /**
         * copy board
         */
        for (int i = 0; i < SIZE + 2; ++i) {
            for (int j = 0; j < SIZE + 2; ++j) {
                old_board[i][j] = new_board[i][j];
            }
        }
    }

    return 0;
}
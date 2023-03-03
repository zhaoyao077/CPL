//
// Created by ARmi on 2022/8/25.
//
#include <stdio.h>

typedef struct musician {
    char *name;
    char gender;
    char *album;
    int c_store;
    int java_score;
    int python_score;
} Musician;

void PrintMusician(Musician *m);

int main() {
    Musician luo = {
            "Luo Dayou",
            'M',
            "之乎者也",
            0,10,20
    };
    PrintMusician(&luo);

    Musician cui = {
            "Cui Jian",
            'M',
            "新长征路上的摇滚",
            10,20,30
    };
    PrintMusician(&cui);

    return 0;
}

void PrintMusician(Musician *m) {
    /**
     * two ways to use struct :
     * 1. (*m).name
     * 2. m->name
     * the second way is suggested
     */
    printf("%s\n%c\n%s\n%d\t%d\t%d\n",
           m->name, m->gender, m->album, m->c_store, m->java_score, m->python_score);
}
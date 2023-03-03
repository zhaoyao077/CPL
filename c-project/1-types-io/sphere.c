//
// Created by ARmi on 2022/7/14.
//
#include <stdio.h>
#include <math.h>

int main(){
    const double PI = 3.14; //"const" means not allowed to change value
    int radius = 100;

    // In C, 4 / 3 == 1
    // 4.0 / 3 == 1.333...
    double surface_area = 4 * PI * pow(radius, 2);
    double volume = 4.0 / 3.0 * PI * pow(radius, 3);

    // %15.4f: 占15个字符，右对齐，保留4位小数 %-15.4f:右对齐
    printf("%-15.4f: surface_area \n%-15.4f: volume",surface_area,volume);

    return 0;
}
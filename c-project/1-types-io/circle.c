//
// Created by ARmi on 2022/7/14.
//

#include <stdio.h>

int main(){
    const double PI = 3.14; //"const" means not allowed to change value
    int radius;

    printf("input the radius\n");
    /**
     * %d: skip the white-spaces, then identify an integer
     * input : 10 ==    10 == 10abc ,这三个输入等价
     * return : if return 1, the input is valid,otherwise return other than 1
     */
    scanf("%d",&radius);
    printf("radius: %d\n",radius);

    double circle_circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("circumference = %.2f \narea = %.2f",circle_circumference,area);

    return 0;
}
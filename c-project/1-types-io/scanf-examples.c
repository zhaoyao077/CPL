//
// Created by ARmi on 2022/7/15.
//
#include <stdio.h>

int main(){
    int i;
    double x;
    char name[50];
    /**
     * %*d: do not assign it to a variable
     * %[scanlist]: only character in the list is valid
     */
    /**
    * input : 56789 0123 56a72
    * output : 56 789.000000 56
    */
//    scanf("%2d %lf %*d %[0123456789]",&i,&x,name);
//    printf("%d %lf %s",i,x,name);

    /**
     * input: 2 quarts of oil
     * output: quantity = 2.000000      units = quarts          item = oil
     *
     * -12.8degrees Celsius
     * quantity = -12.800000    units = degrees         item = oil
     *
     * lots of luck
     * quantity = -12.800000    units = degrees         item = oil
     *
     * 10.0LBS of
     * dirt
     * quantity = 10.000000     units = LBS     item = dirt
     *
     * 100ergs of energy
     * quantity = 100.000000    units = rgs     item = energy
     */
     double quantity = 0.0;
     char units[20] = "";
     char item[20] = "";
     while (scanf("%lf%20s of %20s", &quantity, units, item) != EOF){
         printf("quantity = %f \t units = %s \t item = %s\n", quantity, units, item);
         scanf("%*[^\n]");
     }

    return 0;
}

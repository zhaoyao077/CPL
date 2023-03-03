#include <stdio.h>
#include <limits.h>

//
// Created by ARmi on 2022/7/14.
//
int main(){
    /**
     * e : exponent
     */
    const double MOL = 6.02e23;

    double quantity = 6.0 / 32 * MOL;

    /**
     * %g : %f or %e
     */
    printf("%.3e\n%.5g\n",quantity,quantity);

//    printf("INT_MAX: %d\nINT_MIN: %d",INT_MAX,INT_MIN);

    return 0;
}

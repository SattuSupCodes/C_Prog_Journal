//trying global vs local variables

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, power;
    printf("enter your didgits: ", a, b);
    scanf("%lf%lf", &a,&b);
    power=pow(a,b);
    printf("power is:  %.lf", power);
    return 0;
}
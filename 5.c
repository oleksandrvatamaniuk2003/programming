#include <stdio.h>

int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    double d = 2/(1/a + 1/b);
    double c = (a+b)/2;
    printf("%f %f\n", c, d);
    printf("%e %e", c, d);
}
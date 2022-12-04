#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, S;
    scanf("%lf %lf %lf", &a, &b, &c);
    S = sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
    printf("%f", S);
}
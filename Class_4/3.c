#include <stdio.h>
#include <math.h>

int main(){
    double x, sinus;
    int n;
    printf("x=");
    scanf("%lf", &x);
    printf("n=");
    scanf("%u", &n);
    sinus = x;
    for(int i = 0; i < n; i=i+1){
        sinus = sin(sinus);
    }
    printf("f(x) = sin(sin(...(sin(x)...)) = %lf", sinus);
}
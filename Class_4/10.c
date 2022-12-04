#include <stdio.h>

int main(){
    int n = 3;
    double x = 2, a = 1, res = 0;
    for (int i = 0; i <= n; i++){
        res += a;
        a*=x;
    }
    printf("a=%lf", res);

    double x = 1, y = 2, n = 4;
    double res = 1;

    double x1 = x, y1 = y;
    for(int i = 0; i < n; i++){
       
        res += x1*y1;
        x1 *= x1;
        y1 *= y;
    }
    printf("%lf", res);
}
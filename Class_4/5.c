#include <stdio.h>

int main(){
    int n = 5;
    double b = 2, c = 1, res = 0;
    for(int i = 1; i <= n; i ++){
        c = c*b;
        res = res + i*c;
    }
    printf("f(x)=%lf", res);
}
#include <stdio.h>

int main(){
    double x = 0.5, res = 1, a = 1;
    long long n = 5, val = 1;
    for (long long i = 1; i <= n; i++){
        a *= x;
        val *= i;
        res += a/val;
    }
    printf("y=%lf", res);
}
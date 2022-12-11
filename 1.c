#include <stdio.h>

int main(){
    int n = 1;
    double a, res = 0;
    printf("a=");
    scanf("%lf", &a);
    while(res <= a && n < 2000000000){
        res += 1./n;
        n++;
    }
    if(n >= 2000000000){
        printf("Try a smaller number");
    } else {
        printf("n=%d\n", n);
        printf("The given sum is:%lf", res);
    }
}
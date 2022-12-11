#include <stdio.h>

int main(){
    int n = 1;
    double a = 900;
    double f1 = 0, f2 = 1, d = 0, i;

    if (a < 1){
        d = 0;
    } else {
        while(f2 <= a){
            i = f2;
            d += f2;
            f2 = f2 + f1;
            f1 = i;
            
        }
    }
    printf("%lf", d);
}
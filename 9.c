#include <stdio.h>


int main(){
    double a = 12.2;
    int b = 28;
    double i = a;
    a = 1;
    while(b > 0){
        if(b % 2 == 1){
            a = a*i;
        }
        i = i*i;
        b = b/2;
        printf("%d\n", b);
    }
    printf("%f", a);

}
#include <stdio.h>

int main(){
    float a = 1;
    int n = 0;
    while(1 + a > 1){
        a = a/2;
        n = n+1;
    }
    printf("%d", n);
}
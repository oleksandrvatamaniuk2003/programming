#include <stdio.h>

int main(){
    unsigned char x;
    scanf("%u", &x);
    unsigned long long f = 1, i = 2;
    for(int bit=0; bit<8; bit++){
        if(x >> bit & 1){
            f = f*(x >> bit & 1) * i;
        }
        i *= i;
    }
    printf("%llu", f);
}
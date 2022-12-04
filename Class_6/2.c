#include <stdio.h>

int main(){
    unsigned long var;
    int j;
    printf("var=");
    scanf("%llu", &var);
    printf("j=");
    scanf("%d", &j);
    var = var & ~(1<<j);
    printf("%d\n", var);
    printf("%x", var);
}
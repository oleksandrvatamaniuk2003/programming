#include <stdio.h>

int main(){
    int var_1, var_2, var_3;
    printf("var_1=");
    scanf("%d", &var_1);
    var_1 = var_1 >> 24 | var_1 << 24 | (((var_1 >> 8) << 16) >> 8);
    printf("%d\n", var_1);
    printf("%x", var_1);
}
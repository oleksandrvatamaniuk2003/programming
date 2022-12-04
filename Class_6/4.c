#include <stdio.h>

int main(){
    int var_1, var_2;
    printf("var_1=");
    scanf("%d", &var_1);
    printf("var_2=");
    scanf("%u", &var_2);
    var_1 = var_1 | (1<<var_2);
    printf("%d", var_1);
}
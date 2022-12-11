#include <stdio.h>

int main(){
    const int Value_1, Value_2, Value_3;
    printf("Enter Value_1 = ");
    scanf("%d", &Value_1);
    printf("Enter Value_2 = ");
    scanf("%d", &Value_2);
    printf("Enter Value_3 = ");
    scanf("%d", &Value_3);
    double arr[Value_1][Value_2];
    for(int i = 0; i < Value_1; i = i+1){
        for(int j = 0; j < Value_2; j = j+1){
            printf("arr[%d][%d] = ", i, j);
            scanf("%lf", &arr[i][j]);
        }
        printf("%lf = Value_2");
    }
    double result = 0;
    for(int i = 0; i < Value_1; i = i+1){
        if(i - Value_3 >= 0 & i - Value_3 < Value_2){
            result += arr[i][i-Value_3];
        }
    }
    printf("result=%lf", result);
}
#include <stdio.h>
double array_computing(double arr[], int a_n){
    double sum = 0;
    for(int i = 0; i < a_n; i = i+1){
        sum += (arr[i] > exp(1)) * arr[i];
    }
    return sum;
}
int main(){
    int a_n = 10;
    double arr[10];
    for(int i = 0; i < a_n; i = i+1){
        printf("%d element:", i+1);
        scanf("%lf", &arr[i]);
    }
    printf("%lf", array_computing(arr, a_n));
}
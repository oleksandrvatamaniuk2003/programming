#include <stdio.h>
#include <math.h>

double Horner_func(double x, double quotient_array[], const int n){                       #defining Horner_func function
    double quotient_array2[n];
    quotient_array2[0] = quotient_array[0];
    for (int i = 1; i < n; i+=1){
        quotient_array2[i] = x*quotient_array2[i-1] + quotient_array[i]; 
    }
    return quotient_array2[n-1];
}
int main(){
    const int n = 5;
    double x;
    scanf("%lf", &x);
    double quotient_array[] = {1, 0, 2, 0, 1};
    printf("%lf\n", Horner_func(x, quotient_array, n));
    double quotient_array1[] = {1, 1, 1, 1, 1};
    printf("%lf\n", Horner_func(x, quotient_array1, 5));
    double quotient_array2[] = {1, 5, 10, 10, 5, 1};
    printf("%lf\n", Horner_func(x, quotient_array2, 6));
    double quotient_array3[] = {1, 0, 0, 0, 0, 0, 1, 0, 0, 1};
    printf("%lf\n", Horner_func(x, quotient_array3, 10));
    double quotient_array4[] = {16, 8, 4, 2, 1};
    printf("%lf\n", Horner_func(x, quotient_array4, 5));
    double quotient_array5[] = {1, 0, 1, 0, 1, 0};
    printf("%lf", Horner_func(x, quotient_array5, 6));
}
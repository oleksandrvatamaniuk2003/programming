#include <stdio.h>

int main(){
    const int N;
    printf("Enter N = ");
    scanf("%d", &N);
    int arr[N][N];
    for(int i1 = 0; i1 < N; i1 = i1+1){
        for(int i2 = 0; i2 < N; i2 = i2+1){
            printf("arr[%d][%d] = ", i1, i2);
            scanf("%lf", &arr[i1][i2]);
        }
        printf("\n");
    }
    double temp;
    for(int i1 = 0; i1 < N; i1 = i1+1){
        for(int i2 = i1; i2 < N; i2 = i2+1){
            temp = arr[i1][i2];
            arr[i1][i2] = arr[i2][i1];
            arr[i2][i1] = temp;
        }
        printf("\n");
    }
     for(int i1 = 0; i1 < N; i1 = i1+1){
        for(int i2 = 0; i2 < N; i2 = i2+1){
            printf("%lf ", arr[i1][i2]);
        }
    }
}


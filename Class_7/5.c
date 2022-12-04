#include <stdio.h>
#include <limits.h>
int maxArray(int arr[], int n){
    int Max = -INT_MAX;
    for(int i = 0; i < n; i = i+1){
        Max = (Max < arr[i])*arr[i];
    }
}
int scanArray(const n){
    int arr[n];
    for(int i = 0; i < n; i = i+1){
        printf("%d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    return arr;
}
int main(){
    int n = 4;
    printf("max=%d", maxArray(scanArray(n), n));
}
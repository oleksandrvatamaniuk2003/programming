#include <stdlib.h> 
int* given_array(unsigned int n){
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Array(%d) = ", i);
        scanf("%d", &arr[i]);
    }
    return arr;
}
int main(){
    unsigned int n;
    printf("Уведіть ваше натуральне число: ");
    scanf("%u", &n);
    int *vector1 = given_array(n);
    int *vector2 = given_array(n);
    int *vector3 = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        vector3[i] = vector2[i] - vector1[i];
    }
    free(vector1);
    free(vector2);
    free(vector3);
}
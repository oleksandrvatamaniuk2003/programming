#include <stdio.h>

int * initArr(const int size) {
    static int array[20];
    for (int i = 0; i < size; i = i+1) {
        printf("%d value: ", i+1);
        scanf("%d", &array[i]);
    }
    return array;
}
void outArr(int array[], int size) {
    for (int i = 0; i < size; i = i+1) {
        printf("Array[%d] = %d\n", i, array[i]);
    }

}
int * resulting_array(int array1[], int array2[], const int size) {
    static int array3[20];
    for (int i = 0; i < size; i = i+1) {
        array3[i] = array1[i] + array2[i];
    }
    return array3;
}
int vector_scalar_res(int array1[], int array2[], const int size) {
    int result = 0;
    for (int i = 0; i < size; i = i+1) {
        result += array1[i]*array2[i];
    }
    return result;
}
int main () {
    int *array1, *array2, *array3, result;
    const int n = 5;
    array1 = initArr(n);
    array2 = initArr(n);
    array3 = resulting_array(array1, array2, n);
    outArr(array3, n);
    result = vector_scalar_res(array1, array2, n);
    printf("result = %d", result);
    return 0;
}
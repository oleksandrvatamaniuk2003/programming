#include <stdio.h>

void vyznachyty_parnist(int *array){
    int arr[50], i = 0, parnist = 0, neparnist = 0;
    while(scanf("%d", &arr[i]) && arr[i] != 0){
        if(arr[i] % 2 == 0){
            array[0] = array[0]+1;
        } else {
            array[1] = array[1]+1;
        }
    }
}
int main(){
    int array[2] = {0};
    vyznachyty_parnist(array);
    printf("neparnist = %d\n parnist = %d", array[0], array[1]);
}
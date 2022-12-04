#include <stdio.h>

int main(){
    int main_array[5] = {rand(), rand(), rand(), rand(), rand()};
    int value, Amount = 0;
    printf("value=");
    scanf("%d", &value);
    for(int i = 0; i < 5; i = i+1){
        if(main_array[i] < value){
            Amount = Amount + 1;
        }
    }
    printf("Amount=%d", Amount);
}
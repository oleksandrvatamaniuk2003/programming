#include <stdio.h>

int main(){
    int y;
    for(int i = 0; i < 2**6; i = i+1){
        y = ((i & (i-1))>0);
        printf("i=%d, y=%d\n", i, y);
    }
    for(int i = 0; i < 2**6; i= i+1){
        y = i & (-i);
        printf("i=%d, y=%d\n", i, y);
    } 
}
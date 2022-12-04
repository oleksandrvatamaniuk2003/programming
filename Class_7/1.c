#include <stdio.h>

int main(){
    const Len = 4;
    int t;
    int a[] = {5, 112, 4, 3};
    for(int i = 0; i < Len/2; i++){
        t = a[i];
        a[i] = a[Len-i-1];
        a[Len-i-1] = t;
    }
    for(int i = 0; i < Len; i++){
        printf("%d, ", a[i]);
    }
    
}
#include <stdio.h>

int our_function(n){
    for(int i = 1; i < n; i = i+1){
        int temp_val = i;
        while(temp_val != 1){
            if(temp_val % 2 == 0){
                temp_val = temp_val/2;
            } else {
                temp_val = temp_val*3;
                temp_val = temp_val+1;
            }
        }
        printf("%d ends with 1\n", i);
    }
}

int main(){
    int n = 500;
    our_function(n);
}

int main(){
    int n = 1000;
    our_function(n);
}

int main(){
    int n = 1500;
    our_function(n);
}
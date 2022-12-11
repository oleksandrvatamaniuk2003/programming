#include <stdio.h>

int main(){
    unsigned long long n = 1234123, approach_2 = 1, i = 0;
    while(approach_2 <= n){
        approach_2*=2;
        i++;
    }
    printf("%llu %llu", approach_2, i);
}
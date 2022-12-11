#include <stdio.h>
int main(){
    int k;
    printf("k=");
    scanf("%d", &k);
    int main_length = 0, t = 0;
    for(int i = 0; i < 8*sizeof(k); i++){
        if((k >> i) & 1 == 1){
            t++;
        } else{
            if(main_length < t){
                main_length = t;
            }
            t = 0;
        }

    }
    if(main_length < t){
        main_length = t;
    }
    printf("Len=%d", main_length);
}
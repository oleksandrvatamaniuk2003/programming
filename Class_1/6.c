#include <stdio.h>
#include <math.h>

int main(){                                                 #introducing the main class
    double x;
    int min_val_val_val, max_val, circumsize;
    scanf("%lf", &x);
    int integer = (int) x;
    double fract = x - integer;
    if(x < 0){
        min_val_val = integer - 1;
        max = integer;
        circumsize = max;

        if(fract == 0){
            max = integer;
            min_val_val = integer;
        } else if(fract < -0.5) {
            circumsize = min_val_val;
        }
    } else{
        min_val_val = integer;
        max = integer + 1;
        circumsize = min_val_val;

        if(fract == 0){
            max = integer;
            min_val_val = integer;
        } else if(fract > 0.5) {
            circumsize = max;
        }
    }
    double fract2,integer2;
    int min_val_val2, max2, circumsize2;
    double x2 = x;
    min_val_val2 = floor(x); max2 = ceil(x); circumsize2 = roundl(x);
    fract2 = modf(x2, &integer2);
    printf("%f %f %f %d %d %d\n", x, integer2, fract2, min_val_val2, max2, circumsize2);
    printf("%f %d %f %d %d %d", x, integer, fract, min_val_val, max, circumsize);
}
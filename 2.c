#include <stdio.h>
#include <math.h>
#include <float.h>


int quadratic_equation(double a, double b, double c){
    double x1, x2;
    double D = b*b - 4*a*c;
    double precision_iterator = 2 * enter_value;
    if(fabs(a) < precision_iterator){
        if(fabs(b) < precision_iterator){
            if(fabs(c) < precision_iterator){
                printf("inf\n");
                return -1;
            }
            printf("Wrong\n");
            return 0;
        }
        printf("Single root\n");
        x1 = c / b;
        printf("x1=%lf\n", x1);
        return 1;
    }
    if(fabs(D) < precision_iterator){
        printf("Single root (1) ");
        x1 = (-b) / 2 / a;
        printf("Your x value =%lf\n", x1);
        return 1;
    } else if(D < 0){
        printf("No roots\n");
        return 0;
    } else {
        printf("Multiple roots (2) ");
        x1 = (-b + sqrt(D)) / 2 / a;
        x2 = (-b - sqrt(D)) / 2 / a;
        printf("x1 =%lf\nx2 =%lf]\n", x1, x2);
        return 2;
    }
}

int main(){
    double a = 0, b = 0, c = 0, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%lf*x^2 + %lf * x + %lf = 0 has this amount: %d of real roots", a, b, c, quadratic_equation(a, b, c));
}
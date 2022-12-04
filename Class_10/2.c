#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
int x1;
int x2;
int y1;
int y2;
} Rectangle;

typedef struct {
unsigned int deg;
double *coeffs;
} Polynome;


Rectangle inputRectangle(){
    Rectangle rect;
    int enter = 1;
    while(enter == 1){
        printf("Enter x1 y1 x2 y2: ");
        scanf("%d %d %d %d", &rect.x1, &rect.y1, &rect.x2, &rect.y2);
        if(rect.x1 == rect.x2 || rect.y1 == rect.y2){
            printf("Incorrect position\n");
        } else {
            enter = 0;
        }
    }
    return rect;
}

Polynome inputPolynome(){
    Polynome poly;
    double eps = 0.0000001;
    int enter = 1;
    while(enter == 1){
        printf("Enter degree: ");
        scanf("%u", &poly.deg);
        if(poly.deg < 0){
            printf("Incorrect degree\n");
        } else {
            poly.coeffs = (double *) realloc(poly.coeffs, poly.deg * sizeof(double));
            for(unsigned i = 0; i <= poly.deg; i++){
                printf("Coefficient deg %u: ", i);
                scanf("%lf", &poly.coeffs[i]);
            }
            if(poly.coeffs[poly.deg] < eps){
                printf("The value of the greatest degree should be not 0.\n");
            } else{
                enter = 0;
            }
        }
    }
    return poly;
}

void outputRectangle(Rectangle rect){
    printf("A = (%d, %d), B = (%d, %d), C = (%d, %d), D = (%d, %d)", rect.x1, rect.y1, rect.x1, rect.y2, rect.x2, rect.y2, rect.x2, rect.y1);
}

void outputPolynome(Polynome poly){
    for(unsigned int i = 0; i < poly.deg; i++){
        printf("%.2lf*x^%u + ", poly.coeffs[poly.deg - i], poly.deg - i);
    }
    printf("%.2lf", poly.coeffs[0]);
}

int main(){
    Rectangle rect;
    rect = inputRectangle();
    outputRectangle(rect);

    Polynome poly;
    poly = inputPolynome();
    outputPolynome(poly);

    
}
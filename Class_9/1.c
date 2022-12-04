#include <stdlib.h>
#include <math.h>
int main(){
    unsigned int elements_amount = 100;
    double precision_quotient = 10**(-8);
    int *given_array = (int*) malloc(elements_amount * sizeof(int));
    int num, i = 0, initial_value_1 = 0, initial_value_2 = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num != 0){
        given_array[i] = num;
        printf("Enter number: ");
        scanf("%d", &num);
        i++;
    }
    for(int j = 0; j < i; j++){
        if(fabs(pow((double) given_array[j], 1/2) - round(pow((double) given_array[j], 1/2))) < precision_quotient){
            initial_value_1 += 1;
        }
        if(fabs(pow((double) given_array[j], 1/3) - round(pow((double) given_array[j], 1/3))) < precision_quotient){
            initial_value_2 += 1;
        }
    }
    printf("Квадрати: %d", initial_value_1);
    printf("\nКуби: %d", initial_value_2);
}
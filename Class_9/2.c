#include <stdlib.h>
int main(){
    unsigned int given_quantity;
    printf("Quantity input: ");
    scanf("%u", &given_quantity); 
    int *dyn_array = (int*) malloc(given_quantity * sizeof(int));
    for(int i = 0; i < given_quantity; i= i+1){
        printf("A(%u) = ", i);
        scanf("%d", &dyn_array[i]);
    }
    int result = 0;
    for(int i = 0; i < given_quantity; i++){
        result = result + dyn_array[i]*dyn_array[i];
    }
    printf("%u", result);
    free(dyn_array);
}


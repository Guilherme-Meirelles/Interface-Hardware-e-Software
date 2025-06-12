#include <stdio.h>
#include <stdlib.h>

int main(){

    int len = 10;
    int *array = malloc(len * sizeof(int));
    int *array_copy = array;
    for (int i = 0; i < len; i++){
        *array = i;
        array++;
    }
    array = array_copy;
    for (int i = 0; i < len; i++){
        printf("Elemnto: %i \n", *array);
        array++;
    }
    free(array);
    array = NULL;
}
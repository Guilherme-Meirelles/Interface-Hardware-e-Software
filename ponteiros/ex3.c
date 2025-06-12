#include <stdio.h>

void limite(int array[], int len, int *p_min, int *p_max){

    for (int i = 1; i < len; i++){
        if (*p_min> array[i]){
            *p_min = array[i];
        }
        if (*p_max < array[i]){
            *p_max = array[i];
        }
    }
    
}

int main(){

    int x[] = {71, 15, 29, 63, 84, 60, 57};
    int len = sizeof(x) / sizeof(x[0]);
    int min = x[0];
    int max = x[0];

    limite(x, len, &min, &max);

    printf("Maior: %i \n", max);
    printf("Menor: %i \n", min);
}
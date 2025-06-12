#include <stdio.h>

int main(){
    char x = 'a';
    float y = 1.23;
    int z = 4567;

    char *a = &x;
    float *b = &y;
    int *c = &z;

    printf("\n %c %f %i", *a, *b, *c);
    return 0;
}
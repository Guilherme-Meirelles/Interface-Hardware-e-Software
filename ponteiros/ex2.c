#include <string.h>
#include <stdio.h>
int main(){
    char *x[] = {"jfd", "kj", "usjkfhcs", "nbxh", "yt", "muoi", "x", "rhd"};
    int len = sizeof(x) / sizeof(x[0]);
    char *maior = x[0];
    for (int i = 0; i < len; i++){
        if (strlen(maior) < strlen(x[i])){
            maior = x[i];
        }
    }
    printf("Maior: %s\n", maior);
    
}
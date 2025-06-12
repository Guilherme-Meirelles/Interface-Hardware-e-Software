#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "abacaxi";
    char s2[] = "banana";
    char r[100];

    if (strcmp(s1,s2) <= 0){
        strcpy(r, s1);
        strcat(r, " vem antes de ");
        strcat(r, s2);
    }
    else {
        strcpy(r, s2);
        strcat(r, " vem antes de ");
        strcat(r, s1);
    }

    printf("%s \n", r);

}
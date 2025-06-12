#include <string.h>
#include <stdio.h>
int levenshtein(const char* word1, const char* word2){

    int a = 0;
    int count = 0;
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char letter1[len1];
    char letter2[len2];
    strcpy(letter1, word1);
    strcpy(letter2, word2);

    while ((a < len1) && (a < len2)){
        if (!(letter1[a] == letter2[a])){
            count ++;
        }
        a ++;
    }
    count += len1 + len2 - (2*a);
    return count;
}


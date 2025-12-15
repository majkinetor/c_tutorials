#include <stdlib.h>
#include <stdio.h>
#include "strings.c"

void main() {
    char input1[] = "  Foa  ";
    char *input1_trimmed;
    input1_trimmed = strtrim(input1, all);
    printf("\nInput: '%s' Trimmed: '%s'", input1, input1_trimmed);


    char input2[] = "123456789A";
    char input2_reversed[100];
    strrev(input2, input2_reversed);
    printf("\nInput: '%s' Reversed: '%s'", input2, input2_reversed);


    char *input2_copy = strcopymax(input2, 3);
    input2_copy[0] = '-';
    printf("\nInput: '%s' Copy: '%s'", input2, input2_copy);
    free(input2_copy);


    char input4[] = "Apple  ,1  ,   2.51";
    char **tokens = malloc(100 * sizeof(char*));
    int tokens_len = strsplit(input4, ',', tokens);
    printf("\nTokens for '%s':", input4);
    for (int i=0; i < tokens_len; i++) { printf("\n\t%d. '%s'", i, tokens[i]); }
}
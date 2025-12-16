#include <stdlib.h>
#include <stdio.h>
#include "strings_nadja.c"

void main() {
    char input1[] = "  Foa  ";
    strtrim3(input1);
    printf("\nInput: '%s' Trimmed: '%s'", input1);


    char input2[] = "123456789A";
    strrev3(input2);
    printf("\nInput: '%s'", input2);


    char *input2_copy = strcopy3(input2, 3);
    input2_copy[0] = '-';
    printf("\nInput: '%s' Copy: '%s'", input2, input2_copy);
    free(input2_copy);

}
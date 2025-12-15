#include "strings.c"
#include <stdlib.h>

int strsplit(char *input, char delimiter, char **result) {
    char c;
    int input_idx = 0, result_idx = 0;
    int input_delimiter_idx = -1;
    int input_len = strlen2(input);
    
    while(input_idx <= input_len){
        c = input[input_idx++];
        if (c != delimiter && input_idx != input_len) { continue; }
        
        // delimiter/end found, copy from previous delimiter/start to its position
        int token_len = input_idx - input_delimiter_idx - 1;
        char *token = malloc(token_len + 1); 
        int j = input_delimiter_idx + 1;
        int tc = 0;
        for (j; j < input_idx; j++ ) {
            token[tc++] = input[j];    
        }
        token[tc] = '\0';
        result[result_idx++] = strtrim(token, all);

        input_delimiter_idx = input_idx;
    }
    return result_idx;
}

void main() {
    // char input1[] = "  Foa  ";
    // char *input1_trimmed;
    // input1_trimmed = strtrim(input1, left); // "Foa  "
    // input1_trimmed = strtrim(input1, right); // "  Foa"
    // input1_trimmed = strtrim(input1, all); // "Foa"


    // char input2[] = "123456789A";
    // char input2_reversed[100];
    // strrev(input2, input2_reversed);


    char input3[] = "Apple  ,1  ,   2.51";
    char **tokens = malloc(100 * sizeof(char*));
    int tokens_len = strsplit(input3, ',', tokens);
}
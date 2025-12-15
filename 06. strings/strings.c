#include <stdlib.h> //malloc

enum TrimType {
    left,
    right,
    all
};

int strlen2(char *input) {
    int i = 0;
    while (input[i++] != '\0'); 
    return i-1; 
}

void strrev(char *input, char *result) {
    int j = 0;
    for (int i = strlen2(input)-1; i>=0; i--) {
        result[j++] = input[i];
    }
    result[j] = '\0';
}

char *strtrim(char *input, enum TrimType type) {
    int i;
    char c;

    if (type == left || type == all) {
        i = 0;
        do {
            c = input[i++];
        } while (c == ' ' || c == '\t' || c == '\n');
        
        input = input+i-1;
    }

    if (type == right || type == all) {
        i = strlen2(input);
        do {
            c = input[--i];
        } while (c == ' ' || c == '\t' || c == '\n');
        input[i+1] = '\0';
    }
    
    return input;
}

char *strcopymax(char *input, int max) 
{   
    int len = strlen2(input);
    if (max < len) { len = max; }

    char *result = malloc(len * sizeof(char) + 1);
    for (int i=0; i < len; i++) { result[i] = input[i]; }
    result[len] = '\0';
    
    return result;
}

int strsplit(char *input, char delimiter, char **result) {
    char c;
    int input_idx = 0, result_idx = 0;
    int input_delimiter_idx = -1;
    int input_len = strlen2(input);
    
    while(input_idx <= input_len){
        c = input[input_idx];
        if (c != delimiter && input_idx != input_len) { input_idx++; continue; }
        
        // delimiter/end found, copy from previous delimiter/start to its position
        int token_len = input_idx - input_delimiter_idx - 1;
        char *token = strcopymax(input + input_delimiter_idx + 1, token_len);
        result[result_idx++] = strtrim(token, all);

        input_delimiter_idx = input_idx;
        input_idx++;
    }
    return result_idx;
}
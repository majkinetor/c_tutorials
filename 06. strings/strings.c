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



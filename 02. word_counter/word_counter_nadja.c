#include <stdio.h>
#include <string.h>

int is_white_space(char c) {
    return (c == ' ' || c == '\n' || c == '\t');
}

int main() {
    
    int w=0, i;   
    char s[256] = "mislim dakle   \t";

    size_t len;
    
    printf("Insert text:\n");
    // gets(s);
    len = strlen(s);
    
    i = 0;
    while (is_white_space(s[i])) i++;

    //i=14
    while (s[i] != '\0') {
        
        if (is_white_space(s[i]) && (i > 0 && !is_white_space(s[i-1]))) {
            w++;
        } 
        i++;
    }
    if (!is_white_space(s[len-1])) w++; 
    
    printf("\n\nWord count: %d\nLenght: %zu",w,len);
}
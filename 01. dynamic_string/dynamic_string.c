#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_SIZE 256
#define CHUNK_SIZE 256

int main() {
    size_t capacity = INITIAL_SIZE;
    size_t length = 0;
    
    char *buffer = malloc(capacity);
    if (buffer == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    buffer[0] = '\0';
    char input[CHUNK_SIZE];
    
    printf("Enter text (type 'END' on a new line to finish):\n");
    while (fgets(input, CHUNK_SIZE, stdin) != NULL) {
        if (strcmp(input, "END\n") == 0) {
            break;
        }
        
        size_t input_len = strlen(input);
        size_t required = length + input_len + 1;
        
        if (required > capacity) {
            while (capacity < required) {
                capacity *= 2;
            }
            
            char *new_buffer = realloc(buffer, capacity);
            if (new_buffer == NULL) {
                fprintf(stderr, "Memory reallocation failed\n");
                free(buffer);
                return 1;
            }
            buffer = new_buffer;
        }
        
        strcat(buffer, input);
        length += input_len;
    }
    
    printf("\n--- Stored text ---\n%s\n", buffer);
    printf("Total characters: %zu\n", length);
    
    free(buffer);
    return 0;
}
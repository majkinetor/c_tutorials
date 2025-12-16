#include <stdlib.h>

int strlen3(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void strrev3(char *str) {
    int len = strlen3(str);
    int start = 0;
    int end = len - 1;
    
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void strtrim3(char *str) {
    int len = strlen3(str);
    int start = 0;
    int end = len - 1;
    int i;

    while (str[start] == ' ' || str[start] == '\t' || str[start] == '\n')  start++;
    
    while (end >= start && (str[end] == ' ' || str[end] == '\t' || str[end] == '\n'))  end--;

    for (i = 0; i <= end - start; i++) str[i] = str[start + i];
    str[i] = '\0';
}

char *strcopy3(char *str, int max) {
    int len = strlen3(str);
    if (max < len) max = len;

    char *copy = malloc(len + 1);
    int i = 0;
    while (i < len) {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    
    return copy;
}
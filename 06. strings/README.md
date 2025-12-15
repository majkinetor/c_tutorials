# Strings

Create the following functions in separate c file, and include it as a library named `strings.c`;

1. `int strlen2(char *input)`<br>
Returns length of the input string
2. `char *strtrim(char *input, int type)`<br>
Returns pointer to input string that contains no whitespace at the start and/or end. Argument `type` can be 1 (trim left), 2 (trim right) or 0 (trim all).
1. `void strrev(const char *input, char *result)`<br>
Modifies string given at the address `result` to contain the reversed string. The function caller is responsible for the memory allocation. 
1. `char **strsplit(const char *input, char delimiter)`<br>
Returns pointer to the array of trimmed tokens. Tokens are substrings separated by delimiters or start/end of the string.

## Examples

See [test.c](./test.c).

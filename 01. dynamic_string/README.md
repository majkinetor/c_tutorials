# Dynamic String

Write program that stores user input in string. 
User can input text multiple times without limit except available RAM.
Typing `END` finishes the program and outputs all inputed text and its length.

## What is demonstrated

- Dynamic allocation
  Starts with 256 bytes and doubles capacity when needed
- Unlimited input
  Uses realloc() to grow the buffer as the user adds more text
- Line-by-line reading
  Reads input using fgets() in 256-byte chunks
- Termination condition
  Stops when user types "END" on a separate line
- Memory safety
  Checks all allocations and frees memory before exit.
  The buffer grows automatically as needed, so there is no practical limit on input size (other than available memory).

## Notes

`size_t` is the variant of integer type used for memory sizes and array indices. It is usually 64 bits (8 bytes) allows bigger numbers and can't be negative because it makes no sense for size (unsigned integer). 

Printf uses `%z` format to represent size_t.

## Functions

### Memory allocation

- `void *malloc(size_t size)`<br>
Allocates uninitialized memory block of - specified size, returns NULL on failure
- `void *realloc(void *ptr, size_t size)`<br>
Resizes previously allocated memory block, may move data to new location
- `void free(void *ptr)`<br> 
Deallocates memory previously allocated by malloc/realloc

### Strings

- `size_t strlen(const char *s)`<br>
Returns length of string excluding null terminator
- `char *strcat(char *dest, const char *src)`<br>
Appends src to end of dest, no bounds checking
- `int strcmp(const char *s1, const char *s2)`<br>
Compares strings lexicographically, returns 0 if equal, <0 if s1<s2, >0 if s1>s2
- `char *fgets(char *s, int size, FILE *stream)`<br>
Reads up to size-1 characters from file into buffer s, stops at newline (includes it), always null-terminates, returns NULL on error

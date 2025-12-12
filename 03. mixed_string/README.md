# Mixed string

Write program that takes two strings, A and B and creates new string C so that chars with the same index from A and B are put next to eachother. If there is no char at given index, C contains `-` on that position.

Example:

- A: abc
- B: 12
- C: a1b2c-

## Implementation details

### Variant 1 - create function

Create function `mixed_string` that takes A and B as arguments and returns C
    
1. Varinat 1.1: C is allocated within mixed_string
2. Variant 1.2: C is allocated by the calling function

### Variant 2 - command line arguments

Use `argv` to get A and B from the command line arguments. Check if user passed enough arguments.
    
```sh
> ./mixed_string.exe abc 12
String A: abc
String B: 12
String C: a1b2c-
```
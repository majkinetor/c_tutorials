#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char *mixed_string(char *A, char *B) 
{
    int lenA = strlen(A); 
    int lenB = strlen(B); 
    int lenMax = fmax(lenA, lenB);
    
    // Ne može jer je C lokalna varijabla funkcije mixed_string
    //  i ceo niz će da nestane kada se funkcija završi
    // char C[lenMax * 2 + 1];
    
    // može jer kad funkcija rezerviše memoriju, ta memorija ostaje sve dok se ne oslobodi sa free
    //  što je dužnost onoga ko poziva ovu funkciju (u ovom slučaju main)
    char *C = malloc(lenMax * 2 + 1); 
    if (C == NULL) return NULL;        

    int ci = 0; //ci je index za C string
    for (int i = 0; i < lenMax; i++) {
        
        if (i < lenA) C[ci++] = A[i];
        else C[ci++] = '-';

        if (i < lenB) C[ci++] = B[i];
        else C[ci++] = '-';
    }
    C[ci] = '\0'; 
    
    return C;
}

int main(int argc, char *argv[]) 
{
    char *A = "aaa"; 
    char *B = "bbbb";
    char *C = mixed_string(A, B);

    printf("\nString A: %s\n", A);
    printf("String B: %s\n", B);
    printf("String C: %s\n", C);

    free(C);
    return 0;
}
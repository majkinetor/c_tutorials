#include <stdio.h>

    char* A="Foobar";
    char* B="Fartsmella";
    char C[200]; 

void string() 
{
  
    int si = 0; //si je index za stringove

    for (int i = 0; i < 17; i++) {
       
        if (i < 6) C[si++] = A[i];
        else C[si++] = '-';
        if (i < 11) C[si++] = B[i];
        else C[si++] = '-';
  
    }
    
    C[si-1] = '\0'; 
}

int main() 
{
    string();

    printf("\nString A: %s\n", A);
    printf("String B: %s\n", B);
    printf("String C: %s\n", C);
    
    return 0;
}
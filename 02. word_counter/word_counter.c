#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char buffer[101];
    int i, word_count = 0;
    int in_word = 0;
    
    printf("Unesite string (max 100 karaktera): ");

    //fgets ne dozvoljava buffer overflow jer kao argument 
    // prima i maksimalnu duzinu koju obrađuje (drugi parametar)
    fgets(buffer, sizeof(buffer), stdin); 
    
    // Brojanje reči
    for (i = 0; buffer[i] != '\0'; i++) {
        if (isspace(buffer[i])) {
            in_word = 0;
        } else if (in_word == 0) {
            word_count++;
            in_word = 1;
        }
    }
    
    printf("Broj reci: %d\n", word_count);
}



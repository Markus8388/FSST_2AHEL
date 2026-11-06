#include <stdio.h>

int strcmp(const char word1[], const char word2[]) {
    for (int i = 0; word1[i] != '\0' ; i++) {
        if (word1[i] != word2[i]){
            return 1;
        }
    }
    return 0;
}

int main() {
    // Variablen festlegen
    const char secret[] = "KAFFEE";
    const int wordlengh = sizeof(secret) - 1;
    int matches = 0;
    int fails = 0;
    char guessed[wordlengh];
    char guess;
    
    for (int i = 0; i < wordlengh; i++) { // Füllt guessed
        guessed[i] = '_';
    }
    
    for (int i = 0; i < wordlengh; i++) { // guessed wird ausgegeben
        printf("%c ", guessed[i]);
    }
    
    while (fails < 5) {
        printf("\nGib einen Guess ab: ");  // Einlesen von guess
        if (scanf(" %c", &guess) != 1) {
            printf("Ungültige Eingabe");
            return 1;
        }

        matches = 0;
        
        for (int i = 0; i < wordlengh ; i++) { //    
            if (secret[i] == guess){
                guessed[i] = guess;
                matches++;
            }
        }

        for (int i = 0; i < wordlengh; i++) { // guessed ausgeben
            printf("%c ", guessed[i]);
        }

        if (strcmp(secret, guessed) == 0) {
            printf("\nGeschafft Word erraten");
            return 0;
        }

        fails += (matches == 0);
    }

    return 0;
}
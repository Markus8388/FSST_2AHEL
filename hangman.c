#include <stdio.h>

int countHits(const char secret[], char guess, int wordlengh, char guessed[]) { // Prüft das vorkommen von guess in secret
    int matches = 0;
    for (int i = 0; i < wordlengh ; i++) {
        if (secret[i] == guess){
            matches++;
            guessed[i] = guess;
        }
    } 
    return matches;
}

int main()
{
    // Variablen festlegen
    const char secret[] = "KAFFEE";
    const int wordlengh = sizeof(secret) - 1;
    char guessed[wordlengh];
    char guess;
    

    for (int i = 0; i < wordlengh; i++) { // Füllt guessed
        guessed[i] = '_';
    }
    
    for (int i = 0; i < wordlengh; i++) { // guessed wird ausgegeben
        printf("%c ", guessed[i]);
    }
    
    printf("\nGib einen Guess ab: ");  // Einlesen von guess
    if (scanf(" %c", &guess) != 1) {
        printf("Ungültige Eingabe");
        return 1;
    }

    //for (int i = 0; i < wordlengh ; i++) {
    //    if (secret[i] == guess){
    //        matches++;
    //        guessed[i] = guess;
    //    }
    //}
    int matches = countHits(secret, guess, wordlengh, guessed); // es werden die hits ermittelt

    for (int i = 0; i < wordlengh; i++) { // guessed ausgeben
        printf("%c ", guessed[i]);
    }

    printf("\nmatches: %d", matches);
    return 0;
}
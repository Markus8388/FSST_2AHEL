#include <stdio.h>

int main()
{
    const char secret[] = "KAFFEE";
    const int wordlengh = sizeof(secret) - 1;
    char guessed[wordlengh];
    char guess;
    int matches = 0;

    for (int i = 0; i < wordlengh; i++) {
        guessed[i] = '_';
    }
    
    for (int i = 0; i < wordlengh; i++) {
        printf("%c ", guessed[i]);
    }
    
    printf("\nGib einen Guess ab: "); 
    if (scanf(" %c", &guess) != 1) {
        printf("Ungültige Eingabe");
        return 1;
    }

    for (int i = 0; i < wordlengh ; i++) {
        if (secret[i] == guess){
            matches++;
            guessed[i] = guess;
        }
    }

    for (int i = 0; i < wordlengh; i++) {
        printf("%c ", guessed[i]);
    }

    printf("\nDein Guess kommt %d mal im geheimen Wort vor", matches);
    return 0;
}
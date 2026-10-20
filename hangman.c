#include <stdio.h>

int main()
{
    const char secret[] = "KAFFEE";
    char guess;
    int matches = 0;
    
    printf("Gib einen Guess ab: "); 
    if (scanf("%c", &guess) != 1){
        printf("Ungültige Eingabe");
        return 1;
    }

    for (int i = 0; i < sizeof(secret) - 1; i++) {
        if (secret[i] == guess){
            matches++;
        }
    }

    printf("Dein Guess kommt %d mal im geheimen Wort vor", matches);
    return 0;
}
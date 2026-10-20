#include <stdio.h>

int main()
{
    const char secret = 'X';
    char guess;
    
    printf("Gib einen Guess ab: "); 
    
    if (scanf(" %c", &guess) != 1) { //Prüft ob die Eingabe gültig ist
        printf("Ungültige Eingabe\n");
        return 1;
    }

    if (secret == guess) { //überprüfen ob guess gleich secret ist
        printf("Treffer der Buchstabe war %c", secret);
    } else {
        printf("Daneben");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>


void print_chararray(char array[], int wordlengh){ //Funktion um arrays mit datentyp char auszugeben
    for (int i = 0; i < wordlengh; i++){
        printf("%c ", array[i]);
    }
} 


int main()
{
    //Variablen festlegen
    const char secret[] = "TRAMWAYMUSEUMGRAZ";
    char guess;
    char guessed_chars[36];
    int wordlengh = sizeof(secret) - 1;
    char correct_guesses[wordlengh + 1];
    int versuche = 11;
    int hits;
    int position_guessed_chars = 0;

    correct_guesses[wordlengh] = '\0';

    for (int i = 0; i < wordlengh; i++) {
        correct_guesses[i] = '_';
    }
    
    print_chararray(correct_guesses, wordlengh);
    
    //Schleife wo man ratet
    for (int i = 0; i < versuche;) {
        hits = 0;
        printf("\nGib einen Guess ab: "); 

        while ((scanf(" %c", &guess) != 1) || !((guess >= 'A')&&(guess <= 'Z'))) { //Buchstaben einlesen und prüfen ob er ok ist
            printf("Ungueltige Eingabe, bitte erneut eingeben: ");
        }

        for (int i = 0; i < wordlengh; i++) {
            if (secret[i] == guess) {
                correct_guesses[i] = guess;
                hits++;
            }
        }

        print_chararray(correct_guesses, wordlengh);

        if (hits == 0){ //Prüfen ob der Buchstabe im Wort vorkommt
            i++;
            printf("Leider nein, noch %d Versuche", versuche - i);
        } else if (strcmp(correct_guesses, secret) == 0){ //Prüfen ob das ganze Wort erraten ist
            printf("\nDu hast das Wort %s erraten", secret);
            return 0;
        }
    }
    
    printf("\nDu hast das Wort leider nicht erraten Es war %s", secret);
    return 0;
}


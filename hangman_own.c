#include <stdio.h>
#include <string.h>


void print_chararray(char array[], int wordlengh){
    for (int i = 0; i < wordlengh; i++){
        printf("%c ", array[i]);
    }
} 


int main()
{
    //Variablen festlegen
    const char secret[] = "TRAMWAYMUSEUMGRAZ";
    char guess;
    int wordlengh = sizeof(secret) - 1;
    char correct_guesses[wordlengh];
    int versuche = 11;
    int hits;

    for (int i = 0; i < wordlengh; i++) {
        correct_guesses[i] = '_';
    }
    
    print_chararray(correct_guesses, wordlengh);
    
    //Schleife wo man ratet
    for (int i = 0; i < versuche;) {
        hits = 0;
        printf("\nGib einen Guess ab: "); 
        
        if (scanf(" %c", &guess) != 1) {
            printf("Ungültige Eingabe");
            return 1;
        }

        for (int i = 0; i < wordlengh; i++) {
            if (secret[i] == guess) {
                correct_guesses[i] = guess;
                hits++;
            }
        }

        print_chararray(correct_guesses, wordlengh);

        if (hits == 0){
            i++;
            printf("Leider nein, noch %d Versuche", versuche - i);
        } else if (strcmp(correct_guesses, secret) == 0){
            printf("\nDu hast das Wort %s erraten", secret);
            return 0;
        }
    }
    
    printf("\nDu hast das Wort leider nicht erraten Es war %s", secret);
    return 0;
}


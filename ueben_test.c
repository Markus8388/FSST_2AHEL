#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() { // Hauptfunktion
    srand(time(NULL)); 
    const int secret = (rand() %100) + 1; // Zufallszahl generieren
    int tipp = 0;
    int versuche = 1;

    while (tipp != secret) { // Rateschleife
        // Zahl einlesen
        printf("Gib einen Tipp ab: ");
        scanf("%d", &tipp);

        if (tipp > secret) {
            printf("Die gesuchte Zahl ist kleiner!\n");
        } else if (tipp == secret) {
            printf("Du hast die Zahl erraten und hast %d Versuche gebraucht.", versuche);
        } else {
            printf("Die gesuchte Zahl ist größer!\n");
        }

        versuche++;
    }

    return 0;
}
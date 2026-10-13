#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    const int max_zahl = 100;
    const int referenzzahl = (rand() % max_zahl);
    int eingelesene_zahl;
    int richtig = 0;
    int versuche = 10;
    printf("Herzlich wilkommen beim großen Zahlenraten.\nDie Zahl zwischen 0 und %d. \n", max_zahl);
    for (int i = 0; ((i < versuche)&&(richtig == 0)); i++)
    {
        printf("Bitte gebe eine Zahl ein: ");
        scanf("%d", &eingelesene_zahl);
        if (eingelesene_zahl < referenzzahl)
        {
            printf("Die gesuchte Zahl ist groesser. Du hast noch %d Versuche.\n", versuche - i - 1);
        }

        else if (eingelesene_zahl > referenzzahl)
        {
            printf("Die gesuchte Zahl ist kleiner. Du hast noch %d Versuche.\n", versuche - i - 1);
        }

        else
        {
            printf("Du hast die Referenzzahl erraten.");
            richtig = 1;
        }
    }
    if (richtig == 0)
    {
        printf("Tut mir leid du hast die Zahl nicht erraten! Die Zahl war %d", referenzzahl);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    const int REFERENZZAHL = 50;
    int eingelesene_zahl;
    int richtig = 0;
    for (int i = 0; ((i < 10)&&(richtig == 0)); i++)
    {
        printf("Bitte gebe eine Zahl ein: ");
        scanf("%d", &eingelesene_zahl);
        if (eingelesene_zahl < REFERENZZAHL)
        {
            printf("Die eingegeben Zahl %d, ist kleiner als die Referenzzahl. Du hast noch %d Versuche.\n", eingelesene_zahl, 10 - i - 1);
        }

        else if (eingelesene_zahl > REFERENZZAHL)
        {
            printf("Die eingegeben Zahl %d, ist groesser als die Referenzzahl. Du hast noch %d Versuche.\n", eingelesene_zahl, 10 - i - 1);
        }

        else
        {
            printf("Du hast die Referenzzahl erraten.");
            richtig = 1;
        }
    }
    if (richtig == 0)
    {
        printf("Tut mir leid du hast die Zahl nicht erraten! Die Zahl war %d", REFERENZZAHL);
    }
    return 0;
}
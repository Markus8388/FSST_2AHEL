#include <stdio.h>

int main()
{
    const int REFERENZZAHL = 50;
    int eingelesene_zahl;
    printf("Bitte gib eine Zahl ein: ");
    scanf("%d", &eingelesene_zahl);
    if (eingelesene_zahl < REFERENZZAHL)
    {
        printf("Die eingegeben Zahl %d, ist kleiner als die Referenzzahl %d", eingelesene_zahl, REFERENZZAHL);
    }

    else if (eingelesene_zahl > REFERENZZAHL)
    {
        printf("Die eingegeben Zahl %d, ist groesser als die Referenzzahl %d", eingelesene_zahl, REFERENZZAHL);
    }

    else
    {
        printf("Die eingegeben Zahl %d, ist gleich wie die Referenzzahl %d", eingelesene_zahl, REFERENZZAHL);
    }
    return 0;
}
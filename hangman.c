#include <stdio.h>

int main()
{
    const char secret = 'X';
    char guess;
    
    printf("Gib einen Guess ab: "); 
    scanf("%c", &guess); //guess wird eingelesen

    if (secret == guess) { //überprüfen ob guess gleich secret ist
        printf("Treffer der Buchstabe war %c", secret);
    } else {
        printf("Daneben");
    }

    return 0;
}
#include <stdio.h>


int main()
{
    const char secret = 'X';
    const char guess = 'Y';

    if (secret == guess)
    {
        printf("Treffer der Buchstabe war %c", secret);
    }

    else
    {
        printf("Daneben");
    }

    return 0;
}
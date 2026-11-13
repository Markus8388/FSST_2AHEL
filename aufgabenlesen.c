#include <stdio.h>

int umrechnen(int  menge, int palt, int pneu) {
    return 42;
}

int main(int argc, char* argv[]) {
    if (argc == 1) { // Benutzer hat keine Parameter übergeben
        // TODO: Irgendwas mit Rezepten
    } else if (argc == 4) {
        char *menge = argv[1];
        char *palt = argv[2];
        char *pneu = argv[3];
        printf("Für %d Personen: %d -> für %d Personen: %d", palt, menge, pneu, umrechnen(menge, palt, pneu));
    } else {
        printf("Usage: rezepte <menge> <personenanzahl_alt> <personenanzahl_neu>");
        return -1;
    }
}
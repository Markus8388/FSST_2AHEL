#include <stdio.h>

void manipuliere(int **ptr) {
    // Böse Überraschung 1: Was wird hier verändert?
    **ptr = 99;
}

int main() {
    // Ein 2D-Array (Matrix mit 2 Zeilen und 3 Spalten)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int *p1 = matrix[0]; // Zeigt auf das allererste Element (die 1)
    int *p2 = matrix[1]; // Zeigt auf den Anfang der zweiten Zeile (die 4)

    // Ausgabe A: Pointer-Verschiebung im 2D-Array
    printf("A: %d\n", *(p1 + 4));

    // Ausgabe B: Pointer-Subtraktion über Zeilen hinweg
    printf("B: %ld\n", p2 - p1);

    // Jetzt erstellen wir einen Pointer auf den Pointer p1
    int **doppel_ptr = &p1;
    
    // Funktionsaufruf
    manipuliere(doppel_ptr);

    // Ausgabe C: Welcher Wert wurde durch die Funktion geändert?
    printf("C: %d\n", matrix[0][0]);

    // Böse Überraschung 2: Wir biegen den Doppel-Pointer um
    *doppel_ptr = p2 + 2;

    // Ausgabe D: Worauf zeigt p1 jetzt nach der Manipulation?
    printf("D: %d\n", *p1);

    return 0;
}

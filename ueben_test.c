#include <stdio.h>

void veraendere_array(int *ptr) {
    *(ptr + 1) = 99;
}

int main() {
    int liste[] = {10, 20, 30, 40};
    
    // Ausgabe A: Datentypgrößen (sizeof)
    printf("A: %lu\n", sizeof(liste) / sizeof(liste[0]));
    
    int *p1 = liste; // Pointer zeigt auf das erste Element
    int *p2 = &liste[2];
    
    // Ausgabe B: Pointer-Subtraktion
    printf("B: %ld\n", p2 - p1);
    
    // Funktion aufrufen
    veraendere_array(liste);
    
    // Ausgabe C: Wert nach Funktionsaufruf
    printf("C: %d\n", liste[1]);
    
    // Pointer verschieben
    p1 += 3;
    
    // Ausgabe D: Dereferenzierung nach Verschiebung
    printf("D: %d\n", *p1);
    
    return 0;
}

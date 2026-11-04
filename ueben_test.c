#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40};
    int *p = array;
    
    // Ausgabe A: Post-Inkrement vs. Dereferenzierung
    printf("A: %d\n", *p++);
    
    // Ausgabe B: Klammerung und Pointer-Verschiebung
    printf("B: %d\n", (*p)++);
    
    // Ausgabe C: Der aktuelle Zustand des Arrays
    printf("C: %d\n", array[1]);
    
    // Böse Überraschung: Pointer-Casting (Typ-Verwandlung)
    // Wir verwandeln den int-Pointer in einen char-Pointer!
    char *c_ptr = (char *)&array[2];
    
    // Ausgabe D: Pointer-Arithmetik auf verschiedenen Datentypen
    // Was passiert, wenn wir zu einem char-Pointer +4 addieren?
    int *final_ptr = (int *)(c_ptr + 4);
    
    printf("D: %d\n", *final_ptr);
    
    return 0;
}

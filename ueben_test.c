#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Vordefinieren der funktionen
int attack(int* ziel_hp);
int starker_angriff(int* angreifer_hp, int* ziel_hp);
int heilen(int* hp);
char boss_entscheidung();

int main() { // Gameloop
    srand(time(NULL)); // Initialisieren des Zufallgenerators
    
    //Initialisieren der Variablen
    int player_hp = 100;
    int boss_hp = 100;
    char angriff;
    int treffer = 1;
    
    printf("Hallo du musst Megaleg besiegen, ihr beide habt %d HP.\n Du kannst zwishen Angriff(a), Starker Risiko Angriff(s) und Heiltrang(a)\n", player_hp);

    while ((player_hp > 0) && (boss_hp > 0)) { // Gameloop
        printf("Wähle einen Angriff: ");
        scanf(" %c", &angriff);

        while (angriff != 'a' && angriff != 's' && angriff != 'h') {
            printf("ungültige eingabe, nochmal: ");
            scanf(" %c", &angriff);
        }

        if (angriff == 'a') { // Entscheidung wird umgesetzt
            treffer = attack(&boss_hp);
        } else if (angriff == 's') {
            treffer = starker_angriff(&player_hp, &boss_hp);
        } else if (angriff == 'h') {
            treffer = heilen(&player_hp);
        }

        if (treffer == 0) { // Es wird angezeigt ob Treffer, kein Treffer, oder Heilung
            printf("Treffer! Boss: %d HP, Du: %d HP\n", boss_hp, player_hp);
        } else if (treffer == 1) {
            printf("Verdammt daneben! Boss: %d HP, Du: %d HP\n", boss_hp, player_hp);
        } else if (treffer == 2) {
            printf("Ein paar Wunden verheilen du wirst stärker. Boss %d HP, Du: %d HP\n", boss_hp, player_hp);
        }

        // Boss greift an
        angriff = boss_entscheidung();
        
        if (angriff == 'a') {
            treffer = attack(&player_hp);
        } else {
            treffer = starker_angriff(&boss_hp, &player_hp);
        }

        // Prüfen ob Boss trifft
        if (treffer == 0) { // Es wird angezeigt ob Treffer, kein Treffer, oder Heilung
            printf("Boss trifft dich! Boss: %d HP, Du: %d HP\n", boss_hp, player_hp);
        } else if (treffer == 1) {
            printf("Glück gehabt daneben! Boss: %d HP, Du: %d HP\n", boss_hp, player_hp);
        }


    }
    if (boss_hp == 0) {
        printf("Boss besiegt!");
        return 0;
    } else {
        printf("Verloren");
        return 0;
    }
}

int attack(int* ziel_hp) {
    if ((*ziel_hp -= 10) <= 0) {
        *ziel_hp = 0;
    }
    return 0;
}

int starker_angriff(int* angreifer_hp, int* ziel_hp) {
    if ((rand() % 2) == 0) {
        if ((*ziel_hp -= 30) <= 0) {
            *ziel_hp = 0;
            *angreifer_hp -= 5;
            return 0;
        } else {
            *angreifer_hp -= 5;
            return 0;
        }
    } else {
        return 1;
    }
}

int heilen(int* hp) {
    if ((*hp += 5) > 100) {
        *hp = 100;
    }
    return 2;
}

char boss_entscheidung() {
    int entscheidung = rand() % 2;
    if (entscheidung == 0) {
        printf("Boss greift einfach an!\n");
        return 'a';
    } else {
        printf("Boss versucht einen starken angriff\n");
        return 's';
    }
}
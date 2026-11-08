#include <stdio.h>

void einzahlen(float* kontostand, float betrag);
int abheben(float* kontostand, float betrag);

int main() {
    float mein_konto = 100;
    einzahlen(&mein_konto, 50);
    abheben(&mein_konto, 120);
    abheben(&mein_konto, 80);
    return 0;
}

void einzahlen(float* kontostand, float betrag)  {
    *kontostand += betrag;
}

int abheben(float* kontostand, float betrag) {
    if (*kontostand >= betrag) {
        *kontostand -= betrag;
        printf("Abheben erfolgreich\n");
        return 1;
    } else {
        printf("Zu wenig Geld am Konto\n");
        return 0;
    }
}
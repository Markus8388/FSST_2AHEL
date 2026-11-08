#include <stdio.h>

float berechne_kwh(float watt, float hour);
void drucke_rechnung(float kwh);

int main() {
    float watt;
    float hour;
    printf("Bitte gib die benötigte Leistung in Watt ein: ");
    scanf("%f", &watt);
    printf("Bitte jetzt die Zeit: ");
    scanf("%f", &hour);
    float kwh = berechne_kwh(watt, hour);
    drucke_rechnung(kwh);
    return 0;
}

float berechne_kwh(float watt, float hour) {
   return watt*hour / 1000; 
}

void drucke_rechnung(float kwh) {
    printf("Kosten: %.2f Euro\n", kwh * 0.3);
}
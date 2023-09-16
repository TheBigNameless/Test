#include <stdio.h>

int main() {
    float pruefungen;
    int i = 0;
    float ergebniss = 0;
    float note = 0;
    printf("Anzahl Pruefungen: ");
    scanf("%f", &pruefungen);

    while (i < pruefungen){
        printf("Note Pruefung: ");
        scanf ("%f", &note);
        ergebniss = ergebniss + note;
        i++;
    }
    printf("Ergebniss vor Rechnung: %f\n",ergebniss);
    ergebniss = ergebniss/pruefungen;
    printf("Ergebniss: %f", ergebniss);
    return 0;
}
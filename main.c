#include <stdio.h>

int main() {
    int pruefungen;
    int i = 1;
    float ergebniss = 0;
    int a = 0;
    printf("Anzahl Pruefungen: ");
    scanf("%d", &pruefungen);

    while (pruefungen >= i){
        scanf ("%d\n", &a);
        ergebniss = ergebniss + a;
        printf("%f:",i);
        printf(" %f",a);
        printf(" %f\n",ergebniss);
        a = 0;
        i++;
    }
    printf("Ergebniss vor Rechnung: %f\n",ergebniss);
    ergebniss = ergebniss/pruefungen;
    printf("Ergebniss: %f", ergebniss);
    return 0;
}

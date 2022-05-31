// berechnet Approximationen an den goldenen Schnitt als Quotient zweier
// benachbarter Fibonacci-Zahlen
// zu vervollständigendes Programm im Quiz zur Vorlesung
// Andreas Frommer, 29.11.2020
// Korrektur Manuel Tsolakis, 02.12.20

#include <stdio.h>

int main(void) {

    int grenze;
    printf("Bis wohin?\n");
    scanf("%d", &grenze);

    int n=0;

    // den Typ von f und f_alt nicht ändern!
    int f_alt = 0;  // dient als f_{-1}, damit auch f_1 als f_0 + f_{-1} berechnet werden kann
    int f = 1;   // = f_0


    for (n = 0; n <= grenze; n++) {
        printf("%d-te Fibonacci-Zahl: %d\n",n,f);


        printf("der goldener Schnitt ist: %.8f\n",  (f /(double) f_alt));
        // jetzt hier die Ausgabe von f / f_alt ergänzen, berechnet als double


// dient als f_{-1}, damit auch f_1 als f_0 + f_{-1} berechnet werden kann



       // f_alt = f;
        //jetzt neues f berechnen und f_alt auf altes f setzen. Dazu wird das alte f zwischengespeichert.




         int f_temp = f;
        f = f + f_alt;  // neues f, das alte f ist jetzt überschrieben
        f_alt = f_temp; // neues f_alt ist altes f
    }
}

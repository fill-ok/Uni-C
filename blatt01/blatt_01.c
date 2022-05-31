/******************************************/
/* Justin Kotlorz, Pascal Gorselink       */
/* Gruppe: Mo08, Leiter: Bennet Böddecker */
/* Uebungsblatt: 01, Aufgabe: B-2         */
/* Thema: Fakultät modifizieren           */
/* Version: 1.0                           */
/* Datum: 14.11.2020                      */
/* Status: lauffaehig                     */
/******************************************/

#include <stdio.h>

// Summenwert() - Liefert den Summenwert von 1 bis n,
// Summenwert = 1 + 2 · ... · + (n − 1).
int summenwert(int n)
{
int i; // durchläuft die Zahlen 1, ..., n
int summe; // Summe der Zahlen 1, ..., i
summe = 0;
i = 0; // aufaddieren in einer Schleife
while (i <= n)
{
summe = summe + i;
i = i + 1;
}
return summe;
}
int main(void)
{
int zahl, s;
printf("Nicht negative ganze Zahl eingeben: ");
scanf("%d", &zahl) ;
s = summenwert(zahl);
printf("Summenwert = %d\n", s);
return 0;
}

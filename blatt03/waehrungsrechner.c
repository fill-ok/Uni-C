/******************************************/
/* Justin Kotlorz, Pascal Gorselink       */
/* Gruppe: Mo08, Leiter: Bennet Böddecker */
/* Uebungsblatt: 02, Aufgabe: B-4         */
/* Thema: Höhe ausrechnen                 */
/* Version: 1.0                           */
/* Datum: 22.11.2020                      */
/* Status: lauffaehig                     */
/******************************************/




#include <stdio.h>



int main(void)
{

    float euro;                         // Deklaration der Variable euro
    euro = 0;                           // Initialisierung der Variable euro


    int waehrungen;                     // Deklaration der Variable waehrungen



    printf("Geben Sie bitte einen Geldbetrag in Euro (EUR) ein:\n");                                                                                     // Ausgabe: mit der Aufforderung einen Geldbetrag in Euro einzugeben
    scanf( "%f", &euro);                                                                                                                                 // Einlesen des eingegebenen Wertes

    printf("In welche Waehrung soll der Geldbetrag umgerechnet werden?\n 1: US Dollar (USD)\n 2: Japanische Yen (JPY)\n 3: Britische Pfund (GBP)\n");    // Ausgabe: mit der Aufforderung in welche Waehrung der eingegebene Betrag umgerechnet werden soll
    scanf("%d", &waehrungen);                                                                                                                            // Einlesen des ausgewaelhten Falles 1 bis 3



    switch(waehrungen)
{
    case 1:                                                                                  // Fall 1 mit einer Ausgabe und der Umrechnung euro in USD
        printf("In der ausgewaehlten Waehrung lautet der Geldbetrag: %.2f", euro * 1.18);
        break;

    case 2:                                                                                  // Fall 2 mit einer Ausgabe und der Umrechnung euro in JPY
        printf("In der ausgewaehlten Waehrung lautet der Geldbetrag: %.2f", euro * 124.2);
        break;

    case 3:                                                                                  // Fall 3 mit einer Ausgabe und der Umrechnung euro in GBP
        printf("In der ausgewaehlten Waehrung lautet der Geldbetrag: %.2f", euro * 0.90);
        break;

    default:                                                                                 // Standard Fall: wenn der Benutzer einen nicht zulässigen Fall eingeben hat
        printf("Falsche Eingabe\n");



}




}

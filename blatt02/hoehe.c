/******************************************/
/* Justin Kotlorz, Pascal Gorselink       */
/* Gruppe: Mo08, Leiter: Bennet B�ddecker */
/* Uebungsblatt: 02, Aufgabe: B-4         */
/* Thema: H�he ausrechnen                 */
/* Version: 1.0                           */
/* Datum: 22.11.2020                      */
/* Status: lauffaehig                     */
/******************************************/



#include <stdio.h>

float v, a; // deklaration der Variablen v und a


int main(void){


    printf("Geben Sie das Volumen (in cbm) ein: \n");     //Ausgabe, Eingabe soll in cbm erfolgen
    scanf("%f", &v);                                      //Eingabe wird eingelesen

    printf("Geben Sie Die Grundfl�che (in qm) ein: \n");  //Ausgabe, Eingabe soll in qm erfolgen
    scanf("%f", &a);                                      //Eingabe wird eingelesen


    printf("Die Hoehe betraegt %.2f \n", v / a);          //Ausgabe mit integrierter Division des, Ergebnis wird auf zwei Nachkommastellen gerundet




}

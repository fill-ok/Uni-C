/*****************************************/
/* Pascal Gorselink,  Justin Kotlorz     */
/* Gruppe: Mo08, Leiter: Bennet B�ddecker*/
/* Uebungsblatt: 7, Aufgabe: B-14        */
/* Thema Goldener Schnitt                */
/* Version: 1.0                          */
/* Datum: 08.01.2020                     */
/* Status: lauffaehig                    */
/*****************************************/

/*Pseudocode:
funktion: Gleitkommazahl iPow(Gleitkommazahl := x, Ganzzahl e

    wenn x gleich 0
        gib 0 wieder

    wenn e gleich 1
        gib 1 wieder

    Gleitkommazahl result := x

    für Ganzzahl i := 0 solange i < e-1
        result :*= x

        i := i+1

    gib result wieder

*/


#include <stdio.h>

double iPow(double x, int e) {
    if (x == 0) return 0; //0^x is always 0
    if (e == 0) return 1; //x^0 is always 1
    double result = x;    //setting a temporary value to x, to store it elsewhere so we can multiply it e-1 times by x without modifiyng x
    for (int i = 0; i < e-1; ++i) { //multiplying x, e-1 times by x
        result *= x;
    }
    return result;
}

int main()
{
    double x;
    int e;

    printf("Gebe eine zu exponierende Zahl ein: ");
    scanf("%lf", &x);

    printf("Gebe einen ganzzahligen Exponenten an: ");
    scanf("%d", &e);

    printf("Ergebnis: %f", iPow(x, e));

    return 0;
}

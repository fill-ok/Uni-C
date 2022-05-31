/*****************************************/
/* Pascal Gorselink,  Justin Kotlorz     */
/* Gruppe: Mo08, Leiter: Bennet B�ddecker*/
/* Uebungsblatt: 5, Aufgabe: B-10        */
/* Thema Goldener Schnitt                */
/* Version: 1.0                          */
/* Datum: 013.12.2020                    */
/* Status: lauffaehig                    */
/*****************************************/




/* Pseudocode:
 * double c_n = 1, d_n = 1, ctemp = 0, dtemp = 0
 * int n = 0, i = 0
 *
 * wiederhole
 *      ctemp = c
 *      c = 1+1/c
 *      erhöhe n um 1
 * während (c-ctemp) > 10^(-12)
 *
 * wiederhole
 *      dtemp = d
 *      d = Wurzel(1+d)
 *      erhöhe i um 1
 * während (d-dtemp) > 10^(-12)
 *
 * Ausgabe von c & d mit Iterationsschritten n und i
 */


#include <stdio.h>
#include <math.h>

int main(void) {

    double cn, cn_alt;
    double dn, dn_alt;

    cn = 1;
    dn = 1;

    int zaehler1;
    zaehler1 = 0;

    int zaehler2;
    zaehler2 = 0;


    do {
        zaehler1 = zaehler1 + 1;

        cn_alt = cn;
        cn = 1 + (1 / cn_alt);

    } while (fabs(cn - cn_alt) > pow(10, -12));


    do {
        zaehler2 = zaehler2 + 1;

        dn_alt = dn;
        dn = sqrt(1 + dn_alt);

    } while (fabs(dn - dn_alt) > pow(10, -12));

    printf("Das Ergebniss aus der ersten Folge ist %.10f\n Iteratiosschritte %d\n", cn, zaehler1);

    printf("Das Ergebniss aus der zweiten Folge ist %.10f\n Iteratiosschritte %d", dn, zaehler2);

    return 0;

}

/*****************************************/
/* Pascal Gorselink,  Justin Kotlorz     */
/* Gruppe: Mo08, Leiter: Bennet B�ddecker*/
/* Uebungsblatt: 6, Aufgabe: B-12        */
/* Thema Goldener Schnitt                */
/* Version: 1.0                          */
/* Datum: 30.12.2020                     */
/* Status: lauffaehig                    */
/*****************************************/


/* Pseudocode:
 *
 * deklariere int zeilen, spalten
 * deklariere
 *  bool E1 = (!0||0);
 *  bool E2 = (!0||0);
 *
 *  bool G1 := (!1&&0);
 *  bool G2 := (!1&&0);
 *
 *  bool H1 := (0&0);
 *  bool H2 := (0&0);
 *
 *  bool I1 := (0==0);
 *  bool I2 := (1==0);
 *
 *  bool F1 := (0||1);
 *  bool F2 := (0||0);
 *
 *  zeilen := 0
 *  zaehle solange zeilen < 1
 *  zeilen := zeilen + 1
 *      drucke " | A | B | C | D | E = A->B | G = (NOT) E AND C | H = A AND C | I = H<->D | F |zeilenumbruch"
 *
 *      spalten := 0
 *      zaehle solange spalten < 1
 *      spalten := spalten + 1
 *          drucke "-+---+---+---+---+----------+-------------------+-------------+-----------+---+-"
 *
 *          drucke "zeilenumbruch"
 *
 *  zeilen := 0
 *  zaehle solange zeilen < 1
 *  zeilen := zeilen + 1
 *      drucke " | 0 | 0 | 0 | 0 | %i        | %i                 | %i           | %i         | %i |zeilenumbruch"
 *         gib E1,G1,H1,I1,F1 aus
 *
 *      spalten := 0
 *      zaehle solange spalten < 1
 *      spalten := spalten + 1
 *          drucke " | 0 | 0 | 0 | 1 | %i        | %i                 | %i           | %i         | %i |"
 *             gib E2,G2,H2,I2,F2 aus
 *
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int zeilen;
    int spalten;

    bool E1 = (!0||0);
    bool E2 = (!0||0);

    bool G1 = (!1&&0);
    bool G2 = (!1&&0);

    bool H1 = (0&0);
    bool H2 = (0&0);

    bool I1 = (0==0);
    bool I2 = (1==0);

    bool F1 = (0||1);
    bool F2 = (0||1);




    for (zeilen = 0; zeilen < 1; zeilen++) {
        printf(" | A | B | C | D | E = A->B | G = (NOT) E AND C | H = A AND C | I = H<->D | F |\n");
        for (spalten = 0; spalten < 1; spalten++) {
            printf("-+---+---+---+---+----------+-------------------+-------------+-----------+---+-");
        }
        printf("\n");
    }
    for (zeilen = 0; zeilen < 1; ++zeilen) {
        printf(" | 0 | 0 | 0 | 0 | %i        | %i                 | %i           | %i         | %i |\n",E1,G1,H1,I1,F1);
        for (spalten = 0; spalten < 1; ++spalten) {
            printf(" | 0 | 0 | 0 | 1 | %i        | %i                 | %i           | %i         | %i |",E2,G2,H2,I2,F2);


        }
    }
}

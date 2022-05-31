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
 Drucke " | A | B | C | D | E = A->B | G = (NOT) E AND C | H = A AND C | I = H<->D | F | \n"
Drucke "-+---+---+---+---+----------+-------------------+-------------+-----------+---+-\n"

Ganzzahl e,g,h,i,f = 0

Für a := 0 bis a <= 1
  Für b := 0 bis b <= 1
    Für c := 0 bis c <= 1
      Für d := 0 bis d <= 1
        e := !a || b
        g := !e || c
        h := a && c
        i := h==d
        f := g || i
        Drucke " | %d | %d | %d | %d | %d \t    | %d \t\t| %d  \t      | %d \t  | %d | \n" mit a,b,c,d,e,g,h,i,f
        d := d+1
      c := c+1
    b := b+1
  a := a+1

*/
#include <stdio.h>


int main(void) {

  printf(" | A | B | C | D | E = A->B | G = (NOT) E AND C | H = A AND C | I = H<->D | F | \n");
  printf("-+---+---+---+---+----------+-------------------+-------------+-----------+---+-\n");

  int e,g,h,i,f;
  for (int a = 0; a <= 1; a++) {
    for (int b = 0; b <= 1; b++) {
      for (int c = 0; c <= 1; c++) {
        for (int d = 0; d <= 1; d++) {

          e = !a || b;
              g = !e && c;
              h = a && c;
              i = h==d;
              f = g || i;

          printf(" | %d | %d | %d | %d | %d \t    | %d \t\t| %d  \t      | %d \t  | %d | \n", a,b,c,d,e,g,h,i,f);
        }
      }
    }
  }
  return 0;
}

/******************************************/
/* Pascal Gorselink,  Justin Kotlorz      */
/* Gruppe: Mo08, Leiter: Bennet Boeddecker*/
/* Uebungsblatt: 8, Aufgabe: B-16         */
/* Thema   Folgen, Rekursion              */
/* Version: 1.0                           */
/* Datum: 17.01.2020                      */
/* Status: lauffaehig                     */
/*****************************************/


/*Pseudocode:
Funktion anz(n: Ganzzahl, s: Ganzzahl): Ganzzahl
  Wenn n == 1
    Wenn s >= 0 && s <= 2
      gib 1
    sonst
      gib 0

  Ganzzahl tmp := 0
  Für Ganzzahl i := 0 solange i < 3
    tmp = tmp + anz(n-1, s-i)
    i = i+1

  gib tmp zurück
*/



#include <stdio.h>

int anz(int n, int s) {
  if (n == 1) {
    if (s >= 0 && s <= 2) {
      return 1;
    }
    else {
      return 0;
    }
  }

  int tmp = 0;
  for (int i = 0; i < 3; i++) {
    tmp += anz(n - 1, s - i);
  }

  return tmp;
}

int main() {
  printf("%d\n", anz(3, 4));
}

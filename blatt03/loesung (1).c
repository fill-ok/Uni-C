/****************************************/
/* Pascal Gorselink, Rainer Co, Tom Kellerhoff, Hannah Rosa Plötz  */
/* Gruppe: Mo08, Leiter: Bennet Böddecker */
/* Uebungsblatt: 3, Aufgabe: B5 */
/* Thema: Überlauf */
/* Version: 1.0 */
/* Datum: 23.11.2020 */
/* Status: lauffaehig */
/****************************************/
#include <stdio.h>

int main(void)
{
 int i = 0, j = 0;

 while (i >= 0) //solange i nicht negativ wird, wird i um 1 hochgezählt; sobald ein overflow eintritt, ist i negativ und die Schleife wird abgebrochen
  i++;
 printf("a) übergelaufenes i = %d\ngrößtmögliches i = %d\n", i, i - 1);
 i--;           //i-- (gleichbedeutend mit i = i-1) führt wieder auf i direkt vor dem overflow zurück
 while (i != 0) //solange i nicht 0 ist, wird j um 1 hochgezählt
 {
  i = i / 2; //da i eine int ist, nimmt i/2 für i<2 0 an
  j++;
 }
 printf("Die Anzahl an verwendeten Bit ist %d Bit.\nDie Schleife wird nur %d-mal durchlaufen, jedoch dient das erste Bit im Zweierkomplement der Vorzeichendarstellung und muss somit addiert werden.\n", j + 1, j);
 return 0;
}

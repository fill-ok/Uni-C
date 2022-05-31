/*****************************************/
/* Pascal Gorselink,  Justin Kotlorz     */
/* Gruppe: Mo08, Leiter: Bennet B�ddecker*/
/* Uebungsblatt: 4, Aufgabe: B-8         */
/* Thema: Zahlendreieck ausgeben         */
/* Version: 1.0                          */
/* Datum: 05.12.2020                     */
/* Status: lauffaehig                    */
/*****************************************/


/*Pseudocode:

deklariere int i, j, x, size
x := 1

wiederhole
	drucke"Geben Sie die Anzahl der Zeilen ein: "
	lies size
	drucke "Zeilenumbruch"

wenn size <= 0
	drucke" Falsche Eingabe! "

solange size <= 0



i := 1
zaele solange i <= size
i:= i +1

	j := size -i +1
	zaehle solange j <= size
	j := j+1

		gib x aus

drucke "Zeilenumbruch"
*/




#include <stdio.h>

int main(void) {

    int i, j, x, size;
    x = 1;

    do {

        printf("Geben Sie die Anzahl der Zeilen ein: ");
        scanf("%d", &size);
        printf("\n");

        if (size <= 0) {

            printf("Falsche Eingabe!\n");
        }


    } while (size <= 0);

    for (i = 1; i <= size; i = i + 1) {
        for (j = size - i + 1; j <= size; j = j + 1) {


            printf("%3d ", x++);


        }

        printf("\n");
    }


}

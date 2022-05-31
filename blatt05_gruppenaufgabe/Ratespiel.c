#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int zufallsZahl = 1 + rand()%50;
    int errateneZahl = 0;


    for (int tries = 6; tries > 0; --tries) {
        printf("Rate eine Zahl zwischen 1 und 50: ");
        scanf("%d", &errateneZahl);

        if (errateneZahl == zufallsZahl) {
            printf("Herzlichen Glueckwunsch, die Zufallszahl war: %d.\n", zufallsZahl);
            break;

        }

        //liegt die zahl nicht außerhalb des erlaubten Zahlenbereichs?
        if (!(1 > errateneZahl || errateneZahl >= 50)) {
            //zahl falsch geraten -> groeßer kleiner ausgabe
            if (errateneZahl < zufallsZahl) {
                printf("Die Zahl %d ist kleiner als die Zufallszahl.\n", errateneZahl);
            } else {
                printf("Die Zahl %d ist groesser als die Zufallszahl.\n", errateneZahl);
            }
        } else {
            printf("Die geratene Zahl liegt ausserhalb des erlaubten Zahlenbereichs.\n");
        }

        printf("Uebrige Versuche: %d.\n", tries);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int zufallsZahl = 1 + rand()%50;



    int versuch = 7;
    int i;
    int eingabe;

    printf("Wie lautet die geheime zufällige Zahl?\n");

    for(i=1; i<= versuch; ++i)
    {
        printf("Versuch Nr. %d   ",i);
        scanf("%d",&eingabe);

        if(eingabe == zufallsZahl)
        {
            printf("Richtig geraten!\n");
            break;
        }


        while(eingabe >= 0 && eingabe<= 50)
        {

            if(eingabe < zufallsZahl)
            {

                printf("zu klein!\n");
                break;
            }
            if(eingabe > zufallsZahl)
            {
                printf("zu gross!\n");
                break;
            }


        }
    }
    printf("Die geheime Zahl war %d", zufallsZahl);
    return 0;
}



#include<stdio.h>
#include <math.h>



int main()
{
    double m ,v,k;

    printf("Bitte Masse in kg eingeben  ");
    scanf("%lf",&m);

    printf("\n");

    printf("Bitte Geschwindigkeit in m/s eingeben   ");
    scanf("%lf",&v);

    k = ((0.5*m)*pow(v,2));

       printf("\n");

    printf("die Kinetische Energie beträgt: %lf J",k);


    return 0;
}

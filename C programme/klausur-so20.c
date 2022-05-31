#include <stdio.h>


int main(void)
{

    double r;
    double v;
    do {

        printf("Widerstand in Ohm eingeben:  ");
        scanf("%lf",&r);

        printf("\n");

        printf("Spannung in Volt eingeben: ");
        scanf("%lf",&v);
    } while(r<0 || v <0);

    printf("Stromstärke %lf", v/r);





    return 0;

}

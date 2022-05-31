#include <stdio.h>

int main(void)
{
    int i;
    int e;
    double x,erg;
    double tmp;






    printf("Zahl eingeben: \n");
    scanf("%lf",&x);

    printf("exponent eingeben: \n");
    scanf("%d",&e);

    erg = x;


    for(i=1;i<e;++i){

        tmp = x;    // tmp = 3  / 2
        erg = erg;  // erg = 3  / 9
        erg = erg * tmp;    // erg = 9* 3


    }

    printf("%lf",erg);




    return 0;
}

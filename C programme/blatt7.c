#include <stdio.h>

double iPow(double x, int e)
{
    int i,eminus = 0;
    double tmp;
    double erg;

    if(e == 0) {
        erg = 1;
    }
    if(x == 0) {
        if(x == 0 && e != 0) {
            erg = 0;
        }
    }
    else {
        if(x<0) {
            x=x*-1;
        }
        if(e<0) {
            e= e*-1;
            eminus = 1;
        }
        erg = x;

        for(i=1; i<e; ++i) {
            tmp = x;    // tmp = 3  / 2
            erg = erg;  // erg = 3  / 9
            erg = erg * tmp;    // erg = 9*
        }
        if(e%2 !=0 && e!=1){
            erg = erg *-1;
        }
        if(eminus == 1) {
            erg = 1/erg;
        }
    }
    return erg;
}
int main(void)
{
    int e,again;
    double x;
    char c[] = "[Idiot 0 hoch 0 ist nicht definiert.]";

    do{

    printf("Zahl eingeben:     ");
    scanf("%lf",&x);

    printf("exponent eingeben: ");
    scanf("%d",&e);
    printf("\n");

    if(x == 0 && e == 0) {
        printf("%s \n",c);

    } else {
        printf("Das Ergebnis ist: %.4lf \n",iPow(x,e));
    }
    printf("\n");
    printf("again? Yes[1] / No[0]");
    printf("\n");
    scanf("%d",&again);
    }while(again == 1);
    return 0;
}

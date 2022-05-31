#include <stdio.h>

int main(void)
{

    int i,n,j;
    double z;


    printf("Bitte eine groesse eingeben: ");
    scanf("%d",&n);

    double c[n];

    for(i=0; i<=n-1; ++i) {

        printf("Bitte eine Zahl eingeben: ");
        scanf("%lf",&z);

        printf("\n");


        c[i] = z;

    }

    for(j=0; j<=n-1; ++j) {

        printf("%lf",c[j]);
        printf("\n");
    }


    return 0;
}

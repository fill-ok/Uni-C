#include <stdio.h>

int main(void){



    int i = 0, j = 1;

    i = 0;



while (i >= 0)

    i++;


    printf("a übergelaufenes i =%d\n größtmögliches i = %d \ a",i, i-1);

    i--;

    while (i%2 != 0){

        i = i/2;
        j++;
    }

    printf("Die Anzahl an verwendeten Bit ist %d\n", i);






    return 0;
}



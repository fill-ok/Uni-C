#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>




int main(void) {
    enum {
        NMAX = 10
    };
    char in[ NMAX];
    int i;
    int j;
    int k = 10;
    int x, y;




    char bstsalat[NMAX][NMAX] = {
            {'a', 'r', 'r', 'a', 'y', 'i', 'p', 'o', 'u', 't'},
            {'r', 'l', 'm', 'p', 'y', 'u', 'o', 'b', 'u', 'n'},
            {'s', 't', 'r', 'i', 'n', 'g', 'i', 'l', 'w', 'l'},
            {'x', 'o', 'x', 'n', 't', 'o', 'n', 'a', 'h', 's'},
            {'u', 'v', 'w', 't', 'o', 'l', 't', 's', 'i', 't'},
            {'r', 'e', 't', 'u', 'r', 'n', 'e', 'u', 'l', 'w'},
            {'b', 'z', 'a', 'z', 'y', 'e', 'r', 'm', 'e', 's'},
            {'f', 'u', 'l', 'c', 'z', 'i', 'o', 'r', 't', 'u'},
            {'o', 'a', 'm', 'k', 'd', 'o', 'u', 'b', 'l', 'e'},
            {'r', 'f', 'u', 'w', 'z', 'x', 'd', 'd', 'x', 'y'}};


    printf("Bitte das gesuchte Wort eingeben\n:");
    scanf("%s", &in);
    printf("%s", in);





        return 0;

    }
}


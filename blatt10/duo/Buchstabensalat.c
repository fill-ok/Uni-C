/******************************************/
/* Pascal Gorselink,  Justin Kotlorz      */
/* Gruppe: Mo08, Leiter: Bennet Boeddecker*/
/* Uebungsblatt: 10, Aufgabe: B-20        */
/* Thema    Buchstabensalat               */
/* Version: 1.0                           */
/* Datum: 31.01.2021                      */
/* Status: lauffaehig                     */
/******************************************/
#include <stdio.h>
#include <string.h>

enum{ NMAX = 10 };

int main(void)
{
    char bstsalat[NMAX][NMAX] = {
            {'a','r','r','a','y','i','p','o','u','t'},
            {'r','l','m','p','y','u','o','b','u','n'},
            {'s','t','r','i','n','g','i','l','w','l'},
            {'x','o','x','n','t','o','n','a','h','s'},
            {'u','v','w','t','o','l','t','s','i','t'},
            {'r','e','t','u','r','n','e','u','l','w'},
            {'b','z','a','z','y','e','r','m','e','s'},
            {'f','u','l','c','z','i','o','r','t','u'},
            {'o','a','m','k','d','o','u','b','l','e'},
            {'r','f','u','w','z','x','d','d','x','y'}};

    char wort[NMAX];

    printf("Gib das gesuchte Wort ein: ");
    scanf("%s", wort);

    int wort_length = strlen(wort);
    int wort_found = 0;

    for(int row = 0; row < NMAX; ++row) {
        char zeile[NMAX];
        for(int col = 0; col < NMAX; ++col) {
            zeile[col] = bstsalat[row][col];
        }

        char* founded_wort = strstr(zeile, wort);
        if (founded_wort != NULL) {
            int position = founded_wort - zeile;
            printf("Von Position (%d, %d) bis Position (%d, %d) findet man das Wort %s.\n", row, position, row, position + wort_length - 1, wort);
            wort_found = 1;
        }
    }

    for(int col = 0; col < NMAX; ++col) {
        char spalte[NMAX];
        for(int row = 0; row < NMAX; ++row) {
            spalte[row] = bstsalat[row][col];
        }

        char* gefundenes_wort = strstr(spalte, wort);
        if (gefundenes_wort != NULL) {
            int position = gefundenes_wort - spalte;
            printf("Von Position (%d, %d) bis Position (%d, %d) findet man das Wort %s.\n", position, col, position + wort_length - 1, col, wort);
            wort_found = 1;
        }
    }

    if (!wort_found) {
        printf("Kein Wort gefunden.\n");
    }
}

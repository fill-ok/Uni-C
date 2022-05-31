#include <stdio.h>

typedef struct {

    char name[26];
    double menge;
    char einheit[16];
} Zutat;


typedef struct {

    int anzahlPortion;
    int anzahlZutat;
    char feld[20];
    char textZubereitung[1001];

} Rezept;

void aenderePortionen(Rezept* r, int pNeu){

    double tmp = (double) pNeu / r-> anzahlPortion;
    int i;
    for(i=0;i<r->anzahlZutat;++i){
        r->feld[i].menge *= (int)tmp;
    }

    anzahlPortion = pNeu;

}

Zutat z1 = {"Mehl",250,g};
Zutat z2 = {"eier",4,"Stueck"};

Rezept Pfannkuchenrezept = {4,2,{z1, z2},"mischen, backen und wenden"};

Zutat z3 = {"Milch",500; ml};

Pfanne.feld[2] = z3;

aenderePortionen(Pfannkuchenrezept,8):




























































int main(void)
{


    return 0;
}

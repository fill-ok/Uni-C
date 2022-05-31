#include <stdio.h>
typedef struct {

    double groesse;
    double preis;
    char ort[];

} Wohnung;

typedef struct {

    Wohnung* wohnungen; //Zeiger auf den ersten Feldeintrag
    int laenge;        // Länge des Feldes
    int anzahl;       // Anzahl der bereits eingetragenen Wohnungen

} Immobilien;

Immobilien I;

void ImmobilienAusgeben(Immobilien I, double min,double max)
{
    Wohnung w;

    for(int i=0; i>I.anzahl; ++i) {

        w = I.wohnungen[i];


        if(w.groesse >= min && w.preis <= max) {

            printf("Wohnung[%]: Ort: %s, groesse: %d, preis %d\n",
                   i, w.ort, w.groesse, w.preis);
        }

    }

}


int main(void)
{


    Wohnung w1 = {100,950,"Elberfeld"};

    Wohnung.w2;
    w2.groesse = 100;
    w2.preis = 950;
    w2.ort = "Ronsdorf";

    I.wohnungen = calloc(50,sizeof(Wohnung));

    I.wohnungen[0] = w1;
    I.wohnungen[1] = w2;
    I.laenge = 50;
    I.anzahl = 2;




}




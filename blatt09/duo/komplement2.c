/******************************************/
/* Pascal Gorselink,  Justin Kotlorz      */
/* Gruppe: Mo08, Leiter: Bennet Boeddecker*/
/* Uebungsblatt: 9, Aufgabe: B-18         */
/* Thema    Basis-b-Darstellung           */
/* Version: 1.0                           */
/* Datum: 24.01.2021                      */
/* Status: lauffaehig                     */
/******************************************/

#include <stdio.h>
#include <malloc.h>  

typedef int Basis_b_Zahl;

void add(Basis_b_Zahl* zahl1, Basis_b_Zahl* zahl2, Basis_b_Zahl* zahl3, int b) {
    int aktueller_wert = 0, uebertrag = 0;

    for(int i = 8-1; i >= 0; --i) {
        aktueller_wert = uebertrag + zahl1[i] + zahl2[i];
        uebertrag = aktueller_wert / b;
        zahl3[i] = aktueller_wert % b;
    }

    if (uebertrag > 0) {
        printf("Überlauf, Zahl fehlerhaft:\n");
    }
}

int bm1_complement(int z, int b) {
    int aktueller_wert = z;
    int ziffern = 0;

    while(aktueller_wert!=0) { 
        ziffern++; 
        aktueller_wert = aktueller_wert/10; 
    }
    
    int maximaler_wert = 0;
    
    for(; ziffern != 0; ziffern--) {
        maximaler_wert = maximaler_wert * 10 + (b-1);
    }
    
    return maximaler_wert - z;   
}

Basis_b_Zahl* basisb(int z, int b) {
    Basis_b_Zahl* z_b = malloc(8*sizeof(int));
    int aktueller_wert = 1;
    
    for(int i = 0; aktueller_wert != 0; ++i) {
        aktueller_wert = z / b;
        z_b[i] = z % b;
        z = aktueller_wert;
    }

    Basis_b_Zahl* ergebnis = malloc(8*sizeof(int));
    
    int x;
    int y;
    
    for(x = 8-1, y = 0; x >= 0 && y < 8; --x, ++y) {
        ergebnis[y] = z_b[x]; 
    }
    
    return ergebnis;
}

int main()
{
    int z = 0;
    int b = 0;
    
    printf("Gib eine Zahl ein: ");
    scanf("%d", &z);

    while(b < 2 || b > 9) {
        printf("Gib eine Basis ein: ");
        scanf("%d", &b);
    }
    
    printf("Die konvertierte Zahl ist: ");
    Basis_b_Zahl* z_b = basisb(z,b);
    for(int i = 0; i < 8; ++i) {
       printf("%d", z_b[i]); 
    }
    printf("\n\n");

    printf("Gib eine Zahl ein: ");
    scanf("%d", &z);
    b = 0;
    while(b < 2 || b > 9) {
        printf("Gib eine Basis ein: ");
        scanf("%d", &b);
    }
    
    printf("(b-1)-Komplement: %d\n\n", bm1_complement(z, b));

    int basis = 0, x = 0, y = 0;
    printf("Gib eine Basis an: ");
    scanf("%d", &basis);
    
    printf("Gib die erste Zahl ein: ");
    scanf("%d", &x);
    printf("Gib die zweite Zahl ein: ");
    scanf("%d", &y);
    Basis_b_Zahl* zahl1 = basisb(x, basis);
    Basis_b_Zahl* zahl2 = basisb(y, basis);
    Basis_b_Zahl* zahl3 = basisb(0, basis);
    add(zahl1, zahl2, zahl3, basis);
    printf("Ergebnis: ");
    for(int i = 0; i < 8; ++i) {
       printf("%d", zahl3[i]); 
    }
    printf("\n");

    return 0;
}

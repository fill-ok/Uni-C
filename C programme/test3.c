#include <stdio.h>


typedef struct {

    double x;
    double y;
} Ebene;


typedef struct {

    Ebene eckeLinks;
    double breite;
    double hoehe;

} Rechteck;



int funktion(Ebene e,Rechteck r)
{

    double newX=e.x;
    double newY=e.y;

    double newXX=r.eckeLinks.x;
    double newYY=r.eckeLinks.y;

    double b=r.breite;
    double h=r.hoehe;

    double bx=newXX+b;
    double hy=h-newYY;


    int k;
    if((newX > newXX && newY < newYY)||(newX < bx && newY > hy)) {

        k=1;
    } else {
        k=0;
    }
    return k;
}
int main(void)
{
    Rechteck r1;
    r1.eckeLinks.x = 4;
    r1.eckeLinks.y = 5;
    r1.breite = 3;
    r1.hoehe = 4;


 Ebene e1;
 e1.x= 0;
 e1.y= 0;

 funktion(e1,r1);

     printf("Der Punkt liegt im Rechteck %d",funktion(e1,r1));


 }




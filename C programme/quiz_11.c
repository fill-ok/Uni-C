
// Nullstellensuche per Bisektion, Beispiel zu Funktionszeigern
// Autor:   Bruno Lang, Holger Arndt
// Version: 28.07.2017
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Func ist ein Zeiger auf eine Funktion mit double-Ergebnis und einem
   double-Argument                                                     */
typedef double (*Func)(double);
/* bei
   double* Func(double)
   wäre Func eine Funktion, die einen Zeiger auf double zurückliefert
   (Präzedenz von * und () beachten!)                                 */

// Funktion mit Nullstelle in [1; 2]
double f1(double x)
{ return sin(x) - x + 1; }

// andere Funktion
double f2(double x)
{ return x * x - 2.0; }

/* bestimmt mittels Bisektion eine Nullstelle der Funktion f im Intervall [a; b]
   mit einer Genauigkeit < eps.
   Voraussetzung: f(a) und f(b) haben verschiedenes Vorzeichen                */
double nullstelle(Func f, double a, double b, double eps)
{
  double c;                                              // Intervallmittelpunkt

  while (b - a >= 2.0 * eps)
    {
      c = a + 0.5 * (b - a);                                      // Mittelpunkt
      if (f(c) == 0.0)
        return c;                                         // Nullstelle gefunden
      else
        if (f(a) * f(c) < 0.0)
          b = c;                                // in linker Hälfte weitersuchen
        else
          a = c;                                          // rechts weitersuchen
    }

  // Ergebnis: Mitte des letzten Intervalls
  return a + 0.5 * (b - a);
}

int main(int argc, char* argv[])
{
  double a = 1.0;                                   // Untergrenze Suchintervall
  double b = 2.0;                                                  // Obergrenze
  double eps = 1.0e-12;                                  // Genauigkeitsschranke
  double nst;                                         // Näherung für Nullstelle

  if (strcmp(argv[1], "f1") == 0)
    nst = nullstelle(f1, a, b, eps);
  else if (strcmp(argv[1], "f2") == 0)
    nst = nullstelle(f2, a, b, eps);
  else if (strcmp(argv[1], "cos") == 0)
    nst = nullstelle(cos, a, b, eps);
  else
    {
      printf("Unbekannte Funktion!\n");
      exit(EXIT_FAILURE);                                       // Fehlerabbruch
    }

  printf("Eine Nullstelle von %s in [%f; %f]\n ist näherungsweise %14.12f\n",
         argv[1], a, b, nst);
}













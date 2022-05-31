// Kurzes Programm zum Compiler-Verhalten bei Konstanten
// Andreas Frommer, 06.12.2020

#include <stdio.h>
#include <math.h>

int main(void) {
 const double PI = 4*atan(1);
 const int LEVEL1 = 35;
 const int LEVEL2 = 50;
 int LEVEL3;

 //LEVEL1 = 35;
 LEVEL3 = LEVEL1+15;
}

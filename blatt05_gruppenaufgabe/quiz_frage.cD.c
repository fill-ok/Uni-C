

#include <stdio.h>

void teilen( double* a, double* b) {
    double c = *a + *b;
    *a = (int) c;
    *b = c-*a;
    return;
}

int main(void) {
    double a = 4.5, b = 0.75;
    printf("1. Ausgabe: a = %f, b = %f, a+b = %f\n", a,b, a+b);
    teilen(&a, &b);
    printf("2. Ausgabe: a = %f, b = %f, a+b = %f\n", a,b, a+b);
}

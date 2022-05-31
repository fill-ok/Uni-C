#include <stdio.h>

int main(void) {

    int b = 1;
    int a = 0;
    int n, i, tmp;
    double k;

    do {
        printf("Bitte eine natuerliche Zahl eingeben:   ");
        scanf("%d", &n);

        printf("\n");

    } while (n <= 1);

    if (n < 2) {
        printf("die 1. Fibonacci Zahl ist %d ", 0);
    } else {
        printf("die 1. Fibonacci Zahl ist %d\n", 0);
        for (i = 2; i <= n; ++i) {
            tmp = a + b;


            printf("die %d. Fibonacci Zahl ist %d\n", i, tmp);
            a = b;
            b = tmp;


        }
    }
    float f = b;
    float h = a;

    k = h/f;
    printf("\n");

    printf("Der Quotient aus [an] und [an-1] ist:  %f",k);
    return 0;
}

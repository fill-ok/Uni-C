#include <stdio.h>

void ulam_rek(int n, int* z)
{
    printf("%d\n", n);
    if (n == 1)
        return;
    if (n % 2 == 0) {
        ulam_rek(0.5 * n, z);
        (*z) ++;
    } else {
        ulam_rek(3 * n + 1, z);
        (*z) ++;
    }
}

int main(void)
{
    int n;
    int z=0;
    printf("Geben Sie einen Wert fuer n ein: \n");
    scanf("%d", &n);

    ulam_rek(n, &z);
    printf("Es gab %d rekursive Aufrufe.\n", z);
    return 0;
}

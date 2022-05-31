#include <stdio.h>

int main (void)
{
    int n_max = 40;
    int n;


    do
    {
        printf("Groeﬂe eingeben:");
        scanf("%d",&n);

    }

    while((n <= 0 )|| (n > n_max));


    for (int i = 1; i <= n; i = i+1)
    {
        for (int j = 1; j <= n; j = j + 1)
            {
                if ( ( (i > 0.2 * n) && (i <= 0.8 * n) &&
                       (j > 0.4 * n) && (i <= 0.6 * n))
                ||  (  (j > 0.2 * n) && (i <= 0.8 * n) &&
                       (i > 0.4 * n) && (i <= 0.6 * n)  ) )

                printf(".");
                else
                    printf("#");
            }

            printf("\n");
    }





}

#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    char c;
    int i;
    i = 0;

    do
    {
        i = i + 1;
        printf("Bitte ein Zeichen eingeben:");

        c = getchar();

        getchar(); // überliest das return-Zeichen
        printf("Das war ein %c \nDurchlauf %d, weiter!\n",c, i);

    }
    while(c != 'a');

    printf("Fertig.\n");
}

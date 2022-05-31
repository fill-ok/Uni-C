#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    char c;
    int i;
    i = 0;
    bool a;
    a = 0;

    do
    {
        printf("Bitte ein Zeichen eingeben:");
        i = i + 1;


        c = getchar();

        getchar(); // überliest das return-Zeichen
        printf("Das war ein %c \nDurchlauf %d, weiter!\n",c, i);

        if(c == 'a')
        a = 1;

    }
    while( !a  || i < 5);

    printf("Fertig.\n");
}

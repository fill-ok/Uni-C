#include <stdio.h>
#include <stdbool.h>


        int main(void)
        {
            char c , b;
            int i;
            i = 0;
            bool a;
            a = 0;

            do
            {
                b = c;
                printf("Bitte ein Zeichen eingeben:");
                i = i + 1;


                c = getchar();

                getchar(); // �berliest das return-Zeichen
                printf("Das war ein %c \nDurchlauf %d, weiter!\n",c, i);

                if(c == 'a')
                    a = 1;

    }
    while( (!a  || !(c==b)) && i < 10);

    printf("Fertig.\n");
}

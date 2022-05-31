#include <stdio.h>

int a = 1, b = 1;  //globale Variablen

int main(void) {


    printf("a = %i, b = %i\n", a, b); //verdecktes globales a

    {
        int b = 2;
        printf("a = %i, b = %i\n", a, b); //verdeckt globales b

        {

            int a = 2, b = 5;
            printf("a = %i, b = %i\n", a, b); //verdeckt globales b


        }
        {
            printf("a = %i, b = %i\n", a, b); //verdeckt globales
        }


        {

            int a = 3;
            printf("a = %i, b = %i\n", a, b); //verdeckt globales b


            {
                int b = 3;
                printf("a = %i, b = %i\n", a, b); //verdeckt globales b
                {
                    int a = 4;
                    printf("a = %i, b = %i\n", a, b); //verdeckt globales b
                }
            }

            {
                printf("a = %i, b = %i\n", a, b);
            }


        }
        {
            printf("a = %i, b = %i\n", a, b);
        }

    }
    {
        printf("a = %i, b = %i\n", a, b);
    }

}

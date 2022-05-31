#include <stdio.h>

int main (void)
{
    int i,j,size;

    do {

        printf("Gib eine Groesse <= 40 ein: ");
        scanf("%d", &size);


        if((size <= 0) || (size > 40)){
            printf("Falsche Eingabe!\n");
        }


    }
    while ((size <= 0) || (size > 40));

    for(i = 1; i <= size; i = i + 1){
        for(j = 1; j <= size; j = j + 1){

            if(i==j || i == size -j+1){

                printf("%c ",'*');
            }
            else {

                printf("%c ",' ');

            }


        }

        printf("\n");
    }

}

#include <stdio.h>

int main(void)
{
    int a[] = {1,0,3,0,0,0,7,0,11};
    int a2[] = { 5, 7, 0, 0, 1, 8, 0, 0, 0, 10 };
    int i;

    for(i=0; i<9; ++i) {
        if(a[i]==0 && (a[i-1]!=0 && a[i+1]!=0)) {

            a[i] = (a[i - 1] + a[i + 1]) / 2;
        }
        else {
            if (a[i - 1] == 0 && a[i + 1] == 0) {

                a[i] = (a[i - 2] + a[i + 2]) / 2;

                a[i-1] = (a[i-2]+ a[i]) /2;
            }
        }
    }
    for(i=0; i<9; ++i) {
        printf("%d  ",a[i]);
    }
    printf("\n");

    for(i=0; i<9; ++i) {
        if(a2[i]==0 && (a2[i-1]!=0 && a2[i+1]!=0)) {

            a2[i] = (a2[i - 1] + a2[i + 1]) / 2;
        }
        else {
            if (a2[i - 1] == 0 && a2[i + 1] == 0) {

                a2[i] = (a2[i - 2] + a2[i + 2]) / 2;

                a2[i-1] = (a2[i-2]+ a2[i]) /2;
            }
        }
    }
    for(i=0; i<9; ++i) {
        printf("%d  ",a2[i]);
    }
    return 0;
}

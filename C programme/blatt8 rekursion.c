#include <stdio.h>


void ulam_rek(int n, int* p)
{
    printf("%d\n", n);
    if(n==1) {
        return;
    }
    if(n%2 == 0) {
        ulam_rek(n*0.5,p);
        (*p) = (*p)+1;
    } else {
        ulam_rek(n*3 +1,p);
        (*p) = (*p)+1;
    }

}
int main(void)
{
    int n,i;
    int p=0;

    printf("Bitte Startwert eingeben: ");
    scanf("%d",&n);
    ulam_rek(n,&p);
    printf("Iterationsschritte %d",p);
    return 0;
}

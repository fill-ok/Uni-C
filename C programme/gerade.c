#include <stdio.h>
int main(void)
{
int n;
printf("Bitte geben Sie eine Zahl ein: ");
scanf("%i", &n);
if (n % 2 == 1)
{
printf("Die Zahl ist ungerade.\n");
}
else
{
printf("Die Zahl ist gerade.\n");
}
}
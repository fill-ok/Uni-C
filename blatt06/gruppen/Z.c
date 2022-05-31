#include <stdio.h>
#include <stdbool.h>
int main(void)
{
 char c = 0;
 char b;
 printf("Das Programm bricht ab, sobald zweimal dasselbe Zeichen eingegeben wurde.\n");
 do
 {
  b = c;
  printf("Gib ein Zeichen ein: ");
  c = getchar();
  getchar(); // überliest das return-Zeichen
  printf("Das war ein %c, weiter!\n",c);
 } while(c!=b);
 printf("Fertig.\n");
}

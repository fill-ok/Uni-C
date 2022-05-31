// stdin bis zum Ende lesen und ausgeben
// Autor:   Bruno Lang, Holger Arndt
// Version: 28.07.2017
#include <stdio.h>

int main(void)
{
  int c;
  c = getchar();     // lies erstes Zeichen
  while (c != EOF)   // steht f�r �End Of File�, auf PC: <CTRL>-d
    {
      putchar(c);    // schreibe gelesenes Zeichen
      c = getchar(); // lies n�chstes Zeichen
    }
  printf("### EOF gelesen! ###\n");
}

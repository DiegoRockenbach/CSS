#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int ano;
int main() {
  printf ("Programa que informa se o dado ano é ou não bissexto\n\n");
  printf ("Insira o ano: \n");
  scanf ("%d", &ano);
  if ((ano % 400 == 0) || (ano % 4 == 0))
  {
    printf ("O ano inserido é um ano bissexto\n\n");
  }
  else
  {
    printf ("O ano inserido não é um ano bissexto\n\n");
  }
  system ("pause");
  return (0);
}
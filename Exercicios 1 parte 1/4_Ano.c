#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int aqn, aa, idade, doisk57;
int main (){
  setlocale(LC_ALL, "Portuguese");
  printf ("Programa que calcula a idade e quantos anos determinada pessoa terá em 2057 \n\n");
  printf ("Que ano você nasceu?:");
  scanf ("%d", &aqn);
  aa = 2021;
  idade = aa - aqn;
  doisk57 = 2057 - aqn;
  printf ("Você tem %d anos, e em 2057 você terá %d anos", idade, doisk57);
  scanf ("%s");
  return (0);
}
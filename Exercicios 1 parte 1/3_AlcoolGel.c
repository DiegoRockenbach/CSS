#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int pequena, media, grande, va;
int main (){
  setlocale(LC_ALL, "Portuguese");
  printf ("Programa que informa o valor arrecadado com a venda de determinado número de embalagens de álcool gel pequenas, \nmédias e grandes \n \n");
  printf ("Quantas embalagens pequenas você comprou? \n");
  scanf ("%d", &pequena);
  printf ("Quantas embalagens médias você comprou? \n");
  scanf ("%d", &media);
  printf ("Quantas embalagens grandes você comprou? \n");
  scanf ("%d", &grande);
  va = pequena*8 + media*13 + grande*16;
  printf ("O valor arrecadado será de R$ %d", va);
  scanf ("%s");
  return (0);
}
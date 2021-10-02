#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
char nome [40];
int i, dias;
int main() {
  setlocale(LC_ALL, "Portuguese");
  printf ("Algoritmo que mostra sua idade em dias \n");
  printf ("Informe seu nome:");
  scanf ("%s", nome);
  printf ("Informe sua idade:");
  scanf ("%d", &i);
  dias = i * 365;
  printf ("%s, você já viveu %d dias", nome, dias);
  scanf ("%s");
  return (0);
}
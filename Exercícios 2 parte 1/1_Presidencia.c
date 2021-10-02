#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int nascimento, idade;
int main (){
  setlocale (LC_ALL, "Portuguese");
  printf ("Programa que diz se você pode votar na eleição para presidente em 2020 \n\n");
  printf ("Informe o ano que você nasceu: ");
  scanf ("%d", &nascimento);
  idade = 2020 - nascimento;
  if (idade < 16)
    printf ("Você não poderá votar na eleição para presidente em 2020 \n\n");
  else printf ("Você poderá votar na eleição para presidente em 2020 \n\n");
  system ("pause");
  return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
char codigo [40];
float quantidade;
int main (){
  setlocale (LC_ALL, "Portuguese");
  printf ("Programa que calcula o preço devido por um cliente\n\n");
  printf ("Insira o código do produto comprado:\n\n ABCD\n XYPK\n KLMP\n QRST\n\n");
  scanf ("%s", codigo);
  printf ("Insira a quantidade de produtos comprados:\n");
  scanf ("%f", &quantidade);
  if ((strcmp (codigo, "ABCD") == 0) || (strcmp (codigo, "abcd") == 0))
  {
    printf ("O preço total da compra é de R$ %.2f\n\n", quantidade*05.30);
  }
  else if ((strcmp (codigo, "XYPK") == 0) || (strcmp (codigo, "xypk") == 0))
  {
    printf ("O preço total da compra é de R$ %.2f\n\n", quantidade*06.00);
  }
  else if ((strcmp (codigo, "KLMP") == 0) || (strcmp (codigo, "klmp") == 0))
  {
    printf ("O preço total da compra é de R$ %.2f\n\n", quantidade*03.20);
  }
  else if ((strcmp (codigo, "QRST") == 0) || (strcmp (codigo, "qrst") == 0))
  {
    printf ("O preço total da compra é de R$ %.2f\n\n", quantidade*02.50);
  }
  else
  {
    printf ("Código inválido\n\n");
  }
  system ("pause");
  return (0);
}
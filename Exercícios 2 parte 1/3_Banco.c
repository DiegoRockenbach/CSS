#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
float saldo, credito;
int main(){
  setlocale(LC_ALL, "Portuguese");
  printf ("Programa que calcula seu percetual de crédito \n\n");
  printf ("Informe seu saldo:\n");
  scanf ("%f", &saldo);
  if ((saldo <= 2000) && (saldo >= 0)) {
    printf ("Você não possui nenhum crédito");
  }
  else if ((saldo <= 4000) && (saldo >= 2000.01)) {
    printf ("Com %.2f R$ de saldo você possui %.2f R$ de crédito \n\n", saldo, saldo*0.2);
  }
  else if ((saldo <= 6000) && (4000.01)) {
    printf ("Com %.2f R$ de saldo você possui %.2f R$ de crédito \n\n", saldo, saldo*0.3);
  }
  else {
    printf ("Com %.2f R$ de saldo você possui %.2f R$ de crédito \n\n", saldo, saldo*0.4);
  }
  system ("pause");
  return (0);
}
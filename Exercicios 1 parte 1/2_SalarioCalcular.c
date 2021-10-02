#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float salario, salario15, salario20;
int main (){
  setlocale(LC_ALL, "Portuguese");
  printf ("Algoritmo que calcula o novo salário do funcionário \n");
  printf ("Quanto você ganha de salário?");
  scanf ("%f", &salario);
  salario15 = salario - salario * 0.15;
  salario20 = salario + salario * 0.20;
  printf ("Se você recebesse uma redução de salário de 15%%, seu salário seria %.2f \n", salario15);
  printf ("Se você recebesse um aumento de salário de 20%%, seu salário seria %.2f \n", salario20);
  scanf ("%s");
  return (0);
}
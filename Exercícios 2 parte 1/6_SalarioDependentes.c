#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int idade, dependentes;
float salario;
int main(){
  setlocale (LC_ALL, "Portuguese");
  printf ("Programa que calcula se o usuário está apto a receber um aumento em função de sua idade e de seus dependentes\n\n");
  printf ("Insira sua idade:\n");
  scanf ("%d", &idade);
  printf ("Insira a sua quantidade de dependentes:\n");
  scanf ("%d", &dependentes);
  printf ("Insira o seu salário atual:\n");
  scanf ("%f", &salario);
  if ((idade < 49) || (dependentes > 3))
  {
    printf ("Você recebeu um aumento de 20%% em seu salário, assim totalizando R$ %.2f \n\n", salario + salario*0.2);
  }
  else
  {
    printf ("Você não está apto para receber um aumento de salário\n\n");
  }
  system ("pause");
  return (0);
}
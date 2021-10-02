#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
float salario;
char cargo [40];
int main(){
  setlocale (LC_ALL, "Portuguese");
  printf ("Programa que calcula o aumento de salário que você receberá de acordo com seu cargo\n\n");
  printf ("Informe seu salário:\n");
  scanf ("%f", &salario);
  printf ("Informe seu cargo:\n");
  scanf ("%s", cargo);
  if ((strcmp (cargo, "Gerente") == 0) || (strcmp (cargo, "gerente") == 0))
  {
    printf ("Seu antigo salário era de R$ %.2f, e seu novo salário é de R$ %.2f, assim tendo um aumento de 10%% em seu salário\n\n", salario, salario + salario*0.1);
  }
  else if ((strcmp (cargo, "Engenheiro") == 0) || (strcmp (cargo, "engenheiro") == 0))
  {
    printf ("Seu antigo salário era de R$ %.2f, e seu novo salário é de R$ %.2f, assim tendo um aumento de 20%% em seu salário\n\n", salario, salario + salario*0.2);
  }
  else if ((strcmp (cargo, "Técnico") == 0) || (strcmp (cargo, "técnico") == 0))
  {
    printf ("Seu antigo salário era de R$ %.2f, e seu novo salário é de R$ %.2f, assim tendo um aumento de 30%% em seu salário\n\n", salario, salario + salario*0.3);
  }
  else
  {
    printf ("Seu antigo salário era de R$ %.2f, e seu novo salário é de R$ %.2f, assim tendo um aumento de 40%% em seu salário\n\n", salario, salario + salario*0.4);
  }
  system("pause");
  return (0);
}
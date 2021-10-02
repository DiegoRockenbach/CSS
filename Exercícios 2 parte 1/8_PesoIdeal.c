#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
float altura, pesohomem, pesomulher;
char sexo [40];
int main(){
  printf ("Programa que calcula o peso ideal masculino e feminino com base em sua altura \n\n");
  printf ("Insira seu sexo: \n");
  scanf ("%s", sexo);
  printf ("Insira sua altura: \n");
  scanf ("%f", &altura);
  if ((strcmp (sexo, "Masculino") == 0) || (strcmp (sexo, "masculino") == 0))
  {
    pesohomem = 72.7*altura-58;
    printf ("O seu peso ideal seria de %.2f kg\n\n", pesohomem);
  }
  else if ((strcmp (sexo, "Feminino") == 0) || (strcmp (sexo, "feminino") == 0))
  {
    pesomulher = 62.1*altura-44.7;
    printf ("O seu peso ideal seria de %.2f kg\n\n", pesomulher);
  }
  else
  {
    printf ("Sexo inválido\n\n");
  }
  system ("pause");
  return (0);
}
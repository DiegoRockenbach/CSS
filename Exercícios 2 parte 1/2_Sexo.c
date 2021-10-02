#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
char nome [40], sexo [40];
int main(){
  setlocale (LC_ALL, "Portuguese");
  printf ("Programa te cumprimenta, sabendo seu nome e seu sexo \n\n");
  printf ("Informe seu nome \n");
  scanf ("%s", nome);
  printf ("Informe seu sexo (M ou F) \n");
  scanf ("%s", sexo);
  if ((strcmp(sexo, "Masculino") == 0) || (strcmp(sexo, "M") == 0)) {
      printf ("Ilmo Sr. %s \n\n", nome);
  } else if ((strcmp(sexo, "Feminino") == 0) || (strcmp(sexo, "F") == 0)) {
      printf ("Ilma Sra. %s \n\n", nome);
  } else { printf ("Sexo inválido \n\n");
  }
  system ("pause");
  return (0);
}
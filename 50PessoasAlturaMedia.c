#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
char sexo [40];
float mediaF, mediaG, somaF, somaG, maior, menor, altura, pctH;
int cont, contF, contM;
int main(){
  setlocale (LC_ALL, "Portuguese");
  printf ("Programa que le 50 dados diferentes e informa a maior e menor altura, media feminina, media de altura da populacao e media de homens na populacao \n \n");
  cont = 0;
  contF = 0;
  contM = 0;
  menor = 9999;
  maior = 0;
  somaF = 0;
  somaG = 0;
  pctH = 0;
  do
  {
    cont = cont + 1;
    printf ("Pessoa %d \nQual a sua altura? \n", cont);
    scanf ("%f", &altura);
    if (altura < menor)
    {
      menor = altura;
      somaG = somaG + altura;
    }
    else if (altura > maior)
    {
      maior = altura;
      somaG = somaG + altura;
    }
    printf ("Qual o seu sexo? (M/F) \n");
    scanf ("%s", sexo);
    if (strcmp (sexo, "M") == 0)
    {
      contM = contM + 1;
    }
    else if (strcmp (sexo, "F") == 0)
    {
      somaF = somaF + altura;
      contF = contF + 1;
    }
    else
    {
      printf ("O sexo inserido nao eh valido ou nao esta contabilizado no sistema. \n \n");
    }
  } while (cont < 50);
  mediaF = somaF/contF;
  mediaG = somaG/cont;
  pctH = contM * 100/cont;
  printf ("A maior altura encontrada eh de %.2f \n", maior);
  printf ("A menor altura encontrada eh de %.2f \n", menor);
  printf ("A media de altura das mulheres na populacao eh de %.2f, enquanto a media de altura da populacao no geral eh de %.2f \n", mediaF, mediaG);
  printf ("O percentual de homens na populacao eh de %.2f \n", pctH);
  system ("pause");
  return (0);
}
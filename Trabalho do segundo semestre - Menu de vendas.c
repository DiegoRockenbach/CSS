#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int cod, quant;
float pt, pagamento, troco;
int main (){
  setlocale (LC_ALL, "Portuguese");
  printf ("Programa que exibe um menu de opcoes de compras \n \n");
  printf ("O que voce deseja comprar? \n");
  do
  {
    printf (" 1- 1kg de batata (R$ 5,98) \n 2- 1kg de acucar (R$ 4,80) \n 3- 1kg de farinha (R$ 3,20) \n 4- maca gala unidade (R$ 5,00) \n 5- 1l de leite (R$ 3,90) \n 6- 1 duzia de ovos brancos (R$ 7,59) \n 7- 1kg de achocolatado em po (R$ 11,34) \n");
    printf ("Insira o codigo numerico do produto que deseja comprar (0 para encerrar) \n");
    scanf("%d", &cod);
    if (cod == 0)
    {
      continue;
    }
    printf ("Quantas unidades desse produto voce deseja comprar? ");
    scanf ("%d", &quant);
    if (cod == 1)
    {
      pt = quant * 5.98 + pt;
      printf ("Foram adicionados: <%dkg de batata> ao seu carrinho \n \n", quant);
    }
    else if (cod == 2)
    {
      pt = quant * 4.80 + pt;
      printf ("Foram adicionados: <%dkg de acucar> ao seu carrinho \n \n", quant);
    }
    else if (cod == 3)
    {
      pt = quant * 3.20 + pt;
      printf ("Foram adicionados: <%dkg de farinha> ao seu carrinho \n \n", quant);
    }
    else if (cod == 4)
    {
      pt = quant * 5.00 + pt;
      printf ("Foram adicionados: <%d unidades de maca gala> ao seu carrinho \n \n", quant);
    }
    else if (cod == 5)
    {
      pt = quant * 3.90 + pt;
      printf ("Foram adicionados: <%dl de leite> ao seu carrinho \n \n", quant);
    }
    else if (cod == 6)
    {
      pt = quant * 7.59 + pt;
      printf ("Foram adicionados: <%d duzias de ovos> ao seu carrinho \n \n", quant);
    }
    else if (cod == 7)
    {
      pt = quant * 11.34 + pt;
      printf ("Foram adicionados: <%dkg de achocolatado em po> ao seu carrinho \n \n", quant);
    }
    else if (cod == 0)
    {
      printf ("Você escolheu finalizar a compra \n \n \n");
    }
    else
    {
      printf ("Insira um código numérico válido (1,2,3,4,5,6 ou 7, dependendo do produto \n \n");
    }
  } while (cod != 0);
  printf ("O valor total de sua compra deu R$ %.2f \n \n", pt);
  printf ("Digite o valor em dinheiro com o qual voce vai pagar: \n");
  scanf ("%f", &pagamento);
  if (pagamento < pt)
  {
    printf ("O valor que voce inseriu eh menor que o valor total a ser pago \n \n");
  }
  else
  {
    troco = pagamento - pt;
    printf ("Obrigado pela compra! O seu troco eh de R$ %.2f \n \n", troco);
  }
  system ("pause");
  return (0);
}
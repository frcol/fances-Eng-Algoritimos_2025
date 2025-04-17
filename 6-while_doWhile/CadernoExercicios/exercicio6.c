#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
6.  Escreva um programa para receber o saldo inicial de uma conta bancária 
de um cliente. A seguir ler um número indeterminado de pares de valores 
indicando  respectivamente  o  tipo  da  operação,  sendo:  1.Depósito 
2.Retirada 3.Fim e também o valor. Quando  for informado  para o  tipo o 
código  3,  o  programa  deve  ser  encerrado  e  impresso  o  saldo  final  da 
conta  com  as  seguintes  mensagens:  CONTA  ZERADA,  CONTA 
ESTOURADA (se o saldo for negativo) ou CONTA PREFERENCIAL (se o 
saldo for positivo
*/
int main()
{
  system("cls");

  float valor, saldo = 0;
  int op;

  printf("Banco FACENS\n\n");
  printf("Saldo inicial(reais): ");
  scanf("%f", &saldo);
  fflush(stdin);

  do
  {
    system("cls");
    printf("Menu:\n\n[1]Depositar\n[2]Retirar\n[3]Sair\n\nOpcao: ");
    scanf("%i", &op);
    fflush(stdin);

    if (op == 1 || op == 2)
    {
      printf("\nDigite o valor (reais): ");
      scanf("%f", &valor);
      fflush(stdin);
    } 

    switch (op)
    {
      case 1:
        saldo += valor;
        printf("\nSaldo atual = %.2f\n", saldo);
        break;
      case 2:
        saldo -= valor;
        printf("\nSaldo atual = %.2f\n", saldo);
        break;
      case 3:
        printf("\nVolte sempre!!\n");
        break;
      default:
        printf("\nOpcao invalida\n");
    } 
    
  } while (op != 3);

  printf("\n\nSaldo final = %.2f\n", saldo);
  
  if (saldo == 0)
    printf("\nConta zerada\n\n");
  else if (saldo < 0)
    printf("\nConta estourada\n\n");
  else
    printf("\nConta preferencial\n\n");
 
  return 0;
} 
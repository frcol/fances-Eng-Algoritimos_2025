#include <stdio.h>
#include <stdlib.h>
/*
Receber 12 números e armazená-los em um vetor. Ao final, exibir a quantidade de números negativos informados
*/
int main()
{
  system("cls");

  int numero[12], x, neg = 0;

  for (x = 0; x < 12; x++)
  {
    printf("Digite o numero da posicao %i: ", x);
    scanf("%i", &numero[x]);
    fflush(stdin);
  }

  for (x = 0; x < 12; x++)
  {
    if (numero[x] < 0)
      neg++;
  }

  printf("\nQuantidade de numeros negativos = %i\n\n", neg);
  
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  float num, soma = 0; // soma foi inicializada com zero

  for (i = 1; i <= 5; i++)
  {
    printf("\nDigite o %i numero: ", i);
    scanf("%f", &num);
    soma = soma + num; // soma+=num
  }

  printf("\nSoma = %.2f\n\n", soma);

  return 0;
}

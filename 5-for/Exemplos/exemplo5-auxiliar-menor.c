#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  float num, menor;

  for (i = 0; i <= 5; i++)
  {
    printf("\nDigite o %i numero: ", i + 1);
    scanf("%f", &num);
    if (i == 0 || num < menor)
      menor = num; // atualiza o valor de menor
  }

  printf("\nMenor valor digitado = %.2f\n\n", menor);
 
  return 0;
}

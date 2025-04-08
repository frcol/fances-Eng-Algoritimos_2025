#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, num, cont = 0; // cont foi inicializada com zero

  for (i = 0; i < 5; i++)
  {
    printf("\nDigite o %i numero: ", i + 1);
    scanf("%i", &num);
    if (num % 2 == 0)
      cont++; // soma 1 na vari�vel auxiliar cont
  }

  printf("\nQuantidade de numeros pares = %i\n", cont);
;
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  float num;
  
  for (i = 1; i < 4; i++)
  {
    printf("\nDigite um numero: ");
    scanf("%f", &num);

    if (num < 0)
      printf("O numero %.2f \x82 negativo\n", num);
    else
      printf("O numero %.2f nao \x82 negativo\n", num);
  }

  return 0;
}

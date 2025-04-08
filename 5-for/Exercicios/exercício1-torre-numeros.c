#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, n;

  printf("Informe o tamanho da figura: ");
  scanf("%i", &n);
  printf("\n");

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%i ", i);
    }
    printf("\n");
  }

  return 0;
}

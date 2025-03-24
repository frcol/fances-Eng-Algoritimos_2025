#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");

  int num;
  
  printf("Digite um numero: ");
  scanf("%i", &num);
  
  if (num > 0)
  {
    if (num % 2 == 0)
      printf("O numero %i \x82 par\n", num);
    else
      printf("O numero %i \x82 impar\n", num);
  }
  
  return 0;
}

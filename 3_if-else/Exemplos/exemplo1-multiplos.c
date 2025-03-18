#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");

  int num;

  if (num > 0) {
    if (num % 2 == 0) {
      printf("O numero %d e par\n", num);
    } else {
      printf("O numero %d e impar\n", num);
    }
  }
  else if (num < 0) {
    printf("O numero %d e negativo\n", num);
  }
  else {
    printf("O numero %d e zero\n", num);
  }


  return 0;
}

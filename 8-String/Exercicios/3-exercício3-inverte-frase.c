#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Melhore o programa, armazenando a nova sequência em um novo string.
*/
int main()
{
  system("cls");

  char frase[80], inv[80];
  int i, tam;

  printf("\nDigite a frase: ");
  gets(frase);
  fflush(stdin);

  tam = strlen(frase);
  
  for (i = 0; i < tam; i++) {
    inv[i] = frase[tam - 1 - i];
  }

  inv[i] = '\0'; // finalizar a string inv
  
  printf("\nA frase invertida:\n%s\n\n", inv);
  
  return 0;
}

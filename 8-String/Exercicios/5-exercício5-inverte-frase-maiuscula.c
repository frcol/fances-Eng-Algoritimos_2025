#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
Melhore o programa, trocando as maiúsculas por minúsculas e vice-versa, quando necessário. 
Armazenar em um novo string.
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
  
  for (i = 0; i < tam; i++)
  {
    inv[i] = tolower(frase[tam - 1 - i]);

    if (i == 0)
      inv[i] = toupper(frase[tam - 1 - i]);

    if (frase[i] == ' ')
    {
      i++;
      inv[i] = toupper(frase[tam - 1 - i]);
    }
  }

  inv[i] = '\0';

  printf("\nA frase invertida:\n%s\n\n", inv);

  return 0;
}

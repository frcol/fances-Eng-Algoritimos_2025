#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
Melhore o programa, trocando as maiúsculas por minúsculas e vice-versa, quando necessário. 
Utilizar variável auxiliar.
*/
int main()
{
  system("cls");

  char frase[80], aux;
  int i, tam;

  printf("\nDigite a frase: ");
  gets(frase);
  fflush(stdin);

  tam = strlen(frase);

  for (i = 0; i < (tam / 2); i++)
  {
    aux = frase[i];
    frase[i] = frase[tam - 1 - i];
    frase[tam - 1 - i] = aux;
  }
  
  for (i = 0; i < tam; i++)
  {
    frase[i] = tolower(frase[i]);

    if (i == 0)
      frase[i] = toupper(frase[i]);
      
    if (frase[i] == ' ')
    {
      i++;
      frase[i] = toupper(frase[i]);
    }
  }

  printf("\nA frase invertida:\n%s\n\n", frase);
  
  return 0;
}

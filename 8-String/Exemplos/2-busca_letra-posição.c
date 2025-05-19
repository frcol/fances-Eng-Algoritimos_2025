#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen()
#include <ctype.h>  //toupper()

int main()
{
  char str[80], letra;
  int tam, i, qtde = 0, pos[80];

  printf("\nDigite a frase: ");
  gets(str);
  fflush(stdin);

  tam = strlen(str);

  printf("\nDigite uma letra: ");
  scanf("%c", &letra);
  fflush(stdin);

  for (i = 0; i < tam; i++) {
    if (toupper(str[i]) == toupper(letra))
    {
      pos[qtde] = i + 1;
      qtde++;
    }
  }

  if (qtde == 0)
    printf("\nNao ha ocorrencia da letra %c na frase\n\n\n", letra);
  else
  {
    printf("\nA letra %c apareceu %i vezes na frase\n\n\n", letra, qtde);
    for (i = 0; i < qtde; i++)
      printf("%i\t", pos[i]);
  }
  
  printf("\n\n");

  return 0;
}

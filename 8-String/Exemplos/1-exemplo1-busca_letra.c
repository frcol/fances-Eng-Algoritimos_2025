#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  //para usar a funcao toupper()
#include <string.h> //para usar a funcao strlen()

int main()
{
  system("cls");
  
  char letra, frase[80];
  int i, tam, cont = 0;

  printf("Digite uma frase: ");
  gets(frase);
  fflush(stdin);
  
  tam = strlen(frase);
  
  printf("Digite uma letra: ");
  scanf(" %c", &letra);
  fflush(stdin);
  
  for (i = 0; i < tam; i++){
    if (toupper(frase[i]) == toupper(letra)) {
      cont++;
    }
  }
      
  printf("\nA letra %c ocorre %i vezes na frase\n\n", letra, cont);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Para usar a funcao strcmp() e memcmp()

int main()
{
  system("cls");

  char senha1[7], senha2[7]; // string com 6 caracteres

  printf("Digite a sua senha: ");
  gets(senha1);
  fflush(stdin);

  printf("Confirme a sua senha: ");
  gets(senha2);
  fflush(stdin);

  if (strcmp(senha1, senha2) == 0)
    printf("Senha valida!");
  else if (memcmp(senha1, senha2, 3) == 0)
    printf("Apenas 3 primeiros caracteres corretos\n");
  else
    printf("Senha invalida!\n\n");
  
    
  return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");

  char letra;
  
  printf("\nDigite uma letra: ");
  scanf("%c", &letra);
  fflush(stdin);
  
  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    printf("\nA letra %c \x82 vogal\n\n", letra);
  else
    printf("\nA letra %c \x82 consoante\n\n", letra);

  
  return 0;
}

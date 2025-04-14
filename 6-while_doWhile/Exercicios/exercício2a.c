#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls"); // limpa a tela

  char op;
  float n1, n2;

  do
  {
    system("cls"); // limpa a tela
    printf("\nEste programa calcula a media de notas dos alunos\n");

    do
    {
      printf("\nDigite a nota AC1 (0~10): ");
      scanf("%f", &n1);
      fflush(stdin);

      if (n1 < 0 || n1 > 10)
        printf("\nValor invalido!\n\n");

    } while (n1 < 0 || n1 > 10);

    do
    {
      printf("\nDigite a nota AC2 (0~10): ");
      scanf("%f", &n2);

      fflush(stdin);
      if (n2 < 0 || n2 > 10)
        printf("nValor invalido!\n\n");

    } while (n2 < 0 || n2 > 10);

    printf("\n\nMedia = %.2f\n\n", (n1 + n2) / 2);
    
    printf("\nDeseja calcula a media para outro aluno <S> ou <N>: ");
    scanf("%c", &op);
    fflush(stdin);
  
  } while (op != 'n' && op != 'N');

  return 0;
}

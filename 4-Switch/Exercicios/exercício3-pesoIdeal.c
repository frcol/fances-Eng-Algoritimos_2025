#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");

  char sexo;
  int idade;
  float altura, peso, ideal;
  
  printf("\nEste programa calcula o peso ideal de pessoas entre 12 e 65 anos\n\n");
  printf("Digite sua idade: ");
  scanf("%i", &idade);
  fflush(stdin);
  
  if (idade < 12 || idade > 65)
    printf("\nPela sua idade nao \x82 possivel calcular o seu peso ideal\n\n");
  else
  {
    printf("Digite [M]asculino e [F]eminino: ");
    scanf("%c", &sexo);
    fflush(stdin);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    fflush(stdin);

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    fflush(stdin);

    if (sexo == 'M' || sexo == 'm')
      ideal = (72.7 * altura - 62);
    else
      ideal = (62.1 * altura - 48.7);

    printf("\nPeso Ideal: %.2f\n\n", ideal);

    if (peso < ideal)
      printf("\nSeu peso esta abaixo do peso ideal\n\n");
    else if (peso == ideal)
      printf("\nSeu peso esta ideal\n\n");
    else
      printf("\nSeu peso esta acima do peso ideal\n\n");
  }

  return 0;
}

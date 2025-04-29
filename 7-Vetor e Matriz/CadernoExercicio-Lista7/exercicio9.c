#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber  10  números  e  armazená-los  em  um  vetor.  Após  esta  primeira 
etapa é necessário pedir para o usuário digitar um número. Verificar se este 
número  está  armazenado  no  vetor  e  se  estiver  mostrar  quantas  vezes  o 
número  esta  armazenado  no  vetor,  ou  seja,  quantas  vezes  o  número  se 
repete. Se o número não estiver no vetor, uma mensagem deve indicar esta 
condição e deverá ser solicitado um novo número para o usuário. 
*/
int main()
{
  system("cls");

  int numero[10], x, procurado = 0, cont = 0;

  // Receber 10 numeros e armazenar em um vetor
  for (x = 0; x < 10; x++)
  {
    printf("Digite o numero da posicao %i: ", x);
    scanf("%i", &numero[x]);
    fflush(stdin);
  }

  do
  {
    printf("\nDigite o numero que deseja procurar: ");
    scanf("%i", &procurado);
    fflush(stdin);
    
    for (x = 0; x < 10; x++)
      if (procurado == numero[x])
        cont++;
    
    if (cont == 0)
      printf("\nNumero nao encontrado!");
  } while (cont == 0);

  printf("\nO numero %i foi encontrado %i vez(es)\n\n", procurado, cont);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
/*
Receba dois vetores A e B, ambos com 5 elementos, determine o vetor resultante C, onde C[i]=A[i]+B[i]. 
*/
int main()
{
  system("cls");

  int A[100], B[100], C[100], i, qtde;

  do
  {
    printf("\nDigite a quantidade de elementos do vetor (max.100): ");
    scanf("%i", &qtde);
    fflush(stdin);
  } while (qtde < 1 || qtde > 100);

 
  for (i = 0; i < qtde; i++)
  {
    printf("Digite A[%i]= ", i);
    scanf("%i", &A[i]);
    fflush(stdin);
  }

  printf("\n");

  for (i = 0; i < qtde; i++)
  {
    printf("Digite B[%i]= ", i);
    scanf("%i", &B[i]);
    fflush(stdin);
  }

  printf("\nO vetor resultante C:\n");

  for (i = 0; i < qtde; i++)
  {
    C[i] = A[i] + B[i];
    printf("C[%i]= %i\n", i, C[i]);
  }

  printf("\n");
 
  return 0;
} 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1. Dados dois vetores A e B, ambos com 5 elementos, determine o produto
escalar desses vetores.
*/
int main() {
    system("cls");
    
    int A[5], B[5], produtoEscalar = 0;

    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) {
        produtoEscalar += A[i] * B[i];
    }

    printf("O produto escalar dos vetores A e B é: %d\n", produtoEscalar);
    
    printf("\n\n");
    return 0;
}
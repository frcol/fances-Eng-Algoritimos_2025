#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2. Faça um programa que leia o tamanho de um vetor A e, em seguida, leia
os n elementos do vetor. Considere que o valor máximo de elementos que
o vetor A pode armazenar é 100. Por fim, calcule e mostre a média dos
elementos de índice par e o produto dos elementos de índice ímpar
*/
int main() {
    system("cls");
    
    int n, i, soma = 0, produto = 1, numPar=0;

    printf("Digite o tamanho do vetor A (maximo 100): ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Tamanho do vetor excede o limite de 100.\n");
        return 1;
    }

    int A[n];

    printf("Digite os %d elementos do vetor A:\n", n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) { // índice par
            soma += A[i];
            numPar++;
        } else { // índice ímpar
            produto *= A[i];
        }
    }

    float media = (float)soma / numPar; // média dos elementos de índice par

    printf("Média dos elementos de índice par: %.2f\n", media);
    printf("Produto dos elementos de índice ímpar: %d\n", produto);

    printf("\n\n");
    return 0;
}
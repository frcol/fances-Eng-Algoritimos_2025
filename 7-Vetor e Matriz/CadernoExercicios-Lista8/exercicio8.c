#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
8. Escreva um algoritmo que leia um vetor de n elementos inteiros. Ordene o
vetor em ordem decrescente e exiba-o.
*/
int main() {
    system("cls");
    
    int n, i, j, temp;
    int vetor[100]; // Supondo que o tamanho máximo do vetor seja 100


    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    printf("Digite %d numeros inteiros:\n", n);
    for (i = 0; i < n; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n\nVetor original:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    // Ordenando o vetor em ordem decrescente
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (vetor[i] < vetor[j]) { // Troca para ordem decrescente
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("\n\nVetor ordenado em ordem decrescente:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    
    printf("\n\n");
    return 0;
}
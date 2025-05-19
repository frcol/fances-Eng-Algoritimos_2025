#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
7. Crie um programa que copie para um vetor os elementos de outro em
ordem crescente.
vetor de tamanho 10, com valores inteiros. O vetor deve ser preenchido
*/
int main() {
    system("cls");
    
    int i, j, temp;
    int vetor[10], vetorCopia[10];

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n\nVetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    // Copiando os elementos do vetor original para o vetor de cópia
    for (i = 0; i < 10; i++) {
        vetorCopia[i] = vetor[i];
    }

    // Ordenando o vetor de cópia em ordem crescente
    for (i = 0; i < 10 - 1; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetorCopia[i] > vetorCopia[j]) {
                temp = vetorCopia[i];
                vetorCopia[i] = vetorCopia[j];
                vetorCopia[j] = temp;
            }
        }
    }

    printf("\n\nVetor copiado e ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorCopia[i]);
    }

    printf("\n\n");
    return 0;
}
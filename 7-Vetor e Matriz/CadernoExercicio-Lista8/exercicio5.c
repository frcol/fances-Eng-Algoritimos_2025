#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
5. Leia 10 números inteiros e armazene em um vetor A. 
Crie dois novos vetores A1 e A2. 
Copie os valores ímpares de A para A1, e os valores pares de A para A2. 
Note que cada um dos vetores A1 e A2 tem no máximo 10 elementos, mas nem todos os elementos são utilizados. 
No final escreva os elementos utilizados de A1 e A2.
*/
int main() {
    system("cls");
    
    int A[10], A1[10], A2[10], i, j = 0, k = 0;
    
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("\n\nValores impares:\n");
    for (i = 0; i < 10; i++) {
        if (A[i] % 2 != 0) {
            A1[j] = A[i];
            j++;
        }
    }

    printf("\n\nValores pares:\n");
    for (i = 0; i < 10; i++) {
        if (A[i] % 2 == 0) {
            A2[k] = A[i];
            k++;
        }
    }

    printf("\n\nValores impares em A1:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", A1[i]);
    }

    printf("\n\nValores pares em A2:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", A2[i]);
    }

    printf("\n\n");
    return 0;
}
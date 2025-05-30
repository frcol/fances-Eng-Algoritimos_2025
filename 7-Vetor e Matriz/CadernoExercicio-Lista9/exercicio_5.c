#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
5. Faça um programa que recebe uma matriz 4x4 e realiza as seguintes operações:
- Exibir a soma dos elementos da diagonal principal.
- Colocar os elementos da diagonal principal em um vetor (uma dimensão).
- Exibir o vetor.
*/
int main() {
    system("cls");
 
    int matriz[4][4];
    int vetorDiagonal[4]; // Vetor para armazenar os elementos da diagonal principal
    int i, j, somaDiagonal = 0;

    printf("Digite os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == j) { 
                vetorDiagonal[i] = matriz[i][j];
                somaDiagonal += matriz[i][j]; // Soma os elementos da diagonal principal
            }
        }
    }

    //exibe matriz
    printf("\nMatriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("\t%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos da diagonal principal: %d\n", somaDiagonal);
    printf("Vetor com os elementos da diagonal principal:\n");  
    for (i = 0; i < 4; i++) {
        printf("%d ", vetorDiagonal[i]);
    }

 
    printf("\n\n");
    return 0;
}
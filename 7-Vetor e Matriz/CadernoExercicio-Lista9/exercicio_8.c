#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
8. Define-se como elemento minimax de uma matriz o menor elemento da
linha onde se encontra o maior elemento da matriz. 
Faça um programa que recebe uma matriz 4x4 e mostra qual é seu elemento minimax, bem como sua posição na matriz.
*/
int main() {
    system("cls");

    int matriz[4][4];
    int i, j;
    int maior = -2147483648; // Menor inteiro possível
    int linhaMaior = 0;
    int minimax, colunaMinimax;

    // Leitura da matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Localiza o maior elemento
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
            }
        }
    }

    // Procura o menor elemento na linha do maior
    minimax = matriz[linhaMaior][0];
    colunaMinimax = 0;

    for (j = 1; j < 4; j++) {
        if (matriz[linhaMaior][j] < minimax) {
            minimax = matriz[linhaMaior][j];
            colunaMinimax = j;
        }
    }

    // Exibe a matriz
    printf("\nMatriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }

    // Resultado
    printf("\nMaior elemento: %d\n", maior);
    printf("\nElemento minimax: %d\n", minimax);
    printf("Posicao: [%d][%d]\n", linhaMaior, colunaMinimax);

    return 0;
}
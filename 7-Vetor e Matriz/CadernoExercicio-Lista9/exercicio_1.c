#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1. Faça um programa que recebe uma matriz 4x3 e mostre a matriz na tela
em formato de tabela.
*/
int main() {
    system("cls");
 
    int matriz[4][3];

    printf("Digite os elementos da matriz 4x3:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 4x3:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    printf("\n\n");
    return 0;
}
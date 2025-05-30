#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
7. Faça um programa que leia uma matriz 3x5 de inteiros, substitua seus
elementos negativos por 0 e imprima a matriz original e a modificada. A
seguir deverão ser mostrados os valores da soma dos elementos de cada
coluna da matriz modificada.
*/
int main() {
    system("cls");
 
    int matriz[3][5];
    int matrizModificada[3][5];
    int i, j;
    int somaColunas[5] = {0,0,0,0,0};

    printf("Digite os elementos da matriz 3x5:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            // Substitui elementos negativos por 0
            if (matriz[i][j] < 0) {
                matrizModificada[i][j] = 0;
            } else {
                matrizModificada[i][j] = matriz[i][j];
            }
        }
    }

    // Exibe a matriz original
    printf("\nMatriz original:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibe a matriz modificada
    printf("\nMatriz modificada (negativos substituidos por 0):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrizModificada[i][j]);
        }
        printf("\n");
    }

    // Calcula a soma dos elementos de cada coluna da matriz modificada
    for (j = 0; j < 5; j++) { // coluna 0 a 4
        for (i = 0; i < 3; i++) { // linha 0 a 2
            somaColunas[j] += matrizModificada[i][j];
        }
    }

    // Exibe a soma dos elementos de cada coluna
    printf("\nSoma dos elementos de cada coluna da matriz modificada:\n");
    for (j = 0; j < 5; j++) {
        printf("Coluna %d: %d\n", j, somaColunas[j]);
    }


 
    printf("\n\n");
    return 0;
}
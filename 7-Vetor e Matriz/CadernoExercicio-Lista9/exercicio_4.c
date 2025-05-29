#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4. Faça um programa que recebe uma matriz 3x3 e gera uma segunda matriz
com o dobro de cada valor. No final, exiba a segunda matriz na tela.
*/
int main() {
    system("cls");
 
    int matriz[3][3], matrizDobro[3][3];
    int i, j;

    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            matrizDobro[i][j] = matriz[i][j] * 2; // Calcula o dobro
        }
    }

    printf("\nMatriz original:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz com o dobro dos valores:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizDobro[i][j]);
        }
        printf("\n");
    }
 
    printf("\n\n");
    return 0;
}
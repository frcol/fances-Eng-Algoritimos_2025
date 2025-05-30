#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2. Faça um programa que recebe uma matriz 3x4 e mostra a soma dos seus
elementos.
*/
int main() {
    system("cls");
 
    int matriz[3][4];
    int i, j, soma = 0;

    printf("Digite os elementos da matriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            soma += matriz[i][j];
        }
    }

    printf("\nA soma dos elementos da matriz 3x4 e: %d\n", soma);

    printf("Matriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
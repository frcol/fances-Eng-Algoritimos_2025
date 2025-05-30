#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
3. Faça um programa que recebe uma matriz 5x3 e informa qual é o maior
elemento dela e sua posição.
*/
int main() {
    system("cls");
 
    int matriz[5][3];
    int i, j, k, l;
    int maior = 0;

    printf("Digite os elementos da matriz 5x3:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                maior = matriz[i][j];
            } else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                k = i;
                l = j;
            }
        }
    }   

    // Exibe o maior elemento e sua posição
    printf("O maior elemento da matriz e: %d\n", maior);
    printf("Sua posicao e: [%d][%d]\n", k, l);
    // for (i = 0; i < 5; i++) {
    //     for (j = 0; j < 3; j++) {
    //         if (matriz[i][j] == maior) {
    //             printf("Sua posicao e: [%d][%d]\n", i, j);
    //         }
    //     }
    // }
 
 
    printf("\n\n");
    return 0;
}
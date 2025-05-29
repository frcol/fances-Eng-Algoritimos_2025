#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
6. Faça um programa que recebe uma matriz 3x4 e mostra a média dos
elementos de uma linha escolhida pelo usuário.
*/
int main() {
    system("cls");
 
    int matriz[3][4];
    int i, j, linhaEscolhida;
    float media = 0.0;

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Solicita a linha escolhida pelo usuário
    printf("Escolha uma linha (1 a 3) para calcular a média: ");
    scanf("%d", &linhaEscolhida);
    linhaEscolhida--; // Ajusta para índice de matriz (0 a 2)

    // Verifica se a linha escolhida é válida
    if (linhaEscolhida < 0 || linhaEscolhida >= 3) {
        printf("Linha inválida! Por favor, escolha entre 1 e 3.\n");
        return 1;
    }

    // Cálculo da média dos elementos da linha escolhida
    for (j = 0; j < 4; j++) {
        media += matriz[linhaEscolhida][j];
    }

    media /= 4; // Divide pela quantidade de elementos na linha

    // Exibe a média
    printf("A média dos elementos da linha %d é: %.2f\n", linhaEscolhida + 1, media);

    // Exibe a matriz para referência
    printf("\nMatriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
 
    printf("\n\n");
    return 0;
}
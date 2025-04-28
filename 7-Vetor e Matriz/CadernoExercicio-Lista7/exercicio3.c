#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber  8  números  e  armazená-los  em  um  vetor.  Ao  final,  pedir  para  o 
usuário escolher uma posição do vetor e exibir o número contido nela. 
*/
int main() {
    system("cls");

    int vetor[8], i, posicao;

    printf("Digite 8 numeros inteiros:\n");

    for (i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite a posicao do vetor que deseja acessar (0 a 7): ");
    scanf("%d", &posicao);

    while (posicao < 0 || posicao > 7) {
        printf("Posicao invalida! Digite novamente (0 a 7): ");
        scanf("%d", &posicao);
    }

    printf("\nO numero na posicao %d e: %d\n", posicao, vetor[posicao]);


    printf("\n\n");
    return 0;
}
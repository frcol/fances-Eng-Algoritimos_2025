#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber  números  do  usuário  para  preencher  um  vetor  de  10  posições, 
porém, só é permitido armazenar no vetor números positivos (repetir até que 
as  10  posições  do  vetor  estejam  preenchidas).  No  final,  exiba  a  soma  de 
todos os números que estão nas posições ímpares do vetor. 
*/
int main() {
    system("cls");

    int vetor[10], i, soma = 0;

    printf("Preencha o vetor com 10 numeros positivos:\n");
    for (i = 0; i < 10; i++) {
        do {
            printf("Posicao %d: ", i + 1);
            scanf("%d", &vetor[i]);
            if (vetor[i] < 0) {
                printf("Numero negativo! Tente novamente.\n");
            }
        } while (vetor[i] < 0);
    }

    printf("\nVetor preenchido:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nSoma dos numeros nas posicoes impares:\n");
    for (i = 0; i < 10; i++) {
        if (i % 2 != 0) { // Posições ímpares
            soma += vetor[i];
        }
    }
    printf("Soma: %d\n", soma);

    printf("\n\n");
    return 0;
}
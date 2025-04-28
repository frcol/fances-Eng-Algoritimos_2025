#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber 12 números e  armazená-los em um vetor. Ao final, exibir quais 
foram os números positivos informados.
*/
int main() {
    system("cls");

    int i, vetor[12];

    printf("Digite 12 numeros inteiros:\n");
    for (i = 0; i < 12; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nOs numeros positivos informados foram:\n");
    for (i = 0; i < 12; i++) {
        if (vetor[i] > 0) {
            printf("%d ", vetor[i]);
           }
    }

    printf("\n\n");
    return 0;
}
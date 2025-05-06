#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
3. Escreva um algoritmo em linguagem C que:
a) leia um vetor A de 12 números reais;
b) construa e imprima um vetor B formado da seguinte maneira:
- os elementos de índice par são os correspondentes de A divididos por 2;
- os elementos de índice ímpar são os correspondentes de A multiplicados
por 3.
*/
int main() {
    system("cls");
    
    float A[12], B[12];
    int i;

    printf("Digite 12 numeros reais:\n");
    for (i = 0; i < 12; i++) {
        printf("A[%d]: ", i);
        scanf("%f", &A[i]);
    }

    printf("\n\nVetor A:\n");
    for (i = 0; i < 12; i++) {
        printf("A[%d]: %.2f\n", i, A[i]);
    }

    printf("\n\nVetor B:\n");
    for (i = 0; i < 12; i++) {
        if (i % 2 == 0) {
            B[i] = A[i] / 2;
        } else {
            B[i] = A[i] * 3;
        }
        printf("B[%d]: %.2f\n", i, B[i]);
    }


    printf("\n\n");
    return 0;
}
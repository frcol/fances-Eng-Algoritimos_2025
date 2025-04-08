#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Criar um programa que leia um número inteiro e diga se ele é múltiplo de 3, de 5 ou de ambos.
*/
int main() {
    system("cls");

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("\n");

    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("O número %d é múltiplo de 3 e de 5.\n", numero);
    } else if (numero % 3 == 0) {
        printf("O número %d é múltiplo de 3.\n", numero);
    } else if (numero % 5 == 0) {
        printf("O número %d é múltiplo de 5.\n", numero);
    } else {
        printf("O número %d não é múltiplo de 3 nem de 5.\n", numero);
    }

    printf("\n\n");
    return 0;
}
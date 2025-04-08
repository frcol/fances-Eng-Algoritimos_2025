#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1. Receber um número e informar se ele é positivo, negativo ou nulo.
*/
int main() {
    system("cls");
    
    int numero;

    printf("Digite um número: ");
    scanf("%i", &numero);

    if (numero > 0) {
        printf("O número %i é positivo.\n", numero);
    } else if (numero < 0) {
        printf("O número %i é negativo.\n", numero);
    } else {
        printf("O número é nulo.\n");
    }
    
    
    printf("\n\n");
    return 0;
}
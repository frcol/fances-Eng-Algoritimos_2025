#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1. Receber um número, calcular seu dobro e exibir o resultado.
*/
int main() {
    system("cls");
    
    int num, resultado;

    printf("Digite um numero: ");
    scanf("%i", &num);

    resultado = num * 2;

    printf("O dobro do numero %i e %i.", num, resultado);
    
    printf("\n\n");
    return 0;
}
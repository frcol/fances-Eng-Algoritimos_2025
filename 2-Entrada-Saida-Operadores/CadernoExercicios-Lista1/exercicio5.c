#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
5. Criar um programa em Linguagem C que receba dois números inteiros e retorne: o valor da divisão (inteiro) e o resto da divisão.
*/
int main() {
    system("cls");
    
    int num1, num2, divisao, resto;

    printf("Digite um numero: ");
    scanf("%i", &num1);

    printf("Digite outro numero: ");
    scanf("%i", &num2);

    divisao = num1/num2; 
    resto = num1%num2;

    printf("A divisao entre %i e %i e %i e o resto e %i.", num1, num2, divisao, resto);

    printf("\n\n");
    return 0;
}
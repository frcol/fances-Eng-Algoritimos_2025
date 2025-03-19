#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
3.  Receber  numerador  e  denominador.  Calcular  e  mostrar  o  resultado  da divisão, desde que possível (denominador diferente de zero). Se não for possível dividir, apenas escreva “não existe divisão por zero”
*/
int main() {
    system("cls");
    
    int numerador, denominador;
    float resultado;

    printf("Digite o numerador: ");
    scanf("%i", &numerador);

    printf("Digite o denominador: ");
    scanf("%i", &denominador);

    if (denominador == 0) {
        printf("Nao existe divisão por zero");
    } else {
        resultado = (float) numerador / denominador;
        printf("O resultado da divisao e: %.2f", resultado);
    }

    printf("\n\n");
    return 0;
}
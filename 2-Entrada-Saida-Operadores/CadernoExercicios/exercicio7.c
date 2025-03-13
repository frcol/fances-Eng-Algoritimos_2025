#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
7. Receber uma temperatura em Fahrenheit e convertê-la para Celsius
através da seguinte fórmula: Celsius = (Fahrenheit - 32) / 1.8. Exibir o
valor em Celsius.
*/
int main() {
    system("cls");
    
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit-32)/1.8;

    printf("A temperatura em Celsius e %.2f.", celsius);

    printf("\n\n");
    return 0;
}
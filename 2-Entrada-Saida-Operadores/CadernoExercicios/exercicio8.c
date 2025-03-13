#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
8. Calcular e exibir o perímetro de uma circunferência recebendo seu raio. 
A fórmula para o cálculo é C = 2 * * r (utilizar = 3.14).
*/

#define PI 3.14

int main() {
    system("cls");
    
    float raio, perimetro;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;

    printf("\nO perimetro da circunferencia e: %.2f", perimetro);

    printf("\n\n");
    return 0;
}
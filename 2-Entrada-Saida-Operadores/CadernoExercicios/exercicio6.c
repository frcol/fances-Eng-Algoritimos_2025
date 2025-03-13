#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
6. Receber base e altura de um triângulo, calcular sua área e exibir o valor calculado.
*/
int main() {
    system("cls");
    
    float base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base*altura)/2.0; // dividindo por 2.0 transforma o resultado em float

    printf("A area do triangulo de base %.2f e altura %.2f e %.2f.", base, altura, area);
    
    printf("\n\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
7. Um triângulo pode ser classificado de acordo com as medidas de seus
lados:
- Um triângulo equilátero possui todos os lados de mesma medida.
- Um triângulo isósceles possui dois lados de mesma medida.
- Um triângulo escaleno possui as medidas dos três lados diferentes.
*/
int main() {
    system("cls");
    
    float lado1, lado2, lado3;

    printf("Digite o valor do lado 1: ");
    scanf("%f", &lado1);

    printf("Digite o valor do lado 2: ");
    scanf("%f", &lado2);

    printf("Digite o valor do lado 3: ");
    scanf("%f", &lado3);

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("Os lados devem ser maiores que zero.\n");
        return 1;
    }

    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triangulo e equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triangulo e isósceles.\n");
    } else {
        printf("O triangulo e escaleno.\n");
    }
    
    printf("\n\n");
    return 0;
}
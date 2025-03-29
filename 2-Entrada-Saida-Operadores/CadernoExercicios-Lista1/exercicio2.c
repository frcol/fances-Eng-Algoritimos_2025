#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2. Receber dois valores, calcular sua média aritmética e exibir o resultado.
*/
int main() {
    system("cls");
    
    int num1, num2;
    float media;

    printf("Digite um numero: ");
    scanf("%i", &num1);

    printf("Digite outro numero: ");
    scanf("%i", &num2);

    media = (num1+num2)/2.0; // dividindo por 2.0 transforma o resultado em float

    printf("A media entre %i e %i e %.2f.", num1, num2, media);

    printf("\n\n");
    return 0;
}
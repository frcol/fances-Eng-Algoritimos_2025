#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
9. Receber um número e calcular o valor de sua raiz quadrada e sua oitava potência. Utilize as funções pow(base,expoente) e sqrt(num) da biblioteca <math.h>. Mostrar os valores obtidos.
*/

int main() {
    system("cls");
    
    float num, raiz, potencia;

    printf("Digite um numero: ");
    scanf("%f", &num);

    raiz = sqrt(num);
    potencia = pow(num, 8);

    printf("\nRaiz quadrada de %.2f: %.2f", num, raiz);
    printf("\nOitava potencia de %.2f: %.2f", num, potencia);

    printf("\n\n");
    return 0;
}
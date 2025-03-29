#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
3. Receber um comprimento em metros, convertê-lo para centímetros e
mostrar o resultado.
*/
int main() {
    system("cls");
    
    float comprimentoMetros, comprimentoCentimetros;
    
    printf("Digite um comprimento em metros: ");
    scanf("%f", &comprimentoMetros);

    comprimentoCentimetros = comprimentoMetros * 100;

    printf("O comprimento %.2f metros equivale a %.2f centimetros.\n", comprimentoMetros, comprimentoCentimetros);

    printf("\n\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4. Receber 2 números inteiros e exibir todos os números inteiros existentes
entre eles.
*/
int main() {
    system("cls");
    
    int num1, num2, i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("\nOs numeros inteiros entre %d e %d sao:\n", num1, num2);
    for (i = num1 + 1; i < num2; i++) {
        printf("%d ", i);
    }
    
    printf("\n\n");
    return 0;
}
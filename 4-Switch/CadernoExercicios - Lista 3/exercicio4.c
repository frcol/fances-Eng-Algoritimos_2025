#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4. Receber três números e dizer se existe algum número repetido entre eles.
Em caso afirmativo, mostre qual o número esta repetido.
*/
int main() {
    system("cls");
    
    int num1, num2, num3;

    int repetido = 0;
    int repetido_num = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 == num2 || num1 == num3 || num2 == num3) {
        repetido = 1;

        if (num1 == num2 || num1 == num3) {
            repetido_num = num1;
        } else {
            repetido_num = num2;
        }
    }
    
    if (repetido) {
        printf("O numero %d esta repetido.\n", repetido_num);
    } else {
        printf("Nao existe numero repetido.\n");
    }
    
    printf("\n\n");
    return 0;
}
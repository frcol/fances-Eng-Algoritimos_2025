#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Implemente um programa com estrutura do while que funcione como uma calculadora simples. 
O usuário deve digitar dois números e escolher a operação: 
1 (soma), 2 (subtração), 3 (multiplicação), 4 (divisão) ou 5 (sair). 
Valide o caso de divisão por zero.
*/
int main() {
    system("cls");

    int opcao = 0;
    float num1, num2, resultado;

    do {
        printf("\nEscolha a operacao:\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);

        if (opcao != 5 && opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisao por zero!\n");
                }
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    printf("\n\n");
    return 0;
}
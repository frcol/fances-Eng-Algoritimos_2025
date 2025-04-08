#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
6. Implementar uma calculadora onde o usuário digita dois números e uma
opção, que deve ser 1 para adição, 2 para subtração, 3 para multiplicação
e 4 para divisão. Mostrar na tela caso seja informada uma opção inválida.
*/
int main() {
    system("cls");
    
    int opcao;

    float num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Escolha uma opcao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

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
        default:
            printf("Opcao invalida!\n");
    }
    
    printf("\n\n");
    return 0;
}
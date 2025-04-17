#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
5.  Criar  um  programa  de  calculadora  que  vai  realizando  os  cálculos  entre
dois  números  enquanto  o  usuário  desejar.  Criar  um  menu  de  opções
conforme mostrado a seguir:

1 – Soma
2 – Subtração
3 – Multiplicação
4 – Divisão
5 – Sair
*/
int main()
{
    system("cls");

    int opcao=1, num1, num2;

    do
    {
        printf("\nCalculadora\n");
        printf("Escolha uma opcao:\n");
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n");
        scanf("%d", &opcao);

        if (opcao != 5) {
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
        }

        system("cls");
        switch (opcao)
        {
        case 1:
            printf("Resultado: %d\n", num1 + num2);
            break;
        case 2:
            printf("Resultado: %d\n", num1 - num2);
            break;
        case 3:
            printf("Resultado: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
            {
                printf("Resultado: %.2f\n", (float)num1 / num2);
            }
            else
            {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 5);

    printf("\n\n");
    return 0;
}
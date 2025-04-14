#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber 2 notas de um aluno e calcular a média final. 
O usuário só pode digitar notas no intervalo de 0 a 10, caso ele digite um valor inválido mostre uma mensagem e solicite uma nova nota.
*/
int main()
{
    system("cls");
    
    float n1, n2;

    do
    {
        printf("Digite a nota 1: ");
        scanf("%f", &n1);
        printf("Digite a nota 2: ");
        scanf("%f", &n2);
        
        if ((n1 < 0 || n1 > 10) || (n2 < 0 || n2 > 10))
            printf("Valor invalido!\n\n");
            
    } while (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10);

    printf("\nMedia = %.2f", (n1 + n2) / 2);

    return 0;
}

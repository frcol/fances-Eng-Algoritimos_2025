#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Melhore o exercício 1 e faça para a quantidade indeterminada de alunos. Pergunte ao usuário se ele deseja continuar calculando as médias. Faça até o usuário digitar ‘N’, não deseja continuar.
*/
int main() {
    system("cls");

    float n1, n2;
    char op = 'S';

    do {
        do
        {
            printf("Digite a nota 1: ");
            scanf("%f", &n1);
            printf("Digite a nota 2: ");
            scanf("%f", &n2);
            
            if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
                printf("Valor invalido!\n\n");
        } while (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10);
    
        printf("\nMedia = %.2f", (n1 + n2) / 2);

        printf("\n\nDeseja continuar? (S/N): ");
        scanf(" %c", &op);
    } while (op != 'N' && op != 'n');
    

    printf("\n\n");
    return 0;
}
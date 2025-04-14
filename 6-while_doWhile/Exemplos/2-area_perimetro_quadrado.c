#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h> // Biblioteca para usar a funcao pow
/*
Calcular e exibir a área e o perímetro de um quadrado. Repetir até o usuário digitar [N]ão.
*/
int main()
{
    system("cls");

    char op = 's';
    float lado, p, a;

    while (toupper(op) == 'S') // Biblioteca <ctype.h>
    {
        printf("\nDigite um lado de um quadrado: ");
        scanf("%f", &lado);
        fflush(stdin);

        a = pow(lado, 2);
        p = 4 * lado;
        
        printf("\nArea:%.2f\nPerimetro: %.2f", a, p);

        printf("\nDeseja continuar?[S]Sim ou [N]Nao:");
        scanf("%c", &op);
        fflush(stdin);
    }

    return 0;
}

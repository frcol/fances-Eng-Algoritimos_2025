#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    x = y = 0;

    printf("\nEste programa recebe 2 valores e mostra na tela\n");
    printf("\nDigite o valor de x: ");
    scanf("%f", &x);

    printf("\nDigite o valor de y: ");
    scanf("%f", &y);

    printf("\nx=%.2f e y = %f\n\n", x, y);
    
    return 0;
} 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2. Receber um número e mostrar sua tabuada do 1 ao 10.
*/
int main() {
    system("cls");
    
    int x, y;

    printf("Digite um numero: ");
    scanf("%i", &x);
    printf("\n--Tabuada do %i --\n\n", x);
    for (y = 1; y <= 10; y++)
        printf("\n%i x %i = %i", x, y, x * y);
    
    printf("\n\n");
    return 0;
}
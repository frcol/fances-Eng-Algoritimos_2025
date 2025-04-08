#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
5. Receber três números e mostrar qual é o maior deles.
*/
int main() {
    system("cls");
    
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("O maior numero eh: %d\n", a);
    } else if (b > a && b > c) {
        printf("O maior numero eh: %d\n", b);
    } else if (c > a && c > b) {
        printf("O maior numero eh: %d\n", c);
    } else {
        printf("Os numeros sao iguais.\n");
    }
    
    printf("\n\n");
    return 0;
}
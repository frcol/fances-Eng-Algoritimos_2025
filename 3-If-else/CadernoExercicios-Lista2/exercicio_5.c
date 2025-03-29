#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
5.  Receber dois números e mostrar o maior deles.
*/
int main() {
    system("cls");
    
    float n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("O maior número é %.2f\n", n1);
    } else {
        printf("O maior número é %.2f\n", n2);
    }
    
    printf("\n\n");
    return 0;
}
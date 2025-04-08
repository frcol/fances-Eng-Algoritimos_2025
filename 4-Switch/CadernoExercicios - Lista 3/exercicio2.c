#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2. Receber um intervalo (dois valores) e em seguida um número. Informar se
o número está dentro, fora ou nas extremidades do intervalo. Por
exemplo, em um intervalo de 1 a 3, 0 está fora, 2 está dentro e 1 está em
uma extremidade do intervalo.
*/
int main() {
    system("cls");
    
    int intervalo1, intervalo2, numero;

    printf("Digite o valor do intervalo 1: ");
    scanf("%d", &intervalo1);

    printf("Digite o valor do intervalo 2: ");
    scanf("%d", &intervalo2);

    printf("Digite o valor do numero: ");
    scanf("%d", &numero);

    if (intervalo1 > intervalo2) {
        printf("O intervalo deve ser crescente.\n");
        return 1;
    }

    if (numero < intervalo1 || numero > intervalo2) {
        printf("O numero %d esta fora do intervalo [%d, %d].\n", numero, intervalo1, intervalo2);
    } else if (numero == intervalo1 || numero == intervalo2) {
        printf("O numero %d esta nas extremidades do intervalo [%d, %d].\n", numero, intervalo1, intervalo2);
    } else {
        printf("O numero %d esta dentro do intervalo [%d, %d].\n", numero, intervalo1, intervalo2);
    }
    
    printf("\n\n");
    return 0;
}
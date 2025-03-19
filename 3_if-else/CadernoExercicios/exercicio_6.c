#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
6.  Receber  dois  números  e  os  apresente  em  ordem  crescente.  Utilize apenas a estrutura de decisão if, ou seja, sem o opcional else. 
*/
int main() {
    system("cls");
    
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("Ordem crescente: %d, %d", num1, num2);
    }

    if (num1 > num2) {
        printf("Ordem crescente: %d, %d", num2, num1);
    }
    
    printf("\n\n");
    return 0;
}
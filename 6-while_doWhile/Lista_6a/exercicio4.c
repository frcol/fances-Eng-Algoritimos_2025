#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Peça ao usuário um número inteiro entre 1 e 20. Use um laço for para exibir a tabuada desse número do 1 ao 10.
*/
int main() {
    system("cls");

    int numero = 0; // Número fornecido pelo usuário
    int i = 0; // Variável de controle do laço for


    // Solicita ao usuário um número inteiro entre 1 e 20
    do {
        printf("Digite um numero inteiro entre 1 e 20: ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 20); // Verifica se o número está fora do intervalo


    // Exibe a tabuada do número fornecido pelo usuário
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i); // Exibe a multiplicação
    }



    printf("\n\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Elabore  um  programa  que  recebe  um  caractere  e  um  número  inteiro  n menor  ou  igual  a  20.  
Declare  e  inicialize  uma  string  com  n  caracteres iguais ao caractere digitado.  
Exemplo: 
    Caracter: a 
    Número (n): 3 
    Saída: aaa 
*/
int main() {
    system("cls");

    char caractere;
    int n;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    fflush(stdin);

    do {
        printf("Digite um numero inteiro menor ou igual a 20: ");
        scanf("%d", &n);
        if (n > 20) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (n > 20);

    char string[n + 1]; // +1 para o caractere nulo 

    for (int i = 0; i < n; i++) {
        string[i] = caractere;
    }

    string[n] = '\0'; // Adiciona o caractere nulo no final da string
    printf("String formada: %s\n", string);

    printf("\n\n");
    return 0;
}
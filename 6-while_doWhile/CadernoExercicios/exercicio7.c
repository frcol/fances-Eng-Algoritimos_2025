#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
7.  Escreva um programa que calcule todos os números inteiros divisíveis por 
um  certo  valor  indicado  pelo usuário,  e  compreendidos  em um  intervalo 
também  especificado  pelo  usuário.  O  usuário  deve  entrar  com  um primeiro  
valor  correspondente ao  divisor  e após  ele  vai  fornecer o  valor 
inicial do intervalo, seguido do valor final deste intervalo. Exemplo: 
 
Digite o valor do divisor: 3  
Digite o início do intervalo: 17  
Digite o final do intervalo: 29  
Numeros divisíveis por 3 no intervalo de 17 a 29:  
18 21 24 27 
*/
int main() {
    system("cls");
    
    int divisor, inicio, fim;

    printf("Digite o valor do divisor: ");
    scanf("%d", &divisor);

    printf("Digite o início do intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o final do intervalo: ");
    scanf("%d", &fim);

    printf("Numeros divisíveis por %d no intervalo de %d a %d:\n", divisor, inicio, fim);
    // usando FOR
    // for (int i = inicio; i <= fim; i++) {
    //     if (i % divisor == 0) {
    //         printf("%d ", i);
    //     }
    // }

    // usando WHILE
    printf("\n\nUsando while:\n");
    int i = inicio;
    while (i <= fim) {
        if (i % divisor == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n\n");
    return 0;
}
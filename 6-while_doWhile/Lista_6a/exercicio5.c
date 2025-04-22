#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Crie um programa que utilize while para receber números positivos do usuário e calcular a média aritmética. 
O programa deve encerrar quando um número negativo for digitado.
*/
int main() {
    system("cls");

    int num, count = 0, sum = 0;
    float media = 0.0;

    

    while (num >= 0) {
        printf("Digite um numero positivo (negativo para sair): ");
        scanf("%d", &num);

        if (num > 0){
            sum += num;
            count++;
        }
     }

    if (count > 0) {
        media = (float)sum / count;
        printf("A media aritmetica dos numeros positivos digitados e: %.2f\n", media);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    printf("\n\n");
    return 0;
}
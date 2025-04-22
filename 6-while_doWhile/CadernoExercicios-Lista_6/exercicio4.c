#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4.  Receber  números  enquanto  o  usuário  quiser  digitá-los  (a  cada  número 
informado peça que o usuário digite 1 se quiser informar mais um número 
ou 2 se quiser parar). No final, exibir: 
- o maior número; 
-  a média aritmética dos números.
*/
int main() {
    system("cls");
    
    int num, maior, cont = 1, soma = 0, opcao=1;
    float media;

    while (opcao == 1) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (cont == 1 || num > maior) {
            maior = num;
        }

        soma += num;
        cont++;

        printf("Digite [1] para continuar ou [2] para parar: ");
        scanf("%d", &opcao);
    }

    media = (float)soma / (cont - 1); // cont - 1 porque o último número não deve ser contado na média
    printf("\nMaior numero: %d", maior);
    printf("\nMedia aritmetica: %.2f", media);

    printf("\n\n");
    return 0;
}
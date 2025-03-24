#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2.  Receber  um  número  e  verificar  se  ele  esta  na  faixa  de  0  à  9.  Se  sim, 
mostre uma mensagem afirmativa, caso contrário mostre uma mensagem indicando que o número não se encontra na faixa. 
*/
int main() {
    system("cls");
    
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 9) {
        printf("O numero %i esta na faixa de 0 a 9.\n", num);
    } else {
        printf("O numero %i nao esta na faixa de 0 a 9.\n", num);
    }

    printf("\n\n");
    return 0;
}
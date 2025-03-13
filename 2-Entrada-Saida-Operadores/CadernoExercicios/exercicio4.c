#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4. Receber o ano de nascimento de uma pessoa e mostrar aproximadamente quantos dias de vida ela tem.
*/
int main() {
    system("cls");
    
    int anoNascimento, anoAtual, diasVida;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    diasVida = (anoAtual - anoNascimento) * 365;
    
    printf("Aproximadamente %d dias de vida.\n", diasVida);

    printf("\n\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Exercicio 3
Um programador precisa detectar o retorno de erro de um servidor.
O servidor retorna:
- 200 se estiver OK
- 400 Pagina nao encontrada
- 500 Erro interno no servidor 
- 503 Servico indiponivel 
*/
int main() {
    system("cls");

    int status;

    printf("Digite o status do servidor: ");
    scanf("%i", &status);

    switch (status) {
        case 200:
            printf("OK\n");
            break;
        case 400:
            printf("Pagina nao encontrada\n");
            break;
        case 500:
            printf("Erro interno no servidor\n");
            break;
        case 503:
            printf("Servico indiponivel\n");
            break;
        default:
            printf("Status desconhecido\n");
            break;
    }

    printf("\n\n");
    return 0;
}
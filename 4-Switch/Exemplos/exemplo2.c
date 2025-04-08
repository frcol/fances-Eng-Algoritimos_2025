#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    
    int opt;

    if (opt == 4)    printf("Escolha a opcao:");
    printf("\n1- CADASTRAR\n2- MOSTRAR\n3- SAIR\n");

    scanf("%i", &opt);

    switch (opt) {
        case 1:
            printf("Cadastrando %f um usuario...", opt);
            break;
        case 2:
            printf("Mostrando dados dos usuario...");
            break;
        case 3:
            printf("Saindo do sistema!!");
            break;
        default:
            printf("## OPCAO INVALIDA ##");
            break;
    }


    printf("\n\n");
    return 0;
}
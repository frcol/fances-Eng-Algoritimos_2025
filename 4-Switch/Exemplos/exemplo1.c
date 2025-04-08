#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    
    int opt = 0;

    printf("Escolha a opcao:");
    printf("\n1- CADASTRAR\n2- MOSTRAR\n3- SAIR\n");

    scanf("%i", &opt);

    if (opt == 1) {
        printf("Cadastrando um produto...");
    }
    else if (opt == 2) {
        printf("mostrando um produto...");    
    }
    else if (opt == 3) {
        printf("Saindo do sistema...");
    }
    else {
        printf("## Opcao invalida ##");
    }

    printf("\n\n");
    return 0;
}
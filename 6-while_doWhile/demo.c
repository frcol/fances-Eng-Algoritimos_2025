#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    
    char opt = '1';

    do {
        system("cls");
        printf("\n1- Cadastrar\n2- Mostrar\n3- Sair\n");
        scanf("%c", &opt);


    } while (opt != '3');
    

    printf("\n\n");
    return 0;
}
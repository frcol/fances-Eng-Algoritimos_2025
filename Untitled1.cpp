#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    
    char opt = '1';

    do {
        printf("\n1- Cadastrar\n2- Mostrar\n3- Sair\n");
        scanf("%c", &opt);
		fflush(stdin);
		
		switch(opt){
			case '1':
				printf("\nCadastrando...");
				break;
			case '2':
				printf("\nMostrando...");
				break;
			case '3':
				printf("\nObrigado! Ate mais!");
				break;
			default:
				printf("## OPCAO INVALIDA ##");
				break;
		}
    } while (opt != '3');
    

    printf("\n\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char opt;
	
	printf("Escolha um item:\n");
	printf("1- Cadastrar\n2- Mostrar\n3- Sair\n");
	scanf("%i", &opt);
	
	switch (opt) {
		case 1:
			printf("Cadastrando...");
			break;
		case 2:
			printf("Mostrando informacoes...");
			break;
		case 3:
			printf("Obrigado por ter usado o sistema!");
			break;	
		default:
			printf("## OPCAO INVALIDA ##");
			break;
	}
	
	// =======================================
	/*char letra = 'a';
	
	letra = toupper(letra);
	printf("%c", letra);*/
	
	return 0;
}




/* 
Exercicio 2
v.1
Elabore um programa em linguagem C que receba uma letra do 
alfabeto e verifique se a letra é uma vogal. 
Mostre uma mensagem se a letra é vogal e outra, para consoante.
Mostre a letra digitada.
v.2
Permita a classificação tanto para letras maiúsculas como minúsculas.
As funções tolower() e toupper() da biblioteca ctype.h podem ajudar.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
	char letra, maiuscula;
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	maiuscula = toupper(letra);
	
	switch (maiuscula) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Vogal e a letra e ");
			break;
		default:
			printf("Consoante e a letra e ");
			break;
	}
	
	printf("%c", letra);
	
	return 0;
}
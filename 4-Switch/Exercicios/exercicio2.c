/* 
Exercicio 2
v.1
Elabore um programa em linguagem C que receba uma letra do 
alfabeto e verifique se a letra é uma vogal. 
Mostre uma mensagem se a letra é vogal e outra, para consoante.
Mostre a letra digitada.

*/

#include <stdio.h>

int main() {
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	switch (letra) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Vogal e a letra e ");
			break;
		default:
			printf("Consoante e a letra e ");
			break;
	}
	
	printf("%c", letra);
	
	return 0;
}
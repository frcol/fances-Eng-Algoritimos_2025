#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Faça um programa que, dado um string qualquer, inverta todas as suas letras (no mesmo string).
Para isso iremos precisar da ajuda de uma variável auxiliar (aux)
*/
int main()
{
	system("cls");

	char frase[80], aux;
	int i, tam;

	printf("\nDigite a frase: ");
	gets(frase);
	fflush(stdin);

	tam = strlen(frase);

	for (i = 0; i < tam / 2; i++)
	{
		aux = frase[i];
		frase[i] = frase[tam - 1 - i];
		frase[tam - 1 - i] = aux;
	}

	printf("\nA frase invertida:\n%s\n\n", frase);

	return 0;
} 

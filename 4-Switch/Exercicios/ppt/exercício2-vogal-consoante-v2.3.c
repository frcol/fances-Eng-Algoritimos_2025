#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	system("cls");

	char letra, minuscula;
	
	printf("\nDigite uma letra: ");
	scanf("%c", &letra);
	fflush(stdin);
	
	minuscula = tolower(letra);
	
	switch (minuscula)
	{
	case 'a':
		printf("\nA letra %c \x82 vogal\n\n", letra);
		break;
	case 'e':
		printf("\nA letra %c \x82 vogal\n\n", letra);
		break;
	case 'i':
		printf("\nA letra %c \x82 vogal\n\n", letra);
		break;
	case 'o':
		printf("\nA letra %c \x82 vogal\n\n", letra);
		break;
	case 'u':
		printf("\nA letra %c \x82 vogal\n\n", letra);
		break;
	default:
		printf("\nA letra %c \x82 consoante\n\n", letra);
		break;
	}

	return 0;
}

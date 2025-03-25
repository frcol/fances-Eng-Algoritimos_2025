#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("cls");

	char letra;
	
	printf("\nDigite uma letra: ");
	scanf("%c", &letra);
	fflush(stdin);

	switch (letra)
	{
	case 'a':
	case 'A':
		printf("\nA letra %c \x82 vogal\n\n", letra);
		break;
	case 'e':
	case 'E':
		printf("\nA letra %c \x82 vogal\n\n", letra);
		break;
	case 'i':
	case 'I':
		printf("\nA letra %c \x82 vogal\n\n", letra);
		break;
	case 'o':
	case 'O':
		printf("\nA letra %c \x82 vogal\n\n", letra);
		break;
	case 'u':
	case 'U':
		printf("\nA letra %c \x82 vogal\n\n", letra);
		break;
	default:
		printf("\nA letra %c \x82 consoante\n\n", letra);
		break;
	} 
	system("pause");
	return 0;
} 

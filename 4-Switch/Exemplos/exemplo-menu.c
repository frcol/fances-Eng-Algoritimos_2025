#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("cls");

	int num;
	printf("\nMenu:\n1.Somar\n2.Subtrair\nDigite a sua opcao: ");
	scanf("%i", &num);

	switch (num)
	{
	case 1:
		printf("\nA opcao escolhida foi a 1\n");
		break;
	case 2:
		printf("\nA opcao escolhida foi a 2\n");
		break;
	default:
		printf("\nOpcao invalida\n");
		break;
	}
	
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	system("cls");
	
	float n1, n2, res;
	char op;

	printf("\nCalculadora\n\nUtilize +,-,*,/,^\n\n");
	printf("\nDigite o primeiro numero: ");
	scanf("%f", &n1);
	fflush(stdin);

	printf("\nDigite o sinal +,-,*,/,^ : ");
	scanf("%c", &op);
	fflush(stdin);

	printf("\nDigite o segundo numero: ");
	scanf("%f", &n2);
	fflush(stdin);
	switch (op)
	{
	case '+':
		res = n1 + n2;
		printf("\nResultado: %.2f\n\n", res);
		break;
	case '-':
		res = n1 - n2;
		printf("\nResultado: %.2f\n\n", res);
		break;
	case '*':
		res = n1 * n2;
		printf("\nResultado: %.2f\n\n", res);
		break;
	case '/':
		if (n2 != 0)
		{
			res = n1 / n2;
			printf("\nResultado: %.2f\n\n", res);
		}
		else
			printf("\nNao existe divisao por zero\n\n");
		break;
	case '^':
		res = pow(n1, n2); // math.h
		printf("\nResultado: %.2f\n\n", res);
		break;
	default:
		printf("\nOperador Invalido\n\n");
		break;
	}

	return 0;
}

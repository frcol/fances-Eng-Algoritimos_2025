#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("cls");

	float n1, n2;

	printf("Digite dois valores: ");
	scanf("%f %f", &n1, &n2);

	if (n1 > n2)
		printf("O numero %f \x82 o maior\n", n1);
	else
	{
		if (n2 > n1)
			printf("O numero %f \x82 o maior\n", n2);
		else
			printf("Os numeros sao iguais\n");
	}
	
	return 0;
} 

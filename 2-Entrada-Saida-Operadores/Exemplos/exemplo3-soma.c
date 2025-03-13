#include<stdio.h>
#include<conio.h>

int main()
{
    int n1,n2,soma;

    printf("Digite o primeiro numero:");	  
    scanf("%i",&n1);
    printf("Digite o segundo numero:");	
    scanf("%i",&n2);

    soma = n1+n2;

    printf("\nResultado = %i",soma);
    
    getch();
    return 0;
}//main


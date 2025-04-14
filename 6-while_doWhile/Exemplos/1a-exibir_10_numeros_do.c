#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("cls");

    int i = 1;

    do
    {
        printf("\nNumero %i", i);
        i++;
    } while (i <= 10);

    getch();
    return 0;
}
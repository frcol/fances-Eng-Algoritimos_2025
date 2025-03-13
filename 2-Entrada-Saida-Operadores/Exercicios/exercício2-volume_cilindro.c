#include<stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.14159

int main()
{
    float altura, raio, volume;

    printf("Digite a altura e o raio:");	  
    scanf("%f %f", &altura, &raio);

    volume = PI * pow(raio,2) * altura;

    printf("Volume = %f.",volume);

    getch();
    return 0;
}



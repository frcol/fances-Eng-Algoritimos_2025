#include <stdio.h>
#include <stdlib.h>

int main()
{
  float l1, l2, l3;

  printf("Digite os tres lados do triangulo: ");
  scanf("%f %f %f", &l1, &l2, &l3);
  
  // Condiçao de existência de um triangulo
  if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2)
  {
    if (l1 == l2 && l2 == l3)
      printf("\nTriangulo Equilatero\n");
    else
    {
      if (l1 == l2 || l2 == l3 || l1 == l3)
        printf("\nTriangulo Isosceles\n");
      else
        printf("\nTriangulo Escaleno\n");
    }
  }
  else
    printf("\nCondicao de existencia - triangulo nao satisfeita\n");

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y;
  
  for (x = 1; x <= 10; x++)
  {
    printf("\n--Tabuada do %i --\n\n", x);
    for (y = 1; y <= 10; y++)
      printf("\n%i x %i = %i\n", x, y, x * y);
  } 

  return 0;
}

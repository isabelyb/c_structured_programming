#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Arreglos bidimensionales e Iteradores\n");

  int IntegerArray [4][5];

  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 5; j++)
      {
        IntegerArray [i][j] = ((i + j)*100 + j);
        printf("(%i, %i): %i \n", i, j, IntegerArray[i][j]);
      }
  }


  return 0;
}
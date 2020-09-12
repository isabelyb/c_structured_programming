#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Iteradores for\n");

  int upperLim, bottomLim;

  printf("Vamos a imprimir en orden descendiente \n");

  printf("Ingresar Limite superior \n");
  scanf("%i", &upperLim);

  printf("Ingresar Limite inferior \n");
  scanf("%i", &bottomLim);

  for(int i = upperLim; i >= bottomLim; i--)
  {
    printf("Numero: %i \n", i);
  }


  return 0;
}
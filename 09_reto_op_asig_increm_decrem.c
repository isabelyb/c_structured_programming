#include <stdio.h>
#include <stdlib.h>

int main()
{

  printf("Reto 1 - Variable X = 10, se suma 2 veces su valor \n");

  int X, result;

  X = 10;

  X += (2*X);

  printf("Resultado: %i \n \n", X);


  printf("Reto 2 - Resultado de modulo 5 + 1 \n");

  int Y;

  printf("Ingresa un valor: \n");
  
  scanf("%i", &Y);

  Y %= 5;

  printf("Respuesta: %i", ++Y);

  
  return 0;
}
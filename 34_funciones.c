#include <stdio.h>

int Addition(int a, int b)
{
  return a + b;
}

int main() 
{
  printf("Funciones!\n");

  int additionRes = Addition(3,4);

  printf("Resultado es: %i", additionRes);


  return 0;
}
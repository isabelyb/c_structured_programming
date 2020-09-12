#include <stdio.h>
#include <stdlib.h>

int main() 
{

  printf("Reto Condicionales \n");

  int var = 5;

  printf("Adivina el numero entre 1 y el 10 \n");
  scanf("%i", &var);

  if(var == 5)
  {
    printf("Adivinaste");
  }
  else
  {
    printf("Fallaste \n");
  }

  return 0;
}
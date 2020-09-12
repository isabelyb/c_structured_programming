#include <stdio.h>
#include <stdlib.h>


int main() 
{
  printf("Reto Iterador Do While\nA continuacion se imprimen los numeros naturales de 1 a 100\n");

  int number = 1;

  do
  {
    printf("%i\n", number++);
  }
  while(number < 101);

  printf("Fin"); 

  return 0;
}
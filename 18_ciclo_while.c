#include <stdio.h>
#include <stdlib.h>


int main() 
{
printf("Iterador While - Ingresa un numero que sera el iterador \n");

int limit;

scanf("%i", &limit);

int i = 1;

while(i <= limit)
{
  printf("Numero: %i \n", i);
  i++;
}

return 0;
}
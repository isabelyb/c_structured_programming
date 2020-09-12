#include <stdio.h>
#include <stdlib.h>


int main()
{
  printf("Reto - Arreglos e iteradores\nEncontrar el valor mas grande de un arreglo\n\n");

  int list[10];
  int size;

  printf("De 1 a 10, ingrese de cuantos valores desea el arreglo: ");
  scanf("%i", &size);
  
  for (int i = 0; i < size; i++)
    {
      printf("Ingrese el valor(%i): ", i);
      scanf("%i", &list[i]);
    }
 
  for (int i = 0; i < size; i++)
  {
    if (list[0] < list[i]) 
    {
      list[0] = list[i];
    } 
  }

  printf("El mayor valor del arreglo es: %i", list[0]);
 

  return 0;
}
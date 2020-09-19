#include <stdio.h>
#include <stdlib.h>

int main() 
{
  printf("Cadena de Caracteres\n");

  char name[50];

  int size;

  printf("Ingresar el nombre con gets: \n");

  gets(name);

  printf("El nombre es: ");
  puts(name);

  size = strlen(name);

  printf("\n El tamano de la cadena es: %i\n", size);


  return 0;
}
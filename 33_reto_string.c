#include <stdio.h>
#include <stdlib.h>


int main(void) {
  printf("Reto String\n");

 printf("Imprimir la Cadena de Caracteres recibida, de forma invertida\n");

  char name[50];
  int size;

  printf("- Digita un nombre: ");
  gets(name);

  size = strlen(name);
  printf("- El nombre invertido es: ");
  for(int i = size; i >= 0; i--)
    {
      printf("%c", name[i]);  
    }
  
  printf("\n- El tamano de la cadena es: %i\n", size);

  return 0;
}
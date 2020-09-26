#include <stdio.h>
#include <stdlib.h>


int main() 
{
  printf("Crear un Archivo\n");

  FILE *archivo;

  archivo = fopen("archivo001.data", "w");

  if(archivo != NULL)
  {
    printf("El archivo se ha creado exitosamente. Comprueba en la carpeta que se haya creado");
    fclose(archivo);
  }
  else
  {
    printf("El archivo no se ha creado");
  }


  return 0;
}
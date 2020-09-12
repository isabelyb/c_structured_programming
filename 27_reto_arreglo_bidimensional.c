#include <stdio.h>
#include <stdlib.h>


int main()
{
  printf("Reto - Arreglos bidimensionales\nArreglo de 3 filas y 4 columnas\n\n");

  int tabla[3][4];

  tabla[0][0] = 1;
  tabla[0][1] = 0;
  tabla[0][2] = 2;
  tabla[0][3] = 1;
  
  tabla[1][0] = 3;
  tabla[1][1] = 2;
  tabla[1][2] = 4;
  tabla[1][3] = 1;
  
  tabla[2][0] = 6;
  tabla[2][1] = 8;
  tabla[2][2] = 10;
  tabla[2][3] = 2;
  
  printf("Suma de la primera fila: %i \n", tabla[0][0] + tabla[0][1] + tabla[0][2] + tabla[0][3]);

  printf("Suma de la segunda fila: %i \n", tabla[1][0] + tabla[1][1] + tabla[1][2] + tabla[1][3]);

  printf("Suma de la tercera fila: %i \n", tabla[2][0] + tabla[2][1] + tabla[2][2] + tabla[2][3]);
  
  return 0;
}
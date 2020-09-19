#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  printf("Reto - Arreglos bidimensionales e Iteradores\n\nMatriz de calificaciones: 5 filas x 6 columnas\n1. notas: primeros 5 de cada fila, entre 6 y 10\n2. calcular promedio de cada fila y ubicar en 6\n\n");

  float notas[5][6];
   
  for(int i = 0; i < 5; i++)
  {        
    float suma = 0;
    srand(time(0));
    for(int j = 0; j < 5; j++)
      {
      notas[i][j] = rand() % 5 + 6 ;
      printf("(%i, %i): %f \n", i, j, notas[i][j]);
      suma += notas [i][j];
      }
    notas[i][4] = suma / 5;
    printf("(%i, %i): %f Es el promedio de la fila %i\n\n", i, 5, notas[i][4], i+1);
  }

  return 0;
}
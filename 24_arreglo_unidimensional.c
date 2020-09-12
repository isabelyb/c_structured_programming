#include <stdio.h>
#include <stdlib.h>


int main() 
{
  printf("Arreglos unidimensionales\n");

  int integerList[3];

  integerList[0] = 4;
  integerList[1] = 5;
  integerList[2] = 6;

  float floatList[] = {23.5, 45.8, 57.7, 89.5};

  char chartList[6];
  chartList[0] = 'I';
  chartList[1] = 'S';
  chartList[2] = 'A';
  chartList[3] = 'B';
  chartList[4] = 'E';
  chartList[5] = 'L';

  printf("\n Primer entero: \t\t %i", integerList[0]);
  printf("\n Ultimo flotante: \t\t %f", floatList[3]);
  printf("\n Lista de caracteres: \t %c%c%c%c%c%c.\n", chartList[0], chartList[1], chartList[2], chartList[3], chartList[4], chartList[5]);


  return 0;
}
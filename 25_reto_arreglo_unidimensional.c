#include <stdio.h>
#include <stdlib.h>


int main() 
{
  printf("Reto - Arreglos unidimensionales\n\n");

  int integerList[5] = {1, 4, 2, 5, 3};

  printf("Lista del arreglo: \n%i\n%i\n%i\n%i\n%i\n", integerList[0], integerList[1], integerList[2], integerList[3], integerList[4]);
  
  printf("Resultado de la multiplicacion de todos los numeros: %i", integerList[0] * integerList[0]* integerList[1] * integerList[2] * integerList[3] * integerList[4]);  

  return 0;
}
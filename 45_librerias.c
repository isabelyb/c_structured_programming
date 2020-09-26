#include <stdio.h>
#include <stdlib.h>
//#include "operaciones.h"

//guardar un archivo que se llame operaciones.h y guardarlo en la misma carpeta del codigo.carpeta

//float addition (float x, float y)
//{
  //return x + Y;
//}

//float sustraction (float x, float y)
//{
  //return x - Y;
//}

int main() 
{
  printf("Librerias\n");

  int option;


  float firstValue = 10;
  float secondValue = 15;
  float result;

  printf("Soy una calculadora\n");
  printf("Que operacion deseas realizar? \n");
  printf("1. Suma\n2. Resta");
  scanf("%i", &option);
  
  switch(option)
  {
    case 1:
      result = addition(x,y);
    break;

    case 2:
        result = sustraction(x,y);
    break;
  }

  printf("El resultado de la operacion es: %f"; )


  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  float r;
  float h;
  float pi = 3.14159;
  float vCilindro;

printf("Para calcular el radio de tu cilindro, ingresa los siguientes datos en centimetros. \n");

printf("radio: ");

scanf("%f", &r);

printf("altura: ");

scanf("%f", &h);

  vCilindro = pi * (r * r) * h ;

  printf("El volumen de tu cilindro es: %f centimetros", vCilindro);
  
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  float fahrenheit;
  float celsius;

printf("Hola! \n Aqui puedes convertir grados Fahrenheit a grados Celsius\n");

printf("Ingresa la tamperatura en grados fahrenheit: ");

scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9 ;

  printf("La temperatura en Celsius es: %f", celsius);
  
  return 0;
}
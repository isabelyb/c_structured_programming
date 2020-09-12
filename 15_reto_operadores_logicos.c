#include <stdio.h>
#include <stdlib.h>

int main() 
{
  printf("Reto 1 - Operadores Logicos \nSi me das dos numeros, te dire cual de ellos es menor\n");

  float valA, valB;
  
  printf("Ingresa un numero: \n");
  scanf("%f", &valA);

  printf("Ingresa otro numero: \n");
  scanf("%f", &valB); 

  if (valA < valB)
    printf("El menor numero es: %f \n \n", valA);
  
  else
    printf("El menor numero es: %f \n \n", valB);


  printf("Reto 2 - Operadores Logicos \nIngresa tu calificacion (1 a 100) para saber si aprobaste el curso: \n");
  int nota;
  scanf("%i", &nota);

  if ((nota > 60) && (nota > 90))
    printf("Felicidades, aprobaste el curso :)");
  
  else if (nota > 60)
    printf("Buen trabajo, aprobaste el curso");

  else
    printf("Reprobaste, no te rindas, sigue intentando");


  return 0;
}
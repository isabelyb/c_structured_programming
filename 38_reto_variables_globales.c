#include <stdio.h>
#include <stdlib.h>

char nombre;
int nota;

int aprobacion()
{
 if(nota > 6)
 {
   printf("%c aprobo el curso", nombre);
 }
 else
 {
   printf("%c reprobo el curso", nombre);
 }
return 0;
}

int main() 
{
  printf("Reto - Variables Globales\n");

  printf("Ingresa el nombre del alumno: \n");
  scanf("%c", &nombre);
  printf("Ingresa la calificacion: \n");
  scanf("%i", &nota);

  aprobacion();

  return 0;
}
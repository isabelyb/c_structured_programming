#include <stdio.h>
#include <stdlib.h>


int main() 
{
  printf("Cual no es una especie de ave?\n1. Aves del Paraiso\n2. Aves voladoras\n3. Aves corredoras\n");
  
  int option;

  scanf("%i", &option);

  switch(option)
  {
    case 1:
    printf("Estas en lo correcto, las aves del paraiso son un tipo de planta");
    break;

    case 2:
    printf("Las aves voladoras si son un tipo de ave");
    break;

    case 3:
    printf("Las aves corredoras si son un tipo de ave");
    break;

    default:
    printf("Elegiste una opcion incorrecta");
    break;


  }
  
  return 0;
}
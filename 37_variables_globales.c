#include <stdio.h>
#include <stdlib.h>

char publicText [] = {"Texto en una variable global"};

void Check()
{
  printf("\nImprimir desde la funcion: Check\n");
  printf("Variable global:\n");
  printf("%s\n", publicText);
  printf("Variable local: \n");
  //printf("%s", privateText); esta variable es local

}

int main() 
{
  printf("Variables Globales\n");
  
  char privateText [] = {"Texto en una variable local\n"};

  printf("Variable global:\n");
  printf("%s\n", publicText);

  printf("Variable local: \n");
  printf("%s\n", privateText);

  Check();

  return 0;
}
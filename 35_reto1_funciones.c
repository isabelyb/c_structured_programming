#include <stdio.h>
#include <stdio.h>


int Potentiation(int x, int y)
{
  int potentiationRes = 1;
  for(int i = 0; i < y ; i++)
  {
    potentiationRes *= x;
  }
  return potentiationRes; 
}

int main() 
{
  int x, y;
  
  printf("Reto 1 Funciones - Potenciacion\n");

  printf("Digita la base: ");
  scanf("%i", &x);

  printf("Digita el exponente: ");
  scanf("%i", &y);

  int res = Potentiation(x,y);
  
  printf("Resultado es: %i", res);

  return 0;
}
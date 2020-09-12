#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("\nReto Iteradores for\n");

  printf("Imprimir secuencia de Fibonacci hasta la novena vuelta \n\n");
  printf("Version larga: \n\n");
  printf("Vuelta 0: 0 \nVuelta 1: 1 \n");
  
  int a = 0;
  int b = 1;
  int c = a + b;
  
  for(int vuelta = 2; vuelta < 9 ; vuelta++)
    {
    printf("Vuelta %i: %i \n", vuelta, c);
    a = c;
    c = a + b;
    b = c - b;
    }


  printf("\nVersion compacta: \n\n");  

  int A = 0;
  int B = 1;
  
  for(int vuelta = 0; vuelta < 9 ; vuelta++)
  
    {
    printf("Vuelta %i: %i \n", vuelta, A);
    A += B;
    B = A - B;
    }


  return 0;
}
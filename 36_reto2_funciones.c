#include <stdio.h>
#include <stdlib.h>

float exchange(float money_cop,float money_usd, float cop, float usd)
{
  return (money_usd * cop) + (money_cop * usd);
}

int main() 

{
  printf("Reto 2 Funciones - Cambio de Moneda\n");

  int option;
  float money_cop;
  float money_usd;
  float cop = 3826.02;
  float usd = 0.00026;
  
  printf("Selecciona que cambio de moneda quieres hacer\n1: COP a USD\n2: USD a COP\n");
  scanf("%i", &option);

  switch(option)
  {
    case 1:
    printf("digita el valor que quieres cambiar\n");
    scanf("%f", &money_cop);  
    float res_usd = exchange(money_cop,money_usd,cop,usd);
    printf("El cambio es: %f USD",res_usd);
    break;

    case 2:
    printf("digita el valor que quieres cambiar\n");
    scanf("%f", &money_usd);
    float res_cop = exchange(money_cop,money_usd,cop,usd);
    printf("El cambio es: %f COP", res_cop);
    break;

    default:
    printf("Elegiste una opcion incorrecta");
    break;
  }
 

  return 0;
}


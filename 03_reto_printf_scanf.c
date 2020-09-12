# include <stdio.h>
# include <stdbool.h> 


int main()
{
  int cantidad;
  char pajarito;
 
printf("Cuántos pajaritos viste hoy? ");

scanf("%i", &cantidad);

printf("Qué pajaritos viste hoy? \n");

scanf(" %c", &pajarito);

printf("Viste %c individuos \n", pajarito);

printf("Identificaste %i", cantidad);

  return 0;
}

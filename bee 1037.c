#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  double n;

  //inputs
  scanf("%lf", &n);

  //estruturas de decisão
  if ((n >= 0) & (n <=100)){
    if ((n >= 0) & (n <= 25))
      printf("Intervalo [0,25]\n");
    if ((n > 25) & (n <= 50))
      printf("Intervalo (25,50]\n");
    if ((n > 50) & (n <= 75))
      printf("Intervalo (50,75]\n");
    if ((n > 75) & (n <= 100))
      printf("Intervalo (75,100]\n");}

  else
    printf ("Fora de intervalo\n");

  return 0;
}

#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void) {

  //Declaração de variáveis
  double r, vol;

  //Inputs
  scanf("%lf", &r);

  //Calculo
  vol = ((4.0/3) * pi * pow(r, 3));

  //output
  printf("VOLUME = %.3lf\n", vol);
  
  return 0;
}

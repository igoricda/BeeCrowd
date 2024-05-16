#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  int km;
  float l;
  double consumo;

  //inputs
  scanf("%d %fl", &km, &l);

  //calc
  consumo = (km / l);

  //outputs
  printf("%.3lf km/l\n", consumo);

  return 0;
}

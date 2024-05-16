#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  double x1, x2, y1, y2, distancia, dxy, x3, y3;

  //inputs
  scanf("%lf %lf", &x1, &y1);
  scanf("%lf %lf", &x2, &y2);

  //calc
  x3 = ((x2 * x2) - (2 * x1 * x2) + (x1 * x1));
  y3 = ((y2 * y2) - (2 * y1 * y2) + (y1 * y1));
  dxy = (x3 + y3);
  distancia = (sqrt(dxy));

  //outputs
  printf("%.4lf\n", distancia);

  return 0;
}

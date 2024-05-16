#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void) {

  //Declaração de variáveis
  double a, b, c, triang, circ, trapezio, quadrado, retang;

  //Inputs
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  //calculos
  triang = ((a * c ) / 2);
  circ = (pi * (pow(c, 2)));
  trapezio = (((a + b) * c) / 2);
  quadrado = (pow(b, 2));
  retang = (a * b);

  //outputs
  printf("TRIANGULO: %.3lf\n", triang);
  printf("CIRCULO: %.3lf\n", circ);
  printf("TRAPEZIO: %.3lf\n", trapezio);
  printf("QUADRADO: %.3lf\n", quadrado);
  printf("RETANGULO: %.3lf\n", retang);

  return 0;
}

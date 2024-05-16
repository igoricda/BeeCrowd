#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  double a, b, c, perimetro, trapezio;

  //input
  scanf("%lf %lf %lf", &a, &b, &c);

  if(a < b + c && b < a + c && c < a + b){
    perimetro = (a + b + c);
    printf("Perimetro = %.1lf\n", perimetro);}
  else{
    trapezio = (((a + b) * c) / 2);
    printf ("Area = %.1lf\n", trapezio);}
    
  return 0;
}

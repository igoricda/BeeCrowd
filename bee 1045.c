#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  double a, b, c, maior, medio, menor;

  //input
  scanf("%lf %lf %lf", &a, &b, &c);

  if((a >= (b + c)) || (b >= (a + c)) || (c >= (a + b)))
    printf("NAO FORMA TRIANGULO\n");
    
  else if (((a * a) == ((b * b) + (c * c))) || ((b * b) == ((a * a) + (c * c))) || ((c * c) == ((a * a) + (b * b))))
    printf("TRIANGULO RETANGULO\n");

  else if(((a * a) > ((b * b) + (c * c))) || ((b * b) > ((a * a) + (c * c))) || ((c * c) > ((a * a) + (b * b))))
    printf("TRIANGULO OBTUSANGULO\n");
    
  else if(((a * a) < ((b * b) + (c * c))) || ((b * b) < ((a * a) + (c * c))) || ((c * c) < ((a * a) + (b * b))))
    printf("TRIANGULO ACUTANGULO\n");
  
  if(a == b && a == c)
    printf("TRIANGULO EQUILATERO\n");

  if((a == b && a != c) || (a == c && a != b) || (b == c && b != c))
    printf("TRIANGULO ISOSCELES\n");
  
  
  return 0;
}

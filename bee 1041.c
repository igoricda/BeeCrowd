#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  double x, y;

  //input
  scanf("%lf %lf", &x, &y);

  if((x == 0) & (y == 0))
    printf("Origem\n");
  else
    if((x != 0) & (y == 0))
      printf("Eixo X\n");
    if((x == 0) & (y != 0))
      printf("Eixo Y\n");
    else
      if((x > 0) & (y > 0))
        printf("Q1\n");
      if((x > 0) & (y < 0))
        printf("Q4\n");
      if((x < 0) & (y > 0))
        printf("Q2\n");
      if((x < 0) & (y < 0))
        printf("Q3\n");
  
  return 0;
}

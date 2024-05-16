#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  int a, b, c, maiorab, maior;

  //Inputs
  scanf("%d %d %d", &a, &b, &c);

  //Calculos
  maiorab = ((a + b + abs(a - b)) / 2);
  maior = ((maiorab + c + abs(maiorab - c)) / 2);

  //Outputs
  printf("%d eh o maior\n", maior);
  
  return 0;
}

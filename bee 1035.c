#include <stdio.h>
 
int main(void) {

  //Declaração de variáveis
  int a, b, c, d;

  //inputs
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if((b > c) & (d > a) & ((c + d) > (b + a)) & (c > 0) & (d > 0) & (a % 2 == 0))
    printf("Valores aceitos\n");
  else
    printf("Valores nao aceitos\n");

  return 0;
}

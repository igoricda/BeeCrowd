#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  int a, b, c;

  //input
  scanf("%d %d %d", &a, &b, &c);

  if((a > b) & (a > c) & (b > c))
    printf("%d\n%d\n%d\n", c, b, a);
  if((a > b) & (a > c) & (c > b))
    printf("%d\n%d\n%d\n", b, c, a);
  if((b > a) & (b > c) & (a > c))
    printf("%d\n%d\n%d\n", c, a, b);
  if((b > a) & (b > c) & (c > a))
    printf("%d\n%d\n%d\n", a, c, b);
  if((c > a) & (c > b) & (a > b))
    printf("%d\n%d\n%d\n", b, a, c);
  if((c > a) & (c > b) & (b > a))
    printf("%d\n%d\n%d\n", a, b, c);
  
printf("\n%d\n%d\n%d\n", a, b, c);


  return 0;
}

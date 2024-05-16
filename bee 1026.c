#include <stdio.h>

int main(void) {

  unsigned a, b, c, d, e, g;

  while (scanf("%u %u", &a, &b) != EOF){
  c = (a & ~b) | (b & ~a);

  printf("%u\n", c);
}
  
  
  return 0;
}

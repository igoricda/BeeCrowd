#include <stdio.h>

int main(void) {
  float s = 0, aux = 1, help = 1;
  for(float i = 0; aux < 39; i++){
    s += (aux/help);
    aux += 2;
    help *= 2;
  }
  printf("%.2lf\n", s);
  return 0;
}

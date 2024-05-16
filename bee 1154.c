#include <stdio.h>

int main(void) {
  int idade = 0, y = 0;
  float aux = 0;
  while(scanf("%d", &idade) && idade >= 0){
    aux += idade;
    y++;
  }
  printf("%.2f\n", aux/y);
  return 0;
}

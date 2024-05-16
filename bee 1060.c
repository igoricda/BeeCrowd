#include <stdio.h>

int main(void) {

  int c = 0; //contador de positivos
  float x; // Input do usuario
  
  for(int i = 0; i < 6; i++){
    scanf("%f", &x);
    x > 0 ? c++ : c;
  }
  printf("%d valores positivos\n", c);
  
  return 0;
}

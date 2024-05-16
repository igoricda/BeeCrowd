#include <stdio.h>

int main(void) {

  int c = 0; //contador de positivos
  float x; // Input do usuario
  float y = 0;
  double media;
  
  for(int i = 0; i < 6; i++){
    scanf("%f", &x);
    x > 0 ? c++ : c;
    x > 0 ? y += x: y;
  }
  media = (y / c);
  printf("%d valores positivos\n", c);
  printf("%.1f\n", media);
  
  return 0;
}

#include <stdio.h>

int main(void) {

  int c = 0; //contador de positivos
  int x; // Input do usuario
  
  for(int i = 0; i < 5; i++){
    scanf("%d", &x);
    (x % 2 == 0) ? (c++) : c;
  }
  
  printf("%d valores pares\n", c);
  
  return 0;
}

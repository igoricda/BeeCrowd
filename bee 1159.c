#include <stdio.h>

int main(void) {
  int n, x, y, soma = 0, aux;
  
  while(scanf("%d", &n) && n){
    for(int j = 0; j < 5; j++){
      if(n % 2 != 0){
        n += 1;}
        soma += n;
        n += 2;
    }
    printf("%d\n", soma);
    soma = 0;
  }
  return 0;
}

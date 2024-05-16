#include <stdio.h>

int main(void) {
  int n, x, y, soma = 0, aux;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d %d", &x, &y);
    for(int j = 0; j < y; j++){
      if(x % 2 == 0){
        x += 1;}
      soma += x;
      x += 2;
    }
    printf("%d\n", soma);
    soma = 0;
  }
  return 0;
}

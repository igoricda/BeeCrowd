#include <stdio.h>

int main(void) {
  int n, anterior = 0, atual = 1, fibonacci;
  scanf("%d", &n);
  printf("0 1 ");
  for(int i = 1; i < n - 1; i++){
    fibonacci = atual + anterior;
    anterior = atual;
    atual = fibonacci;
    if(i < n - 2)
      printf("%d ", fibonacci);
    else
      printf("%d\n", fibonacci);
  }
  
  return 0;
}

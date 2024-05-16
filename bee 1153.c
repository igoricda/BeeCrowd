#include <stdio.h>
//n = n * n-i
int main(void) {
  int n, aux, c = 0, fatorial = 1;
  
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    aux = n;
    fatorial *= (aux - i);
    aux = fatorial;
  }
  printf("%d\n", fatorial);
  return 0;
}

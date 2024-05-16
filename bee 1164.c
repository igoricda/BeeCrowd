#include <stdio.h>

int main(void) {
  int ncasos, n, aux = 0;
  scanf("%d", &ncasos);
  for (int i = 0; i < ncasos; i++) {
    scanf("%d", &n);
    for (int j = 0; aux < n; j++) {
      aux += j;
    }
    if (aux == n && n != 1) {
      printf("%d eh perfeito\n", n);
    } else {
      printf("%d nao eh perfeito\n", n);
    }
    aux = 0;
  }
  return 0;
}

#include <math.h>
#include <stdio.h>

int main(void) {
  int ncasos, n, aux = 0, teste, c = 0;
  scanf("%d", &ncasos);
  for (int i = 0; i < ncasos; i++) {
    scanf("%d", &n);
    c = 1;
    for (int j = 2; j <= (int)sqrt(n); j++) {
      teste = n % j;
      if (teste == 0) {
        c++;
      }
    }
    if (c == 1 && n != 1) {
      printf("%d eh primo\n", n);
    } else {
      printf("%d nao eh primo\n", n);
    }
  }
  return 0;
}

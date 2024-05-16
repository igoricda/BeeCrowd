#include <math.h>
#include <stdio.h>

int main(void) {
  int casos, picos, i;

  while (scanf("%d", &casos) && casos) {
    picos = 0;
    int ondas[casos];
    for (i = 0; i < casos; i++) {
      scanf("%d", &ondas[i]);
    }
    for (i = 1; i < casos - 1; i++) {
      if (ondas[i] > ondas[i - 1] && ondas[i] > ondas[i + 1]) {
        picos++;
      } else if (ondas[i] < ondas[i - 1] && ondas[i] < ondas[i + 1]) {
        picos++;
      }
    }
    if (ondas[casos - 1] > ondas[casos - 2] && ondas[casos - 1] > ondas[0])
      picos++;
    else if (ondas[casos - 1] < ondas[casos - 2] && ondas[casos - 1] < ondas[0])
      picos++;
    
    if (ondas[0] > ondas[1] && ondas[0] > ondas[casos - 1])
      picos++;
    else if (ondas[0] < ondas[1] && ondas[0] < ondas[casos - 1])
      picos++;
    printf("%d\n", picos);
  }
  return 0;
}

#include <stdio.h>

int main(void) {
  int ncasos, pa, pb, anos = 0, pa1, pb1;
  double ga, ga1, gb, gb1;
  scanf("%d", &ncasos);
  for (int i = 0; i < ncasos; i++) {
    scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
    anos = 0;
    while (pa <= pb) {
      anos++;
      pa += (pa * (ga / 100));
      pb += (pb * (gb / 100));
      if (anos > 100) {
        break;
      }
    }
    if (anos > 100) {
      printf("Mais de 1 seculo.\n");
    } else {
      printf("%d anos.\n", anos);
    }
  }
  return 0;
}

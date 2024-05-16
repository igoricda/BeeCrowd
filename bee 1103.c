#include <stdio.h>

int main(void) {
 int h1, m1, h2, m2, msono;

  while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) && h1 || m1 || h2 || m2){
    h1 = h1 * 60;
    h2 = h2 * 60;

    msono = ((h2 + m2) - (h1 + m1));
    if(msono < 0){
      msono += (24 * 60);
    }
    printf("%d\n", msono);
  }
  return 0;
}

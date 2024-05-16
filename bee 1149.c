#include <stdio.h>

int main(void) {
  int x = 0, n = 0, b = 0;
  scanf("%d", &x);
  while(scanf("%d", &n) && (n <= 0));
  for(int i = 1; i <= n; i++){
    b += x;
    x++;
  }
  printf("%d\n", b);
  return 0;
}

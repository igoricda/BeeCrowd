#include <stdio.h>

int main(void) {

  int x;

  scanf("%d", &x);

  for(int i = 1; i <= x; i +=2)
    printf("%d\n", i);
  
  return 0;
}

#include <stdio.h>

int main(void) {
  int x, z, k = 0, j = 0;
  scanf("%d", &x);
  while(1){
    scanf("%d", &z);
    if(z > x)
      break;
  }
  for(int i = x; x < z; i++){
    x += i;
    j++;
  }
  printf("%d\n", j + 1);
  return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
  int entrada, aux = 1;

  scanf("%d", &entrada);
  for(int i = 1; i <= entrada; i++){
      printf("%d %d %d\n", i, i * i, i * i * i);
  }
 return 0;
}

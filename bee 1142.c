#include <stdio.h>
#include <math.h>

int main()
{
  int entrada, aux = 1;

  scanf("%d", &entrada);
  for(int i = 0; i < entrada; i++){
      printf("%d ", aux);
      aux++;
      printf("%d ", aux);
      aux++;
      printf("%d PUM\n", aux);
      aux++;
      aux ++;
  }
 return 0;
}

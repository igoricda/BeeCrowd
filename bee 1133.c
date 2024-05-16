
#include <stdio.h>
#include <math.h>

int main()
{
  int x = 0, y = 0, menor = 0, maior = 0, aux = 0;

  scanf("%d %d", &x, &y);
  (x > y) ? ((maior = x) && (menor = y)) : ((menor = x) && (maior = y));

  for(int i = (menor + 1); i < maior; i++){
    if((i % 5 == 2) || (i % 5 == 3)){
      printf("%d\n", i);
    }
  }
  
 return 0;
}

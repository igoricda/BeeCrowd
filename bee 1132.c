#include <stdio.h>
#include <math.h>

int main()
{
  int x = 0, y = 0, menor = 0, maior = 0, aux = 0;

  scanf("%d %d", &x, &y);
  (x > y) ? ((maior = x) && (menor = y)) : ((menor = x) && (maior = y));

  for(int i = menor; i <= maior; i++){
    if(i % 13 != 0){
      aux += i;
    }
  }
  printf("%d\n", aux);
 return 0;
}

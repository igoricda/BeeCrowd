#include <stdio.h>

int main()
{
 int x, y, soma = 0, n;
 int min, max;

scanf("%d", &n);

  for(int l = 0; l < n; l++){
  
 scanf("%d %d", &x, &y);

 if(x < y){
  min = x;
  max = y;
 }else{
  max = x;
  min = y;
 }

 for(int i = (min + 1); i < max; ++i)
 {
  if(i % 2 != 0){
   soma += i;
  }
 }

 printf("%d\n", soma);

  soma = 0;
  }
 return 0;
}

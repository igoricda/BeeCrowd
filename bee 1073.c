#include <stdio.h>
int main(){
 int x, c = 0;
  scanf("%d", &x);
  for(int i = 1; i <= x; i++){
    if(i % 2 == 0)
      printf("%d^2 = %d\n", i, (i * i)); 
  } 
 return 0;
}

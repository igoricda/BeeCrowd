#include <stdio.h>
int main(){
 int x, c1 = 0, c2 = 0, y;
  scanf("%d", &x);
  for(int i = 0; i < x; i++){
    scanf("%d", &y);
    if((y >= 10) & (y <= 20)){
      c1++;}
    else
      c2++;
  }
  printf("%d in\n%d out\n", c1, c2);
 
 return 0;
}

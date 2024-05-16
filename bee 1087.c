#include <stdio.h>

int main()
{
  int x1, x2, y1, y2, final;
  

  while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2) && (x1 || y1 || x2 || y2)){

    if((x1 == x2) && (y1 == y2)){
      final = 0;}
    else if((x1 == x2) && (y1 != y2)){
      final = 1;}
    else if((x1 != x2) && (y1 == y2)){
      final = 1;}
    else if((abs(x2 - x1) == abs(y2 - y1))){
      final = 1;
    }
    else{
      final = 2;}
    printf("%d\n", final);
  }
  
 return 0;
}


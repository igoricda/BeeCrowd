#include <stdio.h>
#include <math.h>

int main(){

  int x, a;

  scanf("%d", &x);
  
  for(int i = 0; i < x; i++){

    scanf("%d", &a);

    if(a > 0){
      if(a % 2 == 0)
        printf("EVEN POSITIVE\n");
      else
        printf("ODD POSITIVE\n");
    }
    else if(a < 0){
      if(a % 2 == 0)
        printf("EVEN NEGATIVE\n");
      else
        printf("ODD NEGATIVE\n");
    }
    else
      printf("NULL\n");
  }
 return 0;
}

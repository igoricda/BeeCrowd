//bee 1101

#include <stdio.h>

int main()
{
  int a, b, min = 0, max = 0, sum;

  while(scanf("%d %d", &a, &b) && ((a > 0) && (b > 0))){

    if(a > b){
      max = a;
      min = b;
    }
    else{
      min = a;
      max = b;
    }
    
    for(int i = min; i < max + 1; i++){
      printf("%d ", i);
      sum += i;
    }
    printf("Sum=%d\n", sum);
    sum = 0;
  }
 return 0;
}


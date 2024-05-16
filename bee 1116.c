
#include <stdio.h>

int main()
{
  float x, y, div;
  int n;


  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){
    scanf("%f %f", &x, &y);
    if(y == 0){
      printf("divisao impossivel\n");
    }
    else{
      div = x / y;
      printf("%.1f\n", div);
    }
    
  }
  
 return 0;
}

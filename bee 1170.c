#include <stdio.h>
#include <string.h>
#include <math.h>

int g(double quad){
  if(quad <= 1){
    return 0;
  }
  else
    return 1 + g(quad/2);
}

int main(){
  int n;
  double quad;

  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){
    scanf("%lf", &quad);
    printf("%d dias\n", (g(quad)));
  }
  return 0;	
}

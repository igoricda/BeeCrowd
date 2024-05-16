#include <stdio.h>
#include <string.h>
#include <math.h>

double g(int quad){
unsigned long long int a;
  if(quad == 0){
    return 1;
  }
  else
    return 2  * g(quad - 1);
}

int main(){
  int quad, n;
  unsigned long long int graos;


  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%d", &quad);
    printf("%.lf kg\n", trunc((g(quad)/12000)));
  }
  return 0;	
}

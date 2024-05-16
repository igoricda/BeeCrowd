#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

double n, v[100];
  
scanf("%lf", &n);
v[0] = n;
for(int i = 1; i < 100; i++){
  v[i] = n / 2;
  n = v[i];
}
  for(int j = 0; j < 100; j++){
    printf("N[%d] = %.4lf\n", j, v[j]);
  }

return 0;
}

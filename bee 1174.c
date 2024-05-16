#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

double v[100], ent;

for(int i = 0; i < 100; i++){
    scanf("%lf", &ent);
    v[i] = ent;
  }
  for(int j = 0; j < 100; j++){
    if(v[j] <= 10)
      printf("A[%d] = %.1lf\n", j, v[j]);
  }
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

int v[10], ent;

  for(int i = 0; i < 10; i++){
    scanf("%d", &ent);
    if(ent > 0){
      v[i] = ent;
    }
    else
      v[i] = 1;
  }
  for(int j = 0; j < 10; j++){
    printf("X[%d] = %d\n", j, v[j]);
  }
return 0;
}

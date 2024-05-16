#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

int v[10], ent;
  scanf("%d", &ent);
  v[0] = ent;
  for(int i = 1; i < 10; i++){
    v[i] = ent * 2;
    ent = v[i]; 
  }
  for(int j = 0; j < 10; j++){
    printf("N[%d] = %d\n", j, v[j]);
  }
return 0;
}

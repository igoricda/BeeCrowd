#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

int v[100], ent;

for(int i = 0; i < 20; i++){
    scanf("%d", &ent);
    v[19 - i] = ent;
  }
  for(int j = 0; j < 20; j++){
    printf("N[%d] = %d\n", j, v[j]);
  }
return 0;
}

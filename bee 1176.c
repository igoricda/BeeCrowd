#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned long long v[61];

int main(){

v[0] = 0;
v[1] = 1;
for(int i = 2; i <= 60; i++){
  v[i] = v[i - 1] + v[i - 2];
}
int n, ent;
  
scanf("%d", &n);
for(int i = 0; i < n; i++){
  scanf("%d", &ent);
  printf("Fib(%d) = %llu\n",ent, v[ent]);
  }

return 0;
}

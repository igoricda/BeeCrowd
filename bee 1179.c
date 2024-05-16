#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned long long v[61];

int main(){

int n, par[15], impar[15], p = 0, imp = 0;
  

for(int i = 0; i < 15; i++){
  scanf("%d", &n);
  if(n % 2 == 0){
    par[p] = n;
    p++;
  }
  else{
    impar[imp] = n;
    imp++;
  }
  if(imp == 5){
    for(int j = 0; j < 5; j++){
      printf("impar[%d] = %d\n", j, impar[j]);
    }
    imp = 0;
  }
  if(p == 5){
    for(int j = 0; j < 5; j++){
      printf("par[%d] = %d\n", j, par[j]);
    }
    p = 0;
  }
}
  for(int i = 0; i < imp; i++){
    printf("impar[%d] = %d\n", i, impar[i]);
  }
  for(int i = 0; i < p; i++){
    printf("par[%d] = %d\n", i, par[i]);
  }
return 0;
}

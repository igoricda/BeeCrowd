#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned long long v[61];

int main(){

int n, v[10001];
  
scanf("%d", &n);
for(int i = 0; i < 1000; i++){
 printf("N[%d] = %d\n", i, (i % n));
}

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned long long v[61];

int main(){

long double men;
int n, pos = 0;

scanf("%d", &n);
int v[n];
for(int i = 0; i < n; i++){
  scanf("%d", &v[i]);
}
men = v[0];
pos = 0;
for(int i = 1; i < n; i++){
  if(v[i] < men){
    men = v[i];
    pos = i;
  }
}
printf("Menor valor: %.Lf\nPosicao: %d\n", men, pos);

return 0;
}

#include <stdio.h>


int main(){
  long double a, b, result;

while(scanf("%Lf %Lf", &a, &b) != EOF){
  result = b - a;
  if(result < 0)
    result *= -1;
  printf("%.Lf\n", result);
}
return 0;
}

#include <stdio.h>
#include <math.h>

int main(){

  double v1, v2, v3, media;
  int n;

  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){

  scanf("%lf %lf %lf", &v1, &v2, &v3);
    
  media = (((v1 * 2) + (v2 * 3) + (v3 * 5)) / 10);

    printf("%.1lf\n", media);
  
  }
 return 0;
}

#include <stdio.h>
#include <math.h>

int main(){

  int n, total, x;
  double  percentR, percentS, percentC, coelhos = 0, ratos = 0, sapos = 0;
  char tipo;

  scanf("%d", &n);
  for(int i = 0; i < n; i++){

    scanf("%d %c", &x, &tipo);

    if(tipo == 'C'){
      coelhos += x;
    }
    else if(tipo == 'R'){
      ratos += x;
    }
    else{
      sapos += x;
    }
  }
  total = (coelhos + ratos + sapos);
    
  printf("Total: %d cobaias\n", total);
  printf("Total de coelhos: %.0f\n", coelhos);
  printf("Total de ratos: %.0f\n", ratos);
  printf("Total de sapos: %.0f\n", sapos);

  percentR = (ratos* 100 / total);
  percentS = (sapos * 100 / total);
  percentC = (coelhos * 100 / total);
  
  printf("Percentual de coelhos: %.2lf %\n", percentC);
  printf("Percentual de ratos: %.2lf %\n", percentR);
  printf("Percentual de sapos: %.2lf %\n", percentS);
  
  
 return 0;
}

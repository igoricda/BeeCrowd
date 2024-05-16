#include <stdio.h>
#include <math.h>

int main(){

  int arm = 0, x, posicao;
  
  for(int i = 1; i <= 100; i++){
    scanf("%d", &x);
    if(x > arm){
      arm = x;
      posicao = i;
    }

  }
  printf("%d\n%d\n", arm, posicao);
 return 0;
}

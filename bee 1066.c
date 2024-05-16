#include <stdio.h>

int main(void) {

  int c = 0; //contador de positivos
  int x, par = 0, impar = 0, posit = 0, negat = 0; // Input do usuario
  
  for(int i = 0; i < 5; i++){
    scanf("%d", &x);
    if(x % 2 == 0)
      par++;
    else
      impar++;
    if(x > 0)
      posit++;
    else if(x < 0)
      negat++;
    
  }
  
  printf("%d valor(es) par(es)\n", par);
  printf("%d valor(es) impar(es)\n", impar);
  printf("%d valor(es) positivo(s)\n", posit);
  printf("%d valor(es) negativo(s)\n", negat);
  
  return 0;
}

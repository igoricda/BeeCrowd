#include <stdio.h>
 
int main(void) {

  //Declaração de variáveis
  int avgsp, tempoh;
  double distperc, litros;

  //inputs
  scanf("%d %d", &tempoh, &avgsp);

  //calc
  distperc = (avgsp * tempoh);
  litros = (distperc / 12);
  
  //outputs
  printf("%.3lf\n", litros);

  return 0;
}

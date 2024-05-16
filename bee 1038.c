#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  int codlanche, quant;
  double value;

  //inputs
  scanf("%d %d", &codlanche, &quant);
  
  //estruturas de decisão
  switch (codlanche){
    case 1:
      value = (4 * quant);
      break;
    case 2:
      value = (4.5 * quant);
      break;
    case 3:
      value = (5 * quant);
      break;
    case 4:
      value = (2 * quant);
      break;
    case 5:
      value = (1.5 * quant);
      break;
  }

  //Outputs
  printf("Total: R$ %.2lf\n", value);

  return 0;
}

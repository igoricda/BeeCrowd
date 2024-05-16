#include <stdio.h>
#include <math.h>



int main(void) {

  //Declaração de variáveis
  int n, horas, horas1, minutos, minutos1, segundos;

  //inputs
  scanf("%d", &n);
  
  //calc
  horas = ( n / 3600);
  horas1 = (n - (horas * 3600));
  minutos1 = (horas1 / 60);
  minutos = (minutos1 % 60);
  segundos = (n - ((horas * 3600) + (minutos * 60)));
  
  //outputs
  printf("%d:%d:%d\n",horas, minutos, segundos );

  return 0;
}

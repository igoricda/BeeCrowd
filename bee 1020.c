#include <stdio.h>
 
int main(void) {

  //Declaração de variáveis
  int diasi, ano,ano1, mes, mes1, dia;

  //inputs
  scanf("%d", &diasi);
  
  //calc
  ano = (diasi / 365);
  ano1 = (diasi - (ano * 365));
  mes1 = (ano1 / 30);
  mes = (mes1 % 30);
  dia = (diasi - ((ano * 365) + (mes * 30)));
  
  
  //outputs
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

  return 0;
}

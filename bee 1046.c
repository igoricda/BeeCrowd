#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  int a, b, tempo;

  //input
  scanf("%d %d", &a, &b);

 if(a > b){
  tempo = ((24 - a) + b);  
  printf("O JOGO DUROU %d HORA(S)\n", tempo);}

  else if(a < b){
    tempo = (b - a);
    printf("O JOGO DUROU %d HORA(S)\n", tempo);}
    
  else if(a == b)
    printf("O JOGO DUROU 24 HORA(S)\n");
  
  return 0;
}

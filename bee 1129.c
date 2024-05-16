#include <stdio.h>
#include <math.h>

int main()
{
  int testes, a, b, c, d, e, j = 0;
  char resposta;
  while(scanf("%d", &testes) && testes){
  for(int i = 0; i < testes; i++){
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    j = 0;
    if(a <= 127){
      j++;
      resposta = 'A';
    }
    if(b <= 127) {
      j++;
      resposta = 'B';}
    if(c <= 127) {
      j++;
      resposta = 'C';}
    if(d <= 127) {
      j++;
      resposta = 'D';}
    if(e <= 127) {
      j++;
      resposta = 'E';}
    if(j == 1){
      printf("%c\n", resposta);
    }
    else{
      printf("*\n");
  }
    }
  }
  return 0;
}

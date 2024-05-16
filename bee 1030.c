#include <stdio.h>
#include <stdlib.h>

unsigned recorrencia(int soldados, int pulos){
    unsigned retorno = 0;
    for(int i = 2; i <= soldados; i++){
       retorno = (retorno + pulos) % i;
    }
  return retorno;
}

int main() {

  int testes = 0, casos, n, k;

  scanf("%d", &casos);

  while(casos--){
    scanf("%d %d", &n, &k);
    printf("Case %d: %d\n", ++testes, recorrencia(n, k) + 1);
    
  }
  return 0;
}

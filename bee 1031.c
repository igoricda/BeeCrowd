#include <stdio.h>

unsigned recorrencia(unsigned short regioes, unsigned short n){
    unsigned retorno = 0;
    for(int i = 1; i < regioes; i++){
       retorno = (retorno + n) % i;
    }
  return retorno;
}

int main (){
	
	unsigned short regioes;
	
	while(scanf("%hu", &regioes)){
		unsigned short n = 1;
		if(regioes == 0)
			break;
		while(recorrencia(regioes, n) != 11){
			n++;
		}
		printf("%hu\n", n);
	}
	
	return 0;
}


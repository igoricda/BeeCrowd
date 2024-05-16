#include <stdio.h>
 
 int prime[3502] = {};
 
 
 int ehprimo(int x){
	if (x == 2) return 1;
	if (x % 2 == 0) return 0;
	for (int i = 3; i * i <= x; i+=2){
		if(x % i == 0) return 0;
	}
	return 1;
}
void nprimos(){
	int i, j;
	for (i = 2, j = 0; i < 32650; i++){
		if(ehprimo(i))
			prime[j++] = i;
	}
}
int recorrencia(int x){
	int i, retorno = 0;
	for(i = 1; i <= x; ++i){
		retorno = (retorno + prime[x - i]) % i;
	}
	return retorno;
}
 
 
int main(){
	
	nprimos();
	int x;
	while(scanf("%d", &x) && x != 0){
		printf("%d\n", recorrencia(x) + 1);
	}
	
	return 0;
}


#include <stdio.h>
#include <string.h>
 
int main(){
	
	char expr[1001];
	int casos, tam;
	
	scanf("%d", &casos);
	
	for(int l = 0; l < casos; l++){
		int dia = 0;
		scanf("%s", expr);
		getchar();
		tam = strlen(expr);
		for(int i = 0; i < tam; i++){
			if(expr[i] == '>'){
				for(int j = i; j >= 0; j--){
					if(expr[j] == '<'){
						dia++;
						expr[j] = 7;
						expr[i] = 7;
						break;
					}
				}
			}
		}
	
		printf("%d\n", dia);
		
	}
	return 0;
}


#include <stdio.h>
#include <string.h>

int verifParent(char *str){
	 short par = 0;
	 
	 if(*str == ')')
		return 0;
	while((*str) && (par >= 0)){
		if(*str == '(')
			par++;
		if(*str == ')')
			par--;
		
		str++;
	}
	if(par == 0)
		return 1;
	else
		return 0;
}
 
 
int main(){
	
	char expr[1001];
	
	while(scanf("%s", expr) != EOF){
	getchar();
	if(verifParent(expr) == 1)
		printf("correct\n");
	else
		printf("incorrect\n");
	}
	return 0;
}

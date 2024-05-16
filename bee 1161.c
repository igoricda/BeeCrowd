#include <stdio.h>

long double fatorial(long double a){
  int c = a;
  for(int i = c -1 ; i > 0; i--){
    a *= i;
  }
  if (a == 0){
	a = 1;
  }
  return a;
}

int main(){
	int n, m;
	while(scanf("%d %d", &n, &m) != EOF){
		printf("%.0Lf\n", fatorial(n) + fatorial(m));
	}
	
	return 0;
}


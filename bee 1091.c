#include <stdio.h>

int main()
{
  int m, n, k, m1, n1, fim;

while(scanf("%d", &k) && k){
  
  scanf("%d %d", &m, &n);
  
  for(int i = 0; i < k; i++){
    scanf("%d %d", &m1, &n1);
    if((m == m1) || (n == n1)){
      printf("divisa\n");
    }
    else if((m1 > m) && (n1 > n)){
      printf("NE\n");
    }
    else if((m1 > m) && (n1 < n)){
      printf("SE\n");
    }
    else if((m1 < m) && (n1 > n)){
      printf("NO\n");
    }
    else{
      printf("SO\n");
    }
  }
}

  
 return 0;
}




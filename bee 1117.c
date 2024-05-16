//bee 1117

#include <stdio.h>

int main()
{
  float n1, n2, c = 0;
  while(1){
    scanf("%f", &n1);
    if(n1 >= 0 && n1 <= 10){
      c += n1;
        while(1){
          scanf("%f", &n2);
          if(n2 >= 0 && n2 <= 10){
          c += n2;
      break;
    }
    else
      printf("nota invalida\n"); 
  }
      break;
    }
    else
      printf("nota invalida\n"); 
  }

printf("media = %.2f\n", c/2);
    
 return 0;
}

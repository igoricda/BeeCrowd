//bee 1118

#include <stdio.h>

int main()
{
  float n1, n2, c = 0;
  int nc;
  while(1){
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
c = 0;
    while(1){
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &nc);
       if(nc == 1){
         break;}
       else if(nc == 2){
         return 0;
       }}
  }
 return 0;
}

#include <stdio.h>
#include <math.h>

int main(){

  int I = 1, J = 60;
  
  printf("I=%d J=%d\n", I, J);
  do{ I += 3;
     J -= 5;
    printf("I=%d J=%d\n", I, J);
  }while(J != 0);

 return 0;
}

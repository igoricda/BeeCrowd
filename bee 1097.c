#include <stdio.h>
#include <math.h>

int main(){

  int I = 1, J = 7;
  
  do{
    for(int i = 0; i < 3; i++){
      printf("I=%d J=%d\n", I, J);
      J -= 1;
    }
      I += 2;
      J += 5;
    
    }while (I <= 9);

 return 0;
}

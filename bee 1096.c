#include <stdio.h>
#include <math.h>

int main(){

  int I = 1, J = 7;
  
  do{
    printf("I=%d J=%d\n", I, J);
    J -= 1;
    if (J < 5){
      I += 2;
      J += 3;
    }
  }while (I <= 9);

 return 0;
}

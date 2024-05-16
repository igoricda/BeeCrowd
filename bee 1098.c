#include <stdio.h>
#include <math.h>

int main(){

  double I = 0, J = 1;

  do{
    for(int i = 0; i < 3; i++){
   if((I == 0) || (I > 0.9 && I < 1.1) || (I > 1.8)){
     printf("I=%.0f J=%.0f\n", I, J);}
     else{
       printf("I=%.1f J=%.1f\n", I, J);
     }
      J += 1;
    }
      I += 0.2;
      J -= 2.8;
    
    }while (I < 2.1);

 return 0;
}

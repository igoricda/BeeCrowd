#include <stdio.h>
#include <math.h>

int main(void) {

  //declaração de variáveis
double A, B, C, R1, R2, Delta, vdelta;

  //inputs
  scanf("%lf", &A);
  scanf("%lf", &B);
  scanf("%lf", &C);

  //Calculos
  Delta = ((B * B) - (4 * A * C));
  vdelta = (sqrt(Delta));
  
   if(Delta < 0 || A == 0){
    printf("Impossivel calcular\n");
   }
   else{
    R1 = ((((-1) * B) + (vdelta)) / (2 * A));
    R2 = ((((-1) * B) - (vdelta)) / (2 * A));;

    printf("R1 = %.5lf\n", R1);
    printf("R2 = %.5lf\n", R2);
  }
    
  return 0;
}

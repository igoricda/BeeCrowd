#include <stdio.h>
#include <math.h>

int main()
{
  int inp, aux = 1;
while(scanf("%d", &inp) && inp){
  for(int i = 1; i <= inp; i++){
    if(i < inp){
    printf("%d ", i);
    }
    else{
       printf("%d\n", i);
    }
  }
}
 return 0;
}

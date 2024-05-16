#include <stdio.h>
#include <math.h>

int main()
{
  int inp1, inp2, aux = 1;

  scanf("%d %d", &inp1, &inp2);
  for(int i = 1; i <= (inp2/inp1); i++){
    for(int j = 0; j < inp1; j++){
      if(j < (inp1 - 1)){
        printf("%d ", aux);
        }
      else{
        printf("%d\n", aux);
      }
      aux++;
      }
    }
 return 0;
}

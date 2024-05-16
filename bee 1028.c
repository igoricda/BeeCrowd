#include <stdio.h>
int main(){

 int mdc, f1, f2, casos;

  scanf("%d", &casos);
  
  for(int i = 0; i < casos; i++){
    
    scanf("%d %d", &f1, &f2);

    while(f2 != 0){

      mdc = f1 % f2;
      f1 = f2;
      f2 = mdc;
    }

    printf("%d\n", f1);
  }
  
 return 0;
}

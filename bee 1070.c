#include <stdio.h>

int main(void) {

  int x;

  scanf("%d", &x);

  for(int i = 0; i < 6; i ++){
    if (x % 2 == 1){
      printf("%d\n", x);
      x += 2;
    }
    else{
        printf("%d\n", x + 1);
        x += 2;}
   }
   
  return 0;
}


//bee 1115

#include <stdio.h>

int main()
{
  int x, y;

  while(scanf("%d %d", &x, &y) && (x && y)){
    if((x > 0) && (y > 0)){
      printf("primeiro\n");
    }
    else if((x > 0) && (y < 0)){
      printf("quarto\n");
    }
    else if((x < 0) && (y > 0)){
      printf("segundo\n");
    }
    else{
      printf("terceiro\n");
    }

  }
 return 0;
}



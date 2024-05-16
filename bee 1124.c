//bee 1124

#include <stdio.h>
#include <math.h>

int main()
{
  int l, c, r1, r2, teste, menor;

  while(scanf("%d %d %d %d", &l, &c, &r1, &r2) && (l || c || r1 || r2))
  {
    menor = (l < c)? l : c;
    if((menor >= 2 * r1) && (menor >= 2 * r2) && (hypot(l - (r2 + r1), c - (r2 + r1)))  >= (r1 + r2))
    {
      printf("S\n");
    }
    else
      printf("N\n");
  }
  
 return 0;
}

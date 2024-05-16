//bee 1181

#include <stdio.h>

int i, j;
double m[12][12];

int main()
{
  double k = 0.0;
  char op;
  int l;
  
  scanf("%d %c", &l, &op);
  for(i = 0; i < 12; i++)
  {
    for(j = 0; j < 12; j++)
    {
      scanf("%lf",&m[i][j]); 
    }
  }
  for(i = 0; i < 12; i++){
    k += m[l][i];
  }

  if(op == 'S')
  {
  printf("%.1lf\n", k);
  }
  else if(op == 'M')
  {
    printf("%.1lf\n", k / 12);
  }
 return 0;
}

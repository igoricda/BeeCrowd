#include <stdio.h>

int i, j;
double m[12][12], con = 0;

int main()
{
  double k = 0.0;
  char op;

  scanf("%c", &op);
  for(i = 0; i < 12; i++)
  {
    for(j = 0; j < 12; j++)
    {
      scanf("%lf",&m[i][j]); 
    }
  }
  for(i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      if(j < i){
        k += m[i][j];
        con++;
      }
    }
  }

  if(op == 'S')
  {
  printf("%.1lf\n", k);
  }
  else if(op == 'M')
  {
    printf("%.1lf\n", k / con);
  }
 return 0;
}

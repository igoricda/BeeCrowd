#include <stdio.h>

int i, j;
double m[12][12], con = 0, c = 2, inicio = 1, fim = 10;

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
  for(i = 11; i > 6; i--){
    for(int j = inicio; j <= fim; j++){
        k += m[i][j];
        con++;
    }
    inicio++;
    fim--;
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

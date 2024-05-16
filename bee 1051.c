#include <stdio.h>

int main()
{
  double salario;

  scanf("%lf", &salario);

  if(salario <= 2000)
    printf("Isento\n");
  else if(salario > 2000 && salario <= 3000)
    printf("R$ %.2lf\n", salario = (salario - 2000) * 0.08);
  else if(salario > 3000 && salario <= 4500)
    printf("R$ %.2lf\n", salario = ((salario - 3000) * 0.18) + 80);
  else
    printf("R$ %.2lf\n", salario = ((salario - 4500) * 0.28) + 80 + (1500 * 0.18));
  
  return 0;
}

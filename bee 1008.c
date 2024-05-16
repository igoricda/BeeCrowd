#include <stdio.h>
 
int main() {
 
    //Declaração de variáveis
    int number, wh;
    float sh, salary;
    
    //Inputs
    scanf("%d %d %fl", &number, &wh, &sh);
    
    //calculo salario
    salary = wh * sh;
    
    //Outputs
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
 
    return 0;
}

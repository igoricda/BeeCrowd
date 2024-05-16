// 1009
// Igor C D de Almeida
// 25/08/23

#include <stdio.h>
 
int main() {
 
    //Declaração de variáveis
    char sname[100];
    double fixdsal, soldby;
    double finsal;
    
    //Inputs
    scanf("%99[^\n]", sname);
    scanf("%lf", &fixdsal);
    scanf("%lf", &soldby);

    //Calculos
    finsal = ((fixdsal + (soldby * 0.15)) );

    //Outputs
    printf("TOTAL = R$ %.2lf\n", finsal);
    
 
    return 0;
}   

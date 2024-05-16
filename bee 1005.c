// 1005
// Igor C D de Almeida
// 25/08/23


#include <stdio.h>
 
int main() {
    
    //Declaração de variáveis
    double A, B;
    float avg;
    
    //Leitura de entradas
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    //Calculo média
    avg = (((A * 3.5) + (B * 7.5)) / 11);
    
    //Outputs
    printf("MEDIA = %.5lf\n", avg);
 

    return 0;
}

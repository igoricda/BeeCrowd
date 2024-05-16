
// Igor C D de Almeida
// 25/08/23


#include <stdio.h>
 
int main() {
    
    //Declaração de variáveis
    double A, B, C;
    float avg;
    
    //Leitura de entradas
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    //Calculo média
    avg = (((A * 2) + (B * 3) + (C * 5)) / 10);
    
    //Outputs
    printf("MEDIA = %.1lf\n", avg);
 

    return 0;
}

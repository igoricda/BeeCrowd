#include <stdio.h>
 
int main() {
 
    // DecVariav
    int c1, c2, u1, u2;
    float p1, p2;
    double pay;
    
    //input
    scanf("%d %d %f", &c1, &u1, &p1);
    scanf("%d %d %f", &c2, &u2, &p2);
    
    //calc
    pay = ((p1 * u1) + (u2 * p2));
    
    //output
    printf("VALOR A PAGAR: R$ %.2lf\n", pay);
    
 
    return 0;
}

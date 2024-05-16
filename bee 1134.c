#include <stdio.h>
#include <math.h>

int main()
{
  int alc = 0, gas = 0, dies = 0, escolha = 0;

  while(scanf("%d", &escolha) && escolha != 4){
    if(escolha == 1){
      alc++;
    }
    else if(escolha == 2){
      gas++;
    }
    else if(escolha == 3){
      dies++;
    }
  }
  printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, dies);
  
 return 0;
}

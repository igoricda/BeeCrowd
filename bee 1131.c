#include <stdio.h>


int main()
{
  int golg = 0, goli = 0, vi = 0, vg = 0, emp = 0, jogos = 1, ng = 0;

  while(1){
    scanf("%d %d", &goli, &golg);
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &ng);

    // contador vitorias
    if(goli > golg){
      vi+=1;
    }
    else if(golg > goli){
      vg+=1;}
    else{
      emp++;
    }

    //zerar as variaveis
    goli = 0;
    golg = 0;

    //nova leitura
    if(ng == 2){
      break;}
    else if(ng == 1){
      jogos++;}
  }

  printf("%d grenais\n", jogos);
  printf("Inter:%d\n", vi);
  printf("Gremio:%d\n", vg);
  printf("Empates:%d\n", emp);

  if(vi > vg){
    printf("Inter venceu mais\n");
  }
  else if(vg > vi){
    printf("Gremio venceu mais\n");
  }
  else{
    printf("Nao houve vencedor\n");
  }
  
  
 return 0;
}

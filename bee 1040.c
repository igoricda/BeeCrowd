#include <stdio.h>
#include <math.h>

int main(void) {

  //Declaração de variáveis
  double n1, n2, n3, n4, media, nexame, mediafinal;

  //inputs
  scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

  //CalculoMedia
  media = (((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10);

  printf("Media: %.1lf\n", media);
  
  //estruturas de decisão
  if(media <= 4.9){
    printf("Aluno reprovado.\n");
  }
  else
    if(media >= 7.0)
      printf("Aluno aprovado.\n");
    else {
      printf("Aluno em exame.\n");
      scanf("%lf", &nexame);
      printf("Nota do exame: %.1lf\n", nexame);
      mediafinal = ((media + nexame) / 2);
      
        if(mediafinal >= 5.0)
          printf("Aluno aprovado.\nMedia final: %.1lf\n", mediafinal);
        else
          printf("Aluno reprovado.\n Media final: %.1lf\n", mediafinal);
      }

  return 0;
}

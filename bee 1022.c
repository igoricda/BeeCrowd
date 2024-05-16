#include <math.h>
#include <stdio.h>
#include <string.h>

int mdc(int a, int b){
  int r = 0;

  while(b != 0){
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}
typedef struct{
  int num;
  int den;
} racional;

racional operacao(racional a, racional b, char op){
  racional r;
  if(op == '+'){
    r.num = (a.num * b.den) + (b.num * a.den);
    r.den = (a.den * b.den);
  }
  else if(op == '-'){
    r.num = (a.num * b.den) - (b.num * a.den);
    r.den = (a.den * b.den);
  }
  else if(op == '*'){
    r.num = (a.num * b.num);
    r.den = a.den * b.den;
  }
  else if(op == '/'){
    r.num = a.num * b.den;
    r.den = a.den * b.num;
}
  return r;
}

int main() {
  racional a, b, r;
  int n, mdc1;
  char op;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d / %d %c %d / %d", &a.num, &a.den, &op, &b.num, &b.den);
    r = operacao(a, b, op);
    mdc1 = mdc(r.num, r.den);
    
    printf("%d/%d = ", r.num, r.den);
    if(mdc1 < 0){
      r.num *= -1;
      r.den *= -1;
    }
    printf("%d/%d\n", (r.num / mdc1), (r.den / mdc1));
  }

  return 0;
}


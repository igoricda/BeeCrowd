#include <stdio.h>

int main(){
  int a, b, n, result;
  char c;

  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d%c%d", &a, &c, &b);
    getchar();
    if(a == b)
      result = a*b;
    else if(c >= 65 && c <= 90)
      result = b - a;
    else if(c >= 97 && c <= 122)
      result = a + b;
    printf("%d\n", result);
  }
return 0;
}

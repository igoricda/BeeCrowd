#include <stdio.h>
#include <string.h>
#include <math.h>

char *hexa = "0123456789abcdef";
char num[32], tip[4]; 

unsigned long long int bin2dec(char s[], int l){
  int len = strlen(s);
  unsigned long long int bits = s[len - l] - 48;
  if(l == 0){
    return 0;
  }
  else{
    return (pow(2, l-  1) * bits) +(bin2dec(s, l - 1)); 
  }
}

void dec2bin(unsigned long long int a){
  if(a == 0)
    return;
  else{
    dec2bin(a / 2);
    printf("%llu", a % 2);
  }
}
void dec2hex(unsigned long long int  a){ 
  if(a == 0)
    return;
  else{
    dec2hex(a / 16);
    printf("%c", hexa[a % 16]);
  
  }
}
unsigned long long int hex2dec(char s[], int l){
  int len = strlen(s);
  int bits;
  for(int i = 0; i < 16; i++){
    if(s[len - l] == hexa[i])
      bits = i;
  }    
  if(l == 0){
    return 0;
  }
  else{
    return (pow(16, l -  1) * bits) +(hex2dec(s, l - 1)); 
  }
}

void bin2hex(char s[], int l){
  dec2hex(bin2dec(s, l));
}

void hex2bin(char s[], int l){
  dec2bin(hex2dec(s, l));
}
unsigned long long int string2int(char s[], int l, int prim){
  int len = strlen(s);
  if(l == 0){
    return 0;
  }
  else{
    return ((s[l - 1] - 48) * pow(10, prim)) + string2int(s, l - 1, prim+1);
  }
}

int main ()
  { 
  int c = 0, n;
  char s[32], tipo[4];
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%s %s", s, tipo);
    getchar();
    c++;
    printf("Case %d:\n", c);
    if(strcmp(tipo, "hex") == 0){
      printf("%llu", hex2dec(s, strlen(s)));
      printf(" dec\n");
      hex2bin(s, strlen(s));
      printf(" bin\n\n");
    }
    if(strcmp(tipo, "bin") == 0){
      printf("%llu", bin2dec(s, strlen(s)));
      printf(" dec\n");
      bin2hex(s, strlen(s));
      printf(" hex\n\n");
    }
    if(strcmp(tipo, "dec") == 0){
      dec2hex(string2int(s, strlen(s), 0));
      printf(" hex\n");
      dec2bin(string2int(s, strlen(s), 0));
      printf(" bin\n\n");
    }
  }

return 0;   
}

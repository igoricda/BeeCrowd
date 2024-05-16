#include <stdio.h>
#include <math.h>

#define g 9.80665
#define pi 3.14159

double lancoblq(double h, double ang, double v){
  double vx, vy, ts, H, vfy, td, tt, d;

  ang = ang * pi / 180;
  vx = v * cos(ang);
  vy = v * sin(ang);

  ts = vy / g;
  H = (vy*vy) / (2*g) + h;
  vfy = sqrt(2*g*H);
  td = vfy / g;
  tt = ts + td;
  d = vx * tt;

  return d;
}


int main(){

  int casos, p1, p2;
  double h, ang, v;

  while(scanf("%lf", &h) != EOF){

    scanf("%d %d", &p1, &p2);
    scanf("%d", &casos);

    for(int i = 0; i < casos; i++){
      scanf("%lf %lf", &ang, &v);



      printf("%.5lf -> ", lancoblq(h, ang, v));
      if(lancoblq(h, ang, v) > p1 && lancoblq(h, ang, v) < p2){
          printf("DUCK\n");
        }
      else{
        printf("NUCK\n");
      }
    }
  }

  return 0;
}


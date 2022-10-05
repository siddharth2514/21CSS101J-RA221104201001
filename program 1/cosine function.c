#include <math.h>
#include <stdio.h>
#define PI 3.1416
#define max 180
main() {
  int angle;
  float x,y;
  angle=0;
  printf(" angle  Cos(angle)\n");
  while(angle<=max)
  {
    x=(PI/max)*angle;
    y=cos(x);
    printf("%d %f\n", angle, y);
    angle=angle+10;
  }
}

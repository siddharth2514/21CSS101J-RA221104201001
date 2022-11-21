#include <stdio.h>
main(){
  float a,u,t,d;
  printf("Enter the acceleration value : ",a);
  scanf("%f",&a);
  printf("Enter the initial velocity : ",u);
  scanf("%f",&u);
  printf("Enter the time taken : ",t);
  scanf("%f",&t);
  d=(u*t)+(0.5*a*t*t);
  printf("Distance travelled : %f\n", d);
}

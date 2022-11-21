#include <stdio.h>
main(){
  float amouny,rate,SI;
  int months;
  printf("Provide amount and interest in the format $amount rate%% : ");
  scanf("$%f %f%%",&amount,&rate);
  printf("Enter the period in months : ");
  scanf("%d", &months);
  SI=(amount*rate*months)/100;
  printf("Simple Interest : %f\n", SI);
  
  

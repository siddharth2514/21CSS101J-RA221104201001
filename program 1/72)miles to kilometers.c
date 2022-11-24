#include <stdio.h>
main()
{
  float miles , kilometers;  
  printf("enter distance in miles = ");
  scanf("%f" ,&miles);
  kilometers = miles * 1.609;
  print("%.2f Miles are equal to %.2f kilometer" , miles ,kilometers); 
}

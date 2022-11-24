#include <stdio.h>
main()
{
  int meters; 
  float feet; 
  pritf("enter the value for meters = ");
  scanf("%d" , &meters);
  feet = meters * 3.28084;  
  printf("%d meters are equal to %.2f feet" , meters , feet); 
}

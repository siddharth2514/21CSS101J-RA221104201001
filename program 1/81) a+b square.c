#include <stdio.h>
main()
{
  
  float a,b,square;

 
  printf("Enter a and b for (a+b)^2");
  scanf("%f%f",&a,&b);

 
 
  square= (a*a) + (b*b) + (2*a*b) ;
  printf("Square %f",square);

}

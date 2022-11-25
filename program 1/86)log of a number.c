#include <stdio.h>
#include <math.h>
main()
    
{   int number;
    printf("Enter number");
  scanf("%d",&number);
    double result;

    result = log(number);
    printf("log(%d) = %lf", number, result);
}

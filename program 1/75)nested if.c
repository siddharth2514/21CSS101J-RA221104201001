#include <stdio.h>
main()
{
  int number;
  printf("enter number : ");
  scanf("%d", &number);
  if (number >= 0)
  {
    printf("the number is positive\n");
    if (number % 2 == 0)
    {
      printf("the number is even\n");
    }
    else
    {
      printf("the number is odd\n");
    }
  }
  else 
  {
    printf("the number is negative\n");
    if (number % 2 == 0)
    {
      printf("the number is even\n");
    }
    else
    {
      printf("the number is odd\n");
             }
  }
}

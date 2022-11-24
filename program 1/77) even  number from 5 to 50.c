#include<stdio.h>
main()
{
  for (int number = 5; number < 50; number ++) 
  {
    if (number % 2 != 0)
    {
      continue;
    }
    printf("%d\n",number);
  }
}

#include<stdio.h>
main()
{
  int x = 1;
  switch(x)
  {
    case 1 :
    case 2 :
      printf("1 and 2\n");   
      break;
    case 3:
    case 4:
      printf("3 and 4\n");
      break;
    default: printf("wrong choice !\n");
      break;
  }
}

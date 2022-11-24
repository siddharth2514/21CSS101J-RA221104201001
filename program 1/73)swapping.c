#include<stdio.h>
#include<conio.h>
main()
{
  int x = 10 , y = 15;
  x = x + y - (y = x);
  printf("x = %d and y = %d" , x,y);
  gtech();
}

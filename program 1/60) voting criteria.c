#include<stdio.h>
main()
{
  int age;
  printf("enter age : ");
  scanf("%d",&age);
  if (age > 18 ) 
  {
    printf("The person is adult\n");
  printf("The person is eligible to vote \n");
  }
  else 
  {
    printf("The person is not an adult \n");
    printf("the person is not eligible to vote \n");
  }
  }

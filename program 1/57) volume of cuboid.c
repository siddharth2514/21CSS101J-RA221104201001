#include <stdio.h>
main()
{
  int length , breadth , height;
  printf("enter length of cuboid : ");
  scanf("%d",&length);
  printf("enter breadth of cuboid : ");
  scanf("%d" ,&breadth);
  printf("enter height of cuboid : "); 
  scanf("%d",&height);
  int volume = length * breadth * height;
  printf("volume of cuboid is %d",volume);
}

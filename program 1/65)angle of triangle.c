#include <stdio.h>
main()  
{  
  int ang1, ang2, ang3; 
  ang1 = 50, ang2 = 70; 
 printf("Input two angles of triangle separated by comma : ");  
 scanf("%d, %d", &ang1, &ang2);  
 ang3 = 180 - (ang1 + ang2);  
 printf("Third angle of the triangle :  %d\n", ang3);    
}  

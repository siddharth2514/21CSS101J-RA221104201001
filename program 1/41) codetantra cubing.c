#include <stdio.h>
#define CUBE(y) y*y*y
main(){
  int n;
  printf("n : ");
  scanf("%d", &n);
  printf("Cube of %d = %d\n",n,CUBE(n));
}  

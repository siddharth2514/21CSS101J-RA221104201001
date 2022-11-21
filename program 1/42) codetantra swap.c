#include <stdio.h>
#define SWAP(a,b,temp) temp=a,a=b,b=temp
main(){
  int x=10,y=20,temo=0;
  SWAP(x,y,temp);
  printf("x=%d,y=%d\n",x,y);
}  
